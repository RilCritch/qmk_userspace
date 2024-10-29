#include QMK_KEYBOARD_H

enum layer_names {
    _LAY0,
    _LAY1,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/*
       L0:
       ┌───┬───┬───┬───┐   ┌───┐
       │MO1│Prv│Ply│Nxt│   │Mut│
       └───┴───┴───┴───┘   └───┘
       L1:
       ┌───┬───┬───┬───┐   ┌───┐
       │   │Hud│Tog│Mod│   │   │
       └───┴───┴───┴───┘   └───┘
*/
    // [_LAY0] = LAYOUT(
    //     MO(_LAY1),   KC_MPRV,    KC_MPLY,    KC_MNXT,     KC_AUDIO_MUTE
    // ),
    [_LAY0] = LAYOUT(
        KC_MNXT,   KC_MPLY,    KC_MPRV,    MO(_LAY1),     KC_AUDIO_MUTE
    ),
    [_LAY1] = LAYOUT(
        RGB_MOD,   RGB_TOG,    RGB_HUD,    KC_TRNS,       KC_TRNS
    )
};

#ifdef ENCODER_MAP_ENABLE
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [_LAY0] = { ENCODER_CCW_CW(KC_AUDIO_VOL_DOWN, KC_AUDIO_VOL_UP) },
    [_LAY1] = { ENCODER_CCW_CW(KC_TRNS, KC_TRNS) }
};
#endif
