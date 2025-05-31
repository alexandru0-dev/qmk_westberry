// Copyright 2024 SDK (@sdk66)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H
#include "quantum.h"
/**/
/*const rgblight_segment_t PROGMEM my_capslock_layer[] = RGBLIGHT_LAYER_SEGMENTS({5, 11, HSV_WHITE});*/
/**/
/*const rgblight_segment_t* const PROGMEM my_rgb_layers[] = RGBLIGHT_LAYERS_LIST(my_capslock_layer);*/
void keyboard_post_init_kb(void) {
    /*#ifdef USB_POWER_EN_PIN*/
    /*    gpio_set_pin_output(USB_POWER_EN_PIN);*/
    /*    gpio_write_pin_high(USB_POWER_EN_PIN);*/
    /*#endif*/
    /*#ifdef USB_POWER_EN_PIN2*/
    /*    gpio_set_pin_output(USB_POWER_EN_PIN2);*/
    /*    gpio_write_pin_high(USB_POWER_EN_PIN2);*/
    /*#endif*/
    /*rgblight_layers = my_rgb_layers;*/
    /*rgblight_set_effect_range(5, 11);*/
    keyboard_post_init_user();
}

/*bool led_update_kb(led_t led_state) {*/
/*    bool res = led_update_user(led_state);*/
/*    if (res) {*/
/*        rgblight_set_layer_state(0, led_state.caps_lock);*/
/*    }*/
/*    return res;*/
/*}*/
