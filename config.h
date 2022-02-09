
 #pragma once

 //#define USE_MATRIX_I2C

 /* Select hand configuration */

 // #define MASTER_LEFT
 #define MASTER_LEFT
 // #define EE_HANDS

 // #define SSD1306OLED

 #define USE_SERIAL_PD2

//define NUMBER_OF_ENCODERS 1
#define ENCODERS_PAD_A { F4 }
#define ENCODERS_PAD_B { F5 }
#define ENCODER_RESOLUTIONS { 4, 4 }
#define ENCODER_DIRECTION_FLIP

 #define TAPPING_FORCE_HOLD
 #define TAPPING_TERM 200
 
 #define RGBW
 #undef RGBLED_NUM
 #define RGBLIGHT_SPLIT
 #define RGBLIGHT_EFFECT_KNIGHT
 #define RGBLED_NUM 12
 #define RGBLIGHT_LIMIT_VAL 255
 #define RGBLIGHT_HUE_STEP 10
 #define RGBLIGHT_SAT_STEP 17
 #define RGBLIGHT_VAL_STEP 17
 #define RGBLIGHT_LAYERS


//FIRMWARE SPACE SAVING 
#define NO_ACTION_MACRO
#define NO_ACTION_FUNCTION

#define NO_ACTION_TAPPING


#ifndef NO_DEBUG
#define NO_DEBUG
#endif // !NO_DEBUG
#if !defined(NO_PRINT) && !defined(CONSOLE_ENABLE)
#define NO_PRINT
#endif // !NO_PRINT