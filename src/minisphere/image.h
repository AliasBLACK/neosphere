/**
 *  miniSphere JavaScript game engine
 *  Copyright (c) 2015-2020, Fat Cerberus
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
 *  * Neither the name of miniSphere nor the names of its contributors may be
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

#ifndef SPHERE__IMAGE_H__INCLUDED
#define SPHERE__IMAGE_H__INCLUDED

#include "blend_op.h"
#include "geometry.h"
#include "transform.h"

typedef struct image image_t;

typedef
struct image_lock
{
	int       num_lines;
	color_t*  pixels;
	ptrdiff_t pitch;
} image_lock_t;

image_t*        image_new                (int width, int height, const color_t* pixels);
image_t*        image_new_slice          (image_t* parent, int x, int y, int width, int height);
image_t*        image_dup                (const image_t* it);
image_t*        image_load               (const char* filename);
image_t*        image_ref                (image_t* it);
void            image_unref              (image_t* it);
ALLEGRO_BITMAP* image_bitmap             (image_t* it);
int             image_height             (const image_t* it);
const char*     image_path               (const image_t* it);
int             image_width              (const image_t* it);
blend_op_t*     image_get_blend_op       (const image_t* it);
rect_t          image_get_scissor        (const image_t* it);
transform_t*    image_get_transform      (const image_t* it);
void            image_set_blend_op       (image_t* it, blend_op_t* op);
void            image_set_scissor        (image_t* it, rect_t value);
void            image_set_transform      (image_t* it, transform_t* transform);
bool            image_apply_color_fx     (image_t* it, color_fx_t matrix, int x, int y, int width, int height);
bool            image_apply_color_fx_4   (image_t* it, color_fx_t ul_mat, color_fx_t ur_mat, color_fx_t ll_mat, color_fx_t lr_mat, int x, int y, int width, int height);
bool            image_apply_lookup       (image_t* it, int x, int y, int width, int height, uint8_t red_lu[256], uint8_t green_lu[256], uint8_t blue_lu[256], uint8_t alpha_lu[256]);
void            image_blit               (image_t* it, image_t* target_image, int x, int y);
bool            image_download           (image_t* it, color_t* buffer);
void            image_draw               (image_t* it, int x, int y);
void            image_draw_masked        (image_t* it, color_t mask, int x, int y);
void            image_draw_scaled        (image_t* it, int x, int y, int width, int height);
void            image_draw_scaled_masked (image_t* it, color_t mask, int x, int y, int width, int height);
void            image_draw_tiled         (image_t* it, int x, int y, int width, int height);
void            image_draw_tiled_masked  (image_t* it, color_t mask, int x, int y, int width, int height);
void            image_fill               (image_t* it, color_t color);
bool            image_flip               (image_t* it, bool is_h_flip, bool is_v_flip);
color_t         image_get_pixel          (image_t* it, int x, int y);
image_lock_t*   image_lock               (image_t* it, bool uploading, bool downloading);
void            image_render_to          (image_t* it, transform_t* transform);
bool            image_replace_color      (image_t* it, color_t color, color_t new_color);
bool            image_rescale            (image_t* it, int width, int height);
bool            image_save               (image_t* it, const char* filename);
void            image_set_pixel          (image_t* it, int x, int y, color_t color);
void            image_unlock             (image_t* it, image_lock_t* lock);
bool            image_upload             (image_t* it, const color_t* pixels);

#endif // SPHERE__IMAGE_H__INCLUDED
