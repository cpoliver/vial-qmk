/* Copyright 2022 splitkb.com <support@splitkb.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

/* -- qmk features --*/
#define DYNAMIC_KEYMAP_LAYER_COUNT 8

/* -- vial -- */
#define VIAL_KEYBOARD_UID { 0xD1, 0x12, 0x95, 0xF4, 0x8E, 0xC8, 0xA1, 0x12 }
#define VIAL_UNLOCK_COMBO_ROWS { 3, 7 }
#define VIAL_UNLOCK_COMBO_COLS { 4, 4 }
#define VIAL_TAP_DANCE_ENTRIES 128

/* -- split -- */
#define SPLIT_HAND_PIN F4

/* -- oled -- */
#ifdef OLED_ENABLE
#    define OLED_DISPLAY_128X32
#    define SPLIT_OLED_ENABLE
#endif

/* -- rgb per key -- */
#ifdef RGB_MATRIX_ENABLE
#    define RGB_MATRIX_MAXIMUM_BRIGHTNESS 128
#    define RGB_MATRIX_LED_COUNT 54
#    define RGB_MATRIX_SPLIT { 27, 27 }
#    define SPLIT_TRANSPORT_MIRROR
#endif

#define RGB_MATRIX_FRAMEBUFFER_EFFECTS
#define RGB_MATRIX_KEYPRESSES

/* -- rgb underglow -- */
#define BACKLIGHT_BREATHING
