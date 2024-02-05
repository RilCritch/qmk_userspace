#pragma once

//= Keymap Utilities = = = = = = = = = = = = = = = = = = = = = = = = = = = = = //

//= - Description ->
//    |- Defines to make the keymap.c file more legible
//
//= - Overview ->
//    |- Custom Layer Names
//    |- Custom Key Names
// = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = //


//= Custom Layer Names = = = = = = = = = = = = = = = = = = = = = = = = = = = = =>
#define _HOME 0 // 1 Base       - qwerty layout and modifiers
#define _PUNC 1 // 2 Puctuation - common punctuation
#define _MOVE 2 // 3 Movement   - arrow and navigation keys
#define _NUMB 3 // 4 Nubmers    - Nubmers and related punc
#define _FKEY 4 // 5 F Keys     - F1 to F12 keys
#define _KBKC 5 // 6 Keyboard   - Keys for controlling the keyboard


//= Custom Key Names = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =>

//= - Modifier Taps ->
#define ALT_Z  LALT_T(KC_Z)      // Tap - Z      | Hold - Alt
#define ALT_SL RALT_T(KC_SLSH)   // Tap - Slash  | Hold - Alt
#define CTL_X  LCTL_T(KC_X)      // Tap - X      | Hold - Control
#define CTL_DT RCTL_T(KC_DOT)    // Tap - Period | Hold - Control
#define SFT_C  LSFT_T(KC_C)      // Tap - C      | Hold - Shift
#define SFT_CM RSFT_T(KC_COMM)   // Tap - Comma  | Hold - Shift
#define GUI_V  LGUI_T(KC_V)      // Tap - V      | Hold - Gui
#define GUI_M  RGUI_T(KC_M)      // Tap - M      | Hold - Gui

//= - Layer Taps ->
#define LP_KCU LT(_PUNC, KC_U)   // Tap - U      | Hold - Puctuation
#define LM_SPC LT(_MOVE, KC_SPC) // Tap - Space  | Hold - Movement
#define LN_KCF LT(_NUMB, KC_F)   // Tap - F      | Hold - Numbers
#define LF_SPC LT(_FKEY, KC_SPC) // Tap - Space  | Hold - F Keys

//= - Layer Momentary ->
#define M_KBKC MO(_KBKC) // Keyboard Specific Layer Hold
