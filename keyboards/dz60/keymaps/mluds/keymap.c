#include QMK_KEYBOARD_H
#include "mluds.h"

#define _BASE 0
#define _FUN 1
#define _MAC 2

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [_BASE] = LAYOUT(
        KC_GRV,  KC_1,     KC_2,       KC_3,    KC_4,    KC_5,    KC_6,     KC_7,     KC_8,    KC_9,     KC_0,    KC_MINS, KC_EQL,  KC_NO,   KC_BSPC,
        KC_TAB,  KC_Q,     KC_W,       KC_E,    KC_R,    KC_T,    KC_Y,     KC_U,     KC_I,    KC_O,     KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,
        KC_ESC,  KC_A,     KC_S,       KC_D,    KC_F,    KC_G,    KC_H,     KC_J,     KC_K,    KC_L,     KC_SCLN, KC_QUOT, KC_ENT,
        KC_LSFT, KC_NO,    KC_Z,       KC_X,    KC_C,    KC_V,    KC_B,     KC_N,     KC_M,    KC_COMM,  KC_DOT,  KC_SLSH, KC_RSFT, KC_NO,
        KC_LCTL, MO(_FUN), MO(_MAC),   KC_SPC,  KC_SPC,  KC_SPC,  MO(_MAC), MO(_FUN), KC_NO,   KC_RGUI,  KC_RCTL
    ),

    [_FUN] = LAYOUT(
        _______, KC_F1,    KC_F2,      KC_F3,   KC_F4,   KC_F5,   KC_F6,    KC_F7,    KC_F8,   KC_F9,    KC_F10,  KC_F11,  KC_F12,  KC_NO,   KC_DEL,
        ALT_TAB, KC_MPLY,  KC_MPRV,    KC_MNXT, KC_PGUP, _______, _______,  X(THUM),  X(THNK), X(HAHA),  X(FACE), X(EGGY), _______, RESET,
        TASKMAN, KC_MUTE,  KC_VOLD,    KC_VOLU, KC_PGDN, _______, KC_LEFT,  KC_DOWN,  KC_UP,   KC_RIGHT, _______, _______, KC_PSCR,
        _______, KC_NO,    SKYPE_MUTE, _______, _______, _______, ALT_F4,   _______,  KC_SLEP, KC_WAKE,  KC_PWR,  UC_MOD,  _______, KC_NO,
        _______, _______,  _______,    _______, _______, _______, _______,  _______,  _______, _______,  BL_TOGG
    ),

    [_MAC] = LAYOUT(
        _______, _______,  _______,    _______, _______, _______, _______,  _______,  _______, _______,  _______, _______, _______, KC_NO,   _______,
        _______, VI_Q,     VI_W,       TM_MS,   TM_VS,   TM_HS,   CD,       TM_TL,    TM_TR,   TM_TN,    TM_TD,   _______, _______, _______,
        _______, GIT_A,    GIT_C,      GIT_D,   GIT_S,   TM_CM,   VI_WL,    VI_WD,    VI_WU,   VI_WR,    _______, VI_WE,   _______,
        _______, KC_NO,    GIT_PL,     GIT_PU,  GIT_F,   TM_P,    _______,  _______,  VI_TL,   VI_TR,    VI_TN,   VI_TD,   _______, KC_NO,
        _______, _______,  _______,    _______, _______, _______, _______,  _______,  _______, _______,  _______
    ),
};
