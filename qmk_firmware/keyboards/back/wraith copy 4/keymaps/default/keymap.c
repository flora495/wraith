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



static void render_logo(void) {
    static const char PROGMEM qmk_logo[] = {
        0x80, 0x81, 0x82, 0x83, 0x84, 0x85, 0x86, 0x87, 0x88, 0x89, 0x8A, 0x8B, 0x8C, 0x8D, 0x8E, 0x8F, 0x90, 0x91, 0x92, 0x93, 0x94,
        0xA0, 0xA1, 0xA2, 0xA3, 0xA4, 0xA5, 0xA6, 0xA7, 0xA8, 0xA9, 0xAA, 0xAB, 0xAC, 0xAD, 0xAE, 0xAF, 0xB0, 0xB1, 0xB2, 0xB3, 0xB4,
        0xC0, 0xC1, 0xC2, 0xC3, 0xC4, 0xC5, 0xC6, 0xC7, 0xC8, 0xC9, 0xCA, 0xCB, 0xCC, 0xCD, 0xCE, 0xCF, 0xD0, 0xD1, 0xD2, 0xD3, 0xD4, 0x00
    };

    oled_write_P(qmk_logo, false);
}

bool oled_task_user(void) {
    render_logo();
    return false;
}