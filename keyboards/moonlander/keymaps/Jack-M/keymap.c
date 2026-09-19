#include QMK_KEYBOARD_H
#include "version.h"
//#include "keymap_german.h"
//#include "keymap_nordic.h"
//#include "keymap_french.h"
//#include "keymap_spanish.h"
//#include "keymap_hungarian.h"
//#include "keymap_swedish.h"
//#include "keymap_br_abnt2.h"
//#include "keymap_canadian_multilingual.h"
//#include "keymap_german_ch.h"
//#include "keymap_jp.h"
//#include "keymap_korean.h"
//#include "keymap_bepo.h"
//#include "keymap_italian.h"
//#include "keymap_slovenian.h"
//#include "keymap_lithuanian_azerty.h"
//#include "keymap_danish.h"
//#include "keymap_norwegian.h"
//#include "keymap_portuguese.h"
//#include "keymap_contributions.h"
//#include "keymap_czech.h"
//#include "keymap_romanian.h"
//#include "keymap_russian.h"
//#include "keymap_uk.h"
//#include "keymap_estonian.h"
//#include "keymap_belgian.h"
//#include "keymap_us_international.h"
//#include "keymap_croatian.h"
//#include "keymap_turkish_q.h"
//#include "keymap_slovak.h"

#define KC_MAC_UNDO LGUI(KC_Z)
#define KC_MAC_CUT LGUI(KC_X)
#define KC_MAC_COPY LGUI(KC_C)
#define KC_MAC_PASTE LGUI(KC_V)
#define KC_PC_UNDO LCTL(KC_Z)
#define KC_PC_CUT LCTL(KC_X)
#define KC_PC_COPY LCTL(KC_C)
#define KC_PC_PASTE LCTL(KC_V)
#define ES_LESS_MAC KC_GRAVE
#define ES_GRTR_MAC LSFT(KC_GRAVE)
#define ES_BSLS_MAC ALGR(KC_6)
#define NO_PIPE_ALT KC_GRAVE
#define NO_BSLS_ALT KC_EQUAL
#define LSA_T(kc) MT(MOD_LSFT | MOD_LALT, kc)
#define BP_NDSH_MAC ALGR(KC_8)
#define SE_SECT_MAC ALGR(KC_6)
#define MOON_LED_LEVEL LED_LEVEL

enum preonic_layers {
    _QWERTY,
    _GAME,
    _LOWER,
    _RAISE,
    _ADJUST,
    _LIGHTING
};

enum moonlander_keycodes {
    RGB_SLD = ML_SAFE_RANGE,
    RGB_BLU,
    KC_P000,
};

enum tap_dance_codes {
    DANCE_0,
    DANCE_1,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_QWERTY] = LAYOUT_moonlander(
        KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    _______, TG(5),   KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    _______, _______, KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC,
        KC_ESC,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    _______, _______, KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
        KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                      KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, MT(MOD_RSFT, KC_ENTER),
        KC_LCTL, KC_LGUI, KC_LOCK, KC_HYPR, KC_LALT,          _______, TG(1),            KC_RALT, KC_MEH,  KC_APP,  KC_RGUI, KC_RCTRL,
                                            KC_SPC,  TT(2),   TT(3),   TT(2),   TT(3),   KC_BSPC
    ),
    [_GAME] = LAYOUT_moonlander(
        KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    _______, _______, _______, _______, _______, _______, _______,
        _______, KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    _______, _______, _______, _______, _______, _______, _______,
        KC_CAPS, KC_ESC,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    _______, _______, _______, _______, _______, _______, _______,
        _______, KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,                      _______, _______, _______, _______, _______, _______,
        _______, KC_LCTL, _______, _______, KC_LALT,          KC_B,    _______,          _______, _______, _______, _______, _______,
                                            _______, _______, _______, _______, _______, _______
    ),
    [_LOWER] = LAYOUT_moonlander(
        KC_GRV,  _______, KC_PSCR, KC_SLCK, KC_PAUS, _______, _______, _______, _______, KC_NLCK, KC_PSLS, KC_PAST, KC_PMNS, KC_BSPC,
        KC_NUBS, KC_HOME, KC_PGUP, KC_UP,   KC_PGDN, KC_INS,  _______, _______, _______, KC_P7,   KC_P8,   KC_P9,   KC_PPLS, KC_RBRC,
        KC_CAPS, KC_END,  KC_LEFT, KC_DOWN, KC_RGHT, KC_DEL,  _______, _______, _______, KC_P4,   KC_P5,   KC_P6,   KC_CALC, KC_BSLS,
        _______, _______, _______, _______, _______, _______,                   _______, KC_P1,   KC_P2,   KC_P3,   KC_PENT, KC_ENT,
        _______, _______, _______, _______, _______,          _______, _______,          KC_P0,   KC_P000, KC_PDOT, KC_PCMM, _______,
                                            _______, _______, TT(4),   _______, TT(4),   _______
    ),
    [_RAISE] = LAYOUT_moonlander(
        KC_TILD, _______, KC_BTN4, KC_BTN3, KC_BTN5, _______, _______, _______, _______, KC_BTN4, KC_BTN3, KC_BTN5, _______, _______,
        KC_NUHS, _______, KC_BTN1, KC_MS_U, KC_BTN2, _______, _______, _______, _______, KC_BTN1, KC_WH_U, KC_BTN2, _______, KC_RCBR,
        CAPSWRD, _______, KC_MS_L, KC_MS_D, KC_MS_R, _______, _______, _______, _______, KC_WH_L, KC_WH_D, KC_WH_R, _______, KC_PIPE,
        _______, _______, KC_ACL0, KC_ACL1, KC_ACL2, _______,                   _______, KC_ACL0, KC_ACL1, KC_ACL2, _______, KC_RSFT,
        _______, _______, _______, _______, _______,          _______, _______,          _______, _______, _______, _______, _______,
                                            _______, TT(4),   _______, TT(4),   _______, _______
    ),
    [_ADJUST] = LAYOUT_moonlander(
        KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   _______, _______, KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,
        KC_F13,  KC_F14,  KC_F15,  KC_F16,  KC_F17,  KC_F18,  _______, _______, KC_F19,  KC_F20,  KC_F21,  KC_F22,  KC_F23,  KC_F24,
        RESET,   AU_TOG,  MU_TOG,  MU_MOD,  _______, _______, _______, _______, _______, DM_PLY1, DM_PLY2, _______, _______, _______,
        _______, _______, _______, _______, _______, _______,                   _______, DM_REC1, DM_REC2, DM_RSTP, _______, _______,
        _______, _______, _______, _______, _______,          _______, _______,          _______, _______, _______, _______, _______,
                                        TD(DANCE_0), _______, _______, _______, _______, TD(DANCE_1)
    ),
    [_LIGHTING] = LAYOUT_moonlander(
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, RGB_TOG, RGB_BLU, TOGGLE_LAYER_COLOR, RGB_MOD, RGB_SLD,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, RGB_VAI, RGB_HUI, RGB_SAI, RGB_SPI, MOON_LED_LEVEL,
        _______, _______, _______, _______, _______, _______,                   _______, RGB_VAD, RGB_HUD, RGB_SAD, RGB_SPD, _______,
        _______, _______, _______, _______, _______,          _______, _______,          _______, _______, _______, _______, _______,
                                            _______, _______, _______, _______, _______, _______
    ),
};

extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
    rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][DRIVER_LED_TOTAL][3] = {
    [_QWERTY] = {
        {172, 255, 255}, {172, 255, 255}, {172, 255, 255}, {172, 255, 255}, {172, 255, 255}, {172, 255, 255}, {172, 255, 255}, {172, 255, 255}, {172, 255, 255}, {172, 255, 255}, {172, 255, 255}, {172, 255, 255}, {172, 255, 255}, {172, 255, 255}, {0, 0, 0},       {172, 255, 255}, {172, 255, 255}, {172, 255, 255}, {172, 255, 255}, {172, 255, 255}, {172, 255, 255}, {172, 255, 255}, {0, 0, 255}, {172, 255, 255}, {172, 255, 255}, {172, 255, 255}, {172, 255, 255}, {172, 255, 255}, {172, 255, 255}, {0, 0, 0},       {0, 0, 0}, {0, 0, 0}, {172, 255, 255}, {172, 255, 255}, {172, 255, 255}, {0, 0, 0},
           {172, 255, 255}, {172, 255, 255}, {172, 255, 255}, {172, 255, 255}, {172, 255, 255}, {172, 255, 255}, {172, 255, 255}, {172, 255, 255}, {172, 255, 255}, {172, 255, 255}, {172, 255, 255}, {172, 255, 255}, {172, 255, 255}, {172, 255, 255}, {172, 255, 255}, {172, 255, 255}, {172, 255, 255}, {172, 255, 255}, {172, 255, 255}, {172, 255, 255}, {172, 255, 255}, {172, 255, 255}, {0, 0, 255}, {172, 255, 255}, {172, 255, 255}, {172, 255, 255}, {172, 255, 255}, {172, 255, 255}, {172, 255, 255}, {172, 255, 255}, {0, 0, 0}, {0, 0, 0}, {172, 255, 255}, {172, 255, 255}, {172, 255, 255}, {172, 255, 255}
    },
    [_GAME] = {
        {0, 255, 255}, {0, 255, 255}, {0, 255, 255}, {0, 255, 255}, {0, 255, 255}, {0, 255, 255}, {0, 255, 255}, {0, 255, 255}, {0, 255, 255}, {0, 255, 255}, {0, 255, 255}, {0, 255, 255}, {0, 0, 255},   {0, 255, 255}, {0, 0, 0},     {0, 255, 255}, {0, 0, 255},   {0, 0, 255},   {0, 255, 255}, {0, 255, 255}, {0, 255, 255}, {0, 255, 255}, {0, 0, 255},   {0, 255, 255}, {0, 255, 255}, {0, 255, 255}, {0, 255, 255}, {0, 255, 255}, {0, 255, 255}, {0, 255, 255}, {0, 255, 255}, {0, 255, 255}, {0, 255, 255}, {0, 255, 255}, {0, 255, 255}, {0, 255, 255},
           {0, 255, 255}, {0, 255, 255}, {0, 255, 255}, {0, 255, 255}, {0, 255, 255}, {0, 255, 255}, {0, 255, 255}, {0, 255, 255}, {0, 255, 255}, {0, 255, 255}, {0, 255, 255}, {0, 255, 255}, {0, 255, 255}, {0, 255, 255}, {0, 255, 255}, {0, 255, 255}, {0, 255, 255}, {0, 255, 255}, {0, 255, 255}, {0, 255, 255}, {0, 255, 255}, {0, 255, 255}, {0, 255, 255}, {0, 255, 255}, {0, 255, 255}, {0, 255, 255}, {0, 255, 255}, {0, 255, 255}, {0, 255, 255}, {0, 255, 255}, {0, 0, 0},     {0, 0, 0},     {0, 255, 255}, {0, 255, 255}, {0, 255, 255}, {0, 0, 255}
    },
    [_LOWER] = {
        {86, 255, 255}, {86, 255, 255}, {86, 255, 255}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {86, 255, 255}, {86, 255, 255}, {0, 0, 0}, {0, 0, 0}, {86, 255, 255}, {86, 255, 255}, {0, 0, 255}, {0, 0, 0}, {0, 0, 0}, {86, 255, 255}, {0, 0, 255}, {0, 0, 255}, {0, 0, 0}, {0, 0, 0}, {86, 255, 255}, {86, 255, 255}, {0, 0, 255}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {86, 255, 255}, {86, 255, 255}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {86, 255, 255}, {0, 0, 255}, {86, 255, 255}, {0, 0, 0}, {86, 255, 255}, {86, 255, 255}, {86, 255, 255}, {86, 255, 255}, {0, 0, 0}, {86, 255, 255}, {86, 255, 255}, {86, 255, 255}, {86, 255, 255}, {86, 255, 255}, {86, 255, 255}, {0, 0, 255}, {0, 0, 255}, {0, 0, 255}, {86, 255, 255}, {86, 255, 255}, {0, 0, 255}, {0, 0, 255}, {0, 0, 255}, {86, 255, 255}, {86, 255, 255}, {0, 0, 255}, {0, 0, 255}, {0, 0, 255}, {0, 0, 255}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {86, 255, 255}, {0, 0, 0}, {0, 0, 0}, {86, 255, 255}, {86, 255, 255}, {0, 0, 255}, {86, 255, 255}
    },
    [_RAISE] = {{86, 255, 255}, {86, 255, 255}, {86, 255, 255}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {86, 255, 255}, {86, 255, 255}, {0, 0, 255}, {86, 255, 255}, {0, 0, 0}, {86, 255, 255}, {0, 0, 255}, {0, 0, 255}, {86, 255, 255}, {0, 0, 0}, {86, 255, 255}, {86, 255, 255}, {0, 0, 255}, {86, 255, 255}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {86, 255, 255}, {86, 255, 255}, {0, 0, 255}, {0, 0, 0}, {0, 0, 0}, {86, 255, 255}, {86, 255, 255}, {86, 255, 255}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {86, 255, 255}, {86, 255, 255}, {0, 0, 255}, {86, 255, 255}, {0, 0, 0}, {86, 255, 255}, {0, 0, 255}, {0, 0, 255}, {86, 255, 255}, {0, 0, 0}, {86, 255, 255}, {86, 255, 255}, {0, 0, 255}, {86, 255, 255}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {86, 255, 255}, {0, 0, 0}, {0, 0, 0}, {86, 255, 255}, {0, 0, 255}, {86, 255, 255}, {86, 255, 255}},

    [_ADJUST] = {{0, 255, 255}, {0, 255, 255}, {0, 255, 255}, {0, 0, 0}, {0, 0, 0}, {0, 255, 255}, {0, 255, 255}, {0, 255, 255}, {0, 0, 0}, {0, 0, 0}, {0, 255, 255}, {0, 255, 255}, {0, 255, 255}, {0, 0, 0}, {0, 0, 0}, {0, 255, 255}, {0, 255, 255}, {0, 255, 255}, {0, 0, 0}, {0, 0, 0}, {0, 255, 255}, {0, 255, 255}, {0, 255, 255}, {0, 0, 0}, {0, 0, 0}, {0, 255, 255}, {0, 255, 255}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 255, 255}, {0, 0, 255}, {0, 0, 255}, {0, 0, 0}, {0, 255, 255}, {0, 255, 255}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 255, 255}, {0, 255, 255}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 255, 255}, {0, 255, 255}, {0, 0, 0}, {0, 255, 255}, {0, 0, 0}, {0, 255, 255}, {0, 255, 255}, {0, 255, 255}, {0, 255, 255}, {0, 0, 0}, {0, 255, 255}, {0, 255, 255}, {0, 255, 255}, {0, 255, 255}, {0, 0, 0}, {0, 255, 255}, {0, 255, 255}, {0, 0, 0}, {0, 0, 0}, {0, 255, 255}, {0, 0, 0}, {0, 0, 0}, {0, 255, 255}, {0, 0, 255}, {0, 0, 255}, {0, 255, 255}},

};

void set_layer_color(int layer) {
    for (int i = 0; i < DRIVER_LED_TOTAL; i++) {
        HSV hsv = {
            .h = pgm_read_byte(&ledmap[layer][i][0]),
            .s = pgm_read_byte(&ledmap[layer][i][1]),
            .v = pgm_read_byte(&ledmap[layer][i][2]),
        };
        if (!hsv.h && !hsv.s && !hsv.v) {
            rgb_matrix_set_color(i, 0, 0, 0);
        } else {
            RGB   rgb = hsv_to_rgb(hsv);
            float f   = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
            rgb_matrix_set_color(i, f * rgb.r, f * rgb.g, f * rgb.b);
        }
    }
}

void rgb_matrix_indicators_user(void) {
    if (keyboard_config.disable_layer_led) {
        return;
    }
    switch (biton32(layer_state)) {
        case 0:
            set_layer_color(0);
            break;
        case 1:
            set_layer_color(1);
            break;
        case 2:
            set_layer_color(2);
            break;
        case 3:
            set_layer_color(3);
            break;
        case 4:
            set_layer_color(4);
            break;
        default:
            if (rgb_matrix_get_flags() == LED_FLAG_NONE) rgb_matrix_set_color_all(0, 0, 0);
            break;
    }
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case KC_P000:
            if (record->event.pressed) {
                SEND_STRING("000");
            }
            break;
        case RGB_SLD:
            if (record->event.pressed) {
                rgblight_mode(1);
            }
            return false;
        case RGB_BLU:
            if (record->event.pressed) {
                rgblight_mode(1);
                rgblight_sethsv(172, 255, 255);
            }
            return false;
    }
    return true;
}

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

static tap dance_state[2];

uint8_t dance_step(qk_tap_dance_state_t *state);

uint8_t dance_step(qk_tap_dance_state_t *state) {
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


void dance_0_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_0_reset(qk_tap_dance_state_t *state, void *user_data);

void dance_0_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[0].step = dance_step(state);
    switch (dance_state[0].step) {
        case DOUBLE_TAP: register_code16(KC_SYSTEM_POWER); break;
    }
}

void dance_0_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[0].step) {
        case DOUBLE_TAP: unregister_code16(KC_SYSTEM_POWER); break;
    }
    dance_state[0].step = 0;
}
void dance_1_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_1_reset(qk_tap_dance_state_t *state, void *user_data);

void dance_1_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[1].step = dance_step(state);
    switch (dance_state[1].step) {
        case DOUBLE_TAP: register_code16(KC_SYSTEM_SLEEP); break;
    }
}

void dance_1_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[1].step) {
        case DOUBLE_TAP: unregister_code16(KC_SYSTEM_SLEEP); break;
    }
    dance_state[1].step = 0;
}

qk_tap_dance_action_t tap_dance_actions[] = {
        [DANCE_0] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, dance_0_finished, dance_0_reset),
        [DANCE_1] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, dance_1_finished, dance_1_reset),
};

