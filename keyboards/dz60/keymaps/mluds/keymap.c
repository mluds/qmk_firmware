#include QMK_KEYBOARD_H

#define SKYPE_MUTE LGUI(KC_F4)

enum custom_keycodes {
    VIM_WRITE = SAFE_RANGE,
    VIM_QUIT,

    VIM_WNDW_UP,
    VIM_WNDW_DOWN,
    VIM_WNDW_LEFT,
    VIM_WNDW_RIGHT,
    VIM_WNDW_EQ,

    VIM_TAB_NEW,
    VIM_TAB_DEL,
    VIM_TAB_LEFT,
    VIM_TAB_RIGHT,

    TMUX_TAB_NEW,
    TMUX_TAB_DEL,
    TMUX_TAB_LEFT,
    TMUX_TAB_RIGHT,
    TMUX_SPLIT_V,
    TMUX_SPLIT_H,
    TMUX_COPY_MODE,
    TMUX_PASTE,

    GIT_STAT,
    GIT_DIFF,
    GIT_ADD,
    GIT_FETCH,
    GIT_PULL,
    GIT_PUSH,
    GIT_COMMIT,
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case VIM_WRITE:
            if (record->event.pressed) {
                SEND_STRING(":w\n");
            }
            break;
        case VIM_QUIT:
            if (record->event.pressed) {
                SEND_STRING(":q!\n");
            }
            break;

        case VIM_WNDW_UP:
            if (record->event.pressed) {
                SEND_STRING(SS_LCTL("w")"k");
            }
            break;
        case VIM_WNDW_DOWN:
            if (record->event.pressed) {
                SEND_STRING(SS_LCTL("w")"j");
            }
            break;
        case VIM_WNDW_LEFT:
            if (record->event.pressed) {
                SEND_STRING(SS_LCTL("w")"h");
            }
            break;
        case VIM_WNDW_RIGHT:
            if (record->event.pressed) {
                SEND_STRING(SS_LCTL("w")"l");
            }
            break;
        case VIM_WNDW_EQ:
            if (record->event.pressed) {
                SEND_STRING(SS_LCTL("w")"=");
            }
            break;

        case VIM_TAB_NEW:
            if (record->event.pressed) {
                SEND_STRING(":tabnew\n");
            }
            break;
        case VIM_TAB_DEL:
            if (record->event.pressed) {
                SEND_STRING(":tabclose\n");
            }
            break;
        case VIM_TAB_LEFT:
            if (record->event.pressed) {
                SEND_STRING(":tabprev\n");
            }
            break;
        case VIM_TAB_RIGHT:
            if (record->event.pressed) {
                SEND_STRING(":tabnext\n");
            }
            break;

        case TMUX_TAB_NEW:
            if (record->event.pressed) {
                SEND_STRING(SS_LCTL("b")"c");
            }
            break;
        case TMUX_TAB_DEL:
            if (record->event.pressed) {
                SEND_STRING(SS_LCTL("b")"xy");
            }
            break;
        case TMUX_TAB_LEFT:
            if (record->event.pressed) {
                SEND_STRING(SS_LCTL("b")"p");
            }
            break;
        case TMUX_TAB_RIGHT:
            if (record->event.pressed) {
                SEND_STRING(SS_LCTL("b")"n");
            }
            break;
        case TMUX_SPLIT_V:
            if (record->event.pressed) {
                SEND_STRING(SS_LCTL("b")"%");
            }
            break;
        case TMUX_SPLIT_H:
            if (record->event.pressed) {
                SEND_STRING(SS_LCTL("b")"\"");
            }
            break;
        case TMUX_COPY_MODE:
            if (record->event.pressed) {
                SEND_STRING(SS_LCTL("b")"[");
            }
            break;
        case TMUX_PASTE:
            if (record->event.pressed) {
                SEND_STRING(SS_LCTL("b")"]");
            }
            break;

        case GIT_STAT:
            if (record->event.pressed) {
                SEND_STRING("git status\n");
            }
            break;
        case GIT_DIFF:
            if (record->event.pressed) {
                SEND_STRING("git diff\n");
            }
            break;
        case GIT_ADD:
            if (record->event.pressed) {
                SEND_STRING("git add .\n");
            }
            break;
        case GIT_FETCH:
            if (record->event.pressed) {
                SEND_STRING("git fetch\n");
            }
            break;
        case GIT_PULL:
            if (record->event.pressed) {
                SEND_STRING("git pull\n");
            }
            break;
        case GIT_PUSH:
            if (record->event.pressed) {
                SEND_STRING("git push\n");
            }
            break;
        case GIT_COMMIT:
            if (record->event.pressed) {
                SEND_STRING("git commit\n");
            }
            break;
    }
    return true;
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    LAYOUT(
        KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_NO, KC_BSPC,
        KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_BSLS,
        KC_ESC, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_ENT,
        KC_LSFT, KC_NO, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, KC_NO,
        KC_LCTL, MO(1), MO(2), KC_SPC, KC_SPC, KC_SPC, KC_RALT, MO(2), KC_NO, KC_RGUI, KC_RCTL),

    LAYOUT(
        _______, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, _______, KC_DEL,
        _______, KC_MPLY, KC_MPRV, KC_MNXT, _______, _______, _______, _______, _______, _______, _______, _______, _______, RESET,
        _______, KC_MUTE, KC_VOLD, KC_VOLU, _______, _______, KC_LEFT, KC_DOWN, KC_UP, KC_RIGHT, _______, _______, _______,
        _______,  _______, SKYPE_MUTE, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______),

    LAYOUT(
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, VIM_QUIT, VIM_WRITE, TMUX_SPLIT_V, TMUX_SPLIT_H, _______, _______, TMUX_TAB_LEFT, TMUX_TAB_RIGHT, TMUX_TAB_NEW, TMUX_TAB_DEL, _______, _______, _______,
        _______, GIT_ADD, GIT_COMMIT, GIT_DIFF, GIT_STAT, TMUX_COPY_MODE, VIM_WNDW_LEFT, VIM_WNDW_DOWN, VIM_WNDW_UP, VIM_WNDW_RIGHT, _______, _______, _______,
        _______, _______, GIT_PULL, GIT_PUSH, GIT_FETCH, TMUX_PASTE, VIM_WNDW_EQ, VIM_TAB_LEFT, VIM_TAB_RIGHT, VIM_TAB_NEW, VIM_TAB_DEL, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______),
};
