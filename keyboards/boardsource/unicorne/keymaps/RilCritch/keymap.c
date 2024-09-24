#include QMK_KEYBOARD_H

//= Custome File Imports = = = = = = = = = = = = = = = = = = = = = = = = = = = =>
#include "custom.h" // for increasing keymap legibility


//= Keymap = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =>
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[_HOME] = LAYOUT_split_3x6_3( // Base QWERTY [1]
//,-----------------------------------------------------.                   ,-----------------------------------------------------.
     KC_TAB,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                        KC_Y,  LP_KCU,    KC_I,    KC_O,    KC_P, KC_BSLS,
//|--------+--------+--------+--------+--------+--------|                   |--------+--------+--------+--------+--------+--------|
    CW_TOGG,    KC_A,    KC_S,    KC_D,  LN_KCF,    KC_G,                        KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN, CW_TOGG,
//|--------+--------+--------+--------+--------+--------|                   |--------+--------+--------+--------+--------+--------|
    KC_LSFT,   ALT_Z,   CTL_X,   SFT_C,   GUI_V,    KC_B,                        KC_N,   GUI_M,  SFT_CM,  CTL_DT,  ALT_SL, KC_RSFT,
//`--------+--------+--------+--------+--------+--------+--------. ,--------+--------+--------+--------+--------+--------+--------'
                                        KC_BSPC,  LM_SPC,  KC_ESC,    KC_ENT,  LF_SPC, KC_BSPC
                                    //`--------+--------+--------' `--------+--------+--------'
    ),

	[_PUNC] = LAYOUT_split_3x6_3( // Punctuation [2]
//,-----------------------------------------------------.                   ,-----------------------------------------------------.
    XXXXXXX, KC_CIRC,  KC_EQL, KC_HASH, KC_QUOT, KC_AMPR,                     XXXXXXX, _______, KC_LCTL, KC_LSFT, KC_LALT, XXXXXXX,
//|--------+--------+--------+--------+--------+--------|                   |--------+--------+--------+--------+--------+--------|
    XXXXXXX,  KC_GRV, KC_MINS, KC_LPRN, KC_RPRN, KC_ASTR,                     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
//|--------+--------+--------+--------+--------+--------|                   |--------+--------+--------+--------+--------+--------|
    XXXXXXX,   KC_AT,  KC_DLR, KC_LBRC, KC_RBRC, KC_EXLM,                     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
//`--------+--------+--------+--------+--------+--------+--------. ,--------+--------+--------+--------+--------+--------+--------'
                                        KC_BSPC, KC_PERC, XXXXXXX,    KC_SPC, KC_LGUI, XXXXXXX
                                    //`--------+--------+--------' `--------+--------+--------'
    ),

	[_MOVE] = LAYOUT_split_3x6_3( // Movement / Navigation [3]
//,-----------------------------------------------------.                   ,-----------------------------------------------------.
    QK_BOOT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      KC_INS, KC_PAUS, KC_SCRL, KC_PSCR, XXXXXXX, XXXXXXX,
//|--------+--------+--------+--------+--------+--------|                   |--------+--------+--------+--------+--------+--------|
    XXXXXXX, KC_LALT, KC_LCTL, KC_LSFT, KC_LGUI, XXXXXXX,                     KC_LEFT, KC_DOWN,   KC_UP, KC_RGHT, XXXXXXX, XXXXXXX,
//|--------+--------+--------+--------+--------+--------|                   |--------+--------+--------+--------+--------+--------|
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,  M_KBKC,                     KC_HOME, KC_PGDN, KC_PGUP,  KC_END, XXXXXXX, XXXXXXX,
//`--------+--------+--------+--------+--------+--------+--------. ,--------+--------+--------+--------+--------+--------+--------'
                                        XXXXXXX, _______, XXXXXXX,    KC_ENT,  KC_SPC, KC_BSPC
                                    //`--------+--------+--------' `--------+--------+--------'
    ),

	[_NUMB] = LAYOUT_split_3x6_3( // Numbers [4]
//,-----------------------------------------------------.                   ,-----------------------------------------------------.
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                     KC_COMM,    KC_7,    KC_8,    KC_9, KC_ASTR, XXXXXXX,
//|--------+--------+--------+--------+--------+--------|                   |--------+--------+--------+--------+--------+--------|
    XXXXXXX, KC_LCTL, KC_LSFT, KC_LGUI, _______, XXXXXXX,                     KC_MINS,    KC_4,    KC_5,    KC_6, KC_PLUS, XXXXXXX,
//|--------+--------+--------+--------+--------+--------|                   |--------+--------+--------+--------+--------+--------|
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      KC_DOT,    KC_1,    KC_2,    KC_3, KC_SLSH, XXXXXXX,
//`--------+--------+--------+--------+--------+--------+--------. ,--------+--------+--------+--------+--------+--------+--------'
                                        XXXXXXX, KC_LALT, XXXXXXX,    KC_ENT,    KC_0, KC_BSPC
                                    //`--------+--------+--------' `--------+--------+--------'
    ),

	[_FKEY] = LAYOUT_split_3x6_3( // F Keys [5]
//,-----------------------------------------------------.                   ,-----------------------------------------------------.
    XXXXXXX,   KC_F1,   KC_F2,   KC_F3,   KC_F4, XXXXXXX,                     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, QK_BOOT,
//|--------+--------+--------+--------+--------+--------|                   |--------+--------+--------+--------+--------+--------|
    XXXXXXX,   KC_F5,   KC_F6,   KC_F7,   KC_F8, XXXXXXX,                     XXXXXXX, KC_LGUI, KC_LSFT, KC_LCTL, KC_LALT, XXXXXXX,
//|--------+--------+--------+--------+--------+--------|                   |--------+--------+--------+--------+--------+--------|
    XXXXXXX,   KC_F9,  KC_F10,  KC_F11,  KC_F12, XXXXXXX,                      M_KBKC, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
//`--------+--------+--------+--------+--------+--------+--------. ,--------+--------+--------+--------+--------+--------+--------'
                                        XXXXXXX, XXXXXXX, XXXXXXX,   XXXXXXX, _______, XXXXXXX
                                    //`--------+--------+--------' `--------+--------+--------'
    ),

	[_KBKC] = LAYOUT_split_3x6_3( // Keyboard control [6]
//,-----------------------------------------------------.                   ,-----------------------------------------------------.
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
//|--------+--------+--------+--------+--------+--------|                   |--------+--------+--------+--------+--------+--------|
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                     RGB_MOD, RGB_VAI, RGB_SAI, RGB_HUI, RGB_SPI, RGB_TOG,
//|--------+--------+--------+--------+--------+--------|                   |--------+--------+--------+--------+--------+--------|
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______,                     _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
//`--------+--------+--------+--------+--------+--------+--------. ,--------+--------+--------+--------+--------+--------+--------'
                                        XXXXXXX, XXXXXXX, KC_LSFT,   KC_LSFT, XXXXXXX, XXXXXXX
                                    //`--------+--------+--------' `--------+--------+--------'
    )
};


//= Key Overriding = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =>

//= - Shift + Backspace = Delete ->
const key_override_t delete_key_override = ko_make_basic(MOD_MASK_SHIFT, KC_BSPC, KC_DEL);

//= - Global Override Definitions ->
const key_override_t **key_overrides = (const key_override_t *[]){
    &delete_key_override,
    NULL // Null terminate the array of overrides!
};
