// Copyright 2023 jack (@waffle87)
// SPDX-License-Identifier: GPL-2.0-or-later
#pragma once

//= Unicorne Default = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =>

#define RGB_MATRIX_LED_COUNT 54
// #define RGB_MATRIX_DEFAULT_MODE RGB_MATRIX_ALPHAS_MODS
#define RGB_DISABLE_WHEN_USB_SUSPENDED

#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET

#define I2C_DRIVER I2CD1
#define I2C1_SDA_PIN GP22
#define I2C1_SCL_PIN GP23

#define AUDIO_PIN GP28
#define AUDIO_PWM_DRIVER PWMD6
#define AUDIO_INIT_DELAY
#define AUDIO_PWM_CHANNEL RP2040_PWM_CHANNEL_A
#define STARTUP_SONG SONG(ODE_TO_JOY)

#define ANALOG_JOYSTICK_Y_AXIS_PIN GP26
#define ANALOG_JOYSTICK_X_AXIS_PIN GP27
#define POINTING_DEVICE_INVERT_Y
#define POINTING_DEVICE_INVERT_X

//= Undefining = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =>

/** RGB Matrix **/
#undef RGB_MATRIX_DEFAULT_MODE


//= Config Additions = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =>

/** RGB Matrix Defaults **/
#define RGB_MATRIX_DEFAULT_MODE RGB_MATRIX_SOLID_COLOR
#define RGB_MATRIX_DEFAULT_HUE 0
#define RGB_MATRIX_DEFAULT_SAT 0
#define RGB_MATRIX_DEFAULT_ON false

/** OLED Configuration **/
#define OLED_TIMEOUT 30000 // Timeout 30000ms (30 sec) | Default = 60s
#define OLED_BRIGHTNESS 200 // Brightness | Default = 255
