/**
 *  Sphere: the JavaScript game platform
 *  Copyright (c) 2015-2024, Fat Cerberus
 *  All rights reserved.
 *
 *  Redistribution and use in source and binary forms, with or without
 *  modification, are permitted provided that the following conditions are met:
 *
 *  * Redistributions of source code must retain the above copyright notice,
 *    this list of conditions and the following disclaimer.
 *
 *  * Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 *
 *  * Neither the name of Spherical nor the names of its contributors may be
 *    used to endorse or promote products derived from this software without
 *    specific prior written permission.
 *
 *  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 *  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 *  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 *  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
 *  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 *  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 *  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 *  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 *  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 *  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 *  POSSIBILITY OF SUCH DAMAGE.
**/

// IMPORTANT!
// due to Allegro's architecture, this is far from a perfect abstraction.  once a screen
// object has been constructed, treat it as a singleton: creating multiple screen objects is
// undefined behavior and will probably blow up in your face. :o)

#include "neosphere.h"
#include "screen.h"

#include "debugger.h"
#include "font.h"
#include "image.h"

struct screen
{
	image_t*         backbuffer;
	rect_t           clip_rect;
	int				 monitor;
	ALLEGRO_DISPLAY* display;
	ttf_t*           font;
	int              fps_flips;
	int              fps_frames;
	double           fps_poll_time;
	bool             fullscreen;
	double           last_flip_time;
	int              max_skips;
	char             message[256];
	double           next_frame_time;
	double           notify_alpha;
	double           notify_timer;
	int              num_flips;
	int              num_frames;
	int              num_skips;
	bool             show_fps;
	bool             skipping_frame;
	bool             take_screenshot;
	int              x_offset;
	float            x_scale;
	int              x_size;
	int              y_offset;
	float            y_scale;
	int              y_size;
};

static void refresh_display (screen_t* screen);

screen_t*
screen_new(const char* title, image_t* icon, size2_t resolution, int frameskip, ttf_t* font, bool use_ogl_3_1)
{
	image_t*             backbuffer = NULL;
	int                  bitmap_flags;
	ALLEGRO_DISPLAY*     display = NULL;
	ALLEGRO_BITMAP*      icon_bitmap;
	ALLEGRO_MONITOR_INFO desktop_info;
	ALLEGRO_STATE        old_state;
	screen_t*            screen;
	int                  x_scale = 1;
	int                  y_scale = 1;
	int					 monitor = get_main_monitor();

	if (!(screen = calloc(1, sizeof(screen_t)))) {
		fprintf(stderr, "FATAL: couldn't allocate memory for screen_t");
		goto on_error;
	}

	console_log(1, "initializing render context at %dx%d", resolution.width, resolution.height);

	al_set_new_window_title(title);
	al_set_new_display_flags(ALLEGRO_OPENGL | ALLEGRO_PROGRAMMABLE_PIPELINE);
	if (al_get_monitor_info(monitor, &desktop_info)) {
		x_scale = ((desktop_info.x2 - desktop_info.x1) * 2 / 3) / resolution.width;
		y_scale = ((desktop_info.y2 - desktop_info.y1) * 2 / 3) / resolution.height;
		x_scale = y_scale = fmax(fmin(x_scale, y_scale), 1.0);
	}

	if (use_ogl_3_1)
	{
		al_set_new_display_option(ALLEGRO_OPENGL_MAJOR_VERSION, 3, ALLEGRO_REQUIRE);
		al_set_new_display_option(ALLEGRO_OPENGL_MINOR_VERSION, 1, ALLEGRO_REQUIRE);
	}

	display = al_create_display(resolution.width * x_scale, resolution.height * y_scale);

	// using a custom backbuffer allows pixel-perfect rendering regardless of
	// actual viewport size.
	if (display != NULL) {
		// no alpha channel.  this sidesteps a few edge cases involving alpha blending
		// and the screen-grab functions.
		al_store_state(&old_state, ALLEGRO_STATE_NEW_BITMAP_PARAMETERS);
		al_set_new_bitmap_format(ALLEGRO_PIXEL_FORMAT_ANY_24_NO_ALPHA);
		backbuffer = image_new_ms(resolution.width, resolution.height, NULL, 8);
		al_restore_state(&old_state);
	}
	if (backbuffer == NULL) {
		fprintf(stderr, "FATAL: couldn't initialize render context");
		goto on_error;
	}

	if (icon != NULL) {
		bitmap_flags = al_get_new_bitmap_flags() | ALLEGRO_NO_PRESERVE_TEXTURE;
		al_set_new_bitmap_flags(
			ALLEGRO_NO_PREMULTIPLIED_ALPHA | ALLEGRO_MIN_LINEAR | ALLEGRO_MAG_LINEAR
			| bitmap_flags);
		icon = image_dup(icon);
		icon_bitmap = image_bitmap(icon);
		al_set_new_bitmap_flags(bitmap_flags);
		al_set_display_icon(display, icon_bitmap);
	}

	screen->monitor = monitor;
	screen->display = display;
	screen->backbuffer = backbuffer;
	screen->font = font;
	screen->x_size = resolution.width;
	screen->y_size = resolution.height;
	screen->max_skips = frameskip;

	screen->fps_poll_time = al_get_time() + 1.0;
	screen->next_frame_time = al_get_time();
	screen->last_flip_time = screen->next_frame_time;

#ifdef NEOSPHERE_SPHERUN
	screen->show_fps = true;
#endif

	refresh_display(screen);
	return screen;

on_error:
	image_unref(backbuffer);
	if (display != NULL)
		al_destroy_display(display);
	free(screen);
	return NULL;
}

void
screen_free(screen_t* it)
{
	if (it == NULL)
		return;

	console_log(1, "shutting down render context");

	// Destroying the backbuffer could result in display destruction getting stuck, skip for now
	//image_unref(it->backbuffer);

	al_destroy_display(it->display);
	free(it);
}

image_t*
screen_backbuffer(const screen_t* it)
{
	return it->backbuffer;
}

rect_t
screen_bounds(const screen_t* it)
{
	return mk_rect(0, 0, it->x_size, it->y_size);
}

int
screen_get_monitor(const screen_t* it)
{
	return it->monitor;
}

ALLEGRO_DISPLAY*
screen_display(const screen_t* it)
{
	return it->display;
}

size2_t
screen_size(const screen_t* it)
{
	return mk_size2(it->x_size, it->y_size);
}

bool
screen_skipping_frame(const screen_t* it)
{
	return it->skipping_frame;
}

int
screen_get_frameskip(const screen_t* it)
{
	return it->max_skips;
}

bool
screen_get_fullscreen(const screen_t* it)
{
	return it->fullscreen;
}

void
screen_get_mouse_xy(const screen_t* it, int* o_x, int* o_y)
{
	ALLEGRO_MOUSE_STATE mouse_state;

	al_get_mouse_state(&mouse_state);
	*o_x = (mouse_state.x - it->x_offset) / it->x_scale;
	*o_y = (mouse_state.y - it->y_offset) / it->y_scale;
}

void
screen_set_frameskip(screen_t* it, int max_skips)
{
	it->max_skips = max_skips;
}

void
screen_set_fullscreen(screen_t* it, bool fullscreen)
{
#ifdef _DEBUG
	// in a debug build, disallow fullscreen.  Allegro sets the always-on-top
	// flag in fullscreen mode which interferes with debugging.
	fullscreen = false;
#endif

	if (debugger_attached())
		fullscreen = false;
	it->fullscreen = fullscreen;
	refresh_display(it);
}

void
screen_set_mouse_xy(screen_t* it, int x, int y)
{
	x = x * it->x_scale + it->x_offset;
	y = y * it->y_scale + it->y_offset;
	al_set_mouse_xy(it->display, x, y);
}

void
screen_draw_status(screen_t* it, const char* text, color_t color)
{
	rect_t            bounds;
	ALLEGRO_BITMAP*   old_target;
	int               screen_cx;
	int               screen_cy;
	int               width;
	int               height;

	if (it->font == NULL)
		return;

	screen_cx = al_get_display_width(it->display);
	screen_cy = al_get_display_height(it->display);
	width = ttf_get_width(it->font, text) + 20;
	height = ttf_height(it->font) + 10;
	bounds.x1 = 8 + it->x_offset;
	bounds.y1 = screen_cy - it->y_offset - height - 8;
	bounds.x2 = bounds.x1 + width;
	bounds.y2 = bounds.y1 + height;
	old_target = al_get_target_bitmap();
	al_set_target_backbuffer(it->display);
	al_draw_filled_rounded_rectangle(bounds.x1, bounds.y1, bounds.x2, bounds.y2, 4, 4,
		al_map_rgba(16, 16, 16, 192));
	ttf_draw_text(it->font, ((bounds.x1 + bounds.x2) - ttf_get_width(it->font, text)) / 2.0f, bounds.y1 + 6, text, mk_color(0, 0, 0, 255));
	ttf_draw_text(it->font, ((bounds.x2 + bounds.x1) - ttf_get_width(it->font, text)) / 2.0f, bounds.y1 + 5, text, color);
	al_set_target_bitmap(old_target);
}

void
screen_fix_mouse_xy(const screen_t* it, int *inout_x, int *inout_y)
{
	*inout_x = (*inout_x - it->x_offset) / it->x_scale;
	*inout_y = (*inout_y - it->y_offset) / it->y_scale;
}

void
screen_flip(screen_t* it, int framerate, bool need_clear)
{
	time_t            datetime;
	char*             filename;
	char              fps_text[20];
	const char*       game_filename;
	const path_t*     game_root;
	bool              is_backbuffer_valid;
	ALLEGRO_STATE     old_state;
	ALLEGRO_BITMAP*   old_target;
	path_t*           path;
	const char*       pathname;
	rect_t            scissor;
	int               screen_cx;
	int               screen_cy;
	int               serial = 1;
	ALLEGRO_BITMAP*   snapshot;
	char              timestamp[100];
	int               width;
	int               x, y;
#if defined(NEOSPHERE_SPHERUN)
	double            start_time;
#endif

#if defined(NEOSPHERE_SPHERUN)
	start_time = al_get_time();
#endif

	// update FPS with 1s granularity
	if (al_get_time() >= it->fps_poll_time) {
		it->fps_flips = it->num_flips;
		it->fps_frames = it->num_frames;
		it->num_frames = it->num_flips = 0;
		it->fps_poll_time = al_get_time() + 1.0;
	}

	// flip the backbuffer, unless the preceeding frame was skipped
	is_backbuffer_valid = !it->skipping_frame;
	screen_cx = al_get_display_width(it->display);
	screen_cy = al_get_display_height(it->display);
	if (it->notify_timer > 0.0) {
		it->notify_timer = fmax(it->notify_timer - 1.0 / framerate, 0.0);
		it->notify_alpha = fmin(it->notify_alpha + 2.0 / framerate, 1.0);
	}
	else {
		it->notify_alpha = fmax(it->notify_alpha - 0.5 / framerate, 0.0);
	}
	if (is_backbuffer_valid) {
		if (it->take_screenshot) {
			al_store_state(&old_state, ALLEGRO_STATE_NEW_BITMAP_PARAMETERS);
			al_set_new_bitmap_format(ALLEGRO_PIXEL_FORMAT_ANY_24_NO_ALPHA);
			snapshot = al_clone_bitmap(image_bitmap(it->backbuffer));
			al_restore_state(&old_state);
			game_root = game_path(g_game);
			game_filename = path_is_file(game_root)
				? path_filename(game_root)
				: path_hop(game_root, path_num_hops(game_root) - 1);
			path = path_rebase(path_new("Sphere Saves/"), home_path());
			path_mkdir(path);
			time(&datetime);
			strftime(timestamp, 100, "%Y%m%d", localtime(&datetime));
			do {
				filename = strnewf("%s-%s-%d.png", game_filename, timestamp, serial++);
				path_strip(path);
				sprintf(it->message, "screenshot saved in '%s'", path_cstr(path));
				path_append(path, filename);
				pathname = path_cstr(path);
				free(filename);
			} while (al_filename_exists(pathname));
			al_save_bitmap(pathname, snapshot);
			al_destroy_bitmap(snapshot);
			path_free(path);
			it->notify_timer = 5.0;
			it->take_screenshot = false;
		}
		old_target = al_get_target_bitmap();
		al_set_target_backbuffer(it->display);
		al_clear_to_color(al_map_rgba(0, 0, 0, 255));
		al_draw_scaled_bitmap(image_bitmap(it->backbuffer), 0, 0, it->x_size, it->y_size,
			it->x_offset, it->y_offset, it->x_size * it->x_scale, it->y_size * it->y_scale,
			0x0);
		if (debugger_attached())
			screen_draw_status(it, debugger_name(), debugger_color());
		if (it->notify_alpha > 0.0 && it->font != NULL) {
			width = ttf_get_width(it->font, it->message) + 20;
			x = (screen_cx - width) / 2;
			y = screen_cy - it->y_offset - 32;
			al_draw_filled_rounded_rectangle(x, y, x + width, y + 24, 4, 4, al_map_rgba(16, 16, 16, 192 * it->notify_alpha));
			ttf_draw_text(it->font, x + 11, y + 7, it->message, mk_color(0, 0, 0, 255 * it->notify_alpha));
			ttf_draw_text(it->font, x + 10, y + 6, it->message, mk_color(192, 192, 192, 255 * it->notify_alpha));
		}
		if (it->show_fps && it->font != NULL) {
			if (framerate > 0)
				sprintf(fps_text, "%d/%d fps", it->fps_flips, it->fps_frames);
			else
				sprintf(fps_text, "%d fps", it->fps_flips);
			x = screen_cx - it->x_offset - 108;
			y = screen_cy - it->y_offset - 24;
			al_draw_filled_rounded_rectangle(x, y, x + 100, y + 16, 4, 4, al_map_rgba(16, 16, 16, 192));
			ttf_draw_text(it->font, x + 51 - ttf_get_width(it->font, fps_text) / 2.0f, y + 2, fps_text, mk_color(0, 0, 0, 255));
			ttf_draw_text(it->font, x + 50 - ttf_get_width(it->font, fps_text) / 2.0f, y + 1, fps_text, mk_color(255, 255, 255, 255));
		}
		al_set_target_bitmap(old_target);
		al_flip_display();
		it->last_flip_time = al_get_time();
		it->num_skips = 0;
		++it->num_flips;
	}
	else {
		++it->num_skips;
	}

	// if framerate is nonzero and we're backed up on frames, skip frames until we
	// catch up. there is a cap on consecutive frameskips to avoid the situation where
	// the engine "can't catch up" (due to a slow machine, overloaded CPU, etc.). better
	// that we lag instead of never rendering anything at all.
	if (framerate > 0) {
		it->skipping_frame = it->last_flip_time > it->next_frame_time && it->num_skips < it->max_skips;
		sphere_sleep(it->next_frame_time - al_get_time());
		if (it->num_skips >= it->max_skips)  // did we skip too many frames?
			it->next_frame_time = al_get_time() + 1.0 / framerate;
		else
			it->next_frame_time += 1.0 / framerate;
	}
	else {
		it->skipping_frame = false;
		it->next_frame_time = al_get_time();
	}
	++it->num_frames;
	if (!it->skipping_frame && need_clear) {
		// disable clipping so we can clear the whole backbuffer.
		scissor = image_get_scissor(it->backbuffer);
		image_set_scissor(it->backbuffer, mk_rect(0, 0, it->x_size, it->y_size));
		image_render_to(it->backbuffer, NULL);
		al_clear_to_color(al_map_rgba(0, 0, 0, 255));
		al_clear_depth_buffer(1.0f);
		image_set_scissor(it->backbuffer, scissor);
	}

#if defined(NEOSPHERE_SPHERUN)
	g_idle_time += al_get_time() - start_time;
#endif
}

image_t*
screen_grab(screen_t* it, int x, int y, int width, int height)
{
	image_t* image;

	if (!(image = image_new(width, height, NULL)))
		goto on_error;
	image_render_to(image, NULL);
	al_draw_bitmap_region(image_bitmap(it->backbuffer), x, y, width, height, 0, 0, 0x0);
	return image;

on_error:
	image_unref(image);
	return NULL;
}

void
screen_queue_screenshot(screen_t* it)
{
	it->take_screenshot = true;
}

void
screen_resize(screen_t* it, int x_size, int y_size)
{
	image_t* new_backbuffer = NULL;

	it->x_size = x_size;
	it->y_size = y_size;
	image_resize(it->backbuffer, x_size, y_size);

	refresh_display(it);
}

void
screen_show_mouse(screen_t* it, bool visible)
{
	if (visible)
		al_show_mouse_cursor(it->display);
	else
		al_hide_mouse_cursor(it->display);
}

void
screen_toggle_fps(screen_t* it)
{
	it->show_fps = !it->show_fps;
}

void
screen_toggle_fullscreen(screen_t* it)
{
	screen_set_fullscreen(it, !it->fullscreen);
}

void
screen_unskip_frame(screen_t* it)
{
	it->skipping_frame = false;
	al_clear_to_color(al_map_rgba(0, 0, 0, 255));
}

static void
refresh_display(screen_t* screen)
{
	ALLEGRO_MONITOR_INFO desktop_info;
	int                  real_width;
	int                  real_height;

	// Clear screen to avoid showing garbage data
	screen_flip(screen, 0, true);

	al_set_display_flag(screen->display, ALLEGRO_FULLSCREEN_WINDOW, screen->fullscreen);
	if (al_get_monitor_info(get_current_monitor(screen), &desktop_info))
	{
		if (screen->fullscreen) {
			real_width = desktop_info.x2 - desktop_info.x1;
			real_height = desktop_info.y2 - desktop_info.y1;
			screen->x_scale = (float)real_width / screen->x_size;
			screen->y_scale = (float)real_height / screen->y_size;
			if (screen->x_scale > screen->y_scale) {
				screen->x_scale = screen->y_scale;
				screen->x_offset = (real_width - screen->x_size * screen->x_scale) / 2;
				screen->y_offset = 0;
			}
			else {
				screen->y_scale = screen->x_scale;
				screen->y_offset = (real_height - screen->y_size * screen->y_scale) / 2;
				screen->x_offset = 0;
			}
		}
		else {
			screen->x_scale = 1.0;
			screen->y_scale = 1.0;
			screen->x_offset = 0;
			screen->y_offset = 0;
			screen->x_scale = trunc(((desktop_info.x2 - desktop_info.x1) * 2 / 3) / screen->x_size);
			screen->y_scale = trunc(((desktop_info.y2 - desktop_info.y1) * 2 / 3) / screen->y_size);
			screen->x_scale = screen->y_scale = fmax(fmin(screen->x_scale, screen->y_scale), 1.0);

			// Recenter the window.
			al_resize_display(screen->display, screen->x_size * screen->x_scale, screen->y_size * screen->y_scale);
			al_set_window_position(screen->display,
				(desktop_info.x1 + desktop_info.x2) / 2 - screen->x_size * screen->x_scale / 2,
				(desktop_info.y1 + desktop_info.y2) / 2 - screen->y_size * screen->y_scale / 2);
		}
	}
	image_render_to(screen->backbuffer, NULL);

	// Clear screen to avoid showing garbage data
	screen_flip(screen, 0, true);
}

int
get_main_monitor()
{
	ALLEGRO_MONITOR_INFO info;
	int result = 0;

	for (int i = 0; i < al_get_num_video_adapters(); i++)
	{
		if (!al_get_monitor_info(i, &info))
			continue;
		if (info.x1 == 0 && info.y1 == 0)
		{
			result = i;
			break;
		}
	}
	return result;
}

int
get_current_monitor(screen_t* it)
{
	ALLEGRO_MONITOR_INFO info;
	int x;
	int y;
	int result = 0;

	al_get_window_position(it->display, &x, &y);
	x += al_get_display_width(it->display) / 2;

	for (int i = 0; i < al_get_num_video_adapters(); i++)
	{
		if (!al_get_monitor_info(i, &info))
			continue;
		if (info.x1 <= x && info.x2 > x && info.y1 <= y && info.y2 > y)
		{
			result = i;
			break;
		}
	}
	return result;
}
