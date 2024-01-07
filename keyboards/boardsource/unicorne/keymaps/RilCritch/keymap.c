#include QMK_KEYBOARD_H

//= Custom Layer Names = = = = = = = = = = = = = = = = = = = = = = = = = = = = =>
#define _HOME 0 // Base       - qwerty layout and modifiers
#define _PUNC 1 // Puctuation - common punctuation
#define _MOVE 2 // Movement   - arrow and navigation keys
#define _NUMB 3 // Nubmers    - Nubmers and related punc
#define _FKEY 4 // F Keys     - F1 to F12 keys
#define _KBKC 5 // Keyboard   - Keys for controlling the keyboard

//= Custom Key Names = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =>
/** Modifier Taps **/
#define ALT_Z  LALT_T(KC_Z)      // Tap - Z      | Hold - Alt
#define ALT_SL RALT_T(KC_SLSH)   // Tap - Slash  | Hold - Alt
#define CTL_X  LCTL_T(KC_X)      // Tap - X      | Hold - Control
#define CTL_DT RCTL_T(KC_DOT)    // Tap - Period | Hold - Control
#define SFT_C  LSFT_T(KC_C)      // Tap - C      | Hold - Shift
#define SFT_CM RSFT_T(KC_COMM)   // Tap - Comma  | Hold - Shift
#define GUI_V  LGUI_T(KC_V)      // Tap - V      | Hold - Gui
#define GUI_M  RGUI_T(KC_M)      // Tap - M      | Hold - Gui

/** Layer Taps **/
#define LP_KCU LT(_PUNC, KC_U)   // Tap - U      | Hold - Puctuation
#define LM_SPC LT(_MOVE, KC_SPC) // Tap - Space  | Hold - Movement
#define LN_KCF LT(_NUMB, KC_F)   // Tap - F      | Hold - Numbers
#define LF_SPC LT(_FKEY, KC_SPC) // Tap - Space  | Hold - F Keys

/** Layer Momentary **/
#define M_KBKC MO(_KBKC) // Keyboard Specific Layer Hold

//= Keymap = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =>
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[_HOME] = LAYOUT_split_3x6_3(
//,-----------------------------------------------------.                   ,-----------------------------------------------------.
     KC_TAB,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                        KC_Y,  LP_KCU,    KC_I,    KC_O,    KC_P, KC_BSLS,
//|--------+--------+--------+--------+--------+--------|                   |--------+--------+--------+--------+--------+--------|
    CW_TOGG,    KC_A,    KC_S,    KC_D,  LN_KCF,    KC_G,                        KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN, CW_TOGG,
//|--------+--------+--------+--------+--------+--------|                   |--------+--------+--------+--------+--------+--------|
    KC_LSFT,   ALT_Z,   CTL_X,   SFT_C,   GUI_V,    KC_B,                        KC_N,   GUI_M,  SFT_CM,  CTL_DT,  ALT_SL, KC_RSFT,
//`--------+--------+--------+--------+--------+--------+--------. ,--------+--------+--------+--------+--------+--------+--------'
                                         KC_DEL,  LM_SPC,  KC_ESC,    KC_ENT,  LF_SPC, KC_BSPC
                                    //`--------+--------+--------' `--------+--------+--------'
    ),

	[_PUNC] = LAYOUT_split_3x6_3(
//,-----------------------------------------------------.                   ,-----------------------------------------------------.
    XXXXXXX, KC_CIRC,  KC_EQL, KC_HASH, KC_QUOT, KC_AMPR,                     XXXXXXX, _______, KC_LCTL, KC_LSFT, KC_LALT, XXXXXXX,
//|--------+--------+--------+--------+--------+--------|                   |--------+--------+--------+--------+--------+--------|
    XXXXXXX,  KC_GRV, KC_MINS, KC_LPRN, KC_RPRN, KC_BSLS,                     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
//|--------+--------+--------+--------+--------+--------|                   |--------+--------+--------+--------+--------+--------|
    XXXXXXX,   KC_AT,  KC_DLR, KC_LBRC, KC_RBRC, KC_EXLM,                     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
//|--------+--------+--------+--------+--------+--------|                   |--------+--------+--------+--------+--------+--------|
                                        KC_BSPC, KC_PERC, XXXXXXX,   KC_LGUI, XXXXXXX, XXXXXXX
                                    //`--------+--------+--------' `--------+--------+--------'
    ),

	[_MOVE] = LAYOUT_split_3x6_3(
//,-----------------------------------------------------.                   ,-----------------------------------------------------.
    QK_BOOT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      KC_INS, KC_PAUS, KC_SCRL, KC_PSCR, XXXXXXX, XXXXXXX,
//|--------+--------+--------+--------+--------+--------|                   |--------+--------+--------+--------+--------+--------|
    XXXXXXX, KC_LALT, KC_LCTL, KC_LSFT, KC_LGUI, XXXXXXX,                     KC_LEFT, KC_DOWN,   KC_UP, KC_RGHT, XXXXXXX, XXXXXXX,
//|--------+--------+--------+--------+--------+--------|                   |--------+--------+--------+--------+--------+--------|
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,  M_KBKC,                     KC_HOME, KC_PGDN, KC_PGUP,  KC_END, XXXXXXX, XXXXXXX,
//|--------+--------+--------+--------+--------+--------|                   |--------+--------+--------+--------+--------+--------|
                                        XXXXXXX, _______, XXXXXXX,    KC_ENT,  KC_SPC, KC_BSPC
                                    //`--------+--------+--------' `--------+--------+--------'
    ),

	[_NUMB] = LAYOUT_split_3x6_3(
//,-----------------------------------------------------.                   ,-----------------------------------------------------.
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                     KC_COMM,    KC_7,    KC_8,    KC_9, KC_ASTR, XXXXXXX,
//|--------+--------+--------+--------+--------+--------|                   |--------+--------+--------+--------+--------+--------|
    XXXXXXX, KC_LCTL, KC_LSFT, KC_LGUI, _______, XXXXXXX,                     KC_MINS,    KC_4,    KC_5,    KC_6, KC_PLUS, XXXXXXX,
//|--------+--------+--------+--------+--------+--------|                   |--------+--------+--------+--------+--------+--------|
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      KC_DOT,    KC_1,    KC_2,    KC_3, KC_SLSH, XXXXXXX,
//|--------+--------+--------+--------+--------+--------|                   |--------+--------+--------+--------+--------+--------|
                                        XXXXXXX,  KC_SPC, XXXXXXX,    KC_ENT,    KC_0, KC_BSPC
                                    //`--------+--------+--------' `--------+--------+--------'
    ),

	[_FKEY] = LAYOUT_split_3x6_3(
//,-----------------------------------------------------.                   ,-----------------------------------------------------.
    XXXXXXX,   KC_F1,   KC_F2,   KC_F3,   KC_F4, XXXXXXX,                     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, QK_BOOT,
//|--------+--------+--------+--------+--------+--------|                   |--------+--------+--------+--------+--------+--------|
    XXXXXXX,   KC_F5,   KC_F6,   KC_F7,   KC_F8, XXXXXXX,                     XXXXXXX, KC_LGUI, KC_LSFT, KC_LCTL, KC_LALT, XXXXXXX,
//|--------+--------+--------+--------+--------+--------|                   |--------+--------+--------+--------+--------+--------|
    XXXXXXX,   KC_F9,  KC_F10,  KC_F11,  KC_F12, XXXXXXX,                      M_KBKC, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
//|--------+--------+--------+--------+--------+--------|                   |--------+--------+--------+--------+--------+--------|
                                        XXXXXXX, XXXXXXX, XXXXXXX,   XXXXXXX, _______, XXXXXXX
                                    //`--------+--------+--------' `--------+--------+--------'
    ),

	[_KBKC] = LAYOUT_split_3x6_3(
//,-----------------------------------------------------.                   ,-----------------------------------------------------.
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
//|--------+--------+--------+--------+--------+--------|                   |--------+--------+--------+--------+--------+--------|
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                     RGB_MOD, RGB_VAI, RGB_SAI, RGB_HUI, RGB_SPI, RGB_TOG,
//|--------+--------+--------+--------+--------+--------|                   |--------+--------+--------+--------+--------+--------|
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______,                     _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
//|--------+--------+--------+--------+--------+--------|                   |--------+--------+--------+--------+--------+--------|
                                        XXXXXXX, XXXXXXX, KC_LSFT,   KC_LSFT, XXXXXXX, XXXXXXX
                                    //`--------+--------+--------' `--------+--------+--------'
    )
};
