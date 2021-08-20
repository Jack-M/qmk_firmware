#pragma once

#ifdef AUDIO_ENABLE
    #define STARTUP_SONG SONG(PREONIC_SOUND)
    // #define STARTUP_SONG SONG(NO_SOUND)

    #define DEFAULT_LAYER_SONGS { SONG(QWERTY_SOUND), \
                                  SONG(COLEMAK_SOUND), \
                                  SONG(DVORAK_SOUND) \
                                }
#endif

#define MUSIC_MASK (keycode != KC_NO)

/*
 * MIDI options
 */

/* Prevent use of disabled MIDI features in the keymap */
//#define MIDI_ENABLE_STRICT 1

/* enable basic MIDI features:
   - MIDI notes can be sent when in Music mode is on
*/

#define MIDI_BASIC

/* enable advanced MIDI features:
   - MIDI notes can be added to the keymap
   - Octave shift and transpose
   - Virtual sustain, portamento, and modulation wheel
   - etc.
*/
//#define MIDI_ADVANCED

/* override number of MIDI tone keycodes (each octave adds 12 keycodes and allocates 12 bytes) */
//#define MIDI_TONE_KEYCODE_OCTAVES 2

#define TAPPING_TOGGLE 2

#define MK_3_SPEED
#define MK_MOMENTARY_ACCEL
#define MK_C_OFFSET_UNMOD 16
#define MK_C_INTERVAL_UNMOD 16
#define MK_C_OFFSET_0 1
#define MK_C_INTERVAL_0 32
#define MK_C_OFFSET_1 4
#define MK_C_INTERVAL_1 16
#define MK_C_OFFSET_2 32
#define MK_C_INTERVAL_2 16
#define MK_W_OFFSET_UNMOD 1
#define MK_W_INTERVAL_UNMOD 40
#define MK_W_OFFSET_0 1
#define MK_W_INTERVAL_0 360
#define MK_W_OFFSET_1 1
#define MK_W_INTERVAL_1 120
#define MK_W_OFFSET_2 1
#define MK_W_INTERVAL_2 20

#define COMBO_COUNT 8
#define COMBO_TERM 100
