#include "mluds.h"

__attribute__ ((weak))
bool process_record_keymap(uint16_t keycode, keyrecord_t *record) {
    return true;
}

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
                SEND_STRING(SS_LCTL("w") "k");
            }
            break;
        case VIM_WNDW_DOWN:
            if (record->event.pressed) {
                SEND_STRING(SS_LCTL("w") "j");
            }
            break;
        case VIM_WNDW_LEFT:
            if (record->event.pressed) {
                SEND_STRING(SS_LCTL("w") "h");
            }
            break;
        case VIM_WNDW_RIGHT:
            if (record->event.pressed) {
                SEND_STRING(SS_LCTL("w") "l");
            }
            break;
        case VIM_WNDW_EQ:
            if (record->event.pressed) {
                SEND_STRING(SS_LCTL("w") "=");
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
                SEND_STRING(SS_LCTL("b") "c");
            }
            break;
        case TMUX_TAB_DEL:
            if (record->event.pressed) {
                SEND_STRING(SS_LCTL("b") "xy");
            }
            break;
        case TMUX_TAB_LEFT:
            if (record->event.pressed) {
                SEND_STRING(SS_LCTL("b") "p");
            }
            break;
        case TMUX_TAB_RIGHT:
            if (record->event.pressed) {
                SEND_STRING(SS_LCTL("b") "n");
            }
            break;
        case TMUX_SPLIT_V:
            if (record->event.pressed) {
                SEND_STRING(SS_LCTL("b") "%");
            }
            break;
        case TMUX_SPLIT_H:
            if (record->event.pressed) {
                SEND_STRING(SS_LCTL("b") "\"");
            }
            break;
        case TMUX_SPLIT_MOVE:
            if (record->event.pressed) {
                SEND_STRING(SS_LCTL("b") "o");
            }
            break;
        case TMUX_COPY_MODE:
            if (record->event.pressed) {
                SEND_STRING(SS_LCTL("b") "[");
            }
            break;
        case TMUX_PASTE:
            if (record->event.pressed) {
                SEND_STRING(SS_LCTL("b") "]");
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
    return process_record_keymap(keycode, record);
};
