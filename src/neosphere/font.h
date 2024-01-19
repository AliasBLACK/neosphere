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

#ifndef SPHERE__FONT_H__INCLUDED
#define SPHERE__FONT_H__INCLUDED

#include "color.h"
#include "image.h"

typedef struct ttf      ttf_t;
typedef struct wraptext wraptext_t;

ttf_t*      ttf_open          (const char* path, int size, bool kerning, bool antialiasing);
ttf_t*      ttf_ref           (ttf_t* it);
void        ttf_unref         (ttf_t* it);
int         ttf_height        (const ttf_t* it);
const char* ttf_path          (const ttf_t* it);
void        ttf_draw_text     (const ttf_t* it, float x, float y, const char* text, color_t color);
int         ttf_get_width     (const ttf_t* it, const char* text);
wraptext_t* ttf_wrap          (const ttf_t* it, const char* text, int width);

wraptext_t* wraptext_new      (size_t pitch);
void        wraptext_free     (wraptext_t* it);
int         wraptext_len      (const wraptext_t* it);
const char* wraptext_line     (const wraptext_t* it, int line_index);
bool        wraptext_add_line (wraptext_t* it, const char* text, size_t length);

#endif // SPHERE__FONT_H__INCLUDED
