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
#include "ime.h"

#include "jsal.h"

#if defined(_WIN32)
#include <allegro5/allegro_windows.h>
#include <imm.h>

static bool ime_window_callback(ALLEGRO_DISPLAY* display, UINT message, WPARAM wparam, LPARAM lparam, LRESULT* result, void* userdata);

static ALLEGRO_DISPLAY* s_display = NULL;
static js_ref_t* s_ime_setcontext_callback = NULL;
static bool      s_callback_installed = false;
static bool      s_pending_event = false;
static bool      s_pending_active = false;
static bool      s_last_ime_active = false;

static bool
ime_window_callback(ALLEGRO_DISPLAY* display, UINT message, WPARAM wparam, LPARAM lparam, LRESULT* result, void* userdata)
{
	HWND hwnd;
	HIMC himc;
	DWORD conversion_mode = 0;
	DWORD sentence_mode = 0;
	bool is_open;
	bool is_native;

	(void)lparam;
	(void)result;
	(void)userdata;

	if (message == WM_INPUTLANGCHANGE || (message == WM_IME_NOTIFY && wparam == IMN_SETCONVERSIONMODE)) {
		hwnd = al_get_win_window_handle(display);
		himc = ImmGetContext(hwnd);
		if (himc != NULL) {
			is_open = ImmGetOpenStatus(himc);
			ImmGetConversionStatus(himc, &conversion_mode, &sentence_mode);
			is_native = (conversion_mode & IME_CMODE_NATIVE) != 0;
			ImmReleaseContext(hwnd, himc);
			s_pending_active = is_open && is_native;
		}
		else {
			s_pending_active = false;
		}
		s_pending_event = true;
	}
	return false;
}

void
ime_update(void)
{
	bool active;

	if (!s_pending_event)
		return;

	s_pending_event = false;
	active = s_pending_active;

	if (active == s_last_ime_active)
		return;

	s_last_ime_active = active;

	if (s_ime_setcontext_callback == NULL)
		return;

	jsal_push_ref_weak(s_ime_setcontext_callback);
	jsal_push_boolean(active);
	if (!jsal_try_call(1)) {
		jsal_pop(1);
	}
	else {
		jsal_pop(1);
	}
}

void
ime_init(void)
{
	console_log(1, "initializing IME subsystem");
	s_ime_setcontext_callback = NULL;
	s_callback_installed = false;
}

void
ime_uninit(void)
{
	console_log(1, "shutting down IME subsystem");
	if (s_ime_setcontext_callback != NULL) {
		jsal_unref(s_ime_setcontext_callback);
		s_ime_setcontext_callback = NULL;
	}
}

void
ime_install_callback(ALLEGRO_DISPLAY* display)
{
	if (!s_callback_installed && display != NULL) {
		console_log(1, "IME: installing window callback");
		s_display = display;
		if (al_win_add_window_callback(display, ime_window_callback, NULL)) {
			console_log(1, "IME: window callback installed successfully");
			s_callback_installed = true;
		}
		else {
			console_log(1, "IME: FAILED to install window callback");
		}
	}
}

void
ime_set_callback(js_ref_t* callback)
{
	if (s_ime_setcontext_callback != NULL)
		jsal_unref(s_ime_setcontext_callback);
	s_ime_setcontext_callback = callback;
}

js_ref_t*
ime_get_callback(void)
{
	return s_ime_setcontext_callback;
}

#else

void
ime_init(void)
{
	console_log(1, "initializing IME subsystem (no-op on this platform)");
}

void
ime_uninit(void)
{
	console_log(1, "shutting down IME subsystem (no-op on this platform)");
}

void
ime_update(void)
{
}

void
ime_install_callback(ALLEGRO_DISPLAY* display)
{
}

void
ime_set_callback(js_ref_t* callback)
{
	if (callback != NULL)
		jsal_unref(callback);
}

js_ref_t*
ime_get_callback(void)
{
	return NULL;
}

#endif
