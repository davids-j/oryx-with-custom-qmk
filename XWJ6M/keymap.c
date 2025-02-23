#include QMK_KEYBOARD_H
#include "version.h"
#include "i18n.h"

enum custom_keycodes {
  RGB_SLD = EZ_SAFE_RANGE,
  ST_MACRO_0,
  ST_MACRO_1,
  ST_MACRO_2,
};


enum tap_dance_codes {
  DANCE_0,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_ergodox_pretty(
    KC_ESCAPE,      KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           KC_PC_CUT,                                      KC_DELETE,      KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_BSPC,
    KC_TAB,         KC_Q,           KC_W,           LT(2,KC_F),     KC_P,           LT(4,KC_B),     KC_PC_COPY,                                     KC_F5,          LT(4,KC_J),     KC_L,           LT(2,KC_U),     DE_Z,           DE_SS,          KC_TAB,
    MO(3),          MT(MOD_LGUI, KC_A),LT(2,KC_R),     MT(MOD_LCTL, KC_S),MT(MOD_LSFT, KC_T),KC_G,                                                                           KC_M,           MT(MOD_RSFT, KC_N),MT(MOD_RCTL, KC_E),LT(2,KC_I),     MT(MOD_RGUI, KC_O),MO(3),
    KC_LEFT_SHIFT,  MT(MOD_LALT, DE_Y),KC_X,           KC_C,           KC_D,           KC_V,           KC_PC_PASTE,                                    KC_PC_UNDO,     KC_K,           KC_H,           KC_COMMA,       KC_DOT,         TD(DANCE_0),    KC_RIGHT_SHIFT,
    KC_LEFT_CTRL,   KC_LEFT_ALT,    KC_LEFT,        KC_RIGHT,       KC_LEFT_GUI,                                                                                                    KC_LEFT_GUI,    KC_UP,          KC_DOWN,        KC_RIGHT_ALT,   KC_RIGHT_CTRL,
                                                                                                    LCTL(KC_H),     KC_MS_BTN1,     TO(1),          KC_RIGHT_ALT,
                                                                                                                    CW_TOGG,        KC_PSCR,
                                                                                    KC_SPACE,       KC_ESCAPE,      LM(3,MOD_LGUI), KC_MS_BTN2,     KC_BSPC,        KC_ENTER
  ),
  [1] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_6,                                           LCTL(LSFT(KC_ESCAPE)),KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TAB,         KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,           KC_I,                                           KC_MEDIA_PLAY_PAUSE,KC_TRANSPARENT, KC_TRANSPARENT, KC_U,           KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_M,           KC_A,           KC_S,           KC_D,           KC_F,           KC_G,                                                                           KC_TRANSPARENT, KC_H,           KC_J,           KC_K,           KC_RIGHT_SHIFT, KC_TRANSPARENT,
    KC_TRANSPARENT, DE_Y,           KC_X,           KC_C,           KC_V,           KC_B,           KC_K,                                           LGUI(DE_Z),     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_H,                                                                                                           KC_LEFT_GUI,    KC_TRANSPARENT, TG(5),          TO(4),          KC_TRANSPARENT,
                                                                                                    KC_DELETE,      KC_M,           TO(0),          LALT(KC_F4),
                                                                                                                    DE_Z,           LGUI(KC_P),
                                                                                    KC_TRANSPARENT, KC_J,           KC_O,           LALT(KC_TAB),   TO(0),          ST_MACRO_1
  ),
  [2] = LAYOUT_ergodox_pretty(
    KC_ESCAPE,      KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,          KC_F11,                                         KC_F12,         KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_F11,
    KC_TRANSPARENT, DE_EXLM,        DE_DLR,         DE_LCBR,        DE_RCBR,        DE_AMPR,        ST_MACRO_0,                                     KC_TRANSPARENT, DE_DQUO,        KC_7,           KC_8,           KC_9,           DE_ASTR,        KC_TRANSPARENT,
    MO(4),          DE_MINS,        DE_AT,          DE_LPRN,        DE_RPRN,        DE_PIPE,                                                                        DE_QUOT,        KC_4,           KC_5,           KC_6,           DE_PLUS,        MO(4),
    KC_TRANSPARENT, DE_UNDS,        DE_HASH,        DE_LBRC,        DE_RBRC,        DE_TILD,        DE_CIRC,                                        KC_TRANSPARENT, DE_PERC,        KC_1,           KC_2,           KC_3,           DE_BSLS,        KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, DE_LABK,        DE_RABK,                                                                                                        KC_TRANSPARENT, KC_DOT,         KC_0,           DE_EQL,         KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [3] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_AUDIO_MUTE,  KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_BSPC,        KC_UP,          KC_DELETE,      KC_TRANSPARENT, KC_BRIGHTNESS_UP,                                KC_AUDIO_VOL_UP,KC_TRANSPARENT, KC_BSPC,        KC_UP,          KC_DELETE,      KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_HOME,        KC_LEFT,        KC_DOWN,        KC_RIGHT,       KC_END,                                                                         KC_HOME,        KC_LEFT,        KC_DOWN,        KC_RIGHT,       KC_END,         KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_BRIGHTNESS_DOWN,                                KC_AUDIO_VOL_DOWN,KC_TRANSPARENT, KC_TRANSPARENT, KC_MEDIA_PLAY_PAUSE,KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [4] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, DE_UDIA,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, DE_ADIA,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, DE_ODIA,        KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [5] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,           KC_TRANSPARENT,                                 KC_TRANSPARENT, DE_Z,           KC_U,           KC_I,           KC_O,           KC_P,           KC_TRANSPARENT,
    KC_TRANSPARENT, KC_A,           KC_S,           KC_D,           KC_F,           KC_G,                                                                           KC_H,           KC_J,           KC_K,           KC_L,           DE_ODIA,        KC_TRANSPARENT,
    KC_TRANSPARENT, DE_Y,           KC_X,           KC_C,           KC_V,           KC_B,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_N,           KC_M,           KC_TRANSPARENT, KC_TRANSPARENT, DE_MINS,        KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, TO(0),          KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [6] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, ST_MACRO_2
  ),
};




bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case ST_MACRO_0:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_Z) SS_DELAY(100) SS_LCTL(SS_TAP(X_KP_ASTERISK)));
    }
    break;

    case ST_MACRO_1:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_ENTER));
      layer_move(6);
    }
    break;

    case ST_MACRO_2:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_ENTER));
      layer_move(1);
    }
    break;
  }
  return true;
}

uint8_t layer_state_set_user(uint8_t state) {
    uint8_t layer = biton(state);
  ergodox_board_led_off();
  ergodox_right_led_1_off();
  ergodox_right_led_2_off();
  ergodox_right_led_3_off();
  switch (layer) {
    case 1:
      ergodox_right_led_1_on();
      break;
    case 2:
      ergodox_right_led_2_on();
      break;
    case 3:
      ergodox_right_led_3_on();
      break;
    case 4:
      ergodox_right_led_1_on();
      ergodox_right_led_2_on();
      break;
    case 5:
      ergodox_right_led_1_on();
      ergodox_right_led_3_on();
      break;
    case 6:
      ergodox_right_led_2_on();
      ergodox_right_led_3_on();
      break;
    case 7:
      ergodox_right_led_1_on();
      ergodox_right_led_2_on();
      ergodox_right_led_3_on();
      break;
    default:
      break;
  }
  return state;
};


typedef struct {
    bool is_press_action;
    uint8_t step;
} tap;

enum {
    SINGLE_TAP = 1,
    SINGLE_HOLD,
    DOUBLE_TAP,
    DOUBLE_HOLD,
    DOUBLE_SINGLE_TAP,
    MORE_TAPS
};

static tap dance_state[1];

uint8_t dance_step(tap_dance_state_t *state);

uint8_t dance_step(tap_dance_state_t *state) {
    if (state->count == 1) {
        if (state->interrupted || !state->pressed) return SINGLE_TAP;
        else return SINGLE_HOLD;
    } else if (state->count == 2) {
        if (state->interrupted) return DOUBLE_SINGLE_TAP;
        else if (state->pressed) return DOUBLE_HOLD;
        else return DOUBLE_TAP;
    }
    return MORE_TAPS;
}


void on_dance_0(tap_dance_state_t *state, void *user_data);
void dance_0_finished(tap_dance_state_t *state, void *user_data);
void dance_0_reset(tap_dance_state_t *state, void *user_data);

void on_dance_0(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(DE_SLSH);
        tap_code16(DE_SLSH);
        tap_code16(DE_SLSH);
    }
    if(state->count > 3) {
        tap_code16(DE_SLSH);
    }
}

void dance_0_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[0].step = dance_step(state);
    switch (dance_state[0].step) {
        case SINGLE_TAP: register_code16(DE_SLSH); break;
        case SINGLE_HOLD: register_code16(KC_LEFT_ALT); break;
        case DOUBLE_TAP: register_code16(DE_SLSH); register_code16(DE_SLSH); break;
        case DOUBLE_SINGLE_TAP: tap_code16(DE_SLSH); register_code16(DE_SLSH);
    }
}

void dance_0_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[0].step) {
        case SINGLE_TAP: unregister_code16(DE_SLSH); break;
        case SINGLE_HOLD: unregister_code16(KC_LEFT_ALT); break;
        case DOUBLE_TAP: unregister_code16(DE_SLSH); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(DE_SLSH); break;
    }
    dance_state[0].step = 0;
}

tap_dance_action_t tap_dance_actions[] = {
        [DANCE_0] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_0, dance_0_finished, dance_0_reset),
};
