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




/*
const led_config_t g_led_config = { {
  // Key Matrix to LED Index
  {12,  11,  6,  5,  0,               21,   26,   27,   32,   33},
  {13,  10,  7,  4,  1,               22,   25,   28,   31,   34},
  {14,  9,   8,  3,  2,               23,   24,   29,   30,   35},
  {15,  16, 17, 18, 19, 20,      41,  40,   39,   38,   37,   36}
}, {
  // LED Index to Physical Position
  {80,0 },//0
  {80,21   },//1
  {80,42   },//2
  {60 ,42   },//3
  {60 ,21   },//4
  {60 ,0   },//5
  {40 ,0   },//6
  {40 ,21   },//7
  {40 ,42   },//8
  {20 ,42   },//9
  {20 ,21   },//10
  {20 ,0   },//11
  {0 ,0   },//12
  {0 ,21   },//13
  {0 ,42   },//14
  {0 ,64   },//15
  {20 ,64   },//16
  {40 ,64   },//17
  {60 , 64  },//18
  {80 , 64  },//19
  {100 ,64   },//20
  {144 ,0   },//21
  {144 ,21   },//22
  {144 ,42   },//23
  {164 ,42   },//24
  {164 ,21   },//25
  {164 ,0   },//26
  {184 ,0   },//27
  {184 ,21   },//28
  {184 ,42   },//29
  {204 ,42   },//30
  {204 ,21   },//31
  {204 ,0   },//32
  {224 , 0  },//33
  {224 ,21   },//34
  {224 ,42   },//35
  {224 , 64  },//36
  {204 ,64   },//37
  {184 ,64   },//38
  {164 ,64   },//39
  {144 , 64  },//40
  {124 , 64  }//41
}, {
  // LED Index to Flag
  LED_FLAG_KEYLIGHT,LED_FLAG_KEYLIGHT,LED_FLAG_KEYLIGHT,LED_FLAG_KEYLIGHT,LED_FLAG_KEYLIGHT,LED_FLAG_KEYLIGHT,LED_FLAG_KEYLIGHT,LED_FLAG_KEYLIGHT,LED_FLAG_KEYLIGHT,LED_FLAG_KEYLIGHT,LED_FLAG_KEYLIGHT,LED_FLAG_KEYLIGHT,LED_FLAG_KEYLIGHT,LED_FLAG_KEYLIGHT,LED_FLAG_KEYLIGHT,LED_FLAG_KEYLIGHT,LED_FLAG_KEYLIGHT,LED_FLAG_KEYLIGHT,LED_FLAG_KEYLIGHT,LED_FLAG_KEYLIGHT  LED_FLAG_KEYLIGHT,LED_FLAG_KEYLIGHT,LED_FLAG_KEYLIGHT,LED_FLAG_KEYLIGHT,LED_FLAG_KEYLIGHT,LED_FLAG_KEYLIGHT,LED_FLAG_KEYLIGHT,LED_FLAG_KEYLIGHT,LED_FLAG_KEYLIGHT,LED_FLAG_KEYLIGHT  LED_FLAG_KEYLIGHT,LED_FLAG_KEYLIGHT,LED_FLAG_KEYLIGHT,LED_FLAG_KEYLIGHT,LED_FLAG_KEYLIGHT,LED_FLAG_KEYLIGHT,LED_FLAG_KEYLIGHT,LED_FLAG_KEYLIGHT,LED_FLAG_KEYLIGHT,LED_FLAG_KEYLIGHT,LED_FLAG_KEYLIGHT,LED_FLAG_KEYLIGHT
} };
*/