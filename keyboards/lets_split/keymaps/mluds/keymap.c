#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT_ortho_4x12(
		KC_TAB,   KC_Q,     KC_W,     KC_E,   KC_R,   KC_T,    KC_Y,    KC_U,   KC_I,     KC_O,     KC_P,     KC_BSPC,
		KC_ESC,   KC_A,     KC_S,     KC_D,   KC_F,   KC_G,    KC_H,    KC_J,   KC_K,     KC_L,     KC_SCLN,  KC_QUOT,
		KC_LSFT,  KC_Z,     KC_X,     KC_C,   KC_V,   KC_B,    KC_N,    KC_M,   KC_COMM,  KC_DOT,   KC_SLSH,  KC_RSFT,
		KC_LGUI,  KC_LCTL,  KC_LALT,  MO(2),  MO(1),  KC_SPC,  KC_ENT,  MO(1),  KC_LEFT,  KC_DOWN,  KC_UP,    KC_RGHT
	),
	[1] = LAYOUT_ortho_4x12(
		KC_TILD,  KC_EXLM,  KC_AT,    KC_HASH,  KC_DLR,   KC_LBRC,  KC_RBRC,  KC_7,     KC_8,  KC_9,    KC_PLUS,  KC_DEL,
		KC_GRV,   KC_PERC,  KC_CIRC,  KC_AMPR,  KC_ASTR,  KC_LPRN,  KC_RPRN,  KC_4,     KC_5,  KC_6,    KC_MINS,  KC_BSLS,
		KC_CAPS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_LCBR,  KC_RCBR,  KC_1,     KC_2,  KC_3,    KC_EQL,   KC_PIPE,
		KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_UNDS,  KC_UNDS,  KC_TRNS,  KC_0,  KC_DOT,  KC_ENT,   KC_TRNS
	),
	[2] = LAYOUT_ortho_4x12(
		NK_TOGG,  KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_TRNS,  KC_TRNS,  KC_END,   KC_HOME,  KC_TRNS,  KC_TRNS,  KC_TRNS,
		KC_TRNS,  KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_TRNS,  KC_PSCR,  KC_PGDN,  KC_PGUP,  KC_VOLD,  KC_VOLU,  KC_MUTE,
		KC_TRNS,  KC_F9,    KC_F10,   KC_F11,   KC_F12,   KC_TRNS,  KC_MPLY,  KC_MPRV,  KC_MNXT,  KC_BRID,  KC_BRIU,  KC_TRNS,
		KC_SLEP,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  RESET
	)
};
