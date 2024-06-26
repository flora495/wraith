// Copyright 2024 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

/*******************************************************************************
  88888888888 888      d8b                .d888 d8b 888               d8b
      888     888      Y8P               d88P"  Y8P 888               Y8P
      888     888                        888        888
      888     88888b.  888 .d8888b       888888 888 888  .d88b.       888 .d8888b
      888     888 "88b 888 88K           888    888 888 d8P  Y8b      888 88K
      888     888  888 888 "Y8888b.      888    888 888 88888888      888 "Y8888b.
      888     888  888 888      X88      888    888 888 Y8b.          888      X88
      888     888  888 888  88888P'      888    888 888  "Y8888       888  88888P'
                                                        888                 888
                                                        888                 888
                                                        888                 888
     .d88b.   .d88b.  88888b.   .d88b.  888d888 8888b.  888888 .d88b.   .d88888
    d88P"88b d8P  Y8b 888 "88b d8P  Y8b 888P"      "88b 888   d8P  Y8b d88" 888
    888  888 88888888 888  888 88888888 888    .d888888 888   88888888 888  888
    Y88b 888 Y8b.     888  888 Y8b.     888    888  888 Y88b. Y8b.     Y88b 888
     "Y88888  "Y8888  888  888  "Y8888  888    "Y888888  "Y888 "Y8888   "Y88888
         888
    Y8b d88P
     "Y88P"
*******************************************************************************/

#include QMK_KEYBOARD_H

#ifdef RGB_MATRIX_ENABLE
#include "rgb_matrix.h"
__attribute__ ((weak)) led_config_t g_led_config = {
  {
    { NO_LED, 12, 11, 6, 5, 0 },
    { NO_LED, 13, 10, 7, 4, 1 },
    { NO_LED, 14, 9, 8, 3, 2 },
    { 15, 16, 17, 18, 19, 20 },
    { NO_LED, 21, 26, 27, 32, 33 },
    { NO_LED, 22, 25, 28, 31, 34 },
    { NO_LED, 23, 24, 29, 30, 35 },
    { 41, 40, 39, 38, 37, 36 },
  },
  { {80, 0}, {80, 21}, {80, 42}, {60, 42}, {60, 21}, {60, 0}, {40, 0}, {40, 21}, {40, 42}, {20, 42}, {20, 21}, {20, 0}, {0, 0}, {0, 21}, {0, 42}, {0, 64}, {20, 64}, {40, 64}, {60, 64}, {80, 64}, {100, 64}, {144, 0}, {144, 21}, {144, 42}, {164, 42}, {164, 21}, {164, 0}, {184, 0}, {184, 21}, {184, 42}, {204, 42}, {204, 21}, {204, 0}, {224, 0}, {224, 21}, {224, 42}, {224, 64}, {204, 64}, {184, 64}, {164, 64}, {144, 64}, {124, 64} },
  { 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4 },
};
#endif
