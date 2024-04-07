/* SPDX-License-Identifier: GPL-2.0-or-later */
/* Copyright 2023 splitkb.com <support@splitkb.com> */

#pragma once

#define ENCODER_RESOLUTION 2

#define VIAL_KEYBOARD_UID {0x89, 0x87, 0xB7, 0x0F, 0x54, 0x23, 0xC2, 0xE8}

#define VIAL_UNLOCK_COMBO_ROWS { 3, 7 }
#define VIAL_UNLOCK_COMBO_COLS { 4, 4 }

#define RGB_MATRIX_FRAMEBUFFER_EFFECTS
#define RGB_MATRIX_KEYPRESSES

#define DYNAMIC_KEYMAP_LAYER_COUNT 8
#define VIAL_COMBO_ENTRIES 64
#define VIAL_KEY_OVERRIDE_ENTRIES 128
#define VIAL_TAP_DANCE_ENTRIES 64

// fix mods for key overrides
#define DUMMY_MOD_NEUTRALIZER_KEYCODE KC_RIGHT_CTRL

// controller memory
// #define TRANSIENT_EEPROM_SIZE 65535
