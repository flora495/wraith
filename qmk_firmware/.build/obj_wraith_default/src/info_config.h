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

#pragma once

#ifndef DIODE_DIRECTION
#    define DIODE_DIRECTION COL2ROW
#endif // DIODE_DIRECTION

#ifndef RGB_MATRIX_SPLIT
#    define RGB_MATRIX_SPLIT { 21, 21 }
#endif // RGB_MATRIX_SPLIT

#ifndef RGB_MATRIX_LED_COUNT
#    define RGB_MATRIX_LED_COUNT 42
#endif // RGB_MATRIX_LED_COUNT

#ifndef WS2812_DI_PIN
#    define WS2812_DI_PIN GP0
#endif // WS2812_DI_PIN

#ifndef DEVICE_VER
#    define DEVICE_VER 0x0100
#endif // DEVICE_VER

#ifndef MANUFACTURER
#    define MANUFACTURER "flora495"
#endif // MANUFACTURER

#ifndef PRODUCT
#    define PRODUCT "wraith"
#endif // PRODUCT

#ifndef PRODUCT_ID
#    define PRODUCT_ID 0xAF2B
#endif // PRODUCT_ID

#ifndef VENDOR_ID
#    define VENDOR_ID 0x8D7E
#endif // VENDOR_ID

#ifndef MATRIX_COLS
#    define MATRIX_COLS 6
#endif // MATRIX_COLS

#ifndef MATRIX_ROWS
#    define MATRIX_ROWS 8
#endif // MATRIX_ROWS

#ifndef MATRIX_COL_PINS
#    define MATRIX_COL_PINS { GP6, GP7, GP10, GP11, GP14, GP15 }
#endif // MATRIX_COL_PINS

#ifndef MATRIX_ROW_PINS
#    define MATRIX_ROW_PINS { GP27, GP26, GP22, GP21 }
#endif // MATRIX_ROW_PINS

#ifndef ENABLE_RGB_MATRIX_ALPHA_MODS
#    define ENABLE_RGB_MATRIX_ALPHA_MODS
#endif // ENABLE_RGB_MATRIX_ALPHA_MODS

#ifndef ENABLE_RGB_MATRIX_BREATHING
#    define ENABLE_RGB_MATRIX_BREATHING
#endif // ENABLE_RGB_MATRIX_BREATHING

#ifndef ENABLE_RGB_MATRIX_CYCLE_LEFT_RIGHT
#    define ENABLE_RGB_MATRIX_CYCLE_LEFT_RIGHT
#endif // ENABLE_RGB_MATRIX_CYCLE_LEFT_RIGHT

#ifndef ENABLE_RGB_MATRIX_CYCLE_ALL
#    define ENABLE_RGB_MATRIX_CYCLE_ALL
#endif // ENABLE_RGB_MATRIX_CYCLE_ALL

#ifndef ENABLE_RGB_MATRIX_CYCLE_SPIRAL
#    define ENABLE_RGB_MATRIX_CYCLE_SPIRAL
#endif // ENABLE_RGB_MATRIX_CYCLE_SPIRAL

#ifndef ENABLE_RGB_MATRIX_RAINBOW_BEACON
#    define ENABLE_RGB_MATRIX_RAINBOW_BEACON
#endif // ENABLE_RGB_MATRIX_RAINBOW_BEACON

#ifndef ENABLE_RGB_MATRIX_RAINBOW_PINWHEEL
#    define ENABLE_RGB_MATRIX_RAINBOW_PINWHEEL
#endif // ENABLE_RGB_MATRIX_RAINBOW_PINWHEEL

#ifndef ENABLE_RGB_MATRIX_SOLID_REACTIVE_SIMPLE
#    define ENABLE_RGB_MATRIX_SOLID_REACTIVE_SIMPLE
#endif // ENABLE_RGB_MATRIX_SOLID_REACTIVE_SIMPLE

#ifndef ENABLE_RGB_MATRIX_SOLID_REACTIVE
#    define ENABLE_RGB_MATRIX_SOLID_REACTIVE
#endif // ENABLE_RGB_MATRIX_SOLID_REACTIVE

#ifndef ENABLE_RGB_MATRIX_TYPING_HEATMAP
#    define ENABLE_RGB_MATRIX_TYPING_HEATMAP
#endif // ENABLE_RGB_MATRIX_TYPING_HEATMAP
