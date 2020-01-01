#pragma once

#include "quantum.h"
#include "action.h"
#include "version.h"

#define SKYPE_MUTE LGUI(KC_F4)
#define CAD LCTL(LALT(KC_DEL))

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
    TMUX_SPLIT_MOVE,
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
