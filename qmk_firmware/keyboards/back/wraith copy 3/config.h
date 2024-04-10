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

//#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET

//pmw3360
#define PMW33XX_CS_PIN GP17
#define SPI_SCK_PIN GP18
#define SPI_MOSI_PIN GP19
#define SPI_MISO_PIN GP16
#define SPLIT_POINTING_ENABLE 
#define POINTING_DEVICE_RIGHT

//pmw3360パラメタ
#define ROTATIONAL_TRANSFORM_ANGLE 0
#define POINTING_DEVICE_INVERT_X
#define POINTING_DEVICE_TASK_THROTTLE_MS 1
#define PMW33XX_LIFTOFF_DISTANCE 0x02
#define MOUSE_EXTENDED_REPORT // Use -32767 to 32767, instead of just -127 to 127.