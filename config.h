#pragma once

/* Japanese Duplex Settings - This is the "magic" that fixes your row errors */
#define MATRIX_HAS_GHOST

/* Rotary Encoders (Rotational pins from XIAO schematic) */
#define ENCODER_PAD_A { GP0, GP2 }
#define ENCODER_PAD_B { GP1, GP3 }
#define ENCODER_RESOLUTION 4

/* OLED Hardware Pins (I2C1 on RP2040) */
#define I2C_DRIVER I2CD1
#define I2C1_SCL_PIN GP7
#define I2C1_SDA_PIN GP6

/* Fix for RGB Pin error in your terminal */
#define WS2812_DI_PIN GP4
#define RGBLED_NUM 24
#define RGBLIGHT_LIMIT_VAL 120
#define RGBLIGHT_HUE_STEP 8
#define RGBLIGHT_SAT_STEP 8
#define RGBLIGHT_VAL_STEP 8
#define RGBLIGHT_ANIMATIONS