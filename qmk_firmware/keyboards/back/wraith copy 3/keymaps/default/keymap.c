// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
     /*
      * ┌───┬───┬───┬───┬───┐ ┌──┐ ┌──┐ ┌───┬───┬───┬───┬───┐
      * │ 1 │ 2 │ 3 │ 4 │ 5 │ │6 │ │7 │ │ 8 │ 9 │10 │11 │12 │
      * ├───┼───┼───┼───┼───┤ └──┘ └──┘ ├───┼───┼───┼───┼───┤
      * │13 │14 │15 │16 │17 │           │18 │19 │20 │21 │22 │
      * ├───┼───┼───┼───┼───┤           ├───┼───┼───┼───┼───┤
      * │23 │24 │25 │26 │27 │           │28 │29 │30 │31 │32 │
      * ├───┼───┼───┼───┴───┘           └───┴───┼───┼───┼───┤
      * │33 │34 │35 │                           │36 │37 │38 │
      * └───┴───┴───┘┌───┐             ┌───┐    └───┴───┴───┘
      *              │39 ├───┐         │42 │
      *              └───┤40 ├───┐     ├───┤  
      *                  └───┤41 │     │43 ├───┐   
      *                      └───┘     └───┤44 │    
      *                                    └───┘
      */
    [0] = LAYOUT(
        KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,   RGB_MOD,           RGB_TOG,  KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,
        KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                                KC_H,    KC_J,    KC_K,    KC_L,    KC_ENT,
        KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                                KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_RSFT,
        KC_A,    KC_B,    KC_C,    KC_D,    KC_E,    KC_F,             KC_A,     KC_B,    KC_C,    KC_D,    KC_E,    KC_F
    )
};

