#include QMK_KEYBOARD_H
#include "mluds.h"

#define _BASE 0
#define _FUN 1
#define _MAC 2

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [_BASE] = LAYOUT(
        KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_NO, KC_BSPC,
        KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_BSLS,
        KC_ESC, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_ENT,
        OSM(MOD_LSFT), KC_NO, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, OSM(MOD_RSFT), KC_NO,
        OSM(MOD_LCTL), OSL(_FUN), OSL(_MAC), KC_SPC, KC_SPC, KC_SPC, OSM(MOD_RALT), OSL(_MAC), KC_NO, OSM(MOD_RGUI), OSM(MOD_RCTL)
    ),

    [_FUN] = LAYOUT(
        KC_NO, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_PSCREEN, KC_DEL,
        KC_NO, KC_MPLY, KC_MPRV, KC_MNXT, KC_NO, KC_NO, KC_NO, X(THUMB), X(THINK), X(LAUGH), X(FACE), X(EGGY), KC_NO, RESET,
        CAD, KC_MUTE, KC_VOLD, KC_VOLU, KC_NO, KC_NO, KC_LEFT, KC_DOWN, KC_UP, KC_RIGHT, KC_NO, KC_NO, KC_NO,
        KC_NO,  KC_NO, SKYPE_MUTE, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_SLEP, KC_WAKE, KC_PWR, UC_MOD, KC_NO, KC_NO,
        KC_NO, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, BL_TOGG
    ),

    [_MAC] = LAYOUT(
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
        KC_NO, VIM_QUIT, VIM_WRITE, TMUX_SPLIT_MOVE, TMUX_SPLIT_V, TMUX_SPLIT_H, KC_NO, TMUX_TAB_LEFT, TMUX_TAB_RIGHT, TMUX_TAB_NEW, TMUX_TAB_DEL, KC_NO, KC_NO, KC_NO,
        KC_NO, GIT_ADD, GIT_COMMIT, GIT_DIFF, GIT_STAT, TMUX_COPY_MODE, VIM_WNDW_LEFT, VIM_WNDW_DOWN, VIM_WNDW_UP, VIM_WNDW_RIGHT, KC_NO, VIM_WNDW_EQ, KC_NO,
        KC_NO, KC_NO, GIT_PULL, GIT_PUSH, GIT_FETCH, TMUX_PASTE, KC_NO, KC_NO, VIM_TAB_LEFT, VIM_TAB_RIGHT, VIM_TAB_NEW, VIM_TAB_DEL, KC_NO, KC_NO,
        KC_NO, KC_NO, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_NO, KC_NO, KC_NO
    ),
};
