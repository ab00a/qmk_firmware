#include QMK_KEYBOARD_H

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.

// If failure to compile, replace KC_SLCK with KC_SCROLLLOCK

enum layer_names {
    _BASE,
    _FN,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	/*  Row:    		0           1           2           3           4           5           6           7           8           9           10          11          12          13          */
	[_BASE] = {
				{	KC_ESC, 	KC_1, 		KC_2, 		KC_3, 		KC_4, 		KC_5, 		KC_6, 		KC_7, 		KC_8, 		KC_9, 		KC_0, 		KC_MINS, 	KC_EQL, 	KC_BSPC,	},
				{	KC_TAB, 	KC_Q, 		KC_W, 		KC_E, 		KC_R, 		KC_T, 		KC_Y, 		KC_U, 		KC_I, 		KC_O, 		KC_P, 		KC_LBRC, 	KC_RBRC,	KC_NO,		},
				{	KC_CAPS, 	KC_A, 		KC_S, 		KC_D, 		KC_F, 		KC_G, 		KC_H, 		KC_J, 		KC_K, 		KC_L, 		KC_SCLN, 	KC_QUOT, 	KC_NUHS, 	KC_ENT,		},
				{	KC_LSFT, 	KC_NUBS, 	KC_Z, 		KC_X, 		KC_C, 		KC_V, 		KC_B, 		KC_N, 		KC_M, 		KC_COMM, 	KC_DOT, 	KC_SLSH, 	KC_RSFT,	KC_NO,		},
				{	KC_LCTL, 	KC_LGUI, 	KC_LALT, 	KC_NO,		KC_NO,		KC_NO,		KC_SPC, 	KC_NO,		KC_NO,		KC_RALT, 	KC_APP, 	KC_RCTL, 	KC_NO,		MO(_FN),	}
	},
	[_FN] = {
				{	KC_GRV, 	KC_F1, 		KC_F2, 		KC_F3, 		KC_F4, 		KC_F5, 		KC_F6, 		KC_F7, 		KC_F8, 		KC_F9, 		KC_F10, 	KC_F11, 	KC_F12, 	KC_DEL,		},
				{	QK_RBT, 	KC_BRID, 	KC_BRIU, 	KC_P7, 		KC_P8, 		KC_P9, 		KC_PSCR, 	KC_SLCK, 	KC_PAUS, 	RGB_HUD, 	RGB_HUI, 	RGB_VAD, 	RGB_VAI,	KC_TRNS,	},
				{	RESET, 		KC_TRNS, 	KC_TRNS, 	KC_P4, 		KC_P5, 		KC_P6, 		KC_INS, 	KC_HOME, 	KC_PGUP, 	RGB_SAI, 	RGB_SPD, 	RGB_SPI, 	RGB_MOD, 	RGB_TOG,	},
				{	KC_TRNS, 	KC_MUTE, 	KC_VOLD, 	KC_VOLU, 	KC_P1, 		KC_P2, 		KC_P3, 		KC_DEL, 	KC_END, 	KC_PGDN, 	RGB_SAD, 	KC_UP, 		KC_TRNS, 	KC_TRNS,	},
				{	KC_TRNS, 	LAG_SWP,	KC_TRNS,	KC_TRNS,	KC_TRNS,	KC_TRNS, 	KC_P0, 		KC_TRNS,	KC_TRNS,	KC_LEFT, 	KC_DOWN, 	KC_RGHT, 	KC_TRNS,	KC_TRNS,	}
	}
};
