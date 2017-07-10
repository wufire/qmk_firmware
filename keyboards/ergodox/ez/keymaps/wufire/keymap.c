#include "ergodox.h"
#include "debug.h"
#include "action_layer.h"
#include "version.h"


#include "keymap_german.h"

#include "keymap_nordic.h"



enum custom_keycodes {
  PLACEHOLDER = SAFE_RANGE, // can always be here
  EPRM,
  VRSN,
  RGB_SLD,
  RGB_STEP,
  RGB_STEP_REV,
  RGB_FF0000,
  RGB_FFFF00,
  RGB_00FF00,
  RGB_FFFFFF,
  RGB_000000,
  RGB_FFC0CB,
  RGB_008080,
  RGB_FFE4E1,
  RGB_7FFF00,
  RGB_FF7F00,
  RGB_FFD700,
  RGB_D3FFCE,
  RGB_40E0D0,
  RGB_FF7373,
  RGB_E6E6FA,
  RGB_7F7FFF,
  RGB_FFA500,
  RGB_CCCCCC,
  RGB_B0E0E6,
  RGB_F0F8FF,
  RGB_FF007F,
  RGB_7FFFD4,
  RGB_333333,
  RGB_C0C0C0,
  RGB_800080,
  RGB_F6546A,
  RGB_00FF7F,
  RGB_FF00FF,
  RGB_7F00FF,
  RGB_0000FF,
  RGB_007FFF,
  RGB_00FFFF,
  RGB_20B2AA,
  RGB_666666,
  RGB_FA8072,
  RGB_003366,
  RGB_C6E2FF,
  RGB_FAEBD7,
  RGB_FFC3A0,
  RGB_00CED1,
  RGB_FFB6C1,
  RGB_088DA5,
  RGB_468499,
  RGB_FFF68F,
  RGB_FF6666,
  RGB_66CDAA,
  RGB_F08080,
  RGB_808080,
  RGB_8B0000,
  RGB_CBBEB5,
  RGB_AFEEEE,
  RGB_81D8D0,
  RGB_FF7F50,
  RGB_0E2F44,
  RGB_B4EEB4,
  RGB_DAA520,
  RGB_C0D6E4,
  RGB_DDDDDD,
  RGB_C39797,
  RGB_FF4040,
  RGB_FFDAB9,
  RGB_F5F5DC,
  RGB_7FFFFF
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [0] = KEYMAP(KC_EQUAL,KC_1,KC_2,KC_3,KC_4,KC_5,KC_LEFT,KC_DELETE,KC_Q,KC_W,KC_F,KC_P,KC_G,TG(1),KC_BSPACE,KC_A,KC_R,KC_S,KC_T,KC_D,KC_LSPO,GUI_T(KC_Z),KC_X,KC_C,KC_V,KC_B,ALL_T(KC_NO),LT(1,KC_GRAVE),KC_QUOTE,LALT(KC_LSHIFT),KC_LEFT,KC_RIGHT,ALT_T(KC_APPLICATION),KC_LGUI,KC_HOME,GUI_T(KC_BSPACE),KC_TAB,KC_END,KC_RIGHT,KC_6,KC_7,KC_8,KC_9,KC_0,KC_MINUS,TG(3),KC_J,KC_L,KC_U,KC_Y,KC_SCOLON,KC_BSLASH,KC_H,KC_N,KC_E,KC_I,LT(2,KC_O),CTL_T(KC_QUOTE),MEH_T(KC_NO),KC_K,KC_M,KC_COMMA,KC_DOT,GUI_T(KC_SLASH),KC_RSPC,KC_UP,KC_DOWN,KC_LBRACKET,KC_RBRACKET,MO(1),KC_LALT,CTL_T(KC_ESCAPE),KC_PGUP,KC_PGDOWN,KC_ENTER,GUI_T(KC_SPACE)),

  [1] = KEYMAP(M(0),KC_F1,KC_F2,KC_F3,KC_F4,KC_F5,KC_TRANSPARENT,KC_TRANSPARENT,KC_EXLM,KC_AT,KC_LCBR,KC_RCBR,KC_PIPE,KC_TRANSPARENT,KC_TRANSPARENT,KC_HASH,KC_DLR,KC_LPRN,KC_RPRN,KC_GRAVE,KC_TRANSPARENT,KC_PERC,KC_CIRC,KC_LBRACKET,KC_RBRACKET,KC_TILD,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,RGB_TOG,RGB_FF0000,RGB_FFFF00,RGB_VAD,RGB_VAI,RGB_00FF00,KC_TRANSPARENT,KC_F6,KC_F7,KC_F8,KC_F9,KC_F10,KC_F11,KC_TRANSPARENT,KC_UP,KC_7,KC_8,KC_9,KC_ASTR,KC_F12,KC_DOWN,KC_4,KC_5,KC_6,KC_PLUS,KC_TRANSPARENT,KC_TRANSPARENT,KC_AMPR,KC_1,KC_2,KC_3,KC_BSLASH,KC_TRANSPARENT,KC_TRANSPARENT,KC_DOT,KC_0,KC_EQUAL,KC_TRANSPARENT,RGB_STEP,RGB_STEP_REV,RGB_FFFFFF,RGB_000000,RGB_HUD,RGB_HUI),

  [2] = KEYMAP(KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_MS_BTN3,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_MS_BTN1,KC_MS_UP,KC_MS_BTN2,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_MS_LEFT,KC_MS_DOWN,KC_MS_RIGHT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,LGUI(KC_LBRACKET),KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_MS_WH_UP,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_MS_WH_LEFT,KC_MS_WH_DOWN,KC_MS_WH_RIGHT,KC_TRANSPARENT,KC_MEDIA_PLAY_PAUSE,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_MEDIA_PREV_TRACK,KC_MEDIA_NEXT_TRACK,KC_TRANSPARENT,KC_TRANSPARENT,KC_AUDIO_VOL_UP,KC_AUDIO_VOL_DOWN,KC_AUDIO_MUTE,KC_TRANSPARENT,KC_TRANSPARENT,KC_MS_ACCEL2,KC_TRANSPARENT,KC_MS_ACCEL1,KC_MS_ACCEL0,KC_TRANSPARENT,LGUI(KC_RBRACKET)),

  [3] = KEYMAP(RGB_FFFF00,RGB_000000,RGB_FFFFFF,RGB_FFC0CB,RGB_008080,RGB_FFE4E1,RGB_7FFF00,RGB_FF7F00,RGB_FFD700,RGB_D3FFCE,RGB_40E0D0,RGB_FF7373,RGB_E6E6FA,RGB_00FF00,RGB_FF0000,RGB_7F7FFF,RGB_FFA500,RGB_CCCCCC,RGB_B0E0E6,RGB_F0F8FF,RGB_FF007F,RGB_7FFFD4,RGB_333333,RGB_C0C0C0,RGB_800080,RGB_F6546A,RGB_00FF7F,RGB_FF00FF,RGB_7F00FF,RGB_0000FF,RGB_007FFF,RGB_00FFFF,RGB_TOG,RGB_FF0000,RGB_FFFF00,RGB_VAD,RGB_VAI,RGB_00FF00,RGB_20B2AA,RGB_666666,RGB_FA8072,RGB_003366,RGB_C6E2FF,RGB_FAEBD7,RGB_FFC3A0,TO(0),RGB_00CED1,RGB_FFB6C1,RGB_088DA5,RGB_468499,RGB_FFF68F,RGB_FF6666,RGB_66CDAA,RGB_F08080,RGB_808080,RGB_8B0000,RGB_CBBEB5,RGB_AFEEEE,RGB_81D8D0,RGB_FF7F50,RGB_0E2F44,RGB_B4EEB4,RGB_DAA520,RGB_C0D6E4,RGB_DDDDDD,RGB_C39797,RGB_FF4040,RGB_FFDAB9,RGB_F5F5DC,RGB_7FFFFF,RGB_STEP,RGB_STEP_REV,RGB_0000FF,RGB_FF00FF,RGB_HUD,RGB_HUI),

};

const uint16_t PROGMEM fn_actions[] = {
  [1] = ACTION_LAYER_TAP_TOGGLE(1)
};

// leaving this in place for compatibilty with old keymaps cloned and re-compiled.
const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt)
{
      switch(id) {
        case 0:
        if (record->event.pressed) {
          SEND_STRING (QMK_KEYBOARD "/" QMK_KEYMAP " @ " QMK_VERSION);
        }
        break;
      }
    return MACRO_NONE;
};

typedef struct {
    double r;       // a fraction between 0 and 1
    double g;       // a fraction between 0 and 1
    double b;       // a fraction between 0 and 1
} rgb;

typedef struct {
    double h;       // angle in degrees
    double s;       // a fraction between 0 and 1
    double v;       // a fraction between 0 and 1
} hsv;

static hsv   rgb2hsv(rgb in);

hsv rgb2hsv(rgb in)
{
    hsv         out;
    double      min, max, delta;

    min = in.r < in.g ? in.r : in.g;
    min = min  < in.b ? min  : in.b;

    max = in.r > in.g ? in.r : in.g;
    max = max  > in.b ? max  : in.b;

    out.v = max;                                // v
    delta = max - min;
    if (delta < 0.00001)
    {
        out.s = 0;
        out.h = 0; // undefined, maybe nan?
        return out;
    }
    if( max > 0.0 ) { // NOTE: if Max is == 0, this divide would cause a crash
        out.s = (delta / max);                  // s
    } else {
        // if max is 0, then r = g = b = 0
        // s = 0, v is undefined
        out.s = 0.0;
        out.h = NAN;                            // its now undefined
        return out;
    }
    if( in.r >= max )                           // > is bogus, just keeps compilor happy
        out.h = ( in.g - in.b ) / delta;        // between yellow & magenta
    else
    if( in.g >= max )
        out.h = 2.0 + ( in.b - in.r ) / delta;  // between cyan & yellow
    else
        out.h = 4.0 + ( in.r - in.g ) / delta;  // between magenta & cyan

    out.h *= 60.0;                              // degrees

    if( out.h < 0.0 )
        out.h += 360.0;

    return out;
}

void set_rgblight(uint8_t r, uint8_t g, uint8_t b) {
    // rgblight_setrgb(r, g, b);
    rgb input;
    input.r = (double)r / 255;
    input.g = (double)g / 255;
    input.b = (double)b / 255;

    hsv result = rgb2hsv(input);

    uint16_t hue = (uint16_t)result.h;
    uint8_t sat = (uint8_t)(result.s * 255);
    uint8_t val = (uint8_t)(result.v * 255);

    rgblight_sethsv(hue, sat, val);
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    // dynamically generate these.
    case EPRM:
      if (record->event.pressed) {
        eeconfig_init();
      }
      return false;
      break;
    case VRSN:
      if (record->event.pressed) {
        SEND_STRING (QMK_KEYBOARD "/" QMK_KEYMAP " @ " QMK_VERSION);
      }
      return false;
      break;
    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(1);
      }
      return false;
      break;
    case RGB_STEP:
        if (record->event.pressed) {
            rgblight_increase();
        }
        return false;
        break;
    case RGB_STEP_REV:
        if (record->event.pressed) {
            rgblight_decrease();
        }
        return false;
        break;
    case RGB_FF0000:
      if (record->event.pressed) {
        #ifdef RGBLIGHT_ENABLE
          rgblight_enable();
          set_rgblight(0xff,0x00,0x00);
        #endif
      }
      return false;
      break;

    case RGB_FFFF00:
      if (record->event.pressed) {
        #ifdef RGBLIGHT_ENABLE
          rgblight_enable();
          set_rgblight(0xff,0xff,0x00);
        #endif
      }
      return false;
      break;

    case RGB_00FF00:
      if (record->event.pressed) {
        #ifdef RGBLIGHT_ENABLE
          rgblight_enable();
          set_rgblight(0x00,0xff,0x00);
        #endif
      }
      return false;
      break;

    case RGB_FFFFFF:
      if (record->event.pressed) {
        #ifdef RGBLIGHT_ENABLE
          rgblight_enable();
          set_rgblight(0xff,0xff,0xff);
        #endif
      }
      return false;
      break;

    case RGB_000000:
      if (record->event.pressed) {
        #ifdef RGBLIGHT_ENABLE
          rgblight_enable();
          set_rgblight(0x00,0x00,0x00);
        #endif
      }
      return false;
      break;

    case RGB_FFC0CB:
      if (record->event.pressed) {
        #ifdef RGBLIGHT_ENABLE
          rgblight_enable();
          set_rgblight(0xff,0xc0,0xcb);
        #endif
      }
      return false;
      break;

    case RGB_008080:
      if (record->event.pressed) {
        #ifdef RGBLIGHT_ENABLE
          rgblight_enable();
          set_rgblight(0x00,0x80,0x80);
        #endif
      }
      return false;
      break;

    case RGB_FFE4E1:
      if (record->event.pressed) {
        #ifdef RGBLIGHT_ENABLE
          rgblight_enable();
          set_rgblight(0xff,0xe4,0xe1);
        #endif
      }
      return false;
      break;

    case RGB_7FFF00:
      if (record->event.pressed) {
        #ifdef RGBLIGHT_ENABLE
          rgblight_enable();
          set_rgblight(0x7f,0xff,0x00);
        #endif
      }
      return false;
      break;

    case RGB_FF7F00:
      if (record->event.pressed) {
        #ifdef RGBLIGHT_ENABLE
          rgblight_enable();
          set_rgblight(0xff,0x7f,0x00);
        #endif
      }
      return false;
      break;

    case RGB_FFD700:
      if (record->event.pressed) {
        #ifdef RGBLIGHT_ENABLE
          rgblight_enable();
          set_rgblight(0xff,0xd7,0x00);
        #endif
      }
      return false;
      break;

    case RGB_D3FFCE:
      if (record->event.pressed) {
        #ifdef RGBLIGHT_ENABLE
          rgblight_enable();
          set_rgblight(0xd3,0xff,0xce);
        #endif
      }
      return false;
      break;

    case RGB_40E0D0:
      if (record->event.pressed) {
        #ifdef RGBLIGHT_ENABLE
          rgblight_enable();
          set_rgblight(0x40,0xe0,0xd0);
        #endif
      }
      return false;
      break;

    case RGB_FF7373:
      if (record->event.pressed) {
        #ifdef RGBLIGHT_ENABLE
          rgblight_enable();
          set_rgblight(0xff,0x73,0x73);
        #endif
      }
      return false;
      break;

    case RGB_E6E6FA:
      if (record->event.pressed) {
        #ifdef RGBLIGHT_ENABLE
          rgblight_enable();
          set_rgblight(0xe6,0xe6,0xfa);
        #endif
      }
      return false;
      break;

    case RGB_7F7FFF:
      if (record->event.pressed) {
        #ifdef RGBLIGHT_ENABLE
          rgblight_enable();
          set_rgblight(0x7f,0x7f,0xff);
        #endif
      }
      return false;
      break;

    case RGB_FFA500:
      if (record->event.pressed) {
        #ifdef RGBLIGHT_ENABLE
          rgblight_enable();
          set_rgblight(0xff,0xa5,0x00);
        #endif
      }
      return false;
      break;

    case RGB_CCCCCC:
      if (record->event.pressed) {
        #ifdef RGBLIGHT_ENABLE
          rgblight_enable();
          set_rgblight(0xcc,0xcc,0xcc);
        #endif
      }
      return false;
      break;

    case RGB_B0E0E6:
      if (record->event.pressed) {
        #ifdef RGBLIGHT_ENABLE
          rgblight_enable();
          set_rgblight(0xb0,0xe0,0xe6);
        #endif
      }
      return false;
      break;

    case RGB_F0F8FF:
      if (record->event.pressed) {
        #ifdef RGBLIGHT_ENABLE
          rgblight_enable();
          set_rgblight(0xf0,0xf8,0xff);
        #endif
      }
      return false;
      break;

    case RGB_FF007F:
      if (record->event.pressed) {
        #ifdef RGBLIGHT_ENABLE
          rgblight_enable();
          set_rgblight(0xff,0x00,0x7f);
        #endif
      }
      return false;
      break;

    case RGB_7FFFD4:
      if (record->event.pressed) {
        #ifdef RGBLIGHT_ENABLE
          rgblight_enable();
          set_rgblight(0x7f,0xff,0xd4);
        #endif
      }
      return false;
      break;

    case RGB_333333:
      if (record->event.pressed) {
        #ifdef RGBLIGHT_ENABLE
          rgblight_enable();
          set_rgblight(0x33,0x33,0x33);
        #endif
      }
      return false;
      break;

    case RGB_C0C0C0:
      if (record->event.pressed) {
        #ifdef RGBLIGHT_ENABLE
          rgblight_enable();
          set_rgblight(0xc0,0xc0,0xc0);
        #endif
      }
      return false;
      break;

    case RGB_800080:
      if (record->event.pressed) {
        #ifdef RGBLIGHT_ENABLE
          rgblight_enable();
          set_rgblight(0x80,0x00,0x80);
        #endif
      }
      return false;
      break;

    case RGB_F6546A:
      if (record->event.pressed) {
        #ifdef RGBLIGHT_ENABLE
          rgblight_enable();
          set_rgblight(0xf6,0x54,0x6a);
        #endif
      }
      return false;
      break;

    case RGB_00FF7F:
      if (record->event.pressed) {
        #ifdef RGBLIGHT_ENABLE
          rgblight_enable();
          set_rgblight(0x00,0xff,0x7f);
        #endif
      }
      return false;
      break;

    case RGB_FF00FF:
      if (record->event.pressed) {
        #ifdef RGBLIGHT_ENABLE
          rgblight_enable();
          set_rgblight(0xff,0x00,0xff);
        #endif
      }
      return false;
      break;

    case RGB_7F00FF:
      if (record->event.pressed) {
        #ifdef RGBLIGHT_ENABLE
          rgblight_enable();
          set_rgblight(0x7f,0x00,0xff);
        #endif
      }
      return false;
      break;

    case RGB_0000FF:
      if (record->event.pressed) {
        #ifdef RGBLIGHT_ENABLE
          rgblight_enable();
          set_rgblight(0x00,0x00,0xff);
        #endif
      }
      return false;
      break;

    case RGB_007FFF:
      if (record->event.pressed) {
        #ifdef RGBLIGHT_ENABLE
          rgblight_enable();
          set_rgblight(0x00,0x7f,0xff);
        #endif
      }
      return false;
      break;

    case RGB_00FFFF:
      if (record->event.pressed) {
        #ifdef RGBLIGHT_ENABLE
          rgblight_enable();
          set_rgblight(0x00,0xff,0xff);
        #endif
      }
      return false;
      break;

    case RGB_20B2AA:
      if (record->event.pressed) {
        #ifdef RGBLIGHT_ENABLE
          rgblight_enable();
          set_rgblight(0x20,0xb2,0xaa);
        #endif
      }
      return false;
      break;

    case RGB_666666:
      if (record->event.pressed) {
        #ifdef RGBLIGHT_ENABLE
          rgblight_enable();
          set_rgblight(0x66,0x66,0x66);
        #endif
      }
      return false;
      break;

    case RGB_FA8072:
      if (record->event.pressed) {
        #ifdef RGBLIGHT_ENABLE
          rgblight_enable();
          set_rgblight(0xfa,0x80,0x72);
        #endif
      }
      return false;
      break;

    case RGB_003366:
      if (record->event.pressed) {
        #ifdef RGBLIGHT_ENABLE
          rgblight_enable();
          set_rgblight(0x00,0x33,0x66);
        #endif
      }
      return false;
      break;

    case RGB_C6E2FF:
      if (record->event.pressed) {
        #ifdef RGBLIGHT_ENABLE
          rgblight_enable();
          set_rgblight(0xc6,0xe2,0xff);
        #endif
      }
      return false;
      break;

    case RGB_FAEBD7:
      if (record->event.pressed) {
        #ifdef RGBLIGHT_ENABLE
          rgblight_enable();
          set_rgblight(0xfa,0xeb,0xd7);
        #endif
      }
      return false;
      break;

    case RGB_FFC3A0:
      if (record->event.pressed) {
        #ifdef RGBLIGHT_ENABLE
          rgblight_enable();
          set_rgblight(0xff,0xc3,0xa0);
        #endif
      }
      return false;
      break;

    case RGB_00CED1:
      if (record->event.pressed) {
        #ifdef RGBLIGHT_ENABLE
          rgblight_enable();
          set_rgblight(0x00,0xce,0xd1);
        #endif
      }
      return false;
      break;

    case RGB_FFB6C1:
      if (record->event.pressed) {
        #ifdef RGBLIGHT_ENABLE
          rgblight_enable();
          set_rgblight(0xff,0xb6,0xc1);
        #endif
      }
      return false;
      break;

    case RGB_088DA5:
      if (record->event.pressed) {
        #ifdef RGBLIGHT_ENABLE
          rgblight_enable();
          set_rgblight(0x08,0x8d,0xa5);
        #endif
      }
      return false;
      break;

    case RGB_468499:
      if (record->event.pressed) {
        #ifdef RGBLIGHT_ENABLE
          rgblight_enable();
          set_rgblight(0x46,0x84,0x99);
        #endif
      }
      return false;
      break;

    case RGB_FFF68F:
      if (record->event.pressed) {
        #ifdef RGBLIGHT_ENABLE
          rgblight_enable();
          set_rgblight(0xff,0xf6,0x8f);
        #endif
      }
      return false;
      break;

    case RGB_FF6666:
      if (record->event.pressed) {
        #ifdef RGBLIGHT_ENABLE
          rgblight_enable();
          set_rgblight(0xff,0x66,0x66);
        #endif
      }
      return false;
      break;

    case RGB_66CDAA:
      if (record->event.pressed) {
        #ifdef RGBLIGHT_ENABLE
          rgblight_enable();
          set_rgblight(0x66,0xcd,0xaa);
        #endif
      }
      return false;
      break;

    case RGB_F08080:
      if (record->event.pressed) {
        #ifdef RGBLIGHT_ENABLE
          rgblight_enable();
          set_rgblight(0xf0,0x80,0x80);
        #endif
      }
      return false;
      break;

    case RGB_808080:
      if (record->event.pressed) {
        #ifdef RGBLIGHT_ENABLE
          rgblight_enable();
          set_rgblight(0x80,0x80,0x80);
        #endif
      }
      return false;
      break;

    case RGB_8B0000:
      if (record->event.pressed) {
        #ifdef RGBLIGHT_ENABLE
          rgblight_enable();
          set_rgblight(0x8b,0x00,0x00);
        #endif
      }
      return false;
      break;

    case RGB_CBBEB5:
      if (record->event.pressed) {
        #ifdef RGBLIGHT_ENABLE
          rgblight_enable();
          set_rgblight(0xcb,0xbe,0xb5);
        #endif
      }
      return false;
      break;

    case RGB_AFEEEE:
      if (record->event.pressed) {
        #ifdef RGBLIGHT_ENABLE
          rgblight_enable();
          set_rgblight(0xaf,0xee,0xee);
        #endif
      }
      return false;
      break;

    case RGB_81D8D0:
      if (record->event.pressed) {
        #ifdef RGBLIGHT_ENABLE
          rgblight_enable();
          set_rgblight(0x81,0xd8,0xd0);
        #endif
      }
      return false;
      break;

    case RGB_FF7F50:
      if (record->event.pressed) {
        #ifdef RGBLIGHT_ENABLE
          rgblight_enable();
          set_rgblight(0xff,0x7f,0x50);
        #endif
      }
      return false;
      break;

    case RGB_0E2F44:
      if (record->event.pressed) {
        #ifdef RGBLIGHT_ENABLE
          rgblight_enable();
          set_rgblight(0x0e,0x2f,0x44);
        #endif
      }
      return false;
      break;

    case RGB_B4EEB4:
      if (record->event.pressed) {
        #ifdef RGBLIGHT_ENABLE
          rgblight_enable();
          set_rgblight(0xb4,0xee,0xb4);
        #endif
      }
      return false;
      break;

    case RGB_DAA520:
      if (record->event.pressed) {
        #ifdef RGBLIGHT_ENABLE
          rgblight_enable();
          set_rgblight(0xda,0xa5,0x20);
        #endif
      }
      return false;
      break;

    case RGB_C0D6E4:
      if (record->event.pressed) {
        #ifdef RGBLIGHT_ENABLE
          rgblight_enable();
          set_rgblight(0xc0,0xd6,0xe4);
        #endif
      }
      return false;
      break;

    case RGB_DDDDDD:
      if (record->event.pressed) {
        #ifdef RGBLIGHT_ENABLE
          rgblight_enable();
          set_rgblight(0xdd,0xdd,0xdd);
        #endif
      }
      return false;
      break;

    case RGB_C39797:
      if (record->event.pressed) {
        #ifdef RGBLIGHT_ENABLE
          rgblight_enable();
          set_rgblight(0xc3,0x97,0x97);
        #endif
      }
      return false;
      break;

    case RGB_FF4040:
      if (record->event.pressed) {
        #ifdef RGBLIGHT_ENABLE
          rgblight_enable();
          set_rgblight(0xff,0x40,0x40);
        #endif
      }
      return false;
      break;

    case RGB_FFDAB9:
      if (record->event.pressed) {
        #ifdef RGBLIGHT_ENABLE
          rgblight_enable();
          set_rgblight(0xff,0xda,0xb9);
        #endif
      }
      return false;
      break;

    case RGB_F5F5DC:
      if (record->event.pressed) {
        #ifdef RGBLIGHT_ENABLE
          rgblight_enable();
          set_rgblight(0xf5,0xf5,0xdc);
        #endif
      }
      return false;
      break;

    case RGB_7FFFFF:
      if (record->event.pressed) {
        #ifdef RGBLIGHT_ENABLE
          rgblight_enable();
          set_rgblight(0x7f,0xff,0xff);
        #endif
      }
      return false;
      break;

  }
  return true;
}

void matrix_scan_user(void) {

    uint8_t layer = biton32(layer_state);

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

};
