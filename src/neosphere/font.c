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

#include "neosphere.h"
#include "font.h"

#include "color.h"
#include "image.h"
#include "unicode.h"

static bool do_multiline_text_line (int line_idx, const char* line, int size, void* userdata);

struct ttf
{
	unsigned int  refcount;
	unsigned int  id;
	int           height;
	char*         path;
	ALLEGRO_FONT* ttf_font;
};

struct wraptext
{
	char*  buffer;
	int    max_lines;
	int    num_lines;
	size_t pitch;
};

static unsigned int s_next_font_id = 1;
static unsigned int s_next_ttf_id = 1;

ttf_t*
ttf_open(const char* path, int size, bool kerning, bool antialiasing)
{
	size_t        file_size;
	int           flags = 0x0;
	struct ttf*   font;
	ALLEGRO_FILE* memfile = NULL;
	void*         slurp;
	
	if (!(font = calloc(1, sizeof(ttf_t))))
		goto on_error;
	if (!(slurp = game_read_file(g_game, path, &file_size)))
		goto on_error;
	memfile = al_open_memfile(slurp, file_size, "rb");
	if (!kerning)
		flags |= ALLEGRO_TTF_NO_KERNING;
	if (!antialiasing)
		flags |= ALLEGRO_TTF_MONOCHROME;
	if (!(font->ttf_font = al_load_ttf_font_f(memfile, NULL, size, flags)))
		goto on_error;
	font->height = al_get_font_line_height(font->ttf_font);

	font->id = s_next_ttf_id++;
	font->path = strdup(path);
	return ttf_ref(font);

on_error:
	free(font);
	return NULL;
}

ttf_t*
ttf_ref(ttf_t* it)
{
	++it->refcount;
	return it;
}

void
ttf_unref(ttf_t* it)
{
	if (it == NULL || --it->refcount > 0)
		return;

	console_log(3, "disposing TTF font #%u no longer in use", it->id);
	al_destroy_font(it->ttf_font);
	free(it);
}

int
ttf_height(const ttf_t* it)
{
	return it->height;
}

const char*
ttf_path(const ttf_t* it)
{
	return it->path;
}

void
ttf_draw_text(const ttf_t* it, float x, float y, const char* text, color_t color)
{
	al_draw_text(it->ttf_font, nativecolor(color), x, y, 0x0, text);
}

int
ttf_get_width(const ttf_t* it, const char* text)
{
	return al_get_text_width(it->ttf_font, text);
}

wraptext_t*
ttf_wrap(const ttf_t* it, const char* text, int width)
{
	wraptext_t* wraptext;
	
	if (!(wraptext = wraptext_new(256)))
		return NULL;
	al_do_multiline_text(it->ttf_font, width, text, do_multiline_text_line, wraptext);
	return wraptext;
}

wraptext_t*
wraptext_new(size_t pitch)
{
	char*       buffer;
	int         max_lines = 8;
	wraptext_t* wraptext;

	if (!(buffer = malloc(max_lines * pitch)))
		goto on_error;

	if (!(wraptext = calloc(1, sizeof(wraptext_t))))
		goto on_error;
	wraptext->buffer = buffer;
	wraptext->max_lines = max_lines;
	wraptext->pitch = pitch;
	return wraptext;

on_error:
	free(buffer);
	return NULL;
}

void
wraptext_free(wraptext_t* it)
{
	if (it == NULL)
		return;
	free(it->buffer);
	free(it);
}

int
wraptext_len(const wraptext_t* it)
{
	return it->num_lines;
}

const char*
wraptext_line(const wraptext_t* it, int line_index)
{
	return it->buffer + line_index * it->pitch;
}

bool
wraptext_add_line(wraptext_t* it, const char* text, size_t length)
{
	char*  new_buffer;
	int    new_max_lines;
	size_t new_pitch;
	
	char *p_out;
	int i;

	new_pitch = it->pitch;
	if (length + 1 > it->pitch)
		new_pitch = (length + 1) * 2;
	new_max_lines = it->max_lines;
	if (it->num_lines >= it->max_lines)
		new_max_lines = it->num_lines * 2;
	if (new_max_lines >= it->max_lines || new_pitch > it->pitch) {
		if (new_pitch > it->pitch) {
			if (!(new_buffer = malloc(new_max_lines * new_pitch)))
				goto on_error;
			for (i = 0; i < it->num_lines; ++i)
				memcpy(new_buffer + i * new_pitch, it->buffer + i * it->pitch, it->pitch);
			free(it->buffer);
		}
		else {
			if (!(new_buffer = realloc(it->buffer, new_max_lines * new_pitch)))
				goto on_error;
		}
		it->buffer = new_buffer;
		it->max_lines = new_max_lines;
		it->pitch = new_pitch;
	}
	p_out = it->buffer + it->num_lines++ * it->pitch;
	memcpy(p_out, text, length);
	p_out[length] = '\0';  // NUL terminator
	return true;

on_error:
	return false;
}

static bool
do_multiline_text_line(int line_idx, const char* line, int size, void* userdata)
{
	wraptext_t* wraptext;

	wraptext = userdata;
	wraptext_add_line(wraptext, line, size);
	return true;
}
