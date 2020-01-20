#include "mluds.h"

__attribute__ ((weak))
bool process_record_keymap(uint16_t keycode, keyrecord_t *record) {
    return true;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        // Add shifted keys to those that don't have them
        case KC_BSPC:
            return custom_keycode_on_modifiers(
                MOD_BIT(KC_LSFT), -1, record,  KC_DEL
            ) && custom_keycode_on_modifiers(
                MOD_BIT(KC_RSFT), -1, record,  KC_DEL
            );
        case KC_TAB:
            return custom_keycode_on_modifiers(
                MOD_BIT(KC_LSFT), -1, record,  KC_TILD
            ) && custom_keycode_on_modifiers(
                MOD_BIT(KC_RSFT), -1, record,  KC_TILD
            );
        case KC_ESC:
            return custom_keycode_on_modifiers(
                MOD_BIT(KC_LSFT), -1, record,  KC_GRV
            ) && custom_keycode_on_modifiers(
                MOD_BIT(KC_RSFT), -1, record,  KC_GRV
            );
        case KC_ENT:
            return custom_keycode_on_modifiers(
                MOD_BIT(KC_LSFT), -1, record,  KC_BSLS
            ) && custom_keycode_on_modifiers(
                MOD_BIT(KC_RSFT), -1, record,  KC_BSLS
            );
        case KC_SPC:
            return custom_keycode_on_modifiers(
                MOD_BIT(KC_LSFT), -1, record,  KC_UNDS
            ) && custom_keycode_on_modifiers(
                MOD_BIT(KC_RSFT), -1, record,  KC_UNDS
            );

        case CD:
            if (record->event.pressed) {
                SEND_STRING("cd ..\n");
            }
            break;

        case VI_W:
            if (record->event.pressed) {
                SEND_STRING(":w\n");
            }
            break;
        case VI_Q:
            if (record->event.pressed) {
                SEND_STRING(":q!\n");
            }
            break;

        case VI_WU:
            if (record->event.pressed) {
                SEND_STRING(SS_LCTL("w") "k");
            }
            break;
        case VI_WD:
            if (record->event.pressed) {
                SEND_STRING(SS_LCTL("w") "j");
            }
            break;
        case VI_WL:
            if (record->event.pressed) {
                SEND_STRING(SS_LCTL("w") "h");
            }
            break;
        case VI_WR:
            if (record->event.pressed) {
                SEND_STRING(SS_LCTL("w") "l");
            }
            break;
        case VI_WE:
            if (record->event.pressed) {
                SEND_STRING(SS_LCTL("w") "=");
            }
            break;

        case VI_TN:
            if (record->event.pressed) {
                SEND_STRING(":tabnew\n");
            }
            break;
        case VI_TD:
            if (record->event.pressed) {
                SEND_STRING(":tabclose\n");
            }
            break;
        case VI_TL:
            if (record->event.pressed) {
                SEND_STRING(":tabprev\n");
            }
            break;
        case VI_TR:
            if (record->event.pressed) {
                SEND_STRING(":tabnext\n");
            }
            break;

        case TM_TN:
            if (record->event.pressed) {
                SEND_STRING(SS_LCTL("b") "c");
            }
            break;
        case TM_TD:
            if (record->event.pressed) {
                SEND_STRING(SS_LCTL("b") "xy");
            }
            break;
        case TM_TL:
            if (record->event.pressed) {
                SEND_STRING(SS_LCTL("b") "p");
            }
            break;
        case TM_TR:
            if (record->event.pressed) {
                SEND_STRING(SS_LCTL("b") "n");
            }
            break;
        case TM_VS:
            if (record->event.pressed) {
                SEND_STRING(SS_LCTL("b") "%");
            }
            break;
        case TM_HS:
            if (record->event.pressed) {
                SEND_STRING(SS_LCTL("b") "\"");
            }
            break;
        case TM_MS:
            if (record->event.pressed) {
                SEND_STRING(SS_LCTL("b") "o");
            }
            break;
        case TM_CM:
            if (record->event.pressed) {
                SEND_STRING(SS_LCTL("b") "[");
            }
            break;
        case TM_P:
            if (record->event.pressed) {
                SEND_STRING(SS_LCTL("b") "]");
            }
            break;

        case GIT_S:
            if (record->event.pressed) {
                SEND_STRING("git status\n");
            }
            break;
        case GIT_D:
            if (record->event.pressed) {
                SEND_STRING("git diff\n");
            }
            break;
        case GIT_A:
            if (record->event.pressed) {
                SEND_STRING("git add .\n");
            }
            break;
        case GIT_F:
            if (record->event.pressed) {
                SEND_STRING("git fetch\n");
            }
            break;
        case GIT_PL:
            if (record->event.pressed) {
                SEND_STRING("git pull\n");
            }
            break;
        case GIT_PU:
            if (record->event.pressed) {
                SEND_STRING("git push\n");
            }
            break;
        case GIT_C:
            if (record->event.pressed) {
                SEND_STRING("git commit\n");
            }
            break;
    }
    return process_record_keymap(keycode, record);
};

const uint32_t PROGMEM unicode_map[] = {
    [THUM] = 0x1F44D,  // 👍
    [THNK] = 0x1F914,  // 🤔
    [FACE] = 0x1F610,  // 😐
    [HAHA] = 0x1F602,  // 😂
    [EGGY] = 0x1F346,  // 🍆
};
