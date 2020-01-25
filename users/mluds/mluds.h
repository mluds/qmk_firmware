#pragma once

#include "quantum.h"
#include "action.h"
#include "version.h"

#define SKYPE_MUTE LGUI(KC_F4)
#define CAD LCTL(LALT(KC_DEL))
#define TASKMAN LCTL(LSFT(KC_ESC))
#define ALT_F4 LALT(KC_F4)
#define ALT_TAB LALT(KC_TAB)

enum custom_keycodes {
    // go up one directory
    CD = SAFE_RANGE,

    // vim write/quit
    VI_W,
    VI_Q,

    // vim windows
    VI_WU,  // up
    VI_WD,  // down
    VI_WL,  // left
    VI_WR,  // right
    VI_WE,  // set equal width

    // vim tabs
    VI_TN,  // new tab
    VI_TD,  // delete tab
    VI_TL,  // move tab left
    VI_TR,  // move tab right

    // tmux tabs (analogous to vim)
    TM_TN,
    TM_TD,
    TM_TL,
    TM_TR,

    // split tmux pane vertically and horizontally
    TM_VS,
    TM_HS,

    TM_MS,  // move to other split
    TM_CM,  // tmux copy mode
    TM_P,  // tmux paste

    GIT_S,  // status
    GIT_D,  // diff
    GIT_A,  // add all
    GIT_F,  // fetch
    GIT_PL, // pull
    GIT_PU, // push
    GIT_C,  // commit
};

enum unicode_names {
    THUM,  // 👍
    THNK,  // 🤔
    FACE,  // 😐
    HAHA,  // 😂
    EGGY,  // 🍆
};
