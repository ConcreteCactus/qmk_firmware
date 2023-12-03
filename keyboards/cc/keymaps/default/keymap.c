// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H
#include "quantum/keymap_extras/keymap_hungarian.h"

enum layer_names {
    DEFAULT,
    ACCENT
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [DEFAULT] = LAYOUT(
        MO(ACCENT), HU_5, HU_4, HU_3, HU_2, HU_1, HU_0,
        KC_SPACE, HU_T, HU_R, HU_E, HU_W, HU_Q, KC_TAB, KC_ESCAPE,
        KC_LGUI, HU_G, HU_F, HU_D, HU_S, HU_A, KC_CAPS_LOCK, HU_IACU,
        KC_LCTL, HU_B, HU_V, HU_C, HU_X, HU_Y, KC_LEFT_SHIFT,
        KC_BACKSPACE, HU_6, HU_7, HU_8, HU_9, HU_ODIA, HU_UDIA,
        KC_RETURN, HU_Z, HU_U, HU_I, HU_O, HU_P, HU_ODAC, HU_UACU,
        KC_RALT, HU_H, HU_J, HU_K, HU_L, HU_EACU, HU_AACU, HU_UDAC,
        KC_RCTL, HU_N, HU_M, HU_QUES, HU_COLN, HU_MINS, KC_LEFT_SHIFT
    )
};


