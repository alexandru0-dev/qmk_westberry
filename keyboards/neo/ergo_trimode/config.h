/// Copyright 2024 SDK (@sdk66)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#define USB_POWER_EN_PIN B10
#define USB_POWER_EN_PIN B10

#define RGBLIGHT_LAYERS
#define RGBLIGHT_LAYERS_OVERRIDE_RGB_OFF
#define RGBLIGHT_LAYERS_RETAIN_VAL
#define RGBLIGHT_DEFAULT_VAL 124
#define RGBLIGHT_DEFAULT_MODE RGBLIGHT_MODE_RAINBOW_SWIRL + 5
/*#define RGBLIGHT_SLEEP*/

/*#define RGB_TRIGGER_ON_KEYDOWN*/
/* SPI Config for spi flash*/
/*#define SPI_DRIVER SPIDQ*/
/*#define SPI_SCK_PIN B3*/
/*#define SPI_MOSI_PIN B5*/
/*#define SPI_MISO_PIN B4*/
/*#define SPI_MOSI_PAL_MODE 5*/

/*#define APA102_DI_PIN B10*/
/*#define APA102_CI_PIN B15*/
/*#define APA102_NOPS (100 / (1000000000L / (CPU_CLOCK / 4))) // This calculates how many loops of 4 nops to run to delay 100 ns*/

/*#define WS2812_SPI_DRIVER SPIM2*/
/*#define WS2812_SPI_DIVISOR 8*/
/*#define WS2812_DI_PIN B3*/
/*#define WS2812_SPI_MOSI_PAL_MODE 0*/
/*#define WS2812_SPI_SCK_PAL_MODE 0*/
