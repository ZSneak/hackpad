#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        KC_7,    KC_8,    KC_9,    KC_ASTR,
        KC_4,    KC_5,    KC_6,    KC_MINS,
        KC_1,    KC_2,    KC_3,    KC_PLUS,
        KC_MUTE, KC_MPLY
    )
};

bool encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) { // Volume Knob (Encoder 7)
        if (clockwise) { tap_code(KC_VOLU); } else { tap_code(KC_VOLD); }
    } else if (index == 1) { // Media Knob (Encoder 8)
        if (clockwise) { tap_code(KC_MNXT); } else { tap_code(KC_MPRV); }
    }
    return true;
}

#ifdef OLED_ENABLE
bool oled_task_user(void) {
    oled_write_P(PSTR("ZEKE'S HACKPAD\n"), false);
    oled_write_P(PSTR("Layer: Default"), false);
    return false;
}
#endif