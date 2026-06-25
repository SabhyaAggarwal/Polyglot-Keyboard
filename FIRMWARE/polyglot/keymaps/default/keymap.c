#include QMK_KEYBOARD_H
#include "keymap_steno.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_split_3x6_3(
        XXXXXXX, STN_S1,  STN_TL,  STN_PL,  STN_HL,  STN_ST1,
        STN_ST3, STN_FR,  STN_PR,  STN_LR,  STN_TR,  STN_DR,

        XXXXXXX, STN_S2,  STN_KL,  STN_WL,  STN_RL,  STN_ST2,
        STN_ST4, STN_RR,  STN_BR,  STN_GR,  STN_SR,  STN_ZR,

        DF(1),   KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI, KC_SPC,
        KC_VOLD, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_VOLU,

        STN_N1,  STN_A,   STN_O,
        STN_E,   STN_U,   STN_N2
    ),

    [1] = LAYOUT_split_3x6_3(
        KC_ESC,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,
        KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC,

        KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,
        KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,

        DF(0),   KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,
        KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_ENT,

        KC_LGUI, MO(2),   KC_LSFT,
        KC_SPC,  MO(3),   KC_RALT
    ),

    [2] = LAYOUT_split_3x6_3(
        _______, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,
        KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSPC,

        KC_TAB,  _______, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT,
        _______, _______, _______, _______, _______, _______,

        XXXXXXX, _______, KC_DEL,  _______, _______, _______,
        _______, _______, _______, _______, _______, _______,

        _______, _______, _______,
        _______, XXXXXXX, _______
    ),

    [3] = LAYOUT_split_3x6_3(
        _______, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC,
        KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_BSPC,

        _______, _______, KC_MUTE, KC_VOLD, KC_VOLU, _______,
        KC_MINS, KC_EQL,  KC_LBRC, KC_RBRC, KC_BSLS, KC_GRV,

        XXXXXXX, _______, _______, _______, _______, _______,
        KC_UNDS, KC_PLUS, KC_LCBR, KC_RCBR, KC_PIPE, KC_TILD,

        _______, XXXXXXX, _______,
        _______, _______, _______
    )
};