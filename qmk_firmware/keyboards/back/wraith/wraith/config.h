// Copyright 2023 flora495 (@flora495)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT

#define SPLIT_HAND_PIN GP2
#define SERIAL_USART_TX_PIN GP8

// The pin connected to the data pin of the LEDs
//#define WS2812_DI_PIN GP0
// The number of LEDs connected
//#define DRIVER_LED_TOTAL 42

// Bitbang WS2812
//#define NOP_FUDGE 0.4

//pmw3360
#define PMW3360_CS_PIN GP18