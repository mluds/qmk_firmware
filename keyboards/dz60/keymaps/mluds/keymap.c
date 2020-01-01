#include QMK_KEYBOARD_H
#include "mluds.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    LAYOUT(
        KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_NO, KC_BSPC,
        KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_BSLS,
        KC_ESC, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_ENT,
        OSM(MOD_LSFT), KC_NO, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, OSM(MOD_RSFT), KC_NO,
        OSM(MOD_LCTL), OSL(1), OSL(2), KC_SPC, KC_SPC, KC_SPC, OSM(MOD_RALT), OSL(2), KC_NO, OSM(MOD_RGUI), OSM(MOD_RCTL)
    ),

    LAYOUT(
        _______, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_PSCREEN, KC_DEL,
        _______, KC_MPLY, KC_MPRV, KC_MNXT, _______, _______, _______, _______, _______, _______, _______, _______, _______, RESET,
        CAD, KC_MUTE, KC_VOLD, KC_VOLU, _______, _______, KC_LEFT, KC_DOWN, KC_UP, KC_RIGHT, _______, _______, _______,
        _______,  _______, SKYPE_MUTE, _______, _______, _______, _______, _______, KC_SLEP, KC_WAKE, KC_PWR, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
    ),

    LAYOUT(
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, VIM_QUIT, VIM_WRITE, TMUX_SPLIT_V, TMUX_SPLIT_H, _______, TMUX_SPLIT_MOVE, TMUX_TAB_LEFT, TMUX_TAB_RIGHT, TMUX_TAB_NEW, TMUX_TAB_DEL, _______, _______, _______,
        _______, GIT_ADD, GIT_COMMIT, GIT_DIFF, GIT_STAT, TMUX_COPY_MODE, VIM_WNDW_LEFT, VIM_WNDW_DOWN, VIM_WNDW_UP, VIM_WNDW_RIGHT, _______, _______, _______,
        _______, _______, GIT_PULL, GIT_PUSH, GIT_FETCH, TMUX_PASTE, VIM_WNDW_EQ, VIM_TAB_LEFT, VIM_TAB_RIGHT, VIM_TAB_NEW, VIM_TAB_DEL, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
    ),
};
