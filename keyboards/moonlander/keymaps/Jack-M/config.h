/*
  Set any config.h overrides for your specific keymap here.
  See config.h options at https://docs.qmk.fm/#/config_options?id=the-configh-file
*/
#define ORYX_CONFIGURATOR
#define IGNORE_MOD_TAP_INTERRUPT
#define USB_SUSPEND_WAKEUP_DELAY 0
#define CAPS_LOCK_STATUS
#define FIRMWARE_VERSION u8"4oEam/LJb9L"
#define RAW_USAGE_PAGE 0xFF60
#define RAW_USAGE_ID 0x61
#define RGB_MATRIX_STARTUP_SPD 60

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
