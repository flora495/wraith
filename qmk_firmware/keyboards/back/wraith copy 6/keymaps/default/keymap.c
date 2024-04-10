// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
     /*
      * ┌───┬───┬───┬───┬───┐ ┌──┐ ┌──┐ ┌───┬───┬───┬───┬───┐
      * │ 1 │ 2 │ 3 │ 4 │ 5 │ │6 │ │7 │ │ 8 │ 9 │10 │11 │12 │
      * ├───┼───┼───┼───┼───┤ ├──┤ ├──┤ ├───┼───┼───┼───┼───┤
      * │13 │14 │15 │16 │17 │ │18│ │19│ │20 │21 │22 │23 │24 │
      * ├───┼───┼───┼───┼───┤ └──┘ └──┘ ├───┼───┼───┼───┼───┤
      * │25 │26 │27 │28 │29 │           │30 │31 │32 │33 │34 │
      * ├───┼───┼───┼───┴───┘           └───┴───┼───┼───┼───┤
      * │34 │36 │37 │                           │38 │39 │40 │
      * └───┴───┴───┘┌───┐             ┌───┐    └───┴───┴───┘
      *              │41 ├───┐         │44 │
      *              └───┤42 ├───┐     ├───┤  
      *                  └───┤43 │     │45 ├───┐   
      *                      └───┘     └───┤46 │    
      *                                    └───┘
      */
    [0] = LAYOUT(
        KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,    RGB_MOD,           RGB_TOG,   KC_Y,     KC_U,     KC_I,     KC_O,     MT(KC_RALT,KC_P),
        KC_A,     KC_S,     KC_D,     KC_F,     KC_G,    RGB_MOD,           RGB_TOG,   KC_H,     KC_J,     KC_K,     KC_L,     KC_ENT,
        KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,                                  KC_N,     KC_M,     KC_BTN1,  KC_BTN2,  MT(KC_RSFT,KC_MINS),
        KC_LWIN,  XXXXXXX,  XXXXXXX,  LT(1,KC_TAB),MO(2),LT(3,KC_LNG2),    MT(KC_RCTL,KC_LNG1),   KC_SPC , KC_BSPC,  KC_COMM,  KC_DOT,   LT(3,KC_ESC)
    ),
    [1] = LAYOUT(
        KC_PERC,  KC_DLR,   KC_AMPR,  KC_CIRC,  KC_SLSH, XXXXXXX,           XXXXXXX,   KC_BSLS,  S(KC_LBRC), S(KC_RBRC),     S(KC_COMM),     S(KC_DOT),
        KC_AT,    KC_HASH,  KC_ASTR,  KC_PLUS,  KC_EQL,  XXXXXXX,           XXXXXXX,   S(KC_MINS),   S(KC_9), S(KC_0),     KC_SCLN,    S(KC_SCLN),
        KC_GRV,   S(KC_GRV),XXXXXXX,  S(KC_1),  S(KC_SLSH),                            S(KC_BSLS),   KC_LBRC,    KC_RBRC, KC_QUOT,   S(KC_QUOT),
        XXXXXXX,  XXXXXXX, XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,             XXXXXXX,  XXXXXXX, XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX
    ),
    [2] = LAYOUT(
        XXXXXXX,  KC_P7,   KC_P8,  KC_P9,  KC_SLSH, XXXXXXX,                XXXXXXX,   KC_BSLS,  KC_HOME,KC_UP,    KC_END,     KC_RALT,
        KC_P0,    KC_P4,   KC_P5,  KC_P6,  KC_EQL,  XXXXXXX,                XXXXXXX,   KC_PGUP,   KC_LEFT, KC_DOWN,    KC_RGHT,    KC_PGDN,
        KC_GRV,   KC_P1,   KC_P2,  KC_P3,  KC_LSFT,                                    RALT(KC_LEFT),   RALT(KC_RGHT),    KC_BTN1,  KC_BTN2,   KC_BTN3,
        XXXXXXX,  XXXXXXX, XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,                 XXXXXXX,  XXXXXXX, XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX
    ),
    [3] = LAYOUT(
        XXXXXXX,  KC_F7,   KC_F8,  KC_F9, KC_F10, XXXXXXX,                XXXXXXX,  XXXXXXX,  XXXXXXX,XXXXXXX, XXXXXXX,XXXXXXX,
        XXXXXXX,    KC_F4,   KC_F5,  KC_F6, KC_F11,  XXXXXXX,                XXXXXXX,   XXXXXXX,XXXXXXX,XXXXXXX, XXXXXXX, XXXXXXX,
        XXXXXXX,   KC_F1,   KC_F2,  KC_F3,  KC_F9,                                    XXXXXXX,   XXXXXXX,    XXXXXXX,  XXXXXXX,XXXXXXX,
        XXXXXXX,  XXXXXXX, XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,                 XXXXXXX,  XXXXXXX, XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX
    )
};


#ifdef OLED_ENABLE
static void render_logo(void) {
    static const char PROGMEM qmk_logo[] = {
        0x80, 0x81, 0x82, 0x83, 0x84, 0x85, 0x86, 0x87, 0x88, 0x89, 0x8A, 0x8B, 0x8C, 0x8D, 0x8E, 0x8F, 0x90, 0x91, 0x92, 0x93, 0x94,
        0xA0, 0xA1, 0xA2, 0xA3, 0xA4, 0xA5, 0xA6, 0xA7, 0xA8, 0xA9, 0xAA, 0xAB, 0xAC, 0xAD, 0xAE, 0xAF, 0xB0, 0xB1, 0xB2, 0xB3, 0xB4,
        0xC0, 0xC1, 0xC2, 0xC3, 0xC4, 0xC5, 0xC6, 0xC7, 0xC8, 0xC9, 0xCA, 0xCB, 0xCC, 0xCD, 0xCE, 0xCF, 0xD0, 0xD1, 0xD2, 0xD3, 0xD4, 0x00
    };

    oled_write_P(qmk_logo, false);
}

bool oled_task_user(void) {
    if (is_keyboard_master()) {
        render_logo();
    } else {
        render_logo();  // Renders a static logo
        oled_scroll_left();  // Turns on scrolling
    }
    return false;
}
#endif