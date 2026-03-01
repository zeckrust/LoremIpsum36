#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT( /* Base */
        KC_Q,               KC_W,               KC_E,               KC_R,               KC_T,               KC_Y,               KC_U,               KC_I,               KC_O,               KC_P,
        LGUI_T(KC_A),       LALT_T(KC_S),       LCTL_T(KC_D),       KC_F,               KC_G,               KC_H,               KC_J,               LCTL_T(KC_K),       LALT_T(KC_L),       LGUI_T(KC_SCLN),
        KC_Z,               KC_X,               KC_C,               KC_V,               KC_B,               KC_N,               KC_M,               KC_COMMA,           KC_DOT,             KC_SLASH,
                                                KC_LSFT,            MO(1),              KC_SPACE,           LT(3, KC_ENT),      KC_BSPC,            LT(2, KC_ESC)
    ),
    [1] = LAYOUT(
        RALT(KC_7),         RALT(KC_8),         RALT(KC_9),         RALT(KC_0),         RALT(KC_GRV),       KC_MINS,            LSFT(KC_MINS),      RALT(KC_RBRC),      KC_EQL,             LSFT(KC_EQL),
        RALT(KC_COMM),      RALT(KC_DOT),       LSFT(KC_9),         LSFT(KC_0),         KC_PSLS,            KC_LEFT,            KC_DOWN,            KC_UP,              KC_RIGHT,           KC_LBRC,
        RALT(KC_Z),         RALT(KC_X),         KC_NO,              KC_LSFT,            RALT(KC_MINS),      KC_RBRC,            KC_NO,              KC_NO,              LSFT(KC_LBRC),      RALT(KC_LBRC),
                                                KC_LSFT,            KC_NO,              KC_NO,              KC_TAB,             KC_BSPC,            KC_ESC
    ),
    [2] = LAYOUT(
        KC_1,               KC_2,               KC_3,               KC_4,               KC_5,               KC_6,               KC_7,               KC_8,               KC_9,               KC_0,
        LSFT(KC_1),         LSFT(KC_2),         LSFT(KC_3),         LSFT(KC_4),         LSFT(KC_5),         LSFT(KC_6),         LSFT(KC_7),         LSFT(KC_8),         LSFT(KC_9),         LSFT(KC_0),
        KC_NO,              KC_NO,              KC_NO,              KC_NO,              KC_NO,              KC_NO,              KC_NO,              KC_COMMA,           KC_DOT,             KC_NO,
                                                KC_NO,              KC_NO,              KC_NO,              KC_NO,              KC_NO,              KC_NO
    ),
    [3] = LAYOUT(
        KC_F1,              KC_F2,              KC_F3,              KC_F4,              KC_F5,              KC_F6,              KC_F7,              KC_F8,              KC_F9,              KC_F10,
        KC_NO,              KC_NO,              KC_NO,              KC_NO,              KC_NO,              KC_VOLD,            KC_VOLU,            KC_MPLY,            KC_MNXT,            KC_F11,
        KC_NO,              KC_NO,              KC_NO,              KC_NO,              KC_NO,              KC_NO,              KC_NO,              KC_NO,              KC_NO,              KC_F12,
                                                KC_NO,              KC_NO,              KC_NO,              KC_NO,              KC_NO,              KC_NO
    ),
};
