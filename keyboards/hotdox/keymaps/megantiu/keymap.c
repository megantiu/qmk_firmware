#include QMK_KEYBOARD_H

enum custom_keycodes {
  EMOJI = SAFE_RANGE
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT_ergodox(
      //left hand
      KC_EQL, KC_1, KC_2, KC_3, KC_4, KC_5, KC_CAPS,
      KC_LALT, KC_Q, KC_W, KC_E, KC_R, KC_T, TG(1),
      KC_BSPC, KC_A, KC_S, KC_D, KC_F, KC_G,
      KC_LSFT, LCTL_T(KC_Z), KC_X, KC_C, KC_V, KC_B, KC_GRV,
      KC_ESC, KC_LCTL, KC_TILD, KC_UP, KC_DOWN,
      MO(1), KC_ESC,
      KC_LCTL, KC_ENT, KC_LGUI, KC_LALT,

                                                                                             // right hand
                                                            KC_CAPS, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS,
                                                                       TG(1), KC_Y, KC_U, KC_I, KC_O, KC_P,
                                           KC_BSLS, KC_H, KC_J, KC_K, KC_L, LT(2,KC_SCLN), LGUI_T(KC_QUOT),
                                             KC_GRV, KC_N, KC_M, KC_COMM, KC_DOT, LCTL_T(KC_SLSH), KC_RSFT,
                                                                 KC_LEFT, KC_RGHT, KC_LBRC, KC_RBRC, EMOJI,
                                                                                           KC_LALT, KC_ESC,
                                                                         KC_RCTL, KC_RALT, KC_TAB, KC_SPC),

	[1] = LAYOUT_ergodox(
      // left hand
      KC_NO, KC_SLCK, KC_PAUS, LCTL(KC_UP), KC_F4, KC_F5, KC_TRNS,
      KC_TRNS, KC_EXLM, KC_AT, KC_LCBR, KC_RCBR, KC_PIPE, KC_TRNS,
      KC_TRNS, KC_HASH, KC_DLR, KC_LPRN, KC_RPRN, KC_GRV,
      KC_TRNS, KC_PERC, KC_CIRC, KC_LBRC, KC_RBRC, KC_TILD, KC_TRNS,
      EEP_RST, KC_TRNS, KC_TRNS, KC__VOLUP, KC__VOLDOWN,
      KC_TRNS, KC_TRNS,
      KC_TRNS, RGB_VAD, RGB_VAI, KC_TRNS,

                                                                                             // right hand
      KC_TRNS, KC_F6, KC_MEDIA_PREV_TRACK, KC_MEDIA_PLAY_PAUSE, KC_MEDIA_NEXT_TRACK, KC_AUDIO_MUTE, KC_F11,
                                                                 KC_TRNS, KC_UP, KC_7, KC_8, KC_9, KC_ASTR,
                                                       KC_F12, KC_DOWN, KC_4, KC_5, KC_6, KC_PLUS, KC_TRNS,
                                                      KC_TRNS, KC_AMPR, KC_1, KC_2, KC_3, KC_BSLS, KC_TRNS,
                                                                    KC_TRNS, KC_DOT, KC_0, KC_EQL, KC_TRNS,
                                                                                          RGB_TOG, RGB_M_P,
                                                                       KC_TRNS, KC_TRNS, RGB_HUD, RGB_HUI),

	[2] = LAYOUT_ergodox(
      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_MS_U, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_MS_L, KC_MS_D, KC_MS_R, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_BTN1, KC_BTN2, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_MPLY, KC_TRNS, KC_TRNS, KC_TRNS, KC_MPRV, KC_MNXT, KC_TRNS, KC_TRNS, KC_VOLU, KC_VOLD, KC_MUTE, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_WBAK)
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case EMOJI:
      if (record->event.pressed) {
        // when keycode EMOJI is pressed
        SEND_STRING(SS_LGUI(SS_LCTRL(" ")));
      } else {
        // when keycode EMOJI is released
      }
      break;

  }
  return true;
};
