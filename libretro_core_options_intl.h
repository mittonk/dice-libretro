#ifndef LIBRETRO_CORE_OPTIONS_INTL_H__
#define LIBRETRO_CORE_OPTIONS_INTL_H__

#if defined(_MSC_VER) && (_MSC_VER >= 1500 && _MSC_VER < 1900)
/* https://support.microsoft.com/en-us/kb/980263 */
#pragma execution_character_set("utf-8")
#pragma warning(disable:4566)
#endif

#include "libretro.h"

#ifdef __cplusplus
extern "C" {
#endif

/*
 ********************************
 * Core Option Definitions
 ********************************
*/
/* RETRO_LANGUAGE_AR */

#define CATEGORY_INPUT_LABEL_AR "أجهزة الادخال"
#define CATEGORY_INPUT_INFO_0_AR NULL
#define CATEGORY_RETROMOUSE_LABEL_AR NULL
#define CATEGORY_RETROMOUSE_INFO_0_AR NULL
#define CATEGORY_MANYMOUSE_LABEL_AR NULL
#define CATEGORY_MANYMOUSE_INFO_0_AR NULL
#define CATEGORY_DIPSWITCH_LABEL_AR NULL
#define CATEGORY_DIPSWITCH_INFO_0_AR NULL
#define DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_LABEL_AR NULL
#define DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_LABEL_CAT_AR NULL
#define DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_INFO_0_AR NULL
#define DICE_PADDLE_JOYSTICK_ABSOLUTE_LABEL_AR NULL
#define DICE_PADDLE_JOYSTICK_ABSOLUTE_LABEL_CAT_AR NULL
#define DICE_PADDLE_JOYSTICK_ABSOLUTE_INFO_0_AR NULL
#define DICE_PADDLE_KEYBOARD_SENSITIVITY_LABEL_AR NULL
#define DICE_PADDLE_KEYBOARD_SENSITIVITY_LABEL_CAT_AR NULL
#define DICE_PADDLE_KEYBOARD_SENSITIVITY_INFO_0_AR NULL
#define DICE_PADDLE_JOYSTICK_SENSITIVITY_LABEL_AR NULL
#define DICE_PADDLE_JOYSTICK_SENSITIVITY_LABEL_CAT_AR NULL
#define DICE_PADDLE_JOYSTICK_SENSITIVITY_INFO_0_AR NULL
#define DICE_RETROMOUSE_PADDLE_SENSITIVITY_LABEL_AR NULL
#define DICE_RETROMOUSE_PADDLE_SENSITIVITY_LABEL_CAT_AR NULL
#define DICE_RETROMOUSE_PADDLE_SENSITIVITY_INFO_0_AR NULL
#define DICE_WHEEL_KEYJOY_SENSITIVITY_LABEL_AR NULL
#define DICE_WHEEL_KEYJOY_SENSITIVITY_LABEL_CAT_AR NULL
#define DICE_WHEEL_KEYJOY_SENSITIVITY_INFO_0_AR NULL
#define DICE_THROTTLE_KEYJOY_SENSITIVITY_LABEL_AR NULL
#define DICE_THROTTLE_KEYJOY_SENSITIVITY_LABEL_CAT_AR NULL
#define DICE_THROTTLE_KEYJOY_SENSITIVITY_INFO_0_AR NULL
#define DICE_RETROMOUSE_PADDLE0_LABEL_AR NULL
#define DICE_RETROMOUSE_PADDLE0_LABEL_CAT_AR NULL
#define DICE_RETROMOUSE_PADDLE0_INFO_0_AR NULL
#define DICE_RETROMOUSE_PADDLE1_LABEL_AR NULL
#define DICE_RETROMOUSE_PADDLE1_LABEL_CAT_AR NULL
#define DICE_RETROMOUSE_PADDLE1_INFO_0_AR NULL
#define DICE_RETROMOUSE_PADDLE2_LABEL_AR NULL
#define DICE_RETROMOUSE_PADDLE2_LABEL_CAT_AR NULL
#define DICE_RETROMOUSE_PADDLE2_INFO_0_AR NULL
#define DICE_RETROMOUSE_PADDLE3_LABEL_AR NULL
#define DICE_RETROMOUSE_PADDLE3_LABEL_CAT_AR NULL
#define DICE_RETROMOUSE_PADDLE3_INFO_0_AR NULL
#define DICE_RETROMOUSE_PADDLE0_X_LABEL_AR NULL
#define DICE_RETROMOUSE_PADDLE0_X_LABEL_CAT_AR NULL
#define DICE_RETROMOUSE_PADDLE0_X_INFO_0_AR NULL
#define OPTION_VAL_X_AR NULL
#define OPTION_VAL_Y_AR NULL
#define DICE_RETROMOUSE_PADDLE0_Y_LABEL_AR NULL
#define DICE_RETROMOUSE_PADDLE0_Y_LABEL_CAT_AR NULL
#define DICE_RETROMOUSE_PADDLE0_Y_INFO_0_AR NULL
#define DICE_RETROMOUSE_PADDLE1_X_LABEL_AR NULL
#define DICE_RETROMOUSE_PADDLE1_X_LABEL_CAT_AR NULL
#define DICE_RETROMOUSE_PADDLE1_X_INFO_0_AR NULL
#define DICE_RETROMOUSE_PADDLE1_Y_LABEL_AR NULL
#define DICE_RETROMOUSE_PADDLE1_Y_LABEL_CAT_AR NULL
#define DICE_RETROMOUSE_PADDLE1_Y_INFO_0_AR NULL
#define DICE_RETROMOUSE_PADDLE2_X_LABEL_AR NULL
#define DICE_RETROMOUSE_PADDLE2_X_LABEL_CAT_AR NULL
#define DICE_RETROMOUSE_PADDLE2_X_INFO_0_AR NULL
#define DICE_RETROMOUSE_PADDLE2_Y_LABEL_AR NULL
#define DICE_RETROMOUSE_PADDLE2_Y_LABEL_CAT_AR NULL
#define DICE_RETROMOUSE_PADDLE2_Y_INFO_0_AR NULL
#define DICE_RETROMOUSE_PADDLE3_X_LABEL_AR NULL
#define DICE_RETROMOUSE_PADDLE3_X_LABEL_CAT_AR NULL
#define DICE_RETROMOUSE_PADDLE3_X_INFO_0_AR NULL
#define DICE_RETROMOUSE_PADDLE3_Y_LABEL_AR NULL
#define DICE_RETROMOUSE_PADDLE3_Y_LABEL_CAT_AR NULL
#define DICE_RETROMOUSE_PADDLE3_Y_INFO_0_AR NULL
#define DICE_MANYMOUSE_PADDLE0_LABEL_AR NULL
#define DICE_MANYMOUSE_PADDLE0_INFO_0_AR NULL
#define DICE_MANYMOUSE_PADDLE0_X_LABEL_AR NULL
#define DICE_MANYMOUSE_PADDLE0_X_LABEL_CAT_AR NULL
#define OPTION_VAL_0X_AR NULL
#define OPTION_VAL_0Y_AR NULL
#define OPTION_VAL_1X_AR NULL
#define OPTION_VAL_1Y_AR NULL
#define OPTION_VAL_2X_AR NULL
#define OPTION_VAL_2Y_AR NULL
#define OPTION_VAL_3X_AR NULL
#define OPTION_VAL_3Y_AR NULL
#define DICE_MANYMOUSE_PADDLE0_Y_LABEL_AR NULL
#define DICE_MANYMOUSE_PADDLE0_Y_LABEL_CAT_AR NULL
#define DICE_MANYMOUSE_PADDLE1_LABEL_AR NULL
#define DICE_MANYMOUSE_PADDLE1_INFO_0_AR NULL
#define DICE_MANYMOUSE_PADDLE1_X_LABEL_AR NULL
#define DICE_MANYMOUSE_PADDLE1_X_LABEL_CAT_AR NULL
#define DICE_MANYMOUSE_PADDLE1_Y_LABEL_AR NULL
#define DICE_MANYMOUSE_PADDLE1_Y_LABEL_CAT_AR NULL
#define DICE_MANYMOUSE_PADDLE2_LABEL_AR NULL
#define DICE_MANYMOUSE_PADDLE2_INFO_0_AR NULL
#define DICE_MANYMOUSE_PADDLE2_X_LABEL_AR NULL
#define DICE_MANYMOUSE_PADDLE2_X_LABEL_CAT_AR NULL
#define DICE_MANYMOUSE_PADDLE2_Y_LABEL_AR NULL
#define DICE_MANYMOUSE_PADDLE2_Y_LABEL_CAT_AR NULL
#define DICE_MANYMOUSE_PADDLE3_LABEL_AR NULL
#define DICE_MANYMOUSE_PADDLE3_INFO_0_AR NULL
#define DICE_MANYMOUSE_PADDLE3_X_LABEL_AR NULL
#define DICE_MANYMOUSE_PADDLE3_X_LABEL_CAT_AR NULL
#define DICE_MANYMOUSE_PADDLE3_Y_LABEL_AR NULL
#define DICE_MANYMOUSE_PADDLE3_Y_LABEL_CAT_AR NULL
#define DICE_DIPSWITCH_1_LABEL_AR NULL
#define DICE_DIPSWITCH_1_LABEL_CAT_AR NULL
#define DICE_DIPSWITCH_1_INFO_0_AR NULL
#define OPTION_VAL_1_AR NULL
#define DICE_DIPSWITCH_2_LABEL_AR NULL
#define DICE_DIPSWITCH_2_LABEL_CAT_AR NULL
#define DICE_DIPSWITCH_2_INFO_0_AR NULL
#define DICE_DIPSWITCH_3_LABEL_AR NULL
#define DICE_DIPSWITCH_3_LABEL_CAT_AR NULL
#define DICE_DIPSWITCH_3_INFO_0_AR NULL
#define DICE_DIPSWITCH16_1_LABEL_AR NULL
#define DICE_DIPSWITCH16_1_LABEL_CAT_AR NULL
#define DICE_DIPSWITCH16_1_INFO_0_AR NULL
#define DICE_DIPSWITCH16_2_LABEL_AR NULL
#define DICE_DIPSWITCH16_2_LABEL_CAT_AR NULL
#define DICE_DIPSWITCH16_2_INFO_0_AR NULL

struct retro_core_option_v2_category option_cats_ar[] = {
   {
      "input",
      CATEGORY_INPUT_LABEL_AR,
      CATEGORY_INPUT_INFO_0_AR
   },
   {
      "retromouse",
      CATEGORY_RETROMOUSE_LABEL_AR,
      CATEGORY_RETROMOUSE_INFO_0_AR
   },
#ifdef MANYMOUSE
   {
      "manymouse",
      CATEGORY_MANYMOUSE_LABEL_AR,
      CATEGORY_MANYMOUSE_INFO_0_AR
   },
#endif
   {
      "dipswitch",
      CATEGORY_DIPSWITCH_LABEL_AR,
      CATEGORY_DIPSWITCH_INFO_0_AR
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_ar[] = {
   {
      "dice_use_mouse_pointer_for_paddle_1",
      DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_LABEL_AR,
      DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_LABEL_CAT_AR,
      DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_INFO_0_AR,
      NULL,
      "input",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_paddle_joystick_absolute",
      DICE_PADDLE_JOYSTICK_ABSOLUTE_LABEL_AR,
      DICE_PADDLE_JOYSTICK_ABSOLUTE_LABEL_CAT_AR,
      DICE_PADDLE_JOYSTICK_ABSOLUTE_INFO_0_AR,
      NULL,
      "input",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      // D-pad but not necessarily keyboard under libretro,
      // that name comes from the upstream code.
      "dice_paddle_keyboard_sensitivity",
      DICE_PADDLE_KEYBOARD_SENSITIVITY_LABEL_AR,
      DICE_PADDLE_KEYBOARD_SENSITIVITY_LABEL_CAT_AR,
      DICE_PADDLE_KEYBOARD_SENSITIVITY_INFO_0_AR,
      NULL,
      "input",
      {
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "250"
   },
   {
      "dice_paddle_joystick_sensitivity",
      DICE_PADDLE_JOYSTICK_SENSITIVITY_LABEL_AR,
      DICE_PADDLE_JOYSTICK_SENSITIVITY_LABEL_CAT_AR,
      DICE_PADDLE_JOYSTICK_SENSITIVITY_INFO_0_AR,
      NULL,
      "input",
      {
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "500"
   },
   {
      "dice_retromouse_paddle_sensitivity",
      DICE_RETROMOUSE_PADDLE_SENSITIVITY_LABEL_AR,
      DICE_RETROMOUSE_PADDLE_SENSITIVITY_LABEL_CAT_AR,
      DICE_RETROMOUSE_PADDLE_SENSITIVITY_INFO_0_AR,
      NULL,
      "input",
      {
         {"25", NULL},
         {"50", NULL},
         {"75", NULL},
         {"100", NULL},
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "125"
   },
   {
      "dice_wheel_keyjoy_sensitivity",
      DICE_WHEEL_KEYJOY_SENSITIVITY_LABEL_AR,
      DICE_WHEEL_KEYJOY_SENSITIVITY_LABEL_CAT_AR,
      DICE_WHEEL_KEYJOY_SENSITIVITY_INFO_0_AR,
      NULL,
      "input",
      {
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "500"
   },
   {
      "dice_throttle_keyjoy_sensitivity",
      DICE_THROTTLE_KEYJOY_SENSITIVITY_LABEL_AR,
      DICE_THROTTLE_KEYJOY_SENSITIVITY_LABEL_CAT_AR,
      DICE_THROTTLE_KEYJOY_SENSITIVITY_INFO_0_AR,
      NULL,
      "input",
      {
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "250"
   },

   {
      "dice_retromouse_paddle0",
      DICE_RETROMOUSE_PADDLE0_LABEL_AR,
      DICE_RETROMOUSE_PADDLE0_LABEL_CAT_AR,
      DICE_RETROMOUSE_PADDLE0_INFO_0_AR,
      NULL,
      "retromouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_retromouse_paddle1",
      DICE_RETROMOUSE_PADDLE1_LABEL_AR,
      DICE_RETROMOUSE_PADDLE1_LABEL_CAT_AR,
      DICE_RETROMOUSE_PADDLE1_INFO_0_AR,
      NULL,
      "retromouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_retromouse_paddle2",
      DICE_RETROMOUSE_PADDLE2_LABEL_AR,
      DICE_RETROMOUSE_PADDLE2_LABEL_CAT_AR,
      DICE_RETROMOUSE_PADDLE2_INFO_0_AR,
      NULL,
      "retromouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_retromouse_paddle3",
      DICE_RETROMOUSE_PADDLE3_LABEL_AR,
      DICE_RETROMOUSE_PADDLE3_LABEL_CAT_AR,
      DICE_RETROMOUSE_PADDLE3_INFO_0_AR,
      NULL,
      "retromouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_retromouse_paddle0_x",
      DICE_RETROMOUSE_PADDLE0_X_LABEL_AR,
      DICE_RETROMOUSE_PADDLE0_X_LABEL_CAT_AR,
      DICE_RETROMOUSE_PADDLE0_X_INFO_0_AR,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_AR},
         {"y", OPTION_VAL_Y_AR},
         {NULL, NULL},
      },
      "x"
   },
   {
      "dice_retromouse_paddle0_y",
      DICE_RETROMOUSE_PADDLE0_Y_LABEL_AR,
      DICE_RETROMOUSE_PADDLE0_Y_LABEL_CAT_AR,
      DICE_RETROMOUSE_PADDLE0_Y_INFO_0_AR,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_AR},
         {"y", OPTION_VAL_Y_AR},
         {NULL, NULL},
      },
      "y"
   },
   {
      "dice_retromouse_paddle1_x",
      DICE_RETROMOUSE_PADDLE1_X_LABEL_AR,
      DICE_RETROMOUSE_PADDLE1_X_LABEL_CAT_AR,
      DICE_RETROMOUSE_PADDLE1_X_INFO_0_AR,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_AR},
         {"y", OPTION_VAL_Y_AR},
         {NULL, NULL},
      },
      "x"
   },
   {
      "dice_retromouse_paddle1_y",
      DICE_RETROMOUSE_PADDLE1_Y_LABEL_AR,
      DICE_RETROMOUSE_PADDLE1_Y_LABEL_CAT_AR,
      DICE_RETROMOUSE_PADDLE1_Y_INFO_0_AR,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_AR},
         {"y", OPTION_VAL_Y_AR},
         {NULL, NULL},
      },
      "y"
   },
   {
      "dice_retromouse_paddle2_x",
      DICE_RETROMOUSE_PADDLE2_X_LABEL_AR,
      DICE_RETROMOUSE_PADDLE2_X_LABEL_CAT_AR,
      DICE_RETROMOUSE_PADDLE2_X_INFO_0_AR,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_AR},
         {"y", OPTION_VAL_Y_AR},
         {NULL, NULL},
      },
      "x"
   },
   {
      "dice_retromouse_paddle2_y",
      DICE_RETROMOUSE_PADDLE2_Y_LABEL_AR,
      DICE_RETROMOUSE_PADDLE2_Y_LABEL_CAT_AR,
      DICE_RETROMOUSE_PADDLE2_Y_INFO_0_AR,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_AR},
         {"y", OPTION_VAL_Y_AR},
         {NULL, NULL},
      },
      "y"
   },
   {
      "dice_retromouse_paddle3_x",
      DICE_RETROMOUSE_PADDLE3_X_LABEL_AR,
      DICE_RETROMOUSE_PADDLE3_X_LABEL_CAT_AR,
      DICE_RETROMOUSE_PADDLE3_X_INFO_0_AR,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_AR},
         {"y", OPTION_VAL_Y_AR},
         {NULL, NULL},
      },
      "x"
   },
   {
      "dice_retromouse_paddle3_y",
      DICE_RETROMOUSE_PADDLE3_Y_LABEL_AR,
      DICE_RETROMOUSE_PADDLE3_Y_LABEL_CAT_AR,
      DICE_RETROMOUSE_PADDLE3_Y_INFO_0_AR,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_AR},
         {"y", OPTION_VAL_Y_AR},
         {NULL, NULL},
      },
      "y"
   },

#ifdef MANYMOUSE
   {
      "dice_manymouse_paddle0",
      DICE_MANYMOUSE_PADDLE0_LABEL_AR,
      DICE_RETROMOUSE_PADDLE0_LABEL_CAT_AR,
      DICE_MANYMOUSE_PADDLE0_INFO_0_AR,
      NULL,
      "manymouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_manymouse_paddle0_x",
      DICE_MANYMOUSE_PADDLE0_X_LABEL_AR,
      DICE_MANYMOUSE_PADDLE0_X_LABEL_CAT_AR,
      DICE_RETROMOUSE_PADDLE0_X_INFO_0_AR,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_AR},
         {"0y", OPTION_VAL_0Y_AR},
         {"1x", OPTION_VAL_1X_AR},
         {"1y", OPTION_VAL_1Y_AR},
         {"2x", OPTION_VAL_2X_AR},
         {"2y", OPTION_VAL_2Y_AR},
         {"3x", OPTION_VAL_3X_AR},
         {"3y", OPTION_VAL_3Y_AR},
         {NULL, NULL},
      },
      "0x"
   },
   {
      "dice_manymouse_paddle0_y",
      DICE_MANYMOUSE_PADDLE0_Y_LABEL_AR,
      DICE_MANYMOUSE_PADDLE0_Y_LABEL_CAT_AR,
      DICE_RETROMOUSE_PADDLE0_Y_INFO_0_AR,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_AR},
         {"0y", OPTION_VAL_0Y_AR},
         {"1x", OPTION_VAL_1X_AR},
         {"1y", OPTION_VAL_1Y_AR},
         {"2x", OPTION_VAL_2X_AR},
         {"2y", OPTION_VAL_2Y_AR},
         {"3x", OPTION_VAL_3X_AR},
         {"3y", OPTION_VAL_3Y_AR},
         {NULL, NULL},
      },
      "0y"
   },
   {
      "dice_manymouse_paddle1",
      DICE_MANYMOUSE_PADDLE1_LABEL_AR,
      DICE_RETROMOUSE_PADDLE1_LABEL_CAT_AR,
      DICE_MANYMOUSE_PADDLE1_INFO_0_AR,
      NULL,
      "manymouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_manymouse_paddle1_x",
      DICE_MANYMOUSE_PADDLE1_X_LABEL_AR,
      DICE_MANYMOUSE_PADDLE1_X_LABEL_CAT_AR,
      DICE_RETROMOUSE_PADDLE1_X_INFO_0_AR,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_AR},
         {"0y", OPTION_VAL_0Y_AR},
         {"1x", OPTION_VAL_1X_AR},
         {"1y", OPTION_VAL_1Y_AR},
         {"2x", OPTION_VAL_2X_AR},
         {"2y", OPTION_VAL_2Y_AR},
         {"3x", OPTION_VAL_3X_AR},
         {"3y", OPTION_VAL_3Y_AR},
         {NULL, NULL},
      },
      "1x"
   },
   {
      "dice_manymouse_paddle1_y",
      DICE_MANYMOUSE_PADDLE1_Y_LABEL_AR,
      DICE_MANYMOUSE_PADDLE1_Y_LABEL_CAT_AR,
      DICE_RETROMOUSE_PADDLE1_Y_INFO_0_AR,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_AR},
         {"0y", OPTION_VAL_0Y_AR},
         {"1x", OPTION_VAL_1X_AR},
         {"1y", OPTION_VAL_1Y_AR},
         {"2x", OPTION_VAL_2X_AR},
         {"2y", OPTION_VAL_2Y_AR},
         {"3x", OPTION_VAL_3X_AR},
         {"3y", OPTION_VAL_3Y_AR},
         {NULL, NULL},
      },
      "1y"
   },
   {
      "dice_manymouse_paddle2",
      DICE_MANYMOUSE_PADDLE2_LABEL_AR,
      DICE_RETROMOUSE_PADDLE2_LABEL_CAT_AR,
      DICE_MANYMOUSE_PADDLE2_INFO_0_AR,
      NULL,
      "manymouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_manymouse_paddle2_x",
      DICE_MANYMOUSE_PADDLE2_X_LABEL_AR,
      DICE_MANYMOUSE_PADDLE2_X_LABEL_CAT_AR,
      DICE_RETROMOUSE_PADDLE2_X_INFO_0_AR,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_AR},
         {"0y", OPTION_VAL_0Y_AR},
         {"1x", OPTION_VAL_1X_AR},
         {"1y", OPTION_VAL_1Y_AR},
         {"2x", OPTION_VAL_2X_AR},
         {"2y", OPTION_VAL_2Y_AR},
         {"3x", OPTION_VAL_3X_AR},
         {"3y", OPTION_VAL_3Y_AR},
         {NULL, NULL},
      },
      "2x"
   },
   {
      "dice_manymouse_paddle2_y",
      DICE_MANYMOUSE_PADDLE2_Y_LABEL_AR,
      DICE_MANYMOUSE_PADDLE2_Y_LABEL_CAT_AR,
      DICE_RETROMOUSE_PADDLE2_Y_INFO_0_AR,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_AR},
         {"0y", OPTION_VAL_0Y_AR},
         {"1x", OPTION_VAL_1X_AR},
         {"1y", OPTION_VAL_1Y_AR},
         {"2x", OPTION_VAL_2X_AR},
         {"2y", OPTION_VAL_2Y_AR},
         {"3x", OPTION_VAL_3X_AR},
         {"3y", OPTION_VAL_3Y_AR},
         {NULL, NULL},
      },
      "2y"
   },
   {
      "dice_manymouse_paddle3",
      DICE_MANYMOUSE_PADDLE3_LABEL_AR,
      DICE_RETROMOUSE_PADDLE3_LABEL_CAT_AR,
      DICE_MANYMOUSE_PADDLE3_INFO_0_AR,
      NULL,
      "manymouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_manymouse_paddle3_x",
      DICE_MANYMOUSE_PADDLE3_X_LABEL_AR,
      DICE_MANYMOUSE_PADDLE3_X_LABEL_CAT_AR,
      DICE_RETROMOUSE_PADDLE3_X_INFO_0_AR,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_AR},
         {"0y", OPTION_VAL_0Y_AR},
         {"1x", OPTION_VAL_1X_AR},
         {"1y", OPTION_VAL_1Y_AR},
         {"2x", OPTION_VAL_2X_AR},
         {"2y", OPTION_VAL_2Y_AR},
         {"3x", OPTION_VAL_3X_AR},
         {"3y", OPTION_VAL_3Y_AR},
         {NULL, NULL},
      },
      "3x"
   },
   {
      "dice_manymouse_paddle3_y",
      DICE_MANYMOUSE_PADDLE3_Y_LABEL_AR,
      DICE_MANYMOUSE_PADDLE3_Y_LABEL_CAT_AR,
      DICE_RETROMOUSE_PADDLE3_Y_INFO_0_AR,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_AR},
         {"0y", OPTION_VAL_0Y_AR},
         {"1x", OPTION_VAL_1X_AR},
         {"1y", OPTION_VAL_1Y_AR},
         {"2x", OPTION_VAL_2X_AR},
         {"2y", OPTION_VAL_2Y_AR},
         {"3x", OPTION_VAL_3X_AR},
         {"3y", OPTION_VAL_3Y_AR},
         {NULL, NULL},
      },
      "3y"
   },
#endif

   {
      "dice_dipswitch_1",
      DICE_DIPSWITCH_1_LABEL_AR,
      DICE_DIPSWITCH_1_LABEL_CAT_AR,
      DICE_DIPSWITCH_1_INFO_0_AR,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_AR},
         {"0", NULL},
         {"1", NULL},
         {NULL, NULL},
      },
      "-1"
   },
   {
      "dice_dipswitch_2",
      DICE_DIPSWITCH_2_LABEL_AR,
      DICE_DIPSWITCH_2_LABEL_CAT_AR,
      DICE_DIPSWITCH_2_INFO_0_AR,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_AR},
         {"0", NULL},
         {"1", NULL},
         {NULL, NULL},
      },
      "-1"
   },
   {
      "dice_dipswitch_3",
      DICE_DIPSWITCH_3_LABEL_AR,
      DICE_DIPSWITCH_3_LABEL_CAT_AR,
      DICE_DIPSWITCH_3_INFO_0_AR,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_AR},
         {"0", NULL},
         {"1", NULL},
         {NULL, NULL},
      },
      "-1"
   },
   {
      "dice_dipswitch16_1",
      DICE_DIPSWITCH16_1_LABEL_AR,
      DICE_DIPSWITCH16_1_LABEL_CAT_AR,
      DICE_DIPSWITCH16_1_INFO_0_AR,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_AR},
         {"0", NULL},
         {"1", NULL},
         {"2", NULL},
         {"3", NULL},
         {"4", NULL},
         {"5", NULL},
         {"6", NULL},
         {"7", NULL},
         {"8", NULL},
         {"9", NULL},
         {"10", NULL},
         {"11", NULL},
         {"12", NULL},
         {"13", NULL},
         {"14", NULL},
         {"15", NULL},
         {NULL, NULL},
      },
      "-1"
   },
   {
      "dice_dipswitch16_2",
      DICE_DIPSWITCH16_2_LABEL_AR,
      DICE_DIPSWITCH16_2_LABEL_CAT_AR,
      DICE_DIPSWITCH16_2_INFO_0_AR,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_AR},
         {"0", NULL},
         {"1", NULL},
         {"2", NULL},
         {"3", NULL},
         {"4", NULL},
         {"5", NULL},
         {"6", NULL},
         {"7", NULL},
         {"8", NULL},
         {"9", NULL},
         {"10", NULL},
         {"11", NULL},
         {"12", NULL},
         {"13", NULL},
         {"14", NULL},
         {"15", NULL},
         {NULL, NULL},
      },
      "-1"
   },

   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_ar = {
   option_cats_ar,
   option_defs_ar
};

/* RETRO_LANGUAGE_AST */

#define CATEGORY_INPUT_LABEL_AST "Controles"
#define CATEGORY_INPUT_INFO_0_AST NULL
#define CATEGORY_RETROMOUSE_LABEL_AST NULL
#define CATEGORY_RETROMOUSE_INFO_0_AST NULL
#define CATEGORY_MANYMOUSE_LABEL_AST NULL
#define CATEGORY_MANYMOUSE_INFO_0_AST NULL
#define CATEGORY_DIPSWITCH_LABEL_AST NULL
#define CATEGORY_DIPSWITCH_INFO_0_AST NULL
#define DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_LABEL_AST NULL
#define DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_LABEL_CAT_AST NULL
#define DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_INFO_0_AST NULL
#define DICE_PADDLE_JOYSTICK_ABSOLUTE_LABEL_AST NULL
#define DICE_PADDLE_JOYSTICK_ABSOLUTE_LABEL_CAT_AST NULL
#define DICE_PADDLE_JOYSTICK_ABSOLUTE_INFO_0_AST NULL
#define DICE_PADDLE_KEYBOARD_SENSITIVITY_LABEL_AST NULL
#define DICE_PADDLE_KEYBOARD_SENSITIVITY_LABEL_CAT_AST NULL
#define DICE_PADDLE_KEYBOARD_SENSITIVITY_INFO_0_AST NULL
#define DICE_PADDLE_JOYSTICK_SENSITIVITY_LABEL_AST NULL
#define DICE_PADDLE_JOYSTICK_SENSITIVITY_LABEL_CAT_AST NULL
#define DICE_PADDLE_JOYSTICK_SENSITIVITY_INFO_0_AST NULL
#define DICE_RETROMOUSE_PADDLE_SENSITIVITY_LABEL_AST NULL
#define DICE_RETROMOUSE_PADDLE_SENSITIVITY_LABEL_CAT_AST NULL
#define DICE_RETROMOUSE_PADDLE_SENSITIVITY_INFO_0_AST NULL
#define DICE_WHEEL_KEYJOY_SENSITIVITY_LABEL_AST NULL
#define DICE_WHEEL_KEYJOY_SENSITIVITY_LABEL_CAT_AST NULL
#define DICE_WHEEL_KEYJOY_SENSITIVITY_INFO_0_AST NULL
#define DICE_THROTTLE_KEYJOY_SENSITIVITY_LABEL_AST NULL
#define DICE_THROTTLE_KEYJOY_SENSITIVITY_LABEL_CAT_AST NULL
#define DICE_THROTTLE_KEYJOY_SENSITIVITY_INFO_0_AST NULL
#define DICE_RETROMOUSE_PADDLE0_LABEL_AST NULL
#define DICE_RETROMOUSE_PADDLE0_LABEL_CAT_AST NULL
#define DICE_RETROMOUSE_PADDLE0_INFO_0_AST NULL
#define DICE_RETROMOUSE_PADDLE1_LABEL_AST NULL
#define DICE_RETROMOUSE_PADDLE1_LABEL_CAT_AST NULL
#define DICE_RETROMOUSE_PADDLE1_INFO_0_AST NULL
#define DICE_RETROMOUSE_PADDLE2_LABEL_AST NULL
#define DICE_RETROMOUSE_PADDLE2_LABEL_CAT_AST NULL
#define DICE_RETROMOUSE_PADDLE2_INFO_0_AST NULL
#define DICE_RETROMOUSE_PADDLE3_LABEL_AST NULL
#define DICE_RETROMOUSE_PADDLE3_LABEL_CAT_AST NULL
#define DICE_RETROMOUSE_PADDLE3_INFO_0_AST NULL
#define DICE_RETROMOUSE_PADDLE0_X_LABEL_AST NULL
#define DICE_RETROMOUSE_PADDLE0_X_LABEL_CAT_AST NULL
#define DICE_RETROMOUSE_PADDLE0_X_INFO_0_AST NULL
#define OPTION_VAL_X_AST NULL
#define OPTION_VAL_Y_AST NULL
#define DICE_RETROMOUSE_PADDLE0_Y_LABEL_AST NULL
#define DICE_RETROMOUSE_PADDLE0_Y_LABEL_CAT_AST NULL
#define DICE_RETROMOUSE_PADDLE0_Y_INFO_0_AST NULL
#define DICE_RETROMOUSE_PADDLE1_X_LABEL_AST NULL
#define DICE_RETROMOUSE_PADDLE1_X_LABEL_CAT_AST NULL
#define DICE_RETROMOUSE_PADDLE1_X_INFO_0_AST NULL
#define DICE_RETROMOUSE_PADDLE1_Y_LABEL_AST NULL
#define DICE_RETROMOUSE_PADDLE1_Y_LABEL_CAT_AST NULL
#define DICE_RETROMOUSE_PADDLE1_Y_INFO_0_AST NULL
#define DICE_RETROMOUSE_PADDLE2_X_LABEL_AST NULL
#define DICE_RETROMOUSE_PADDLE2_X_LABEL_CAT_AST NULL
#define DICE_RETROMOUSE_PADDLE2_X_INFO_0_AST NULL
#define DICE_RETROMOUSE_PADDLE2_Y_LABEL_AST NULL
#define DICE_RETROMOUSE_PADDLE2_Y_LABEL_CAT_AST NULL
#define DICE_RETROMOUSE_PADDLE2_Y_INFO_0_AST NULL
#define DICE_RETROMOUSE_PADDLE3_X_LABEL_AST NULL
#define DICE_RETROMOUSE_PADDLE3_X_LABEL_CAT_AST NULL
#define DICE_RETROMOUSE_PADDLE3_X_INFO_0_AST NULL
#define DICE_RETROMOUSE_PADDLE3_Y_LABEL_AST NULL
#define DICE_RETROMOUSE_PADDLE3_Y_LABEL_CAT_AST NULL
#define DICE_RETROMOUSE_PADDLE3_Y_INFO_0_AST NULL
#define DICE_MANYMOUSE_PADDLE0_LABEL_AST NULL
#define DICE_MANYMOUSE_PADDLE0_INFO_0_AST NULL
#define DICE_MANYMOUSE_PADDLE0_X_LABEL_AST NULL
#define DICE_MANYMOUSE_PADDLE0_X_LABEL_CAT_AST NULL
#define OPTION_VAL_0X_AST NULL
#define OPTION_VAL_0Y_AST NULL
#define OPTION_VAL_1X_AST "x1"
#define OPTION_VAL_1Y_AST NULL
#define OPTION_VAL_2X_AST "x2"
#define OPTION_VAL_2Y_AST NULL
#define OPTION_VAL_3X_AST "x3"
#define OPTION_VAL_3Y_AST NULL
#define DICE_MANYMOUSE_PADDLE0_Y_LABEL_AST NULL
#define DICE_MANYMOUSE_PADDLE0_Y_LABEL_CAT_AST NULL
#define DICE_MANYMOUSE_PADDLE1_LABEL_AST NULL
#define DICE_MANYMOUSE_PADDLE1_INFO_0_AST NULL
#define DICE_MANYMOUSE_PADDLE1_X_LABEL_AST NULL
#define DICE_MANYMOUSE_PADDLE1_X_LABEL_CAT_AST NULL
#define DICE_MANYMOUSE_PADDLE1_Y_LABEL_AST NULL
#define DICE_MANYMOUSE_PADDLE1_Y_LABEL_CAT_AST NULL
#define DICE_MANYMOUSE_PADDLE2_LABEL_AST NULL
#define DICE_MANYMOUSE_PADDLE2_INFO_0_AST NULL
#define DICE_MANYMOUSE_PADDLE2_X_LABEL_AST NULL
#define DICE_MANYMOUSE_PADDLE2_X_LABEL_CAT_AST NULL
#define DICE_MANYMOUSE_PADDLE2_Y_LABEL_AST NULL
#define DICE_MANYMOUSE_PADDLE2_Y_LABEL_CAT_AST NULL
#define DICE_MANYMOUSE_PADDLE3_LABEL_AST NULL
#define DICE_MANYMOUSE_PADDLE3_INFO_0_AST NULL
#define DICE_MANYMOUSE_PADDLE3_X_LABEL_AST NULL
#define DICE_MANYMOUSE_PADDLE3_X_LABEL_CAT_AST NULL
#define DICE_MANYMOUSE_PADDLE3_Y_LABEL_AST NULL
#define DICE_MANYMOUSE_PADDLE3_Y_LABEL_CAT_AST NULL
#define DICE_DIPSWITCH_1_LABEL_AST NULL
#define DICE_DIPSWITCH_1_LABEL_CAT_AST NULL
#define DICE_DIPSWITCH_1_INFO_0_AST NULL
#define OPTION_VAL_1_AST NULL
#define DICE_DIPSWITCH_2_LABEL_AST NULL
#define DICE_DIPSWITCH_2_LABEL_CAT_AST NULL
#define DICE_DIPSWITCH_2_INFO_0_AST NULL
#define DICE_DIPSWITCH_3_LABEL_AST NULL
#define DICE_DIPSWITCH_3_LABEL_CAT_AST NULL
#define DICE_DIPSWITCH_3_INFO_0_AST NULL
#define DICE_DIPSWITCH16_1_LABEL_AST NULL
#define DICE_DIPSWITCH16_1_LABEL_CAT_AST NULL
#define DICE_DIPSWITCH16_1_INFO_0_AST NULL
#define DICE_DIPSWITCH16_2_LABEL_AST NULL
#define DICE_DIPSWITCH16_2_LABEL_CAT_AST NULL
#define DICE_DIPSWITCH16_2_INFO_0_AST NULL

struct retro_core_option_v2_category option_cats_ast[] = {
   {
      "input",
      CATEGORY_INPUT_LABEL_AST,
      CATEGORY_INPUT_INFO_0_AST
   },
   {
      "retromouse",
      CATEGORY_RETROMOUSE_LABEL_AST,
      CATEGORY_RETROMOUSE_INFO_0_AST
   },
#ifdef MANYMOUSE
   {
      "manymouse",
      CATEGORY_MANYMOUSE_LABEL_AST,
      CATEGORY_MANYMOUSE_INFO_0_AST
   },
#endif
   {
      "dipswitch",
      CATEGORY_DIPSWITCH_LABEL_AST,
      CATEGORY_DIPSWITCH_INFO_0_AST
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_ast[] = {
   {
      "dice_use_mouse_pointer_for_paddle_1",
      DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_LABEL_AST,
      DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_LABEL_CAT_AST,
      DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_INFO_0_AST,
      NULL,
      "input",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_paddle_joystick_absolute",
      DICE_PADDLE_JOYSTICK_ABSOLUTE_LABEL_AST,
      DICE_PADDLE_JOYSTICK_ABSOLUTE_LABEL_CAT_AST,
      DICE_PADDLE_JOYSTICK_ABSOLUTE_INFO_0_AST,
      NULL,
      "input",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      // D-pad but not necessarily keyboard under libretro,
      // that name comes from the upstream code.
      "dice_paddle_keyboard_sensitivity",
      DICE_PADDLE_KEYBOARD_SENSITIVITY_LABEL_AST,
      DICE_PADDLE_KEYBOARD_SENSITIVITY_LABEL_CAT_AST,
      DICE_PADDLE_KEYBOARD_SENSITIVITY_INFO_0_AST,
      NULL,
      "input",
      {
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "250"
   },
   {
      "dice_paddle_joystick_sensitivity",
      DICE_PADDLE_JOYSTICK_SENSITIVITY_LABEL_AST,
      DICE_PADDLE_JOYSTICK_SENSITIVITY_LABEL_CAT_AST,
      DICE_PADDLE_JOYSTICK_SENSITIVITY_INFO_0_AST,
      NULL,
      "input",
      {
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "500"
   },
   {
      "dice_retromouse_paddle_sensitivity",
      DICE_RETROMOUSE_PADDLE_SENSITIVITY_LABEL_AST,
      DICE_RETROMOUSE_PADDLE_SENSITIVITY_LABEL_CAT_AST,
      DICE_RETROMOUSE_PADDLE_SENSITIVITY_INFO_0_AST,
      NULL,
      "input",
      {
         {"25", NULL},
         {"50", NULL},
         {"75", NULL},
         {"100", NULL},
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "125"
   },
   {
      "dice_wheel_keyjoy_sensitivity",
      DICE_WHEEL_KEYJOY_SENSITIVITY_LABEL_AST,
      DICE_WHEEL_KEYJOY_SENSITIVITY_LABEL_CAT_AST,
      DICE_WHEEL_KEYJOY_SENSITIVITY_INFO_0_AST,
      NULL,
      "input",
      {
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "500"
   },
   {
      "dice_throttle_keyjoy_sensitivity",
      DICE_THROTTLE_KEYJOY_SENSITIVITY_LABEL_AST,
      DICE_THROTTLE_KEYJOY_SENSITIVITY_LABEL_CAT_AST,
      DICE_THROTTLE_KEYJOY_SENSITIVITY_INFO_0_AST,
      NULL,
      "input",
      {
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "250"
   },

   {
      "dice_retromouse_paddle0",
      DICE_RETROMOUSE_PADDLE0_LABEL_AST,
      DICE_RETROMOUSE_PADDLE0_LABEL_CAT_AST,
      DICE_RETROMOUSE_PADDLE0_INFO_0_AST,
      NULL,
      "retromouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_retromouse_paddle1",
      DICE_RETROMOUSE_PADDLE1_LABEL_AST,
      DICE_RETROMOUSE_PADDLE1_LABEL_CAT_AST,
      DICE_RETROMOUSE_PADDLE1_INFO_0_AST,
      NULL,
      "retromouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_retromouse_paddle2",
      DICE_RETROMOUSE_PADDLE2_LABEL_AST,
      DICE_RETROMOUSE_PADDLE2_LABEL_CAT_AST,
      DICE_RETROMOUSE_PADDLE2_INFO_0_AST,
      NULL,
      "retromouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_retromouse_paddle3",
      DICE_RETROMOUSE_PADDLE3_LABEL_AST,
      DICE_RETROMOUSE_PADDLE3_LABEL_CAT_AST,
      DICE_RETROMOUSE_PADDLE3_INFO_0_AST,
      NULL,
      "retromouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_retromouse_paddle0_x",
      DICE_RETROMOUSE_PADDLE0_X_LABEL_AST,
      DICE_RETROMOUSE_PADDLE0_X_LABEL_CAT_AST,
      DICE_RETROMOUSE_PADDLE0_X_INFO_0_AST,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_AST},
         {"y", OPTION_VAL_Y_AST},
         {NULL, NULL},
      },
      "x"
   },
   {
      "dice_retromouse_paddle0_y",
      DICE_RETROMOUSE_PADDLE0_Y_LABEL_AST,
      DICE_RETROMOUSE_PADDLE0_Y_LABEL_CAT_AST,
      DICE_RETROMOUSE_PADDLE0_Y_INFO_0_AST,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_AST},
         {"y", OPTION_VAL_Y_AST},
         {NULL, NULL},
      },
      "y"
   },
   {
      "dice_retromouse_paddle1_x",
      DICE_RETROMOUSE_PADDLE1_X_LABEL_AST,
      DICE_RETROMOUSE_PADDLE1_X_LABEL_CAT_AST,
      DICE_RETROMOUSE_PADDLE1_X_INFO_0_AST,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_AST},
         {"y", OPTION_VAL_Y_AST},
         {NULL, NULL},
      },
      "x"
   },
   {
      "dice_retromouse_paddle1_y",
      DICE_RETROMOUSE_PADDLE1_Y_LABEL_AST,
      DICE_RETROMOUSE_PADDLE1_Y_LABEL_CAT_AST,
      DICE_RETROMOUSE_PADDLE1_Y_INFO_0_AST,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_AST},
         {"y", OPTION_VAL_Y_AST},
         {NULL, NULL},
      },
      "y"
   },
   {
      "dice_retromouse_paddle2_x",
      DICE_RETROMOUSE_PADDLE2_X_LABEL_AST,
      DICE_RETROMOUSE_PADDLE2_X_LABEL_CAT_AST,
      DICE_RETROMOUSE_PADDLE2_X_INFO_0_AST,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_AST},
         {"y", OPTION_VAL_Y_AST},
         {NULL, NULL},
      },
      "x"
   },
   {
      "dice_retromouse_paddle2_y",
      DICE_RETROMOUSE_PADDLE2_Y_LABEL_AST,
      DICE_RETROMOUSE_PADDLE2_Y_LABEL_CAT_AST,
      DICE_RETROMOUSE_PADDLE2_Y_INFO_0_AST,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_AST},
         {"y", OPTION_VAL_Y_AST},
         {NULL, NULL},
      },
      "y"
   },
   {
      "dice_retromouse_paddle3_x",
      DICE_RETROMOUSE_PADDLE3_X_LABEL_AST,
      DICE_RETROMOUSE_PADDLE3_X_LABEL_CAT_AST,
      DICE_RETROMOUSE_PADDLE3_X_INFO_0_AST,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_AST},
         {"y", OPTION_VAL_Y_AST},
         {NULL, NULL},
      },
      "x"
   },
   {
      "dice_retromouse_paddle3_y",
      DICE_RETROMOUSE_PADDLE3_Y_LABEL_AST,
      DICE_RETROMOUSE_PADDLE3_Y_LABEL_CAT_AST,
      DICE_RETROMOUSE_PADDLE3_Y_INFO_0_AST,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_AST},
         {"y", OPTION_VAL_Y_AST},
         {NULL, NULL},
      },
      "y"
   },

#ifdef MANYMOUSE
   {
      "dice_manymouse_paddle0",
      DICE_MANYMOUSE_PADDLE0_LABEL_AST,
      DICE_RETROMOUSE_PADDLE0_LABEL_CAT_AST,
      DICE_MANYMOUSE_PADDLE0_INFO_0_AST,
      NULL,
      "manymouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_manymouse_paddle0_x",
      DICE_MANYMOUSE_PADDLE0_X_LABEL_AST,
      DICE_MANYMOUSE_PADDLE0_X_LABEL_CAT_AST,
      DICE_RETROMOUSE_PADDLE0_X_INFO_0_AST,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_AST},
         {"0y", OPTION_VAL_0Y_AST},
         {"1x", OPTION_VAL_1X_AST},
         {"1y", OPTION_VAL_1Y_AST},
         {"2x", OPTION_VAL_2X_AST},
         {"2y", OPTION_VAL_2Y_AST},
         {"3x", OPTION_VAL_3X_AST},
         {"3y", OPTION_VAL_3Y_AST},
         {NULL, NULL},
      },
      "0x"
   },
   {
      "dice_manymouse_paddle0_y",
      DICE_MANYMOUSE_PADDLE0_Y_LABEL_AST,
      DICE_MANYMOUSE_PADDLE0_Y_LABEL_CAT_AST,
      DICE_RETROMOUSE_PADDLE0_Y_INFO_0_AST,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_AST},
         {"0y", OPTION_VAL_0Y_AST},
         {"1x", OPTION_VAL_1X_AST},
         {"1y", OPTION_VAL_1Y_AST},
         {"2x", OPTION_VAL_2X_AST},
         {"2y", OPTION_VAL_2Y_AST},
         {"3x", OPTION_VAL_3X_AST},
         {"3y", OPTION_VAL_3Y_AST},
         {NULL, NULL},
      },
      "0y"
   },
   {
      "dice_manymouse_paddle1",
      DICE_MANYMOUSE_PADDLE1_LABEL_AST,
      DICE_RETROMOUSE_PADDLE1_LABEL_CAT_AST,
      DICE_MANYMOUSE_PADDLE1_INFO_0_AST,
      NULL,
      "manymouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_manymouse_paddle1_x",
      DICE_MANYMOUSE_PADDLE1_X_LABEL_AST,
      DICE_MANYMOUSE_PADDLE1_X_LABEL_CAT_AST,
      DICE_RETROMOUSE_PADDLE1_X_INFO_0_AST,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_AST},
         {"0y", OPTION_VAL_0Y_AST},
         {"1x", OPTION_VAL_1X_AST},
         {"1y", OPTION_VAL_1Y_AST},
         {"2x", OPTION_VAL_2X_AST},
         {"2y", OPTION_VAL_2Y_AST},
         {"3x", OPTION_VAL_3X_AST},
         {"3y", OPTION_VAL_3Y_AST},
         {NULL, NULL},
      },
      "1x"
   },
   {
      "dice_manymouse_paddle1_y",
      DICE_MANYMOUSE_PADDLE1_Y_LABEL_AST,
      DICE_MANYMOUSE_PADDLE1_Y_LABEL_CAT_AST,
      DICE_RETROMOUSE_PADDLE1_Y_INFO_0_AST,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_AST},
         {"0y", OPTION_VAL_0Y_AST},
         {"1x", OPTION_VAL_1X_AST},
         {"1y", OPTION_VAL_1Y_AST},
         {"2x", OPTION_VAL_2X_AST},
         {"2y", OPTION_VAL_2Y_AST},
         {"3x", OPTION_VAL_3X_AST},
         {"3y", OPTION_VAL_3Y_AST},
         {NULL, NULL},
      },
      "1y"
   },
   {
      "dice_manymouse_paddle2",
      DICE_MANYMOUSE_PADDLE2_LABEL_AST,
      DICE_RETROMOUSE_PADDLE2_LABEL_CAT_AST,
      DICE_MANYMOUSE_PADDLE2_INFO_0_AST,
      NULL,
      "manymouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_manymouse_paddle2_x",
      DICE_MANYMOUSE_PADDLE2_X_LABEL_AST,
      DICE_MANYMOUSE_PADDLE2_X_LABEL_CAT_AST,
      DICE_RETROMOUSE_PADDLE2_X_INFO_0_AST,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_AST},
         {"0y", OPTION_VAL_0Y_AST},
         {"1x", OPTION_VAL_1X_AST},
         {"1y", OPTION_VAL_1Y_AST},
         {"2x", OPTION_VAL_2X_AST},
         {"2y", OPTION_VAL_2Y_AST},
         {"3x", OPTION_VAL_3X_AST},
         {"3y", OPTION_VAL_3Y_AST},
         {NULL, NULL},
      },
      "2x"
   },
   {
      "dice_manymouse_paddle2_y",
      DICE_MANYMOUSE_PADDLE2_Y_LABEL_AST,
      DICE_MANYMOUSE_PADDLE2_Y_LABEL_CAT_AST,
      DICE_RETROMOUSE_PADDLE2_Y_INFO_0_AST,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_AST},
         {"0y", OPTION_VAL_0Y_AST},
         {"1x", OPTION_VAL_1X_AST},
         {"1y", OPTION_VAL_1Y_AST},
         {"2x", OPTION_VAL_2X_AST},
         {"2y", OPTION_VAL_2Y_AST},
         {"3x", OPTION_VAL_3X_AST},
         {"3y", OPTION_VAL_3Y_AST},
         {NULL, NULL},
      },
      "2y"
   },
   {
      "dice_manymouse_paddle3",
      DICE_MANYMOUSE_PADDLE3_LABEL_AST,
      DICE_RETROMOUSE_PADDLE3_LABEL_CAT_AST,
      DICE_MANYMOUSE_PADDLE3_INFO_0_AST,
      NULL,
      "manymouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_manymouse_paddle3_x",
      DICE_MANYMOUSE_PADDLE3_X_LABEL_AST,
      DICE_MANYMOUSE_PADDLE3_X_LABEL_CAT_AST,
      DICE_RETROMOUSE_PADDLE3_X_INFO_0_AST,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_AST},
         {"0y", OPTION_VAL_0Y_AST},
         {"1x", OPTION_VAL_1X_AST},
         {"1y", OPTION_VAL_1Y_AST},
         {"2x", OPTION_VAL_2X_AST},
         {"2y", OPTION_VAL_2Y_AST},
         {"3x", OPTION_VAL_3X_AST},
         {"3y", OPTION_VAL_3Y_AST},
         {NULL, NULL},
      },
      "3x"
   },
   {
      "dice_manymouse_paddle3_y",
      DICE_MANYMOUSE_PADDLE3_Y_LABEL_AST,
      DICE_MANYMOUSE_PADDLE3_Y_LABEL_CAT_AST,
      DICE_RETROMOUSE_PADDLE3_Y_INFO_0_AST,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_AST},
         {"0y", OPTION_VAL_0Y_AST},
         {"1x", OPTION_VAL_1X_AST},
         {"1y", OPTION_VAL_1Y_AST},
         {"2x", OPTION_VAL_2X_AST},
         {"2y", OPTION_VAL_2Y_AST},
         {"3x", OPTION_VAL_3X_AST},
         {"3y", OPTION_VAL_3Y_AST},
         {NULL, NULL},
      },
      "3y"
   },
#endif

   {
      "dice_dipswitch_1",
      DICE_DIPSWITCH_1_LABEL_AST,
      DICE_DIPSWITCH_1_LABEL_CAT_AST,
      DICE_DIPSWITCH_1_INFO_0_AST,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_AST},
         {"0", NULL},
         {"1", NULL},
         {NULL, NULL},
      },
      "-1"
   },
   {
      "dice_dipswitch_2",
      DICE_DIPSWITCH_2_LABEL_AST,
      DICE_DIPSWITCH_2_LABEL_CAT_AST,
      DICE_DIPSWITCH_2_INFO_0_AST,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_AST},
         {"0", NULL},
         {"1", NULL},
         {NULL, NULL},
      },
      "-1"
   },
   {
      "dice_dipswitch_3",
      DICE_DIPSWITCH_3_LABEL_AST,
      DICE_DIPSWITCH_3_LABEL_CAT_AST,
      DICE_DIPSWITCH_3_INFO_0_AST,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_AST},
         {"0", NULL},
         {"1", NULL},
         {NULL, NULL},
      },
      "-1"
   },
   {
      "dice_dipswitch16_1",
      DICE_DIPSWITCH16_1_LABEL_AST,
      DICE_DIPSWITCH16_1_LABEL_CAT_AST,
      DICE_DIPSWITCH16_1_INFO_0_AST,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_AST},
         {"0", NULL},
         {"1", NULL},
         {"2", NULL},
         {"3", NULL},
         {"4", NULL},
         {"5", NULL},
         {"6", NULL},
         {"7", NULL},
         {"8", NULL},
         {"9", NULL},
         {"10", NULL},
         {"11", NULL},
         {"12", NULL},
         {"13", NULL},
         {"14", NULL},
         {"15", NULL},
         {NULL, NULL},
      },
      "-1"
   },
   {
      "dice_dipswitch16_2",
      DICE_DIPSWITCH16_2_LABEL_AST,
      DICE_DIPSWITCH16_2_LABEL_CAT_AST,
      DICE_DIPSWITCH16_2_INFO_0_AST,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_AST},
         {"0", NULL},
         {"1", NULL},
         {"2", NULL},
         {"3", NULL},
         {"4", NULL},
         {"5", NULL},
         {"6", NULL},
         {"7", NULL},
         {"8", NULL},
         {"9", NULL},
         {"10", NULL},
         {"11", NULL},
         {"12", NULL},
         {"13", NULL},
         {"14", NULL},
         {"15", NULL},
         {NULL, NULL},
      },
      "-1"
   },

   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_ast = {
   option_cats_ast,
   option_defs_ast
};

/* RETRO_LANGUAGE_BE */

#define CATEGORY_INPUT_LABEL_BE "Увод"
#define CATEGORY_INPUT_INFO_0_BE NULL
#define CATEGORY_RETROMOUSE_LABEL_BE NULL
#define CATEGORY_RETROMOUSE_INFO_0_BE NULL
#define CATEGORY_MANYMOUSE_LABEL_BE NULL
#define CATEGORY_MANYMOUSE_INFO_0_BE NULL
#define CATEGORY_DIPSWITCH_LABEL_BE NULL
#define CATEGORY_DIPSWITCH_INFO_0_BE NULL
#define DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_LABEL_BE NULL
#define DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_LABEL_CAT_BE NULL
#define DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_INFO_0_BE NULL
#define DICE_PADDLE_JOYSTICK_ABSOLUTE_LABEL_BE NULL
#define DICE_PADDLE_JOYSTICK_ABSOLUTE_LABEL_CAT_BE NULL
#define DICE_PADDLE_JOYSTICK_ABSOLUTE_INFO_0_BE NULL
#define DICE_PADDLE_KEYBOARD_SENSITIVITY_LABEL_BE NULL
#define DICE_PADDLE_KEYBOARD_SENSITIVITY_LABEL_CAT_BE NULL
#define DICE_PADDLE_KEYBOARD_SENSITIVITY_INFO_0_BE NULL
#define DICE_PADDLE_JOYSTICK_SENSITIVITY_LABEL_BE NULL
#define DICE_PADDLE_JOYSTICK_SENSITIVITY_LABEL_CAT_BE NULL
#define DICE_PADDLE_JOYSTICK_SENSITIVITY_INFO_0_BE NULL
#define DICE_RETROMOUSE_PADDLE_SENSITIVITY_LABEL_BE NULL
#define DICE_RETROMOUSE_PADDLE_SENSITIVITY_LABEL_CAT_BE NULL
#define DICE_RETROMOUSE_PADDLE_SENSITIVITY_INFO_0_BE NULL
#define DICE_WHEEL_KEYJOY_SENSITIVITY_LABEL_BE NULL
#define DICE_WHEEL_KEYJOY_SENSITIVITY_LABEL_CAT_BE "Чуласць стырна"
#define DICE_WHEEL_KEYJOY_SENSITIVITY_INFO_0_BE NULL
#define DICE_THROTTLE_KEYJOY_SENSITIVITY_LABEL_BE NULL
#define DICE_THROTTLE_KEYJOY_SENSITIVITY_LABEL_CAT_BE NULL
#define DICE_THROTTLE_KEYJOY_SENSITIVITY_INFO_0_BE NULL
#define DICE_RETROMOUSE_PADDLE0_LABEL_BE NULL
#define DICE_RETROMOUSE_PADDLE0_LABEL_CAT_BE NULL
#define DICE_RETROMOUSE_PADDLE0_INFO_0_BE NULL
#define DICE_RETROMOUSE_PADDLE1_LABEL_BE NULL
#define DICE_RETROMOUSE_PADDLE1_LABEL_CAT_BE NULL
#define DICE_RETROMOUSE_PADDLE1_INFO_0_BE NULL
#define DICE_RETROMOUSE_PADDLE2_LABEL_BE NULL
#define DICE_RETROMOUSE_PADDLE2_LABEL_CAT_BE NULL
#define DICE_RETROMOUSE_PADDLE2_INFO_0_BE NULL
#define DICE_RETROMOUSE_PADDLE3_LABEL_BE NULL
#define DICE_RETROMOUSE_PADDLE3_LABEL_CAT_BE NULL
#define DICE_RETROMOUSE_PADDLE3_INFO_0_BE NULL
#define DICE_RETROMOUSE_PADDLE0_X_LABEL_BE NULL
#define DICE_RETROMOUSE_PADDLE0_X_LABEL_CAT_BE NULL
#define DICE_RETROMOUSE_PADDLE0_X_INFO_0_BE NULL
#define OPTION_VAL_X_BE NULL
#define OPTION_VAL_Y_BE NULL
#define DICE_RETROMOUSE_PADDLE0_Y_LABEL_BE NULL
#define DICE_RETROMOUSE_PADDLE0_Y_LABEL_CAT_BE NULL
#define DICE_RETROMOUSE_PADDLE0_Y_INFO_0_BE NULL
#define DICE_RETROMOUSE_PADDLE1_X_LABEL_BE NULL
#define DICE_RETROMOUSE_PADDLE1_X_LABEL_CAT_BE NULL
#define DICE_RETROMOUSE_PADDLE1_X_INFO_0_BE NULL
#define DICE_RETROMOUSE_PADDLE1_Y_LABEL_BE NULL
#define DICE_RETROMOUSE_PADDLE1_Y_LABEL_CAT_BE NULL
#define DICE_RETROMOUSE_PADDLE1_Y_INFO_0_BE NULL
#define DICE_RETROMOUSE_PADDLE2_X_LABEL_BE NULL
#define DICE_RETROMOUSE_PADDLE2_X_LABEL_CAT_BE NULL
#define DICE_RETROMOUSE_PADDLE2_X_INFO_0_BE NULL
#define DICE_RETROMOUSE_PADDLE2_Y_LABEL_BE NULL
#define DICE_RETROMOUSE_PADDLE2_Y_LABEL_CAT_BE NULL
#define DICE_RETROMOUSE_PADDLE2_Y_INFO_0_BE NULL
#define DICE_RETROMOUSE_PADDLE3_X_LABEL_BE NULL
#define DICE_RETROMOUSE_PADDLE3_X_LABEL_CAT_BE NULL
#define DICE_RETROMOUSE_PADDLE3_X_INFO_0_BE NULL
#define DICE_RETROMOUSE_PADDLE3_Y_LABEL_BE NULL
#define DICE_RETROMOUSE_PADDLE3_Y_LABEL_CAT_BE NULL
#define DICE_RETROMOUSE_PADDLE3_Y_INFO_0_BE NULL
#define DICE_MANYMOUSE_PADDLE0_LABEL_BE NULL
#define DICE_MANYMOUSE_PADDLE0_INFO_0_BE NULL
#define DICE_MANYMOUSE_PADDLE0_X_LABEL_BE NULL
#define DICE_MANYMOUSE_PADDLE0_X_LABEL_CAT_BE NULL
#define OPTION_VAL_0X_BE NULL
#define OPTION_VAL_0Y_BE NULL
#define OPTION_VAL_1X_BE NULL
#define OPTION_VAL_1Y_BE NULL
#define OPTION_VAL_2X_BE NULL
#define OPTION_VAL_2Y_BE NULL
#define OPTION_VAL_3X_BE NULL
#define OPTION_VAL_3Y_BE NULL
#define DICE_MANYMOUSE_PADDLE0_Y_LABEL_BE NULL
#define DICE_MANYMOUSE_PADDLE0_Y_LABEL_CAT_BE NULL
#define DICE_MANYMOUSE_PADDLE1_LABEL_BE NULL
#define DICE_MANYMOUSE_PADDLE1_INFO_0_BE NULL
#define DICE_MANYMOUSE_PADDLE1_X_LABEL_BE NULL
#define DICE_MANYMOUSE_PADDLE1_X_LABEL_CAT_BE NULL
#define DICE_MANYMOUSE_PADDLE1_Y_LABEL_BE NULL
#define DICE_MANYMOUSE_PADDLE1_Y_LABEL_CAT_BE NULL
#define DICE_MANYMOUSE_PADDLE2_LABEL_BE NULL
#define DICE_MANYMOUSE_PADDLE2_INFO_0_BE NULL
#define DICE_MANYMOUSE_PADDLE2_X_LABEL_BE NULL
#define DICE_MANYMOUSE_PADDLE2_X_LABEL_CAT_BE NULL
#define DICE_MANYMOUSE_PADDLE2_Y_LABEL_BE NULL
#define DICE_MANYMOUSE_PADDLE2_Y_LABEL_CAT_BE NULL
#define DICE_MANYMOUSE_PADDLE3_LABEL_BE NULL
#define DICE_MANYMOUSE_PADDLE3_INFO_0_BE NULL
#define DICE_MANYMOUSE_PADDLE3_X_LABEL_BE NULL
#define DICE_MANYMOUSE_PADDLE3_X_LABEL_CAT_BE NULL
#define DICE_MANYMOUSE_PADDLE3_Y_LABEL_BE NULL
#define DICE_MANYMOUSE_PADDLE3_Y_LABEL_CAT_BE NULL
#define DICE_DIPSWITCH_1_LABEL_BE NULL
#define DICE_DIPSWITCH_1_LABEL_CAT_BE NULL
#define DICE_DIPSWITCH_1_INFO_0_BE NULL
#define OPTION_VAL_1_BE "прадвызначана"
#define DICE_DIPSWITCH_2_LABEL_BE NULL
#define DICE_DIPSWITCH_2_LABEL_CAT_BE NULL
#define DICE_DIPSWITCH_2_INFO_0_BE NULL
#define DICE_DIPSWITCH_3_LABEL_BE NULL
#define DICE_DIPSWITCH_3_LABEL_CAT_BE NULL
#define DICE_DIPSWITCH_3_INFO_0_BE NULL
#define DICE_DIPSWITCH16_1_LABEL_BE NULL
#define DICE_DIPSWITCH16_1_LABEL_CAT_BE NULL
#define DICE_DIPSWITCH16_1_INFO_0_BE NULL
#define DICE_DIPSWITCH16_2_LABEL_BE NULL
#define DICE_DIPSWITCH16_2_LABEL_CAT_BE NULL
#define DICE_DIPSWITCH16_2_INFO_0_BE NULL

struct retro_core_option_v2_category option_cats_be[] = {
   {
      "input",
      CATEGORY_INPUT_LABEL_BE,
      CATEGORY_INPUT_INFO_0_BE
   },
   {
      "retromouse",
      CATEGORY_RETROMOUSE_LABEL_BE,
      CATEGORY_RETROMOUSE_INFO_0_BE
   },
#ifdef MANYMOUSE
   {
      "manymouse",
      CATEGORY_MANYMOUSE_LABEL_BE,
      CATEGORY_MANYMOUSE_INFO_0_BE
   },
#endif
   {
      "dipswitch",
      CATEGORY_DIPSWITCH_LABEL_BE,
      CATEGORY_DIPSWITCH_INFO_0_BE
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_be[] = {
   {
      "dice_use_mouse_pointer_for_paddle_1",
      DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_LABEL_BE,
      DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_LABEL_CAT_BE,
      DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_INFO_0_BE,
      NULL,
      "input",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_paddle_joystick_absolute",
      DICE_PADDLE_JOYSTICK_ABSOLUTE_LABEL_BE,
      DICE_PADDLE_JOYSTICK_ABSOLUTE_LABEL_CAT_BE,
      DICE_PADDLE_JOYSTICK_ABSOLUTE_INFO_0_BE,
      NULL,
      "input",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      // D-pad but not necessarily keyboard under libretro,
      // that name comes from the upstream code.
      "dice_paddle_keyboard_sensitivity",
      DICE_PADDLE_KEYBOARD_SENSITIVITY_LABEL_BE,
      DICE_PADDLE_KEYBOARD_SENSITIVITY_LABEL_CAT_BE,
      DICE_PADDLE_KEYBOARD_SENSITIVITY_INFO_0_BE,
      NULL,
      "input",
      {
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "250"
   },
   {
      "dice_paddle_joystick_sensitivity",
      DICE_PADDLE_JOYSTICK_SENSITIVITY_LABEL_BE,
      DICE_PADDLE_JOYSTICK_SENSITIVITY_LABEL_CAT_BE,
      DICE_PADDLE_JOYSTICK_SENSITIVITY_INFO_0_BE,
      NULL,
      "input",
      {
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "500"
   },
   {
      "dice_retromouse_paddle_sensitivity",
      DICE_RETROMOUSE_PADDLE_SENSITIVITY_LABEL_BE,
      DICE_RETROMOUSE_PADDLE_SENSITIVITY_LABEL_CAT_BE,
      DICE_RETROMOUSE_PADDLE_SENSITIVITY_INFO_0_BE,
      NULL,
      "input",
      {
         {"25", NULL},
         {"50", NULL},
         {"75", NULL},
         {"100", NULL},
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "125"
   },
   {
      "dice_wheel_keyjoy_sensitivity",
      DICE_WHEEL_KEYJOY_SENSITIVITY_LABEL_BE,
      DICE_WHEEL_KEYJOY_SENSITIVITY_LABEL_CAT_BE,
      DICE_WHEEL_KEYJOY_SENSITIVITY_INFO_0_BE,
      NULL,
      "input",
      {
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "500"
   },
   {
      "dice_throttle_keyjoy_sensitivity",
      DICE_THROTTLE_KEYJOY_SENSITIVITY_LABEL_BE,
      DICE_THROTTLE_KEYJOY_SENSITIVITY_LABEL_CAT_BE,
      DICE_THROTTLE_KEYJOY_SENSITIVITY_INFO_0_BE,
      NULL,
      "input",
      {
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "250"
   },

   {
      "dice_retromouse_paddle0",
      DICE_RETROMOUSE_PADDLE0_LABEL_BE,
      DICE_RETROMOUSE_PADDLE0_LABEL_CAT_BE,
      DICE_RETROMOUSE_PADDLE0_INFO_0_BE,
      NULL,
      "retromouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_retromouse_paddle1",
      DICE_RETROMOUSE_PADDLE1_LABEL_BE,
      DICE_RETROMOUSE_PADDLE1_LABEL_CAT_BE,
      DICE_RETROMOUSE_PADDLE1_INFO_0_BE,
      NULL,
      "retromouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_retromouse_paddle2",
      DICE_RETROMOUSE_PADDLE2_LABEL_BE,
      DICE_RETROMOUSE_PADDLE2_LABEL_CAT_BE,
      DICE_RETROMOUSE_PADDLE2_INFO_0_BE,
      NULL,
      "retromouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_retromouse_paddle3",
      DICE_RETROMOUSE_PADDLE3_LABEL_BE,
      DICE_RETROMOUSE_PADDLE3_LABEL_CAT_BE,
      DICE_RETROMOUSE_PADDLE3_INFO_0_BE,
      NULL,
      "retromouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_retromouse_paddle0_x",
      DICE_RETROMOUSE_PADDLE0_X_LABEL_BE,
      DICE_RETROMOUSE_PADDLE0_X_LABEL_CAT_BE,
      DICE_RETROMOUSE_PADDLE0_X_INFO_0_BE,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_BE},
         {"y", OPTION_VAL_Y_BE},
         {NULL, NULL},
      },
      "x"
   },
   {
      "dice_retromouse_paddle0_y",
      DICE_RETROMOUSE_PADDLE0_Y_LABEL_BE,
      DICE_RETROMOUSE_PADDLE0_Y_LABEL_CAT_BE,
      DICE_RETROMOUSE_PADDLE0_Y_INFO_0_BE,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_BE},
         {"y", OPTION_VAL_Y_BE},
         {NULL, NULL},
      },
      "y"
   },
   {
      "dice_retromouse_paddle1_x",
      DICE_RETROMOUSE_PADDLE1_X_LABEL_BE,
      DICE_RETROMOUSE_PADDLE1_X_LABEL_CAT_BE,
      DICE_RETROMOUSE_PADDLE1_X_INFO_0_BE,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_BE},
         {"y", OPTION_VAL_Y_BE},
         {NULL, NULL},
      },
      "x"
   },
   {
      "dice_retromouse_paddle1_y",
      DICE_RETROMOUSE_PADDLE1_Y_LABEL_BE,
      DICE_RETROMOUSE_PADDLE1_Y_LABEL_CAT_BE,
      DICE_RETROMOUSE_PADDLE1_Y_INFO_0_BE,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_BE},
         {"y", OPTION_VAL_Y_BE},
         {NULL, NULL},
      },
      "y"
   },
   {
      "dice_retromouse_paddle2_x",
      DICE_RETROMOUSE_PADDLE2_X_LABEL_BE,
      DICE_RETROMOUSE_PADDLE2_X_LABEL_CAT_BE,
      DICE_RETROMOUSE_PADDLE2_X_INFO_0_BE,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_BE},
         {"y", OPTION_VAL_Y_BE},
         {NULL, NULL},
      },
      "x"
   },
   {
      "dice_retromouse_paddle2_y",
      DICE_RETROMOUSE_PADDLE2_Y_LABEL_BE,
      DICE_RETROMOUSE_PADDLE2_Y_LABEL_CAT_BE,
      DICE_RETROMOUSE_PADDLE2_Y_INFO_0_BE,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_BE},
         {"y", OPTION_VAL_Y_BE},
         {NULL, NULL},
      },
      "y"
   },
   {
      "dice_retromouse_paddle3_x",
      DICE_RETROMOUSE_PADDLE3_X_LABEL_BE,
      DICE_RETROMOUSE_PADDLE3_X_LABEL_CAT_BE,
      DICE_RETROMOUSE_PADDLE3_X_INFO_0_BE,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_BE},
         {"y", OPTION_VAL_Y_BE},
         {NULL, NULL},
      },
      "x"
   },
   {
      "dice_retromouse_paddle3_y",
      DICE_RETROMOUSE_PADDLE3_Y_LABEL_BE,
      DICE_RETROMOUSE_PADDLE3_Y_LABEL_CAT_BE,
      DICE_RETROMOUSE_PADDLE3_Y_INFO_0_BE,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_BE},
         {"y", OPTION_VAL_Y_BE},
         {NULL, NULL},
      },
      "y"
   },

#ifdef MANYMOUSE
   {
      "dice_manymouse_paddle0",
      DICE_MANYMOUSE_PADDLE0_LABEL_BE,
      DICE_RETROMOUSE_PADDLE0_LABEL_CAT_BE,
      DICE_MANYMOUSE_PADDLE0_INFO_0_BE,
      NULL,
      "manymouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_manymouse_paddle0_x",
      DICE_MANYMOUSE_PADDLE0_X_LABEL_BE,
      DICE_MANYMOUSE_PADDLE0_X_LABEL_CAT_BE,
      DICE_RETROMOUSE_PADDLE0_X_INFO_0_BE,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_BE},
         {"0y", OPTION_VAL_0Y_BE},
         {"1x", OPTION_VAL_1X_BE},
         {"1y", OPTION_VAL_1Y_BE},
         {"2x", OPTION_VAL_2X_BE},
         {"2y", OPTION_VAL_2Y_BE},
         {"3x", OPTION_VAL_3X_BE},
         {"3y", OPTION_VAL_3Y_BE},
         {NULL, NULL},
      },
      "0x"
   },
   {
      "dice_manymouse_paddle0_y",
      DICE_MANYMOUSE_PADDLE0_Y_LABEL_BE,
      DICE_MANYMOUSE_PADDLE0_Y_LABEL_CAT_BE,
      DICE_RETROMOUSE_PADDLE0_Y_INFO_0_BE,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_BE},
         {"0y", OPTION_VAL_0Y_BE},
         {"1x", OPTION_VAL_1X_BE},
         {"1y", OPTION_VAL_1Y_BE},
         {"2x", OPTION_VAL_2X_BE},
         {"2y", OPTION_VAL_2Y_BE},
         {"3x", OPTION_VAL_3X_BE},
         {"3y", OPTION_VAL_3Y_BE},
         {NULL, NULL},
      },
      "0y"
   },
   {
      "dice_manymouse_paddle1",
      DICE_MANYMOUSE_PADDLE1_LABEL_BE,
      DICE_RETROMOUSE_PADDLE1_LABEL_CAT_BE,
      DICE_MANYMOUSE_PADDLE1_INFO_0_BE,
      NULL,
      "manymouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_manymouse_paddle1_x",
      DICE_MANYMOUSE_PADDLE1_X_LABEL_BE,
      DICE_MANYMOUSE_PADDLE1_X_LABEL_CAT_BE,
      DICE_RETROMOUSE_PADDLE1_X_INFO_0_BE,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_BE},
         {"0y", OPTION_VAL_0Y_BE},
         {"1x", OPTION_VAL_1X_BE},
         {"1y", OPTION_VAL_1Y_BE},
         {"2x", OPTION_VAL_2X_BE},
         {"2y", OPTION_VAL_2Y_BE},
         {"3x", OPTION_VAL_3X_BE},
         {"3y", OPTION_VAL_3Y_BE},
         {NULL, NULL},
      },
      "1x"
   },
   {
      "dice_manymouse_paddle1_y",
      DICE_MANYMOUSE_PADDLE1_Y_LABEL_BE,
      DICE_MANYMOUSE_PADDLE1_Y_LABEL_CAT_BE,
      DICE_RETROMOUSE_PADDLE1_Y_INFO_0_BE,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_BE},
         {"0y", OPTION_VAL_0Y_BE},
         {"1x", OPTION_VAL_1X_BE},
         {"1y", OPTION_VAL_1Y_BE},
         {"2x", OPTION_VAL_2X_BE},
         {"2y", OPTION_VAL_2Y_BE},
         {"3x", OPTION_VAL_3X_BE},
         {"3y", OPTION_VAL_3Y_BE},
         {NULL, NULL},
      },
      "1y"
   },
   {
      "dice_manymouse_paddle2",
      DICE_MANYMOUSE_PADDLE2_LABEL_BE,
      DICE_RETROMOUSE_PADDLE2_LABEL_CAT_BE,
      DICE_MANYMOUSE_PADDLE2_INFO_0_BE,
      NULL,
      "manymouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_manymouse_paddle2_x",
      DICE_MANYMOUSE_PADDLE2_X_LABEL_BE,
      DICE_MANYMOUSE_PADDLE2_X_LABEL_CAT_BE,
      DICE_RETROMOUSE_PADDLE2_X_INFO_0_BE,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_BE},
         {"0y", OPTION_VAL_0Y_BE},
         {"1x", OPTION_VAL_1X_BE},
         {"1y", OPTION_VAL_1Y_BE},
         {"2x", OPTION_VAL_2X_BE},
         {"2y", OPTION_VAL_2Y_BE},
         {"3x", OPTION_VAL_3X_BE},
         {"3y", OPTION_VAL_3Y_BE},
         {NULL, NULL},
      },
      "2x"
   },
   {
      "dice_manymouse_paddle2_y",
      DICE_MANYMOUSE_PADDLE2_Y_LABEL_BE,
      DICE_MANYMOUSE_PADDLE2_Y_LABEL_CAT_BE,
      DICE_RETROMOUSE_PADDLE2_Y_INFO_0_BE,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_BE},
         {"0y", OPTION_VAL_0Y_BE},
         {"1x", OPTION_VAL_1X_BE},
         {"1y", OPTION_VAL_1Y_BE},
         {"2x", OPTION_VAL_2X_BE},
         {"2y", OPTION_VAL_2Y_BE},
         {"3x", OPTION_VAL_3X_BE},
         {"3y", OPTION_VAL_3Y_BE},
         {NULL, NULL},
      },
      "2y"
   },
   {
      "dice_manymouse_paddle3",
      DICE_MANYMOUSE_PADDLE3_LABEL_BE,
      DICE_RETROMOUSE_PADDLE3_LABEL_CAT_BE,
      DICE_MANYMOUSE_PADDLE3_INFO_0_BE,
      NULL,
      "manymouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_manymouse_paddle3_x",
      DICE_MANYMOUSE_PADDLE3_X_LABEL_BE,
      DICE_MANYMOUSE_PADDLE3_X_LABEL_CAT_BE,
      DICE_RETROMOUSE_PADDLE3_X_INFO_0_BE,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_BE},
         {"0y", OPTION_VAL_0Y_BE},
         {"1x", OPTION_VAL_1X_BE},
         {"1y", OPTION_VAL_1Y_BE},
         {"2x", OPTION_VAL_2X_BE},
         {"2y", OPTION_VAL_2Y_BE},
         {"3x", OPTION_VAL_3X_BE},
         {"3y", OPTION_VAL_3Y_BE},
         {NULL, NULL},
      },
      "3x"
   },
   {
      "dice_manymouse_paddle3_y",
      DICE_MANYMOUSE_PADDLE3_Y_LABEL_BE,
      DICE_MANYMOUSE_PADDLE3_Y_LABEL_CAT_BE,
      DICE_RETROMOUSE_PADDLE3_Y_INFO_0_BE,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_BE},
         {"0y", OPTION_VAL_0Y_BE},
         {"1x", OPTION_VAL_1X_BE},
         {"1y", OPTION_VAL_1Y_BE},
         {"2x", OPTION_VAL_2X_BE},
         {"2y", OPTION_VAL_2Y_BE},
         {"3x", OPTION_VAL_3X_BE},
         {"3y", OPTION_VAL_3Y_BE},
         {NULL, NULL},
      },
      "3y"
   },
#endif

   {
      "dice_dipswitch_1",
      DICE_DIPSWITCH_1_LABEL_BE,
      DICE_DIPSWITCH_1_LABEL_CAT_BE,
      DICE_DIPSWITCH_1_INFO_0_BE,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_BE},
         {"0", NULL},
         {"1", NULL},
         {NULL, NULL},
      },
      "-1"
   },
   {
      "dice_dipswitch_2",
      DICE_DIPSWITCH_2_LABEL_BE,
      DICE_DIPSWITCH_2_LABEL_CAT_BE,
      DICE_DIPSWITCH_2_INFO_0_BE,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_BE},
         {"0", NULL},
         {"1", NULL},
         {NULL, NULL},
      },
      "-1"
   },
   {
      "dice_dipswitch_3",
      DICE_DIPSWITCH_3_LABEL_BE,
      DICE_DIPSWITCH_3_LABEL_CAT_BE,
      DICE_DIPSWITCH_3_INFO_0_BE,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_BE},
         {"0", NULL},
         {"1", NULL},
         {NULL, NULL},
      },
      "-1"
   },
   {
      "dice_dipswitch16_1",
      DICE_DIPSWITCH16_1_LABEL_BE,
      DICE_DIPSWITCH16_1_LABEL_CAT_BE,
      DICE_DIPSWITCH16_1_INFO_0_BE,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_BE},
         {"0", NULL},
         {"1", NULL},
         {"2", NULL},
         {"3", NULL},
         {"4", NULL},
         {"5", NULL},
         {"6", NULL},
         {"7", NULL},
         {"8", NULL},
         {"9", NULL},
         {"10", NULL},
         {"11", NULL},
         {"12", NULL},
         {"13", NULL},
         {"14", NULL},
         {"15", NULL},
         {NULL, NULL},
      },
      "-1"
   },
   {
      "dice_dipswitch16_2",
      DICE_DIPSWITCH16_2_LABEL_BE,
      DICE_DIPSWITCH16_2_LABEL_CAT_BE,
      DICE_DIPSWITCH16_2_INFO_0_BE,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_BE},
         {"0", NULL},
         {"1", NULL},
         {"2", NULL},
         {"3", NULL},
         {"4", NULL},
         {"5", NULL},
         {"6", NULL},
         {"7", NULL},
         {"8", NULL},
         {"9", NULL},
         {"10", NULL},
         {"11", NULL},
         {"12", NULL},
         {"13", NULL},
         {"14", NULL},
         {"15", NULL},
         {NULL, NULL},
      },
      "-1"
   },

   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_be = {
   option_cats_be,
   option_defs_be
};

/* RETRO_LANGUAGE_BG */

#define CATEGORY_INPUT_LABEL_BG "Вход"
#define CATEGORY_INPUT_INFO_0_BG NULL
#define CATEGORY_RETROMOUSE_LABEL_BG NULL
#define CATEGORY_RETROMOUSE_INFO_0_BG NULL
#define CATEGORY_MANYMOUSE_LABEL_BG NULL
#define CATEGORY_MANYMOUSE_INFO_0_BG NULL
#define CATEGORY_DIPSWITCH_LABEL_BG NULL
#define CATEGORY_DIPSWITCH_INFO_0_BG NULL
#define DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_LABEL_BG NULL
#define DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_LABEL_CAT_BG NULL
#define DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_INFO_0_BG NULL
#define DICE_PADDLE_JOYSTICK_ABSOLUTE_LABEL_BG NULL
#define DICE_PADDLE_JOYSTICK_ABSOLUTE_LABEL_CAT_BG NULL
#define DICE_PADDLE_JOYSTICK_ABSOLUTE_INFO_0_BG NULL
#define DICE_PADDLE_KEYBOARD_SENSITIVITY_LABEL_BG NULL
#define DICE_PADDLE_KEYBOARD_SENSITIVITY_LABEL_CAT_BG NULL
#define DICE_PADDLE_KEYBOARD_SENSITIVITY_INFO_0_BG NULL
#define DICE_PADDLE_JOYSTICK_SENSITIVITY_LABEL_BG NULL
#define DICE_PADDLE_JOYSTICK_SENSITIVITY_LABEL_CAT_BG NULL
#define DICE_PADDLE_JOYSTICK_SENSITIVITY_INFO_0_BG NULL
#define DICE_RETROMOUSE_PADDLE_SENSITIVITY_LABEL_BG NULL
#define DICE_RETROMOUSE_PADDLE_SENSITIVITY_LABEL_CAT_BG NULL
#define DICE_RETROMOUSE_PADDLE_SENSITIVITY_INFO_0_BG NULL
#define DICE_WHEEL_KEYJOY_SENSITIVITY_LABEL_BG NULL
#define DICE_WHEEL_KEYJOY_SENSITIVITY_LABEL_CAT_BG NULL
#define DICE_WHEEL_KEYJOY_SENSITIVITY_INFO_0_BG NULL
#define DICE_THROTTLE_KEYJOY_SENSITIVITY_LABEL_BG NULL
#define DICE_THROTTLE_KEYJOY_SENSITIVITY_LABEL_CAT_BG NULL
#define DICE_THROTTLE_KEYJOY_SENSITIVITY_INFO_0_BG NULL
#define DICE_RETROMOUSE_PADDLE0_LABEL_BG NULL
#define DICE_RETROMOUSE_PADDLE0_LABEL_CAT_BG NULL
#define DICE_RETROMOUSE_PADDLE0_INFO_0_BG NULL
#define DICE_RETROMOUSE_PADDLE1_LABEL_BG NULL
#define DICE_RETROMOUSE_PADDLE1_LABEL_CAT_BG NULL
#define DICE_RETROMOUSE_PADDLE1_INFO_0_BG NULL
#define DICE_RETROMOUSE_PADDLE2_LABEL_BG NULL
#define DICE_RETROMOUSE_PADDLE2_LABEL_CAT_BG NULL
#define DICE_RETROMOUSE_PADDLE2_INFO_0_BG NULL
#define DICE_RETROMOUSE_PADDLE3_LABEL_BG NULL
#define DICE_RETROMOUSE_PADDLE3_LABEL_CAT_BG NULL
#define DICE_RETROMOUSE_PADDLE3_INFO_0_BG NULL
#define DICE_RETROMOUSE_PADDLE0_X_LABEL_BG NULL
#define DICE_RETROMOUSE_PADDLE0_X_LABEL_CAT_BG NULL
#define DICE_RETROMOUSE_PADDLE0_X_INFO_0_BG NULL
#define OPTION_VAL_X_BG NULL
#define OPTION_VAL_Y_BG NULL
#define DICE_RETROMOUSE_PADDLE0_Y_LABEL_BG NULL
#define DICE_RETROMOUSE_PADDLE0_Y_LABEL_CAT_BG NULL
#define DICE_RETROMOUSE_PADDLE0_Y_INFO_0_BG NULL
#define DICE_RETROMOUSE_PADDLE1_X_LABEL_BG NULL
#define DICE_RETROMOUSE_PADDLE1_X_LABEL_CAT_BG NULL
#define DICE_RETROMOUSE_PADDLE1_X_INFO_0_BG NULL
#define DICE_RETROMOUSE_PADDLE1_Y_LABEL_BG NULL
#define DICE_RETROMOUSE_PADDLE1_Y_LABEL_CAT_BG NULL
#define DICE_RETROMOUSE_PADDLE1_Y_INFO_0_BG NULL
#define DICE_RETROMOUSE_PADDLE2_X_LABEL_BG NULL
#define DICE_RETROMOUSE_PADDLE2_X_LABEL_CAT_BG NULL
#define DICE_RETROMOUSE_PADDLE2_X_INFO_0_BG NULL
#define DICE_RETROMOUSE_PADDLE2_Y_LABEL_BG NULL
#define DICE_RETROMOUSE_PADDLE2_Y_LABEL_CAT_BG NULL
#define DICE_RETROMOUSE_PADDLE2_Y_INFO_0_BG NULL
#define DICE_RETROMOUSE_PADDLE3_X_LABEL_BG NULL
#define DICE_RETROMOUSE_PADDLE3_X_LABEL_CAT_BG NULL
#define DICE_RETROMOUSE_PADDLE3_X_INFO_0_BG NULL
#define DICE_RETROMOUSE_PADDLE3_Y_LABEL_BG NULL
#define DICE_RETROMOUSE_PADDLE3_Y_LABEL_CAT_BG NULL
#define DICE_RETROMOUSE_PADDLE3_Y_INFO_0_BG NULL
#define DICE_MANYMOUSE_PADDLE0_LABEL_BG NULL
#define DICE_MANYMOUSE_PADDLE0_INFO_0_BG NULL
#define DICE_MANYMOUSE_PADDLE0_X_LABEL_BG NULL
#define DICE_MANYMOUSE_PADDLE0_X_LABEL_CAT_BG NULL
#define OPTION_VAL_0X_BG NULL
#define OPTION_VAL_0Y_BG NULL
#define OPTION_VAL_1X_BG NULL
#define OPTION_VAL_1Y_BG NULL
#define OPTION_VAL_2X_BG NULL
#define OPTION_VAL_2Y_BG NULL
#define OPTION_VAL_3X_BG NULL
#define OPTION_VAL_3Y_BG NULL
#define DICE_MANYMOUSE_PADDLE0_Y_LABEL_BG NULL
#define DICE_MANYMOUSE_PADDLE0_Y_LABEL_CAT_BG NULL
#define DICE_MANYMOUSE_PADDLE1_LABEL_BG NULL
#define DICE_MANYMOUSE_PADDLE1_INFO_0_BG NULL
#define DICE_MANYMOUSE_PADDLE1_X_LABEL_BG NULL
#define DICE_MANYMOUSE_PADDLE1_X_LABEL_CAT_BG NULL
#define DICE_MANYMOUSE_PADDLE1_Y_LABEL_BG NULL
#define DICE_MANYMOUSE_PADDLE1_Y_LABEL_CAT_BG NULL
#define DICE_MANYMOUSE_PADDLE2_LABEL_BG NULL
#define DICE_MANYMOUSE_PADDLE2_INFO_0_BG NULL
#define DICE_MANYMOUSE_PADDLE2_X_LABEL_BG NULL
#define DICE_MANYMOUSE_PADDLE2_X_LABEL_CAT_BG NULL
#define DICE_MANYMOUSE_PADDLE2_Y_LABEL_BG NULL
#define DICE_MANYMOUSE_PADDLE2_Y_LABEL_CAT_BG NULL
#define DICE_MANYMOUSE_PADDLE3_LABEL_BG NULL
#define DICE_MANYMOUSE_PADDLE3_INFO_0_BG NULL
#define DICE_MANYMOUSE_PADDLE3_X_LABEL_BG NULL
#define DICE_MANYMOUSE_PADDLE3_X_LABEL_CAT_BG NULL
#define DICE_MANYMOUSE_PADDLE3_Y_LABEL_BG NULL
#define DICE_MANYMOUSE_PADDLE3_Y_LABEL_CAT_BG NULL
#define DICE_DIPSWITCH_1_LABEL_BG NULL
#define DICE_DIPSWITCH_1_LABEL_CAT_BG NULL
#define DICE_DIPSWITCH_1_INFO_0_BG NULL
#define OPTION_VAL_1_BG NULL
#define DICE_DIPSWITCH_2_LABEL_BG NULL
#define DICE_DIPSWITCH_2_LABEL_CAT_BG NULL
#define DICE_DIPSWITCH_2_INFO_0_BG NULL
#define DICE_DIPSWITCH_3_LABEL_BG NULL
#define DICE_DIPSWITCH_3_LABEL_CAT_BG NULL
#define DICE_DIPSWITCH_3_INFO_0_BG NULL
#define DICE_DIPSWITCH16_1_LABEL_BG NULL
#define DICE_DIPSWITCH16_1_LABEL_CAT_BG NULL
#define DICE_DIPSWITCH16_1_INFO_0_BG NULL
#define DICE_DIPSWITCH16_2_LABEL_BG NULL
#define DICE_DIPSWITCH16_2_LABEL_CAT_BG NULL
#define DICE_DIPSWITCH16_2_INFO_0_BG NULL

struct retro_core_option_v2_category option_cats_bg[] = {
   {
      "input",
      CATEGORY_INPUT_LABEL_BG,
      CATEGORY_INPUT_INFO_0_BG
   },
   {
      "retromouse",
      CATEGORY_RETROMOUSE_LABEL_BG,
      CATEGORY_RETROMOUSE_INFO_0_BG
   },
#ifdef MANYMOUSE
   {
      "manymouse",
      CATEGORY_MANYMOUSE_LABEL_BG,
      CATEGORY_MANYMOUSE_INFO_0_BG
   },
#endif
   {
      "dipswitch",
      CATEGORY_DIPSWITCH_LABEL_BG,
      CATEGORY_DIPSWITCH_INFO_0_BG
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_bg[] = {
   {
      "dice_use_mouse_pointer_for_paddle_1",
      DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_LABEL_BG,
      DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_LABEL_CAT_BG,
      DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_INFO_0_BG,
      NULL,
      "input",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_paddle_joystick_absolute",
      DICE_PADDLE_JOYSTICK_ABSOLUTE_LABEL_BG,
      DICE_PADDLE_JOYSTICK_ABSOLUTE_LABEL_CAT_BG,
      DICE_PADDLE_JOYSTICK_ABSOLUTE_INFO_0_BG,
      NULL,
      "input",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      // D-pad but not necessarily keyboard under libretro,
      // that name comes from the upstream code.
      "dice_paddle_keyboard_sensitivity",
      DICE_PADDLE_KEYBOARD_SENSITIVITY_LABEL_BG,
      DICE_PADDLE_KEYBOARD_SENSITIVITY_LABEL_CAT_BG,
      DICE_PADDLE_KEYBOARD_SENSITIVITY_INFO_0_BG,
      NULL,
      "input",
      {
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "250"
   },
   {
      "dice_paddle_joystick_sensitivity",
      DICE_PADDLE_JOYSTICK_SENSITIVITY_LABEL_BG,
      DICE_PADDLE_JOYSTICK_SENSITIVITY_LABEL_CAT_BG,
      DICE_PADDLE_JOYSTICK_SENSITIVITY_INFO_0_BG,
      NULL,
      "input",
      {
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "500"
   },
   {
      "dice_retromouse_paddle_sensitivity",
      DICE_RETROMOUSE_PADDLE_SENSITIVITY_LABEL_BG,
      DICE_RETROMOUSE_PADDLE_SENSITIVITY_LABEL_CAT_BG,
      DICE_RETROMOUSE_PADDLE_SENSITIVITY_INFO_0_BG,
      NULL,
      "input",
      {
         {"25", NULL},
         {"50", NULL},
         {"75", NULL},
         {"100", NULL},
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "125"
   },
   {
      "dice_wheel_keyjoy_sensitivity",
      DICE_WHEEL_KEYJOY_SENSITIVITY_LABEL_BG,
      DICE_WHEEL_KEYJOY_SENSITIVITY_LABEL_CAT_BG,
      DICE_WHEEL_KEYJOY_SENSITIVITY_INFO_0_BG,
      NULL,
      "input",
      {
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "500"
   },
   {
      "dice_throttle_keyjoy_sensitivity",
      DICE_THROTTLE_KEYJOY_SENSITIVITY_LABEL_BG,
      DICE_THROTTLE_KEYJOY_SENSITIVITY_LABEL_CAT_BG,
      DICE_THROTTLE_KEYJOY_SENSITIVITY_INFO_0_BG,
      NULL,
      "input",
      {
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "250"
   },

   {
      "dice_retromouse_paddle0",
      DICE_RETROMOUSE_PADDLE0_LABEL_BG,
      DICE_RETROMOUSE_PADDLE0_LABEL_CAT_BG,
      DICE_RETROMOUSE_PADDLE0_INFO_0_BG,
      NULL,
      "retromouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_retromouse_paddle1",
      DICE_RETROMOUSE_PADDLE1_LABEL_BG,
      DICE_RETROMOUSE_PADDLE1_LABEL_CAT_BG,
      DICE_RETROMOUSE_PADDLE1_INFO_0_BG,
      NULL,
      "retromouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_retromouse_paddle2",
      DICE_RETROMOUSE_PADDLE2_LABEL_BG,
      DICE_RETROMOUSE_PADDLE2_LABEL_CAT_BG,
      DICE_RETROMOUSE_PADDLE2_INFO_0_BG,
      NULL,
      "retromouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_retromouse_paddle3",
      DICE_RETROMOUSE_PADDLE3_LABEL_BG,
      DICE_RETROMOUSE_PADDLE3_LABEL_CAT_BG,
      DICE_RETROMOUSE_PADDLE3_INFO_0_BG,
      NULL,
      "retromouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_retromouse_paddle0_x",
      DICE_RETROMOUSE_PADDLE0_X_LABEL_BG,
      DICE_RETROMOUSE_PADDLE0_X_LABEL_CAT_BG,
      DICE_RETROMOUSE_PADDLE0_X_INFO_0_BG,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_BG},
         {"y", OPTION_VAL_Y_BG},
         {NULL, NULL},
      },
      "x"
   },
   {
      "dice_retromouse_paddle0_y",
      DICE_RETROMOUSE_PADDLE0_Y_LABEL_BG,
      DICE_RETROMOUSE_PADDLE0_Y_LABEL_CAT_BG,
      DICE_RETROMOUSE_PADDLE0_Y_INFO_0_BG,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_BG},
         {"y", OPTION_VAL_Y_BG},
         {NULL, NULL},
      },
      "y"
   },
   {
      "dice_retromouse_paddle1_x",
      DICE_RETROMOUSE_PADDLE1_X_LABEL_BG,
      DICE_RETROMOUSE_PADDLE1_X_LABEL_CAT_BG,
      DICE_RETROMOUSE_PADDLE1_X_INFO_0_BG,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_BG},
         {"y", OPTION_VAL_Y_BG},
         {NULL, NULL},
      },
      "x"
   },
   {
      "dice_retromouse_paddle1_y",
      DICE_RETROMOUSE_PADDLE1_Y_LABEL_BG,
      DICE_RETROMOUSE_PADDLE1_Y_LABEL_CAT_BG,
      DICE_RETROMOUSE_PADDLE1_Y_INFO_0_BG,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_BG},
         {"y", OPTION_VAL_Y_BG},
         {NULL, NULL},
      },
      "y"
   },
   {
      "dice_retromouse_paddle2_x",
      DICE_RETROMOUSE_PADDLE2_X_LABEL_BG,
      DICE_RETROMOUSE_PADDLE2_X_LABEL_CAT_BG,
      DICE_RETROMOUSE_PADDLE2_X_INFO_0_BG,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_BG},
         {"y", OPTION_VAL_Y_BG},
         {NULL, NULL},
      },
      "x"
   },
   {
      "dice_retromouse_paddle2_y",
      DICE_RETROMOUSE_PADDLE2_Y_LABEL_BG,
      DICE_RETROMOUSE_PADDLE2_Y_LABEL_CAT_BG,
      DICE_RETROMOUSE_PADDLE2_Y_INFO_0_BG,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_BG},
         {"y", OPTION_VAL_Y_BG},
         {NULL, NULL},
      },
      "y"
   },
   {
      "dice_retromouse_paddle3_x",
      DICE_RETROMOUSE_PADDLE3_X_LABEL_BG,
      DICE_RETROMOUSE_PADDLE3_X_LABEL_CAT_BG,
      DICE_RETROMOUSE_PADDLE3_X_INFO_0_BG,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_BG},
         {"y", OPTION_VAL_Y_BG},
         {NULL, NULL},
      },
      "x"
   },
   {
      "dice_retromouse_paddle3_y",
      DICE_RETROMOUSE_PADDLE3_Y_LABEL_BG,
      DICE_RETROMOUSE_PADDLE3_Y_LABEL_CAT_BG,
      DICE_RETROMOUSE_PADDLE3_Y_INFO_0_BG,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_BG},
         {"y", OPTION_VAL_Y_BG},
         {NULL, NULL},
      },
      "y"
   },

#ifdef MANYMOUSE
   {
      "dice_manymouse_paddle0",
      DICE_MANYMOUSE_PADDLE0_LABEL_BG,
      DICE_RETROMOUSE_PADDLE0_LABEL_CAT_BG,
      DICE_MANYMOUSE_PADDLE0_INFO_0_BG,
      NULL,
      "manymouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_manymouse_paddle0_x",
      DICE_MANYMOUSE_PADDLE0_X_LABEL_BG,
      DICE_MANYMOUSE_PADDLE0_X_LABEL_CAT_BG,
      DICE_RETROMOUSE_PADDLE0_X_INFO_0_BG,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_BG},
         {"0y", OPTION_VAL_0Y_BG},
         {"1x", OPTION_VAL_1X_BG},
         {"1y", OPTION_VAL_1Y_BG},
         {"2x", OPTION_VAL_2X_BG},
         {"2y", OPTION_VAL_2Y_BG},
         {"3x", OPTION_VAL_3X_BG},
         {"3y", OPTION_VAL_3Y_BG},
         {NULL, NULL},
      },
      "0x"
   },
   {
      "dice_manymouse_paddle0_y",
      DICE_MANYMOUSE_PADDLE0_Y_LABEL_BG,
      DICE_MANYMOUSE_PADDLE0_Y_LABEL_CAT_BG,
      DICE_RETROMOUSE_PADDLE0_Y_INFO_0_BG,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_BG},
         {"0y", OPTION_VAL_0Y_BG},
         {"1x", OPTION_VAL_1X_BG},
         {"1y", OPTION_VAL_1Y_BG},
         {"2x", OPTION_VAL_2X_BG},
         {"2y", OPTION_VAL_2Y_BG},
         {"3x", OPTION_VAL_3X_BG},
         {"3y", OPTION_VAL_3Y_BG},
         {NULL, NULL},
      },
      "0y"
   },
   {
      "dice_manymouse_paddle1",
      DICE_MANYMOUSE_PADDLE1_LABEL_BG,
      DICE_RETROMOUSE_PADDLE1_LABEL_CAT_BG,
      DICE_MANYMOUSE_PADDLE1_INFO_0_BG,
      NULL,
      "manymouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_manymouse_paddle1_x",
      DICE_MANYMOUSE_PADDLE1_X_LABEL_BG,
      DICE_MANYMOUSE_PADDLE1_X_LABEL_CAT_BG,
      DICE_RETROMOUSE_PADDLE1_X_INFO_0_BG,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_BG},
         {"0y", OPTION_VAL_0Y_BG},
         {"1x", OPTION_VAL_1X_BG},
         {"1y", OPTION_VAL_1Y_BG},
         {"2x", OPTION_VAL_2X_BG},
         {"2y", OPTION_VAL_2Y_BG},
         {"3x", OPTION_VAL_3X_BG},
         {"3y", OPTION_VAL_3Y_BG},
         {NULL, NULL},
      },
      "1x"
   },
   {
      "dice_manymouse_paddle1_y",
      DICE_MANYMOUSE_PADDLE1_Y_LABEL_BG,
      DICE_MANYMOUSE_PADDLE1_Y_LABEL_CAT_BG,
      DICE_RETROMOUSE_PADDLE1_Y_INFO_0_BG,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_BG},
         {"0y", OPTION_VAL_0Y_BG},
         {"1x", OPTION_VAL_1X_BG},
         {"1y", OPTION_VAL_1Y_BG},
         {"2x", OPTION_VAL_2X_BG},
         {"2y", OPTION_VAL_2Y_BG},
         {"3x", OPTION_VAL_3X_BG},
         {"3y", OPTION_VAL_3Y_BG},
         {NULL, NULL},
      },
      "1y"
   },
   {
      "dice_manymouse_paddle2",
      DICE_MANYMOUSE_PADDLE2_LABEL_BG,
      DICE_RETROMOUSE_PADDLE2_LABEL_CAT_BG,
      DICE_MANYMOUSE_PADDLE2_INFO_0_BG,
      NULL,
      "manymouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_manymouse_paddle2_x",
      DICE_MANYMOUSE_PADDLE2_X_LABEL_BG,
      DICE_MANYMOUSE_PADDLE2_X_LABEL_CAT_BG,
      DICE_RETROMOUSE_PADDLE2_X_INFO_0_BG,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_BG},
         {"0y", OPTION_VAL_0Y_BG},
         {"1x", OPTION_VAL_1X_BG},
         {"1y", OPTION_VAL_1Y_BG},
         {"2x", OPTION_VAL_2X_BG},
         {"2y", OPTION_VAL_2Y_BG},
         {"3x", OPTION_VAL_3X_BG},
         {"3y", OPTION_VAL_3Y_BG},
         {NULL, NULL},
      },
      "2x"
   },
   {
      "dice_manymouse_paddle2_y",
      DICE_MANYMOUSE_PADDLE2_Y_LABEL_BG,
      DICE_MANYMOUSE_PADDLE2_Y_LABEL_CAT_BG,
      DICE_RETROMOUSE_PADDLE2_Y_INFO_0_BG,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_BG},
         {"0y", OPTION_VAL_0Y_BG},
         {"1x", OPTION_VAL_1X_BG},
         {"1y", OPTION_VAL_1Y_BG},
         {"2x", OPTION_VAL_2X_BG},
         {"2y", OPTION_VAL_2Y_BG},
         {"3x", OPTION_VAL_3X_BG},
         {"3y", OPTION_VAL_3Y_BG},
         {NULL, NULL},
      },
      "2y"
   },
   {
      "dice_manymouse_paddle3",
      DICE_MANYMOUSE_PADDLE3_LABEL_BG,
      DICE_RETROMOUSE_PADDLE3_LABEL_CAT_BG,
      DICE_MANYMOUSE_PADDLE3_INFO_0_BG,
      NULL,
      "manymouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_manymouse_paddle3_x",
      DICE_MANYMOUSE_PADDLE3_X_LABEL_BG,
      DICE_MANYMOUSE_PADDLE3_X_LABEL_CAT_BG,
      DICE_RETROMOUSE_PADDLE3_X_INFO_0_BG,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_BG},
         {"0y", OPTION_VAL_0Y_BG},
         {"1x", OPTION_VAL_1X_BG},
         {"1y", OPTION_VAL_1Y_BG},
         {"2x", OPTION_VAL_2X_BG},
         {"2y", OPTION_VAL_2Y_BG},
         {"3x", OPTION_VAL_3X_BG},
         {"3y", OPTION_VAL_3Y_BG},
         {NULL, NULL},
      },
      "3x"
   },
   {
      "dice_manymouse_paddle3_y",
      DICE_MANYMOUSE_PADDLE3_Y_LABEL_BG,
      DICE_MANYMOUSE_PADDLE3_Y_LABEL_CAT_BG,
      DICE_RETROMOUSE_PADDLE3_Y_INFO_0_BG,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_BG},
         {"0y", OPTION_VAL_0Y_BG},
         {"1x", OPTION_VAL_1X_BG},
         {"1y", OPTION_VAL_1Y_BG},
         {"2x", OPTION_VAL_2X_BG},
         {"2y", OPTION_VAL_2Y_BG},
         {"3x", OPTION_VAL_3X_BG},
         {"3y", OPTION_VAL_3Y_BG},
         {NULL, NULL},
      },
      "3y"
   },
#endif

   {
      "dice_dipswitch_1",
      DICE_DIPSWITCH_1_LABEL_BG,
      DICE_DIPSWITCH_1_LABEL_CAT_BG,
      DICE_DIPSWITCH_1_INFO_0_BG,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_BG},
         {"0", NULL},
         {"1", NULL},
         {NULL, NULL},
      },
      "-1"
   },
   {
      "dice_dipswitch_2",
      DICE_DIPSWITCH_2_LABEL_BG,
      DICE_DIPSWITCH_2_LABEL_CAT_BG,
      DICE_DIPSWITCH_2_INFO_0_BG,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_BG},
         {"0", NULL},
         {"1", NULL},
         {NULL, NULL},
      },
      "-1"
   },
   {
      "dice_dipswitch_3",
      DICE_DIPSWITCH_3_LABEL_BG,
      DICE_DIPSWITCH_3_LABEL_CAT_BG,
      DICE_DIPSWITCH_3_INFO_0_BG,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_BG},
         {"0", NULL},
         {"1", NULL},
         {NULL, NULL},
      },
      "-1"
   },
   {
      "dice_dipswitch16_1",
      DICE_DIPSWITCH16_1_LABEL_BG,
      DICE_DIPSWITCH16_1_LABEL_CAT_BG,
      DICE_DIPSWITCH16_1_INFO_0_BG,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_BG},
         {"0", NULL},
         {"1", NULL},
         {"2", NULL},
         {"3", NULL},
         {"4", NULL},
         {"5", NULL},
         {"6", NULL},
         {"7", NULL},
         {"8", NULL},
         {"9", NULL},
         {"10", NULL},
         {"11", NULL},
         {"12", NULL},
         {"13", NULL},
         {"14", NULL},
         {"15", NULL},
         {NULL, NULL},
      },
      "-1"
   },
   {
      "dice_dipswitch16_2",
      DICE_DIPSWITCH16_2_LABEL_BG,
      DICE_DIPSWITCH16_2_LABEL_CAT_BG,
      DICE_DIPSWITCH16_2_INFO_0_BG,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_BG},
         {"0", NULL},
         {"1", NULL},
         {"2", NULL},
         {"3", NULL},
         {"4", NULL},
         {"5", NULL},
         {"6", NULL},
         {"7", NULL},
         {"8", NULL},
         {"9", NULL},
         {"10", NULL},
         {"11", NULL},
         {"12", NULL},
         {"13", NULL},
         {"14", NULL},
         {"15", NULL},
         {NULL, NULL},
      },
      "-1"
   },

   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_bg = {
   option_cats_bg,
   option_defs_bg
};

/* RETRO_LANGUAGE_CA */

#define CATEGORY_INPUT_LABEL_CA "Entrada"
#define CATEGORY_INPUT_INFO_0_CA "Canvia la configuració específica d'aquest nucli."
#define CATEGORY_RETROMOUSE_LABEL_CA NULL
#define CATEGORY_RETROMOUSE_INFO_0_CA "Canvia la configuració de múltiples ratolins de libretro."
#define CATEGORY_MANYMOUSE_LABEL_CA NULL
#define CATEGORY_MANYMOUSE_INFO_0_CA "Canvia la configuració de múltiples ratolins de ManyMouse."
#define CATEGORY_DIPSWITCH_LABEL_CA "Interruptors DIP"
#define CATEGORY_DIPSWITCH_INFO_0_CA "Canvia la configuració dels interruptors DIP i els potenciòmetres."
#define DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_LABEL_CA "Entrada > Fes servir el punter del ratolí pel controlador analògic 1"
#define DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_LABEL_CAT_CA "Fes servir el punter del ratolí pel controlador analògic 1"
#define DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_INFO_0_CA "Fes servir el punter del ratolí del sistema pel comandament analògic. Si hi ha diferents ratolins, no es pot escollir algun un en concret."
#define DICE_PADDLE_JOYSTICK_ABSOLUTE_LABEL_CA "Entrada > Fes servir el valor absolut del moviment del joystick"
#define DICE_PADDLE_JOYSTICK_ABSOLUTE_LABEL_CAT_CA "Fes servir el valor absolut del moviment del controlador"
#define DICE_PADDLE_JOYSTICK_ABSOLUTE_INFO_0_CA "Assigna el rang de moviments del joystick al rang del comandament analògic, en comptes d'assignar moviments relatius."
#define DICE_PADDLE_KEYBOARD_SENSITIVITY_LABEL_CA "Entrada > Sensibilitat de la creueta pel comandament analògic"
#define DICE_PADDLE_KEYBOARD_SENSITIVITY_LABEL_CAT_CA "Sensibilitat de la creueta pel comandament analògic"
#define DICE_PADDLE_KEYBOARD_SENSITIVITY_INFO_0_CA "Ajusta la sensibilitat si es fa servir la creueta com a comandament analògic."
#define DICE_PADDLE_JOYSTICK_SENSITIVITY_LABEL_CA "Entrada > Sensibilitat del joystick pel comandament analògic"
#define DICE_PADDLE_JOYSTICK_SENSITIVITY_LABEL_CAT_CA "Sensibilitat del joystick pel comandament analògic"
#define DICE_PADDLE_JOYSTICK_SENSITIVITY_INFO_0_CA "Ajusta la sensibilitat del joystick analògic com a comandament analògic."
#define DICE_RETROMOUSE_PADDLE_SENSITIVITY_LABEL_CA "Entrada > Sensibilitat de la creueta del RetroMouse"
#define DICE_RETROMOUSE_PADDLE_SENSITIVITY_LABEL_CAT_CA "Sensibilitat del RetroMouse pel comandament analògic"
#define DICE_RETROMOUSE_PADDLE_SENSITIVITY_INFO_0_CA "Ajusta la sensibilitat si es fa servir RetroMouse com a comandament analògic."
#define DICE_WHEEL_KEYJOY_SENSITIVITY_LABEL_CA "Entrada > Sensibilitat del volant"
#define DICE_WHEEL_KEYJOY_SENSITIVITY_LABEL_CAT_CA "Sensibilitat de la roda"
#define DICE_WHEEL_KEYJOY_SENSITIVITY_INFO_0_CA "Ajusta la sensibilitat si es fa servir la creueta digital o el joystick analògic com a volant."
#define DICE_THROTTLE_KEYJOY_SENSITIVITY_LABEL_CA "Entrada > Sensibilitat del volant"
#define DICE_THROTTLE_KEYJOY_SENSITIVITY_LABEL_CAT_CA "Sensibilitat de l'accelerador"
#define DICE_THROTTLE_KEYJOY_SENSITIVITY_INFO_0_CA "Ajusta la sensibilitat si es fa servir la creueta digital o el joystick analògic com a accelerador."
#define DICE_RETROMOUSE_PADDLE0_LABEL_CA "RetroMouse > Fes servir el ratolí pel controlador analògic 1"
#define DICE_RETROMOUSE_PADDLE0_LABEL_CAT_CA "Fes servir un ratolí pel controlador analògic 1"
#define DICE_RETROMOUSE_PADDLE0_INFO_0_CA "Fes servir un ratolí específic com a comandament analògic 1, seleccionat segons l'índex del ratolí del port 1."
#define DICE_RETROMOUSE_PADDLE1_LABEL_CA "RetroMouse > Fes servir el ratolí pel controlador analògic 2"
#define DICE_RETROMOUSE_PADDLE1_LABEL_CAT_CA "Fes servir un ratolí pel controlador analògic 2"
#define DICE_RETROMOUSE_PADDLE1_INFO_0_CA "Fes servir un ratolí específic com a comandament analògic 2, seleccionat segons l'índex del ratolí del port 2."
#define DICE_RETROMOUSE_PADDLE2_LABEL_CA "RetroMouse > Fes servir el ratolí pel controlador analògic 3"
#define DICE_RETROMOUSE_PADDLE2_LABEL_CAT_CA "Fes servir un ratolí pel controlador analògic 3"
#define DICE_RETROMOUSE_PADDLE2_INFO_0_CA "Fes servir un ratolí específic com a comandament analògic 3, seleccionat segons l'índex del ratolí del port 3."
#define DICE_RETROMOUSE_PADDLE3_LABEL_CA "RetroMouse > Fes servir el ratolí pel controlador analògic 4"
#define DICE_RETROMOUSE_PADDLE3_LABEL_CAT_CA "Fes servir un ratolí pel controlador analògic 4"
#define DICE_RETROMOUSE_PADDLE3_INFO_0_CA "Fes servir un ratolí específic com a comandament analògic 4, seleccionat segons l'índex del ratolí del port 4."
#define DICE_RETROMOUSE_PADDLE0_X_LABEL_CA "RetroMouse > Eix del ratolí per la direcció horitzontal del controlador analògic 1"
#define DICE_RETROMOUSE_PADDLE0_X_LABEL_CAT_CA "Eix del ratolí per la direcció horitzontal del comandament analògic 1"
#define DICE_RETROMOUSE_PADDLE0_X_INFO_0_CA "Eix del ratolí pels moviments horitzontals del jugador 1."
#define OPTION_VAL_X_CA NULL
#define OPTION_VAL_Y_CA NULL
#define DICE_RETROMOUSE_PADDLE0_Y_LABEL_CA "RetroMouse > Eix del ratolí per la direcció vertical del controlador analògic 1"
#define DICE_RETROMOUSE_PADDLE0_Y_LABEL_CAT_CA "Eix del ratolí per la direcció vertical del comandament analògic 1"
#define DICE_RETROMOUSE_PADDLE0_Y_INFO_0_CA "Eix del ratolí pels moviments verticals del jugador 1."
#define DICE_RETROMOUSE_PADDLE1_X_LABEL_CA "RetroMouse > Eix del ratolí per la direcció horitzontal del controlador analògic 2"
#define DICE_RETROMOUSE_PADDLE1_X_LABEL_CAT_CA "Eix del ratolí per la direcció horitzontal del comandament analògic 2"
#define DICE_RETROMOUSE_PADDLE1_X_INFO_0_CA "Eix del ratolí pels moviments horitzontals del jugador 2."
#define DICE_RETROMOUSE_PADDLE1_Y_LABEL_CA "RetroMouse > Eix del ratolí per la direcció vertical del controlador analògic 2"
#define DICE_RETROMOUSE_PADDLE1_Y_LABEL_CAT_CA "Eix del ratolí per la direcció vertical del comandament analògic 2"
#define DICE_RETROMOUSE_PADDLE1_Y_INFO_0_CA "Eix del ratolí pels moviments verticals del jugador 2."
#define DICE_RETROMOUSE_PADDLE2_X_LABEL_CA "RetroMouse > Eix del ratolí per la direcció horitzontal del controlador analògic 3"
#define DICE_RETROMOUSE_PADDLE2_X_LABEL_CAT_CA "Eix del ratolí per la direcció horitzontal del comandament analògic 3"
#define DICE_RETROMOUSE_PADDLE2_X_INFO_0_CA "Eix del ratolí pels moviments horitzontals del jugador 3."
#define DICE_RETROMOUSE_PADDLE2_Y_LABEL_CA "RetroMouse > Eix del ratolí per la direcció vertical del controlador analògic 3"
#define DICE_RETROMOUSE_PADDLE2_Y_LABEL_CAT_CA "Eix del ratolí per la direcció vertical del comandament analògic 3"
#define DICE_RETROMOUSE_PADDLE2_Y_INFO_0_CA "Eix del ratolí pels moviments verticals del jugador 3."
#define DICE_RETROMOUSE_PADDLE3_X_LABEL_CA "RetroMouse > Eix del ratolí per la direcció horitzontal del controlador analògic 4"
#define DICE_RETROMOUSE_PADDLE3_X_LABEL_CAT_CA "Eix del ratolí per la direcció horitzontal del comandament analògic 4"
#define DICE_RETROMOUSE_PADDLE3_X_INFO_0_CA "Eix del ratolí pels moviments horitzontals del jugador 4."
#define DICE_RETROMOUSE_PADDLE3_Y_LABEL_CA "RetroMouse > Eix del ratolí per la direcció vertical del controlador analògic 4"
#define DICE_RETROMOUSE_PADDLE3_Y_LABEL_CAT_CA "Eix del ratolí per la direcció vertical del comandament analògic 4"
#define DICE_RETROMOUSE_PADDLE3_Y_INFO_0_CA "Eix del ratolí pels moviments verticals del jugador 4."
#define DICE_MANYMOUSE_PADDLE0_LABEL_CA "ManyMouse > Fes servir el ratolí pel controlador analògic 1"
#define DICE_MANYMOUSE_PADDLE0_INFO_0_CA "Fes servir un ratolí pel controlador analògic 1."
#define DICE_MANYMOUSE_PADDLE0_X_LABEL_CA "ManyMouse> Mouse-Paddle 1 x"
#define DICE_MANYMOUSE_PADDLE0_X_LABEL_CAT_CA NULL
#define OPTION_VAL_0X_CA NULL
#define OPTION_VAL_0Y_CA NULL
#define OPTION_VAL_1X_CA NULL
#define OPTION_VAL_1Y_CA NULL
#define OPTION_VAL_2X_CA NULL
#define OPTION_VAL_2Y_CA NULL
#define OPTION_VAL_3X_CA NULL
#define OPTION_VAL_3Y_CA NULL
#define DICE_MANYMOUSE_PADDLE0_Y_LABEL_CA NULL
#define DICE_MANYMOUSE_PADDLE0_Y_LABEL_CAT_CA NULL
#define DICE_MANYMOUSE_PADDLE1_LABEL_CA "ManyMouse > Fes servir el ratolí pel controlador analògic 2"
#define DICE_MANYMOUSE_PADDLE1_INFO_0_CA "Fes servir un ratolí pel controlador analògic 2."
#define DICE_MANYMOUSE_PADDLE1_X_LABEL_CA NULL
#define DICE_MANYMOUSE_PADDLE1_X_LABEL_CAT_CA NULL
#define DICE_MANYMOUSE_PADDLE1_Y_LABEL_CA NULL
#define DICE_MANYMOUSE_PADDLE1_Y_LABEL_CAT_CA NULL
#define DICE_MANYMOUSE_PADDLE2_LABEL_CA "ManyMouse > Fes servir el ratolí pel controlador analògic 3"
#define DICE_MANYMOUSE_PADDLE2_INFO_0_CA "Fes servir un ratolí pel controlador analògic 3."
#define DICE_MANYMOUSE_PADDLE2_X_LABEL_CA NULL
#define DICE_MANYMOUSE_PADDLE2_X_LABEL_CAT_CA NULL
#define DICE_MANYMOUSE_PADDLE2_Y_LABEL_CA NULL
#define DICE_MANYMOUSE_PADDLE2_Y_LABEL_CAT_CA NULL
#define DICE_MANYMOUSE_PADDLE3_LABEL_CA "ManyMouse > Fes servir el ratolí pel controlador analògic 4"
#define DICE_MANYMOUSE_PADDLE3_INFO_0_CA "Fes servir un ratolí pel controlador analògic 4."
#define DICE_MANYMOUSE_PADDLE3_X_LABEL_CA NULL
#define DICE_MANYMOUSE_PADDLE3_X_LABEL_CAT_CA NULL
#define DICE_MANYMOUSE_PADDLE3_Y_LABEL_CA NULL
#define DICE_MANYMOUSE_PADDLE3_Y_LABEL_CAT_CA NULL
#define DICE_DIPSWITCH_1_LABEL_CA NULL
#define DICE_DIPSWITCH_1_LABEL_CAT_CA NULL
#define DICE_DIPSWITCH_1_INFO_0_CA "Canvia la configuració del Dipswitch 1."
#define OPTION_VAL_1_CA "per defecte"
#define DICE_DIPSWITCH_2_LABEL_CA NULL
#define DICE_DIPSWITCH_2_LABEL_CAT_CA NULL
#define DICE_DIPSWITCH_2_INFO_0_CA "Canvia la configuració del Dipswitch 2."
#define DICE_DIPSWITCH_3_LABEL_CA NULL
#define DICE_DIPSWITCH_3_LABEL_CAT_CA NULL
#define DICE_DIPSWITCH_3_INFO_0_CA "Canvia la configuració del Dipswitch 3."
#define DICE_DIPSWITCH16_1_LABEL_CA NULL
#define DICE_DIPSWITCH16_1_LABEL_CAT_CA NULL
#define DICE_DIPSWITCH16_1_INFO_0_CA "Canvia la configuració de l'interruptor DIP de 16 posicions 1."
#define DICE_DIPSWITCH16_2_LABEL_CA NULL
#define DICE_DIPSWITCH16_2_LABEL_CAT_CA NULL
#define DICE_DIPSWITCH16_2_INFO_0_CA "Canvia la configuració de l'interruptor DIP de 16 posicions 2."

struct retro_core_option_v2_category option_cats_ca[] = {
   {
      "input",
      CATEGORY_INPUT_LABEL_CA,
      CATEGORY_INPUT_INFO_0_CA
   },
   {
      "retromouse",
      CATEGORY_RETROMOUSE_LABEL_CA,
      CATEGORY_RETROMOUSE_INFO_0_CA
   },
#ifdef MANYMOUSE
   {
      "manymouse",
      CATEGORY_MANYMOUSE_LABEL_CA,
      CATEGORY_MANYMOUSE_INFO_0_CA
   },
#endif
   {
      "dipswitch",
      CATEGORY_DIPSWITCH_LABEL_CA,
      CATEGORY_DIPSWITCH_INFO_0_CA
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_ca[] = {
   {
      "dice_use_mouse_pointer_for_paddle_1",
      DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_LABEL_CA,
      DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_LABEL_CAT_CA,
      DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_INFO_0_CA,
      NULL,
      "input",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_paddle_joystick_absolute",
      DICE_PADDLE_JOYSTICK_ABSOLUTE_LABEL_CA,
      DICE_PADDLE_JOYSTICK_ABSOLUTE_LABEL_CAT_CA,
      DICE_PADDLE_JOYSTICK_ABSOLUTE_INFO_0_CA,
      NULL,
      "input",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      // D-pad but not necessarily keyboard under libretro,
      // that name comes from the upstream code.
      "dice_paddle_keyboard_sensitivity",
      DICE_PADDLE_KEYBOARD_SENSITIVITY_LABEL_CA,
      DICE_PADDLE_KEYBOARD_SENSITIVITY_LABEL_CAT_CA,
      DICE_PADDLE_KEYBOARD_SENSITIVITY_INFO_0_CA,
      NULL,
      "input",
      {
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "250"
   },
   {
      "dice_paddle_joystick_sensitivity",
      DICE_PADDLE_JOYSTICK_SENSITIVITY_LABEL_CA,
      DICE_PADDLE_JOYSTICK_SENSITIVITY_LABEL_CAT_CA,
      DICE_PADDLE_JOYSTICK_SENSITIVITY_INFO_0_CA,
      NULL,
      "input",
      {
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "500"
   },
   {
      "dice_retromouse_paddle_sensitivity",
      DICE_RETROMOUSE_PADDLE_SENSITIVITY_LABEL_CA,
      DICE_RETROMOUSE_PADDLE_SENSITIVITY_LABEL_CAT_CA,
      DICE_RETROMOUSE_PADDLE_SENSITIVITY_INFO_0_CA,
      NULL,
      "input",
      {
         {"25", NULL},
         {"50", NULL},
         {"75", NULL},
         {"100", NULL},
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "125"
   },
   {
      "dice_wheel_keyjoy_sensitivity",
      DICE_WHEEL_KEYJOY_SENSITIVITY_LABEL_CA,
      DICE_WHEEL_KEYJOY_SENSITIVITY_LABEL_CAT_CA,
      DICE_WHEEL_KEYJOY_SENSITIVITY_INFO_0_CA,
      NULL,
      "input",
      {
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "500"
   },
   {
      "dice_throttle_keyjoy_sensitivity",
      DICE_THROTTLE_KEYJOY_SENSITIVITY_LABEL_CA,
      DICE_THROTTLE_KEYJOY_SENSITIVITY_LABEL_CAT_CA,
      DICE_THROTTLE_KEYJOY_SENSITIVITY_INFO_0_CA,
      NULL,
      "input",
      {
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "250"
   },

   {
      "dice_retromouse_paddle0",
      DICE_RETROMOUSE_PADDLE0_LABEL_CA,
      DICE_RETROMOUSE_PADDLE0_LABEL_CAT_CA,
      DICE_RETROMOUSE_PADDLE0_INFO_0_CA,
      NULL,
      "retromouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_retromouse_paddle1",
      DICE_RETROMOUSE_PADDLE1_LABEL_CA,
      DICE_RETROMOUSE_PADDLE1_LABEL_CAT_CA,
      DICE_RETROMOUSE_PADDLE1_INFO_0_CA,
      NULL,
      "retromouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_retromouse_paddle2",
      DICE_RETROMOUSE_PADDLE2_LABEL_CA,
      DICE_RETROMOUSE_PADDLE2_LABEL_CAT_CA,
      DICE_RETROMOUSE_PADDLE2_INFO_0_CA,
      NULL,
      "retromouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_retromouse_paddle3",
      DICE_RETROMOUSE_PADDLE3_LABEL_CA,
      DICE_RETROMOUSE_PADDLE3_LABEL_CAT_CA,
      DICE_RETROMOUSE_PADDLE3_INFO_0_CA,
      NULL,
      "retromouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_retromouse_paddle0_x",
      DICE_RETROMOUSE_PADDLE0_X_LABEL_CA,
      DICE_RETROMOUSE_PADDLE0_X_LABEL_CAT_CA,
      DICE_RETROMOUSE_PADDLE0_X_INFO_0_CA,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_CA},
         {"y", OPTION_VAL_Y_CA},
         {NULL, NULL},
      },
      "x"
   },
   {
      "dice_retromouse_paddle0_y",
      DICE_RETROMOUSE_PADDLE0_Y_LABEL_CA,
      DICE_RETROMOUSE_PADDLE0_Y_LABEL_CAT_CA,
      DICE_RETROMOUSE_PADDLE0_Y_INFO_0_CA,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_CA},
         {"y", OPTION_VAL_Y_CA},
         {NULL, NULL},
      },
      "y"
   },
   {
      "dice_retromouse_paddle1_x",
      DICE_RETROMOUSE_PADDLE1_X_LABEL_CA,
      DICE_RETROMOUSE_PADDLE1_X_LABEL_CAT_CA,
      DICE_RETROMOUSE_PADDLE1_X_INFO_0_CA,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_CA},
         {"y", OPTION_VAL_Y_CA},
         {NULL, NULL},
      },
      "x"
   },
   {
      "dice_retromouse_paddle1_y",
      DICE_RETROMOUSE_PADDLE1_Y_LABEL_CA,
      DICE_RETROMOUSE_PADDLE1_Y_LABEL_CAT_CA,
      DICE_RETROMOUSE_PADDLE1_Y_INFO_0_CA,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_CA},
         {"y", OPTION_VAL_Y_CA},
         {NULL, NULL},
      },
      "y"
   },
   {
      "dice_retromouse_paddle2_x",
      DICE_RETROMOUSE_PADDLE2_X_LABEL_CA,
      DICE_RETROMOUSE_PADDLE2_X_LABEL_CAT_CA,
      DICE_RETROMOUSE_PADDLE2_X_INFO_0_CA,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_CA},
         {"y", OPTION_VAL_Y_CA},
         {NULL, NULL},
      },
      "x"
   },
   {
      "dice_retromouse_paddle2_y",
      DICE_RETROMOUSE_PADDLE2_Y_LABEL_CA,
      DICE_RETROMOUSE_PADDLE2_Y_LABEL_CAT_CA,
      DICE_RETROMOUSE_PADDLE2_Y_INFO_0_CA,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_CA},
         {"y", OPTION_VAL_Y_CA},
         {NULL, NULL},
      },
      "y"
   },
   {
      "dice_retromouse_paddle3_x",
      DICE_RETROMOUSE_PADDLE3_X_LABEL_CA,
      DICE_RETROMOUSE_PADDLE3_X_LABEL_CAT_CA,
      DICE_RETROMOUSE_PADDLE3_X_INFO_0_CA,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_CA},
         {"y", OPTION_VAL_Y_CA},
         {NULL, NULL},
      },
      "x"
   },
   {
      "dice_retromouse_paddle3_y",
      DICE_RETROMOUSE_PADDLE3_Y_LABEL_CA,
      DICE_RETROMOUSE_PADDLE3_Y_LABEL_CAT_CA,
      DICE_RETROMOUSE_PADDLE3_Y_INFO_0_CA,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_CA},
         {"y", OPTION_VAL_Y_CA},
         {NULL, NULL},
      },
      "y"
   },

#ifdef MANYMOUSE
   {
      "dice_manymouse_paddle0",
      DICE_MANYMOUSE_PADDLE0_LABEL_CA,
      DICE_RETROMOUSE_PADDLE0_LABEL_CAT_CA,
      DICE_MANYMOUSE_PADDLE0_INFO_0_CA,
      NULL,
      "manymouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_manymouse_paddle0_x",
      DICE_MANYMOUSE_PADDLE0_X_LABEL_CA,
      DICE_MANYMOUSE_PADDLE0_X_LABEL_CAT_CA,
      DICE_RETROMOUSE_PADDLE0_X_INFO_0_CA,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_CA},
         {"0y", OPTION_VAL_0Y_CA},
         {"1x", OPTION_VAL_1X_CA},
         {"1y", OPTION_VAL_1Y_CA},
         {"2x", OPTION_VAL_2X_CA},
         {"2y", OPTION_VAL_2Y_CA},
         {"3x", OPTION_VAL_3X_CA},
         {"3y", OPTION_VAL_3Y_CA},
         {NULL, NULL},
      },
      "0x"
   },
   {
      "dice_manymouse_paddle0_y",
      DICE_MANYMOUSE_PADDLE0_Y_LABEL_CA,
      DICE_MANYMOUSE_PADDLE0_Y_LABEL_CAT_CA,
      DICE_RETROMOUSE_PADDLE0_Y_INFO_0_CA,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_CA},
         {"0y", OPTION_VAL_0Y_CA},
         {"1x", OPTION_VAL_1X_CA},
         {"1y", OPTION_VAL_1Y_CA},
         {"2x", OPTION_VAL_2X_CA},
         {"2y", OPTION_VAL_2Y_CA},
         {"3x", OPTION_VAL_3X_CA},
         {"3y", OPTION_VAL_3Y_CA},
         {NULL, NULL},
      },
      "0y"
   },
   {
      "dice_manymouse_paddle1",
      DICE_MANYMOUSE_PADDLE1_LABEL_CA,
      DICE_RETROMOUSE_PADDLE1_LABEL_CAT_CA,
      DICE_MANYMOUSE_PADDLE1_INFO_0_CA,
      NULL,
      "manymouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_manymouse_paddle1_x",
      DICE_MANYMOUSE_PADDLE1_X_LABEL_CA,
      DICE_MANYMOUSE_PADDLE1_X_LABEL_CAT_CA,
      DICE_RETROMOUSE_PADDLE1_X_INFO_0_CA,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_CA},
         {"0y", OPTION_VAL_0Y_CA},
         {"1x", OPTION_VAL_1X_CA},
         {"1y", OPTION_VAL_1Y_CA},
         {"2x", OPTION_VAL_2X_CA},
         {"2y", OPTION_VAL_2Y_CA},
         {"3x", OPTION_VAL_3X_CA},
         {"3y", OPTION_VAL_3Y_CA},
         {NULL, NULL},
      },
      "1x"
   },
   {
      "dice_manymouse_paddle1_y",
      DICE_MANYMOUSE_PADDLE1_Y_LABEL_CA,
      DICE_MANYMOUSE_PADDLE1_Y_LABEL_CAT_CA,
      DICE_RETROMOUSE_PADDLE1_Y_INFO_0_CA,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_CA},
         {"0y", OPTION_VAL_0Y_CA},
         {"1x", OPTION_VAL_1X_CA},
         {"1y", OPTION_VAL_1Y_CA},
         {"2x", OPTION_VAL_2X_CA},
         {"2y", OPTION_VAL_2Y_CA},
         {"3x", OPTION_VAL_3X_CA},
         {"3y", OPTION_VAL_3Y_CA},
         {NULL, NULL},
      },
      "1y"
   },
   {
      "dice_manymouse_paddle2",
      DICE_MANYMOUSE_PADDLE2_LABEL_CA,
      DICE_RETROMOUSE_PADDLE2_LABEL_CAT_CA,
      DICE_MANYMOUSE_PADDLE2_INFO_0_CA,
      NULL,
      "manymouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_manymouse_paddle2_x",
      DICE_MANYMOUSE_PADDLE2_X_LABEL_CA,
      DICE_MANYMOUSE_PADDLE2_X_LABEL_CAT_CA,
      DICE_RETROMOUSE_PADDLE2_X_INFO_0_CA,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_CA},
         {"0y", OPTION_VAL_0Y_CA},
         {"1x", OPTION_VAL_1X_CA},
         {"1y", OPTION_VAL_1Y_CA},
         {"2x", OPTION_VAL_2X_CA},
         {"2y", OPTION_VAL_2Y_CA},
         {"3x", OPTION_VAL_3X_CA},
         {"3y", OPTION_VAL_3Y_CA},
         {NULL, NULL},
      },
      "2x"
   },
   {
      "dice_manymouse_paddle2_y",
      DICE_MANYMOUSE_PADDLE2_Y_LABEL_CA,
      DICE_MANYMOUSE_PADDLE2_Y_LABEL_CAT_CA,
      DICE_RETROMOUSE_PADDLE2_Y_INFO_0_CA,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_CA},
         {"0y", OPTION_VAL_0Y_CA},
         {"1x", OPTION_VAL_1X_CA},
         {"1y", OPTION_VAL_1Y_CA},
         {"2x", OPTION_VAL_2X_CA},
         {"2y", OPTION_VAL_2Y_CA},
         {"3x", OPTION_VAL_3X_CA},
         {"3y", OPTION_VAL_3Y_CA},
         {NULL, NULL},
      },
      "2y"
   },
   {
      "dice_manymouse_paddle3",
      DICE_MANYMOUSE_PADDLE3_LABEL_CA,
      DICE_RETROMOUSE_PADDLE3_LABEL_CAT_CA,
      DICE_MANYMOUSE_PADDLE3_INFO_0_CA,
      NULL,
      "manymouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_manymouse_paddle3_x",
      DICE_MANYMOUSE_PADDLE3_X_LABEL_CA,
      DICE_MANYMOUSE_PADDLE3_X_LABEL_CAT_CA,
      DICE_RETROMOUSE_PADDLE3_X_INFO_0_CA,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_CA},
         {"0y", OPTION_VAL_0Y_CA},
         {"1x", OPTION_VAL_1X_CA},
         {"1y", OPTION_VAL_1Y_CA},
         {"2x", OPTION_VAL_2X_CA},
         {"2y", OPTION_VAL_2Y_CA},
         {"3x", OPTION_VAL_3X_CA},
         {"3y", OPTION_VAL_3Y_CA},
         {NULL, NULL},
      },
      "3x"
   },
   {
      "dice_manymouse_paddle3_y",
      DICE_MANYMOUSE_PADDLE3_Y_LABEL_CA,
      DICE_MANYMOUSE_PADDLE3_Y_LABEL_CAT_CA,
      DICE_RETROMOUSE_PADDLE3_Y_INFO_0_CA,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_CA},
         {"0y", OPTION_VAL_0Y_CA},
         {"1x", OPTION_VAL_1X_CA},
         {"1y", OPTION_VAL_1Y_CA},
         {"2x", OPTION_VAL_2X_CA},
         {"2y", OPTION_VAL_2Y_CA},
         {"3x", OPTION_VAL_3X_CA},
         {"3y", OPTION_VAL_3Y_CA},
         {NULL, NULL},
      },
      "3y"
   },
#endif

   {
      "dice_dipswitch_1",
      DICE_DIPSWITCH_1_LABEL_CA,
      DICE_DIPSWITCH_1_LABEL_CAT_CA,
      DICE_DIPSWITCH_1_INFO_0_CA,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_CA},
         {"0", NULL},
         {"1", NULL},
         {NULL, NULL},
      },
      "-1"
   },
   {
      "dice_dipswitch_2",
      DICE_DIPSWITCH_2_LABEL_CA,
      DICE_DIPSWITCH_2_LABEL_CAT_CA,
      DICE_DIPSWITCH_2_INFO_0_CA,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_CA},
         {"0", NULL},
         {"1", NULL},
         {NULL, NULL},
      },
      "-1"
   },
   {
      "dice_dipswitch_3",
      DICE_DIPSWITCH_3_LABEL_CA,
      DICE_DIPSWITCH_3_LABEL_CAT_CA,
      DICE_DIPSWITCH_3_INFO_0_CA,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_CA},
         {"0", NULL},
         {"1", NULL},
         {NULL, NULL},
      },
      "-1"
   },
   {
      "dice_dipswitch16_1",
      DICE_DIPSWITCH16_1_LABEL_CA,
      DICE_DIPSWITCH16_1_LABEL_CAT_CA,
      DICE_DIPSWITCH16_1_INFO_0_CA,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_CA},
         {"0", NULL},
         {"1", NULL},
         {"2", NULL},
         {"3", NULL},
         {"4", NULL},
         {"5", NULL},
         {"6", NULL},
         {"7", NULL},
         {"8", NULL},
         {"9", NULL},
         {"10", NULL},
         {"11", NULL},
         {"12", NULL},
         {"13", NULL},
         {"14", NULL},
         {"15", NULL},
         {NULL, NULL},
      },
      "-1"
   },
   {
      "dice_dipswitch16_2",
      DICE_DIPSWITCH16_2_LABEL_CA,
      DICE_DIPSWITCH16_2_LABEL_CAT_CA,
      DICE_DIPSWITCH16_2_INFO_0_CA,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_CA},
         {"0", NULL},
         {"1", NULL},
         {"2", NULL},
         {"3", NULL},
         {"4", NULL},
         {"5", NULL},
         {"6", NULL},
         {"7", NULL},
         {"8", NULL},
         {"9", NULL},
         {"10", NULL},
         {"11", NULL},
         {"12", NULL},
         {"13", NULL},
         {"14", NULL},
         {"15", NULL},
         {NULL, NULL},
      },
      "-1"
   },

   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_ca = {
   option_cats_ca,
   option_defs_ca
};

/* RETRO_LANGUAGE_CHS */

#define CATEGORY_INPUT_LABEL_CHS "输入"
#define CATEGORY_INPUT_INFO_0_CHS "配置核心专属的输入设置。"
#define CATEGORY_RETROMOUSE_LABEL_CHS "复古鼠标（RetroMouse）"
#define CATEGORY_RETROMOUSE_INFO_0_CHS "配置 libretro 多鼠标设置。"
#define CATEGORY_MANYMOUSE_LABEL_CHS NULL
#define CATEGORY_MANYMOUSE_INFO_0_CHS "配置 ManyMouse 多鼠标设置。"
#define CATEGORY_DIPSWITCH_LABEL_CHS "DIP 开关"
#define CATEGORY_DIPSWITCH_INFO_0_CHS "配置 DIP 开关和电位器设置。"
#define DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_LABEL_CHS "输入 > 使用鼠标指针作为 1 号桨型控制器"
#define DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_LABEL_CAT_CHS "使用鼠标指针作为 1 号桨型控制器"
#define DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_INFO_0_CHS "将系统鼠标指针用作 1 号桨型控制器。若连接了多个鼠标，此选项不允许选择特定鼠标。"
#define DICE_PADDLE_JOYSTICK_ABSOLUTE_LABEL_CHS "输入 > 桨型摇杆使用绝对运动"
#define DICE_PADDLE_JOYSTICK_ABSOLUTE_LABEL_CAT_CHS "桨型摇杆使用绝对运动"
#define DICE_PADDLE_JOYSTICK_ABSOLUTE_INFO_0_CHS "将摇杆的移动范围直接映射到桨型控制器的范围，而非使用相对运动。"
#define DICE_PADDLE_KEYBOARD_SENSITIVITY_LABEL_CHS "输入 > 桨型方向键灵敏度"
#define DICE_PADDLE_KEYBOARD_SENSITIVITY_LABEL_CAT_CHS "桨型方向键灵敏度"
#define DICE_PADDLE_KEYBOARD_SENSITIVITY_INFO_0_CHS "使用方向键控制桨型控制器时的灵敏度。"
#define DICE_PADDLE_JOYSTICK_SENSITIVITY_LABEL_CHS "输入 > 桨型模拟摇杆灵敏度"
#define DICE_PADDLE_JOYSTICK_SENSITIVITY_LABEL_CAT_CHS "桨型模拟摇杆灵敏度"
#define DICE_PADDLE_JOYSTICK_SENSITIVITY_INFO_0_CHS "使用模拟摇杆控制桨型控制器时的灵敏度。"
#define DICE_RETROMOUSE_PADDLE_SENSITIVITY_LABEL_CHS "输入 > 桨型复古鼠标灵敏度"
#define DICE_RETROMOUSE_PADDLE_SENSITIVITY_LABEL_CAT_CHS "桨型复古鼠标灵敏度"
#define DICE_RETROMOUSE_PADDLE_SENSITIVITY_INFO_0_CHS "使用复古鼠标控制桨型控制器时的灵敏度。"
#define DICE_WHEEL_KEYJOY_SENSITIVITY_LABEL_CHS "输入 > 方向盘灵敏度"
#define DICE_WHEEL_KEYJOY_SENSITIVITY_LABEL_CAT_CHS "方向盘灵敏度"
#define DICE_WHEEL_KEYJOY_SENSITIVITY_INFO_0_CHS "使用方向键或模拟摇杆控制方向盘时的灵敏度。"
#define DICE_THROTTLE_KEYJOY_SENSITIVITY_LABEL_CHS "输入 > 油门灵敏度"
#define DICE_THROTTLE_KEYJOY_SENSITIVITY_LABEL_CAT_CHS "油门灵敏度"
#define DICE_THROTTLE_KEYJOY_SENSITIVITY_INFO_0_CHS "使用方向键或模拟摇杆控制油门时的灵敏度。"
#define DICE_RETROMOUSE_PADDLE0_LABEL_CHS "复古鼠标 > 为 1 号桨型控制器使用鼠标"
#define DICE_RETROMOUSE_PADDLE0_LABEL_CAT_CHS "为 1 号桨型控制器使用鼠标"
#define DICE_RETROMOUSE_PADDLE0_INFO_0_CHS "使用特定鼠标作为 1 号桨型控制器，通过“1 号端口的鼠标索引”指定。"
#define DICE_RETROMOUSE_PADDLE1_LABEL_CHS "复古鼠标 > 为 2 号桨型控制器使用鼠标"
#define DICE_RETROMOUSE_PADDLE1_LABEL_CAT_CHS "为 2 号桨型控制器使用鼠标"
#define DICE_RETROMOUSE_PADDLE1_INFO_0_CHS "使用特定鼠标作为 2 号桨型控制器，通过“2 号端口的鼠标索引”指定。"
#define DICE_RETROMOUSE_PADDLE2_LABEL_CHS "复古鼠标 > 为 3 号桨型控制器使用鼠标"
#define DICE_RETROMOUSE_PADDLE2_LABEL_CAT_CHS "为 3 号桨型控制器使用鼠标"
#define DICE_RETROMOUSE_PADDLE2_INFO_0_CHS "使用特定鼠标作为 3 号桨型控制器，通过“3 号端口的鼠标索引”指定。"
#define DICE_RETROMOUSE_PADDLE3_LABEL_CHS "复古鼠标 > 为 4 号桨型控制器使用鼠标"
#define DICE_RETROMOUSE_PADDLE3_LABEL_CAT_CHS "为 4 号桨型控制器使用鼠标"
#define DICE_RETROMOUSE_PADDLE3_INFO_0_CHS "使用特定鼠标作为 4 号桨型控制器，通过“4 号端口的鼠标索引”指定。"
#define DICE_RETROMOUSE_PADDLE0_X_LABEL_CHS "复古鼠标 > 为 1 号桨型控制器鼠标轴（水平）"
#define DICE_RETROMOUSE_PADDLE0_X_LABEL_CAT_CHS "1 号桨型控制器水平鼠标轴"
#define DICE_RETROMOUSE_PADDLE0_X_INFO_0_CHS "用于 1 号玩家水平屏幕移动的鼠标轴。"
#define OPTION_VAL_X_CHS NULL
#define OPTION_VAL_Y_CHS NULL
#define DICE_RETROMOUSE_PADDLE0_Y_LABEL_CHS "复古鼠标 > 为 1 号桨型控制器鼠标轴（垂直）"
#define DICE_RETROMOUSE_PADDLE0_Y_LABEL_CAT_CHS "1 号桨型控制器垂直鼠标轴"
#define DICE_RETROMOUSE_PADDLE0_Y_INFO_0_CHS "用于 1 号玩家垂直屏幕移动的鼠标轴。"
#define DICE_RETROMOUSE_PADDLE1_X_LABEL_CHS "复古鼠标 > 为 2 号桨型控制器鼠标轴（水平）"
#define DICE_RETROMOUSE_PADDLE1_X_LABEL_CAT_CHS "2 号桨型控制器水平鼠标轴"
#define DICE_RETROMOUSE_PADDLE1_X_INFO_0_CHS "用于 2 号玩家水平屏幕移动的鼠标轴。"
#define DICE_RETROMOUSE_PADDLE1_Y_LABEL_CHS "复古鼠标 > 为 2 号桨型控制器鼠标轴（垂直）"
#define DICE_RETROMOUSE_PADDLE1_Y_LABEL_CAT_CHS "2 号桨型控制器垂直鼠标轴"
#define DICE_RETROMOUSE_PADDLE1_Y_INFO_0_CHS "用于 2 号玩家垂直屏幕移动的鼠标轴。"
#define DICE_RETROMOUSE_PADDLE2_X_LABEL_CHS "复古鼠标 > 为 3 号桨型控制器鼠标轴（水平）"
#define DICE_RETROMOUSE_PADDLE2_X_LABEL_CAT_CHS "3 号桨型控制器水平鼠标轴"
#define DICE_RETROMOUSE_PADDLE2_X_INFO_0_CHS "用于 3 号玩家水平屏幕移动的鼠标轴。"
#define DICE_RETROMOUSE_PADDLE2_Y_LABEL_CHS "复古鼠标 > 为 3 号桨型控制器鼠标轴（垂直）"
#define DICE_RETROMOUSE_PADDLE2_Y_LABEL_CAT_CHS "3 号桨型控制器垂直鼠标轴"
#define DICE_RETROMOUSE_PADDLE2_Y_INFO_0_CHS "用于 3 号玩家垂直屏幕移动的鼠标轴。"
#define DICE_RETROMOUSE_PADDLE3_X_LABEL_CHS "复古鼠标 > 为 4 号桨型控制器鼠标轴（水平）"
#define DICE_RETROMOUSE_PADDLE3_X_LABEL_CAT_CHS "4 号桨型控制器水平鼠标轴"
#define DICE_RETROMOUSE_PADDLE3_X_INFO_0_CHS "用于 4 号玩家水平屏幕移动的鼠标轴。"
#define DICE_RETROMOUSE_PADDLE3_Y_LABEL_CHS "复古鼠标 > 为 4 号桨型控制器鼠标轴（垂直）"
#define DICE_RETROMOUSE_PADDLE3_Y_LABEL_CAT_CHS "4 号桨型控制器垂直鼠标轴"
#define DICE_RETROMOUSE_PADDLE3_Y_INFO_0_CHS "用于 4 号玩家垂直屏幕移动的鼠标轴。"
#define DICE_MANYMOUSE_PADDLE0_LABEL_CHS "ManyMouse > 为 1 号桨型控制器使用鼠标"
#define DICE_MANYMOUSE_PADDLE0_INFO_0_CHS "为 1 号桨型控制器使用一个鼠标。"
#define DICE_MANYMOUSE_PADDLE0_X_LABEL_CHS "ManyMouse > 1 号鼠标-桨型控制器 x 轴"
#define DICE_MANYMOUSE_PADDLE0_X_LABEL_CAT_CHS "1 号鼠标-桨型控制器 x 轴"
#define OPTION_VAL_0X_CHS "0号鼠标 X轴"
#define OPTION_VAL_0Y_CHS "0号鼠标 Y轴"
#define OPTION_VAL_1X_CHS "1号鼠标 X轴"
#define OPTION_VAL_1Y_CHS "1号鼠标 Y轴"
#define OPTION_VAL_2X_CHS "2号鼠标 X轴"
#define OPTION_VAL_2Y_CHS "2号鼠标 Y轴"
#define OPTION_VAL_3X_CHS "3号鼠标 X轴"
#define OPTION_VAL_3Y_CHS "3号鼠标 Y轴"
#define DICE_MANYMOUSE_PADDLE0_Y_LABEL_CHS "ManyMouse > 1 号鼠标-桨型控制器 y 轴"
#define DICE_MANYMOUSE_PADDLE0_Y_LABEL_CAT_CHS "1 号鼠标-桨型控制器 y 轴"
#define DICE_MANYMOUSE_PADDLE1_LABEL_CHS "ManyMouse > 为 2 号桨型控制器使用鼠标"
#define DICE_MANYMOUSE_PADDLE1_INFO_0_CHS "为 2 号桨型控制器使用一个鼠标。"
#define DICE_MANYMOUSE_PADDLE1_X_LABEL_CHS "ManyMouse > 2 号鼠标-桨型控制器 x 轴"
#define DICE_MANYMOUSE_PADDLE1_X_LABEL_CAT_CHS "2 号鼠标-桨型控制器 x 轴"
#define DICE_MANYMOUSE_PADDLE1_Y_LABEL_CHS "ManyMouse > 2 号鼠标-桨型控制器 y 轴"
#define DICE_MANYMOUSE_PADDLE1_Y_LABEL_CAT_CHS "2 号鼠标-桨型控制器 y 轴"
#define DICE_MANYMOUSE_PADDLE2_LABEL_CHS "ManyMouse > 为 3 号桨型控制器使用鼠标"
#define DICE_MANYMOUSE_PADDLE2_INFO_0_CHS "为 3 号桨型控制器使用一个鼠标。"
#define DICE_MANYMOUSE_PADDLE2_X_LABEL_CHS "ManyMouse > 3 号鼠标-桨型控制器 x 轴"
#define DICE_MANYMOUSE_PADDLE2_X_LABEL_CAT_CHS "3 号鼠标-桨型控制器 x 轴"
#define DICE_MANYMOUSE_PADDLE2_Y_LABEL_CHS "ManyMouse > 3 号鼠标-桨型控制器 y 轴"
#define DICE_MANYMOUSE_PADDLE2_Y_LABEL_CAT_CHS "3 号鼠标-桨型控制器 y 轴"
#define DICE_MANYMOUSE_PADDLE3_LABEL_CHS "ManyMouse > 为 4 号桨型控制器使用鼠标"
#define DICE_MANYMOUSE_PADDLE3_INFO_0_CHS "为 4 号桨型控制器使用一个鼠标。"
#define DICE_MANYMOUSE_PADDLE3_X_LABEL_CHS "ManyMouse > 4 号鼠标-桨型控制器 x 轴"
#define DICE_MANYMOUSE_PADDLE3_X_LABEL_CAT_CHS "4 号鼠标-桨型控制器 x 轴"
#define DICE_MANYMOUSE_PADDLE3_Y_LABEL_CHS "ManyMouse > 4 号鼠标-桨型控制器 y 轴"
#define DICE_MANYMOUSE_PADDLE3_Y_LABEL_CAT_CHS "4 号鼠标-桨型控制器 y 轴"
#define DICE_DIPSWITCH_1_LABEL_CHS "DIP 开关 > DIP 开关 1"
#define DICE_DIPSWITCH_1_LABEL_CAT_CHS "DIP 开关 1"
#define DICE_DIPSWITCH_1_INFO_0_CHS "DIP 开关 1 的设置。"
#define OPTION_VAL_1_CHS "默认"
#define DICE_DIPSWITCH_2_LABEL_CHS "DIP 开关 > DIP 开关 2"
#define DICE_DIPSWITCH_2_LABEL_CAT_CHS "DIP 开关 2"
#define DICE_DIPSWITCH_2_INFO_0_CHS "DIP 开关 2 的设置。"
#define DICE_DIPSWITCH_3_LABEL_CHS "DIP 开关 > DIP 开关 3"
#define DICE_DIPSWITCH_3_LABEL_CAT_CHS "DIP 开关 3"
#define DICE_DIPSWITCH_3_INFO_0_CHS "DIP 开关 3 的设置。"
#define DICE_DIPSWITCH16_1_LABEL_CHS "DIP 开关 > DIP 开关十六进制 1"
#define DICE_DIPSWITCH16_1_LABEL_CAT_CHS "DIP 开关十六进制 2"
#define DICE_DIPSWITCH16_1_INFO_0_CHS "16 位 DIP 开关第 1 组的设置。"
#define DICE_DIPSWITCH16_2_LABEL_CHS "DIP 开关 > DIP 开关十六进制 2"
#define DICE_DIPSWITCH16_2_LABEL_CAT_CHS "DIP 开关十六进制 2"
#define DICE_DIPSWITCH16_2_INFO_0_CHS "16 位 DIP 开关第 2 组的设置。"

struct retro_core_option_v2_category option_cats_chs[] = {
   {
      "input",
      CATEGORY_INPUT_LABEL_CHS,
      CATEGORY_INPUT_INFO_0_CHS
   },
   {
      "retromouse",
      CATEGORY_RETROMOUSE_LABEL_CHS,
      CATEGORY_RETROMOUSE_INFO_0_CHS
   },
#ifdef MANYMOUSE
   {
      "manymouse",
      CATEGORY_MANYMOUSE_LABEL_CHS,
      CATEGORY_MANYMOUSE_INFO_0_CHS
   },
#endif
   {
      "dipswitch",
      CATEGORY_DIPSWITCH_LABEL_CHS,
      CATEGORY_DIPSWITCH_INFO_0_CHS
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_chs[] = {
   {
      "dice_use_mouse_pointer_for_paddle_1",
      DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_LABEL_CHS,
      DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_LABEL_CAT_CHS,
      DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_INFO_0_CHS,
      NULL,
      "input",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_paddle_joystick_absolute",
      DICE_PADDLE_JOYSTICK_ABSOLUTE_LABEL_CHS,
      DICE_PADDLE_JOYSTICK_ABSOLUTE_LABEL_CAT_CHS,
      DICE_PADDLE_JOYSTICK_ABSOLUTE_INFO_0_CHS,
      NULL,
      "input",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      // D-pad but not necessarily keyboard under libretro,
      // that name comes from the upstream code.
      "dice_paddle_keyboard_sensitivity",
      DICE_PADDLE_KEYBOARD_SENSITIVITY_LABEL_CHS,
      DICE_PADDLE_KEYBOARD_SENSITIVITY_LABEL_CAT_CHS,
      DICE_PADDLE_KEYBOARD_SENSITIVITY_INFO_0_CHS,
      NULL,
      "input",
      {
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "250"
   },
   {
      "dice_paddle_joystick_sensitivity",
      DICE_PADDLE_JOYSTICK_SENSITIVITY_LABEL_CHS,
      DICE_PADDLE_JOYSTICK_SENSITIVITY_LABEL_CAT_CHS,
      DICE_PADDLE_JOYSTICK_SENSITIVITY_INFO_0_CHS,
      NULL,
      "input",
      {
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "500"
   },
   {
      "dice_retromouse_paddle_sensitivity",
      DICE_RETROMOUSE_PADDLE_SENSITIVITY_LABEL_CHS,
      DICE_RETROMOUSE_PADDLE_SENSITIVITY_LABEL_CAT_CHS,
      DICE_RETROMOUSE_PADDLE_SENSITIVITY_INFO_0_CHS,
      NULL,
      "input",
      {
         {"25", NULL},
         {"50", NULL},
         {"75", NULL},
         {"100", NULL},
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "125"
   },
   {
      "dice_wheel_keyjoy_sensitivity",
      DICE_WHEEL_KEYJOY_SENSITIVITY_LABEL_CHS,
      DICE_WHEEL_KEYJOY_SENSITIVITY_LABEL_CAT_CHS,
      DICE_WHEEL_KEYJOY_SENSITIVITY_INFO_0_CHS,
      NULL,
      "input",
      {
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "500"
   },
   {
      "dice_throttle_keyjoy_sensitivity",
      DICE_THROTTLE_KEYJOY_SENSITIVITY_LABEL_CHS,
      DICE_THROTTLE_KEYJOY_SENSITIVITY_LABEL_CAT_CHS,
      DICE_THROTTLE_KEYJOY_SENSITIVITY_INFO_0_CHS,
      NULL,
      "input",
      {
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "250"
   },

   {
      "dice_retromouse_paddle0",
      DICE_RETROMOUSE_PADDLE0_LABEL_CHS,
      DICE_RETROMOUSE_PADDLE0_LABEL_CAT_CHS,
      DICE_RETROMOUSE_PADDLE0_INFO_0_CHS,
      NULL,
      "retromouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_retromouse_paddle1",
      DICE_RETROMOUSE_PADDLE1_LABEL_CHS,
      DICE_RETROMOUSE_PADDLE1_LABEL_CAT_CHS,
      DICE_RETROMOUSE_PADDLE1_INFO_0_CHS,
      NULL,
      "retromouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_retromouse_paddle2",
      DICE_RETROMOUSE_PADDLE2_LABEL_CHS,
      DICE_RETROMOUSE_PADDLE2_LABEL_CAT_CHS,
      DICE_RETROMOUSE_PADDLE2_INFO_0_CHS,
      NULL,
      "retromouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_retromouse_paddle3",
      DICE_RETROMOUSE_PADDLE3_LABEL_CHS,
      DICE_RETROMOUSE_PADDLE3_LABEL_CAT_CHS,
      DICE_RETROMOUSE_PADDLE3_INFO_0_CHS,
      NULL,
      "retromouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_retromouse_paddle0_x",
      DICE_RETROMOUSE_PADDLE0_X_LABEL_CHS,
      DICE_RETROMOUSE_PADDLE0_X_LABEL_CAT_CHS,
      DICE_RETROMOUSE_PADDLE0_X_INFO_0_CHS,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_CHS},
         {"y", OPTION_VAL_Y_CHS},
         {NULL, NULL},
      },
      "x"
   },
   {
      "dice_retromouse_paddle0_y",
      DICE_RETROMOUSE_PADDLE0_Y_LABEL_CHS,
      DICE_RETROMOUSE_PADDLE0_Y_LABEL_CAT_CHS,
      DICE_RETROMOUSE_PADDLE0_Y_INFO_0_CHS,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_CHS},
         {"y", OPTION_VAL_Y_CHS},
         {NULL, NULL},
      },
      "y"
   },
   {
      "dice_retromouse_paddle1_x",
      DICE_RETROMOUSE_PADDLE1_X_LABEL_CHS,
      DICE_RETROMOUSE_PADDLE1_X_LABEL_CAT_CHS,
      DICE_RETROMOUSE_PADDLE1_X_INFO_0_CHS,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_CHS},
         {"y", OPTION_VAL_Y_CHS},
         {NULL, NULL},
      },
      "x"
   },
   {
      "dice_retromouse_paddle1_y",
      DICE_RETROMOUSE_PADDLE1_Y_LABEL_CHS,
      DICE_RETROMOUSE_PADDLE1_Y_LABEL_CAT_CHS,
      DICE_RETROMOUSE_PADDLE1_Y_INFO_0_CHS,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_CHS},
         {"y", OPTION_VAL_Y_CHS},
         {NULL, NULL},
      },
      "y"
   },
   {
      "dice_retromouse_paddle2_x",
      DICE_RETROMOUSE_PADDLE2_X_LABEL_CHS,
      DICE_RETROMOUSE_PADDLE2_X_LABEL_CAT_CHS,
      DICE_RETROMOUSE_PADDLE2_X_INFO_0_CHS,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_CHS},
         {"y", OPTION_VAL_Y_CHS},
         {NULL, NULL},
      },
      "x"
   },
   {
      "dice_retromouse_paddle2_y",
      DICE_RETROMOUSE_PADDLE2_Y_LABEL_CHS,
      DICE_RETROMOUSE_PADDLE2_Y_LABEL_CAT_CHS,
      DICE_RETROMOUSE_PADDLE2_Y_INFO_0_CHS,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_CHS},
         {"y", OPTION_VAL_Y_CHS},
         {NULL, NULL},
      },
      "y"
   },
   {
      "dice_retromouse_paddle3_x",
      DICE_RETROMOUSE_PADDLE3_X_LABEL_CHS,
      DICE_RETROMOUSE_PADDLE3_X_LABEL_CAT_CHS,
      DICE_RETROMOUSE_PADDLE3_X_INFO_0_CHS,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_CHS},
         {"y", OPTION_VAL_Y_CHS},
         {NULL, NULL},
      },
      "x"
   },
   {
      "dice_retromouse_paddle3_y",
      DICE_RETROMOUSE_PADDLE3_Y_LABEL_CHS,
      DICE_RETROMOUSE_PADDLE3_Y_LABEL_CAT_CHS,
      DICE_RETROMOUSE_PADDLE3_Y_INFO_0_CHS,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_CHS},
         {"y", OPTION_VAL_Y_CHS},
         {NULL, NULL},
      },
      "y"
   },

#ifdef MANYMOUSE
   {
      "dice_manymouse_paddle0",
      DICE_MANYMOUSE_PADDLE0_LABEL_CHS,
      DICE_RETROMOUSE_PADDLE0_LABEL_CAT_CHS,
      DICE_MANYMOUSE_PADDLE0_INFO_0_CHS,
      NULL,
      "manymouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_manymouse_paddle0_x",
      DICE_MANYMOUSE_PADDLE0_X_LABEL_CHS,
      DICE_MANYMOUSE_PADDLE0_X_LABEL_CAT_CHS,
      DICE_RETROMOUSE_PADDLE0_X_INFO_0_CHS,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_CHS},
         {"0y", OPTION_VAL_0Y_CHS},
         {"1x", OPTION_VAL_1X_CHS},
         {"1y", OPTION_VAL_1Y_CHS},
         {"2x", OPTION_VAL_2X_CHS},
         {"2y", OPTION_VAL_2Y_CHS},
         {"3x", OPTION_VAL_3X_CHS},
         {"3y", OPTION_VAL_3Y_CHS},
         {NULL, NULL},
      },
      "0x"
   },
   {
      "dice_manymouse_paddle0_y",
      DICE_MANYMOUSE_PADDLE0_Y_LABEL_CHS,
      DICE_MANYMOUSE_PADDLE0_Y_LABEL_CAT_CHS,
      DICE_RETROMOUSE_PADDLE0_Y_INFO_0_CHS,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_CHS},
         {"0y", OPTION_VAL_0Y_CHS},
         {"1x", OPTION_VAL_1X_CHS},
         {"1y", OPTION_VAL_1Y_CHS},
         {"2x", OPTION_VAL_2X_CHS},
         {"2y", OPTION_VAL_2Y_CHS},
         {"3x", OPTION_VAL_3X_CHS},
         {"3y", OPTION_VAL_3Y_CHS},
         {NULL, NULL},
      },
      "0y"
   },
   {
      "dice_manymouse_paddle1",
      DICE_MANYMOUSE_PADDLE1_LABEL_CHS,
      DICE_RETROMOUSE_PADDLE1_LABEL_CAT_CHS,
      DICE_MANYMOUSE_PADDLE1_INFO_0_CHS,
      NULL,
      "manymouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_manymouse_paddle1_x",
      DICE_MANYMOUSE_PADDLE1_X_LABEL_CHS,
      DICE_MANYMOUSE_PADDLE1_X_LABEL_CAT_CHS,
      DICE_RETROMOUSE_PADDLE1_X_INFO_0_CHS,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_CHS},
         {"0y", OPTION_VAL_0Y_CHS},
         {"1x", OPTION_VAL_1X_CHS},
         {"1y", OPTION_VAL_1Y_CHS},
         {"2x", OPTION_VAL_2X_CHS},
         {"2y", OPTION_VAL_2Y_CHS},
         {"3x", OPTION_VAL_3X_CHS},
         {"3y", OPTION_VAL_3Y_CHS},
         {NULL, NULL},
      },
      "1x"
   },
   {
      "dice_manymouse_paddle1_y",
      DICE_MANYMOUSE_PADDLE1_Y_LABEL_CHS,
      DICE_MANYMOUSE_PADDLE1_Y_LABEL_CAT_CHS,
      DICE_RETROMOUSE_PADDLE1_Y_INFO_0_CHS,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_CHS},
         {"0y", OPTION_VAL_0Y_CHS},
         {"1x", OPTION_VAL_1X_CHS},
         {"1y", OPTION_VAL_1Y_CHS},
         {"2x", OPTION_VAL_2X_CHS},
         {"2y", OPTION_VAL_2Y_CHS},
         {"3x", OPTION_VAL_3X_CHS},
         {"3y", OPTION_VAL_3Y_CHS},
         {NULL, NULL},
      },
      "1y"
   },
   {
      "dice_manymouse_paddle2",
      DICE_MANYMOUSE_PADDLE2_LABEL_CHS,
      DICE_RETROMOUSE_PADDLE2_LABEL_CAT_CHS,
      DICE_MANYMOUSE_PADDLE2_INFO_0_CHS,
      NULL,
      "manymouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_manymouse_paddle2_x",
      DICE_MANYMOUSE_PADDLE2_X_LABEL_CHS,
      DICE_MANYMOUSE_PADDLE2_X_LABEL_CAT_CHS,
      DICE_RETROMOUSE_PADDLE2_X_INFO_0_CHS,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_CHS},
         {"0y", OPTION_VAL_0Y_CHS},
         {"1x", OPTION_VAL_1X_CHS},
         {"1y", OPTION_VAL_1Y_CHS},
         {"2x", OPTION_VAL_2X_CHS},
         {"2y", OPTION_VAL_2Y_CHS},
         {"3x", OPTION_VAL_3X_CHS},
         {"3y", OPTION_VAL_3Y_CHS},
         {NULL, NULL},
      },
      "2x"
   },
   {
      "dice_manymouse_paddle2_y",
      DICE_MANYMOUSE_PADDLE2_Y_LABEL_CHS,
      DICE_MANYMOUSE_PADDLE2_Y_LABEL_CAT_CHS,
      DICE_RETROMOUSE_PADDLE2_Y_INFO_0_CHS,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_CHS},
         {"0y", OPTION_VAL_0Y_CHS},
         {"1x", OPTION_VAL_1X_CHS},
         {"1y", OPTION_VAL_1Y_CHS},
         {"2x", OPTION_VAL_2X_CHS},
         {"2y", OPTION_VAL_2Y_CHS},
         {"3x", OPTION_VAL_3X_CHS},
         {"3y", OPTION_VAL_3Y_CHS},
         {NULL, NULL},
      },
      "2y"
   },
   {
      "dice_manymouse_paddle3",
      DICE_MANYMOUSE_PADDLE3_LABEL_CHS,
      DICE_RETROMOUSE_PADDLE3_LABEL_CAT_CHS,
      DICE_MANYMOUSE_PADDLE3_INFO_0_CHS,
      NULL,
      "manymouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_manymouse_paddle3_x",
      DICE_MANYMOUSE_PADDLE3_X_LABEL_CHS,
      DICE_MANYMOUSE_PADDLE3_X_LABEL_CAT_CHS,
      DICE_RETROMOUSE_PADDLE3_X_INFO_0_CHS,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_CHS},
         {"0y", OPTION_VAL_0Y_CHS},
         {"1x", OPTION_VAL_1X_CHS},
         {"1y", OPTION_VAL_1Y_CHS},
         {"2x", OPTION_VAL_2X_CHS},
         {"2y", OPTION_VAL_2Y_CHS},
         {"3x", OPTION_VAL_3X_CHS},
         {"3y", OPTION_VAL_3Y_CHS},
         {NULL, NULL},
      },
      "3x"
   },
   {
      "dice_manymouse_paddle3_y",
      DICE_MANYMOUSE_PADDLE3_Y_LABEL_CHS,
      DICE_MANYMOUSE_PADDLE3_Y_LABEL_CAT_CHS,
      DICE_RETROMOUSE_PADDLE3_Y_INFO_0_CHS,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_CHS},
         {"0y", OPTION_VAL_0Y_CHS},
         {"1x", OPTION_VAL_1X_CHS},
         {"1y", OPTION_VAL_1Y_CHS},
         {"2x", OPTION_VAL_2X_CHS},
         {"2y", OPTION_VAL_2Y_CHS},
         {"3x", OPTION_VAL_3X_CHS},
         {"3y", OPTION_VAL_3Y_CHS},
         {NULL, NULL},
      },
      "3y"
   },
#endif

   {
      "dice_dipswitch_1",
      DICE_DIPSWITCH_1_LABEL_CHS,
      DICE_DIPSWITCH_1_LABEL_CAT_CHS,
      DICE_DIPSWITCH_1_INFO_0_CHS,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_CHS},
         {"0", NULL},
         {"1", NULL},
         {NULL, NULL},
      },
      "-1"
   },
   {
      "dice_dipswitch_2",
      DICE_DIPSWITCH_2_LABEL_CHS,
      DICE_DIPSWITCH_2_LABEL_CAT_CHS,
      DICE_DIPSWITCH_2_INFO_0_CHS,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_CHS},
         {"0", NULL},
         {"1", NULL},
         {NULL, NULL},
      },
      "-1"
   },
   {
      "dice_dipswitch_3",
      DICE_DIPSWITCH_3_LABEL_CHS,
      DICE_DIPSWITCH_3_LABEL_CAT_CHS,
      DICE_DIPSWITCH_3_INFO_0_CHS,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_CHS},
         {"0", NULL},
         {"1", NULL},
         {NULL, NULL},
      },
      "-1"
   },
   {
      "dice_dipswitch16_1",
      DICE_DIPSWITCH16_1_LABEL_CHS,
      DICE_DIPSWITCH16_1_LABEL_CAT_CHS,
      DICE_DIPSWITCH16_1_INFO_0_CHS,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_CHS},
         {"0", NULL},
         {"1", NULL},
         {"2", NULL},
         {"3", NULL},
         {"4", NULL},
         {"5", NULL},
         {"6", NULL},
         {"7", NULL},
         {"8", NULL},
         {"9", NULL},
         {"10", NULL},
         {"11", NULL},
         {"12", NULL},
         {"13", NULL},
         {"14", NULL},
         {"15", NULL},
         {NULL, NULL},
      },
      "-1"
   },
   {
      "dice_dipswitch16_2",
      DICE_DIPSWITCH16_2_LABEL_CHS,
      DICE_DIPSWITCH16_2_LABEL_CAT_CHS,
      DICE_DIPSWITCH16_2_INFO_0_CHS,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_CHS},
         {"0", NULL},
         {"1", NULL},
         {"2", NULL},
         {"3", NULL},
         {"4", NULL},
         {"5", NULL},
         {"6", NULL},
         {"7", NULL},
         {"8", NULL},
         {"9", NULL},
         {"10", NULL},
         {"11", NULL},
         {"12", NULL},
         {"13", NULL},
         {"14", NULL},
         {"15", NULL},
         {NULL, NULL},
      },
      "-1"
   },

   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_chs = {
   option_cats_chs,
   option_defs_chs
};

/* RETRO_LANGUAGE_CHT */

#define CATEGORY_INPUT_LABEL_CHT "輸入"
#define CATEGORY_INPUT_INFO_0_CHT NULL
#define CATEGORY_RETROMOUSE_LABEL_CHT NULL
#define CATEGORY_RETROMOUSE_INFO_0_CHT NULL
#define CATEGORY_MANYMOUSE_LABEL_CHT NULL
#define CATEGORY_MANYMOUSE_INFO_0_CHT NULL
#define CATEGORY_DIPSWITCH_LABEL_CHT NULL
#define CATEGORY_DIPSWITCH_INFO_0_CHT NULL
#define DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_LABEL_CHT NULL
#define DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_LABEL_CAT_CHT NULL
#define DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_INFO_0_CHT NULL
#define DICE_PADDLE_JOYSTICK_ABSOLUTE_LABEL_CHT NULL
#define DICE_PADDLE_JOYSTICK_ABSOLUTE_LABEL_CAT_CHT NULL
#define DICE_PADDLE_JOYSTICK_ABSOLUTE_INFO_0_CHT NULL
#define DICE_PADDLE_KEYBOARD_SENSITIVITY_LABEL_CHT NULL
#define DICE_PADDLE_KEYBOARD_SENSITIVITY_LABEL_CAT_CHT NULL
#define DICE_PADDLE_KEYBOARD_SENSITIVITY_INFO_0_CHT NULL
#define DICE_PADDLE_JOYSTICK_SENSITIVITY_LABEL_CHT NULL
#define DICE_PADDLE_JOYSTICK_SENSITIVITY_LABEL_CAT_CHT NULL
#define DICE_PADDLE_JOYSTICK_SENSITIVITY_INFO_0_CHT NULL
#define DICE_RETROMOUSE_PADDLE_SENSITIVITY_LABEL_CHT NULL
#define DICE_RETROMOUSE_PADDLE_SENSITIVITY_LABEL_CAT_CHT NULL
#define DICE_RETROMOUSE_PADDLE_SENSITIVITY_INFO_0_CHT NULL
#define DICE_WHEEL_KEYJOY_SENSITIVITY_LABEL_CHT NULL
#define DICE_WHEEL_KEYJOY_SENSITIVITY_LABEL_CAT_CHT NULL
#define DICE_WHEEL_KEYJOY_SENSITIVITY_INFO_0_CHT NULL
#define DICE_THROTTLE_KEYJOY_SENSITIVITY_LABEL_CHT NULL
#define DICE_THROTTLE_KEYJOY_SENSITIVITY_LABEL_CAT_CHT NULL
#define DICE_THROTTLE_KEYJOY_SENSITIVITY_INFO_0_CHT NULL
#define DICE_RETROMOUSE_PADDLE0_LABEL_CHT NULL
#define DICE_RETROMOUSE_PADDLE0_LABEL_CAT_CHT NULL
#define DICE_RETROMOUSE_PADDLE0_INFO_0_CHT NULL
#define DICE_RETROMOUSE_PADDLE1_LABEL_CHT NULL
#define DICE_RETROMOUSE_PADDLE1_LABEL_CAT_CHT NULL
#define DICE_RETROMOUSE_PADDLE1_INFO_0_CHT NULL
#define DICE_RETROMOUSE_PADDLE2_LABEL_CHT NULL
#define DICE_RETROMOUSE_PADDLE2_LABEL_CAT_CHT NULL
#define DICE_RETROMOUSE_PADDLE2_INFO_0_CHT NULL
#define DICE_RETROMOUSE_PADDLE3_LABEL_CHT NULL
#define DICE_RETROMOUSE_PADDLE3_LABEL_CAT_CHT NULL
#define DICE_RETROMOUSE_PADDLE3_INFO_0_CHT NULL
#define DICE_RETROMOUSE_PADDLE0_X_LABEL_CHT NULL
#define DICE_RETROMOUSE_PADDLE0_X_LABEL_CAT_CHT NULL
#define DICE_RETROMOUSE_PADDLE0_X_INFO_0_CHT NULL
#define OPTION_VAL_X_CHT NULL
#define OPTION_VAL_Y_CHT NULL
#define DICE_RETROMOUSE_PADDLE0_Y_LABEL_CHT NULL
#define DICE_RETROMOUSE_PADDLE0_Y_LABEL_CAT_CHT NULL
#define DICE_RETROMOUSE_PADDLE0_Y_INFO_0_CHT NULL
#define DICE_RETROMOUSE_PADDLE1_X_LABEL_CHT NULL
#define DICE_RETROMOUSE_PADDLE1_X_LABEL_CAT_CHT NULL
#define DICE_RETROMOUSE_PADDLE1_X_INFO_0_CHT NULL
#define DICE_RETROMOUSE_PADDLE1_Y_LABEL_CHT NULL
#define DICE_RETROMOUSE_PADDLE1_Y_LABEL_CAT_CHT NULL
#define DICE_RETROMOUSE_PADDLE1_Y_INFO_0_CHT NULL
#define DICE_RETROMOUSE_PADDLE2_X_LABEL_CHT NULL
#define DICE_RETROMOUSE_PADDLE2_X_LABEL_CAT_CHT NULL
#define DICE_RETROMOUSE_PADDLE2_X_INFO_0_CHT NULL
#define DICE_RETROMOUSE_PADDLE2_Y_LABEL_CHT NULL
#define DICE_RETROMOUSE_PADDLE2_Y_LABEL_CAT_CHT NULL
#define DICE_RETROMOUSE_PADDLE2_Y_INFO_0_CHT NULL
#define DICE_RETROMOUSE_PADDLE3_X_LABEL_CHT NULL
#define DICE_RETROMOUSE_PADDLE3_X_LABEL_CAT_CHT NULL
#define DICE_RETROMOUSE_PADDLE3_X_INFO_0_CHT NULL
#define DICE_RETROMOUSE_PADDLE3_Y_LABEL_CHT NULL
#define DICE_RETROMOUSE_PADDLE3_Y_LABEL_CAT_CHT NULL
#define DICE_RETROMOUSE_PADDLE3_Y_INFO_0_CHT NULL
#define DICE_MANYMOUSE_PADDLE0_LABEL_CHT NULL
#define DICE_MANYMOUSE_PADDLE0_INFO_0_CHT NULL
#define DICE_MANYMOUSE_PADDLE0_X_LABEL_CHT NULL
#define DICE_MANYMOUSE_PADDLE0_X_LABEL_CAT_CHT NULL
#define OPTION_VAL_0X_CHT NULL
#define OPTION_VAL_0Y_CHT NULL
#define OPTION_VAL_1X_CHT "1倍"
#define OPTION_VAL_1Y_CHT NULL
#define OPTION_VAL_2X_CHT "2倍"
#define OPTION_VAL_2Y_CHT NULL
#define OPTION_VAL_3X_CHT "3倍"
#define OPTION_VAL_3Y_CHT NULL
#define DICE_MANYMOUSE_PADDLE0_Y_LABEL_CHT NULL
#define DICE_MANYMOUSE_PADDLE0_Y_LABEL_CAT_CHT NULL
#define DICE_MANYMOUSE_PADDLE1_LABEL_CHT NULL
#define DICE_MANYMOUSE_PADDLE1_INFO_0_CHT NULL
#define DICE_MANYMOUSE_PADDLE1_X_LABEL_CHT NULL
#define DICE_MANYMOUSE_PADDLE1_X_LABEL_CAT_CHT NULL
#define DICE_MANYMOUSE_PADDLE1_Y_LABEL_CHT NULL
#define DICE_MANYMOUSE_PADDLE1_Y_LABEL_CAT_CHT NULL
#define DICE_MANYMOUSE_PADDLE2_LABEL_CHT NULL
#define DICE_MANYMOUSE_PADDLE2_INFO_0_CHT NULL
#define DICE_MANYMOUSE_PADDLE2_X_LABEL_CHT NULL
#define DICE_MANYMOUSE_PADDLE2_X_LABEL_CAT_CHT NULL
#define DICE_MANYMOUSE_PADDLE2_Y_LABEL_CHT NULL
#define DICE_MANYMOUSE_PADDLE2_Y_LABEL_CAT_CHT NULL
#define DICE_MANYMOUSE_PADDLE3_LABEL_CHT NULL
#define DICE_MANYMOUSE_PADDLE3_INFO_0_CHT NULL
#define DICE_MANYMOUSE_PADDLE3_X_LABEL_CHT NULL
#define DICE_MANYMOUSE_PADDLE3_X_LABEL_CAT_CHT NULL
#define DICE_MANYMOUSE_PADDLE3_Y_LABEL_CHT NULL
#define DICE_MANYMOUSE_PADDLE3_Y_LABEL_CAT_CHT NULL
#define DICE_DIPSWITCH_1_LABEL_CHT NULL
#define DICE_DIPSWITCH_1_LABEL_CAT_CHT NULL
#define DICE_DIPSWITCH_1_INFO_0_CHT NULL
#define OPTION_VAL_1_CHT NULL
#define DICE_DIPSWITCH_2_LABEL_CHT NULL
#define DICE_DIPSWITCH_2_LABEL_CAT_CHT NULL
#define DICE_DIPSWITCH_2_INFO_0_CHT NULL
#define DICE_DIPSWITCH_3_LABEL_CHT NULL
#define DICE_DIPSWITCH_3_LABEL_CAT_CHT NULL
#define DICE_DIPSWITCH_3_INFO_0_CHT NULL
#define DICE_DIPSWITCH16_1_LABEL_CHT NULL
#define DICE_DIPSWITCH16_1_LABEL_CAT_CHT NULL
#define DICE_DIPSWITCH16_1_INFO_0_CHT NULL
#define DICE_DIPSWITCH16_2_LABEL_CHT NULL
#define DICE_DIPSWITCH16_2_LABEL_CAT_CHT NULL
#define DICE_DIPSWITCH16_2_INFO_0_CHT NULL

struct retro_core_option_v2_category option_cats_cht[] = {
   {
      "input",
      CATEGORY_INPUT_LABEL_CHT,
      CATEGORY_INPUT_INFO_0_CHT
   },
   {
      "retromouse",
      CATEGORY_RETROMOUSE_LABEL_CHT,
      CATEGORY_RETROMOUSE_INFO_0_CHT
   },
#ifdef MANYMOUSE
   {
      "manymouse",
      CATEGORY_MANYMOUSE_LABEL_CHT,
      CATEGORY_MANYMOUSE_INFO_0_CHT
   },
#endif
   {
      "dipswitch",
      CATEGORY_DIPSWITCH_LABEL_CHT,
      CATEGORY_DIPSWITCH_INFO_0_CHT
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_cht[] = {
   {
      "dice_use_mouse_pointer_for_paddle_1",
      DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_LABEL_CHT,
      DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_LABEL_CAT_CHT,
      DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_INFO_0_CHT,
      NULL,
      "input",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_paddle_joystick_absolute",
      DICE_PADDLE_JOYSTICK_ABSOLUTE_LABEL_CHT,
      DICE_PADDLE_JOYSTICK_ABSOLUTE_LABEL_CAT_CHT,
      DICE_PADDLE_JOYSTICK_ABSOLUTE_INFO_0_CHT,
      NULL,
      "input",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      // D-pad but not necessarily keyboard under libretro,
      // that name comes from the upstream code.
      "dice_paddle_keyboard_sensitivity",
      DICE_PADDLE_KEYBOARD_SENSITIVITY_LABEL_CHT,
      DICE_PADDLE_KEYBOARD_SENSITIVITY_LABEL_CAT_CHT,
      DICE_PADDLE_KEYBOARD_SENSITIVITY_INFO_0_CHT,
      NULL,
      "input",
      {
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "250"
   },
   {
      "dice_paddle_joystick_sensitivity",
      DICE_PADDLE_JOYSTICK_SENSITIVITY_LABEL_CHT,
      DICE_PADDLE_JOYSTICK_SENSITIVITY_LABEL_CAT_CHT,
      DICE_PADDLE_JOYSTICK_SENSITIVITY_INFO_0_CHT,
      NULL,
      "input",
      {
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "500"
   },
   {
      "dice_retromouse_paddle_sensitivity",
      DICE_RETROMOUSE_PADDLE_SENSITIVITY_LABEL_CHT,
      DICE_RETROMOUSE_PADDLE_SENSITIVITY_LABEL_CAT_CHT,
      DICE_RETROMOUSE_PADDLE_SENSITIVITY_INFO_0_CHT,
      NULL,
      "input",
      {
         {"25", NULL},
         {"50", NULL},
         {"75", NULL},
         {"100", NULL},
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "125"
   },
   {
      "dice_wheel_keyjoy_sensitivity",
      DICE_WHEEL_KEYJOY_SENSITIVITY_LABEL_CHT,
      DICE_WHEEL_KEYJOY_SENSITIVITY_LABEL_CAT_CHT,
      DICE_WHEEL_KEYJOY_SENSITIVITY_INFO_0_CHT,
      NULL,
      "input",
      {
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "500"
   },
   {
      "dice_throttle_keyjoy_sensitivity",
      DICE_THROTTLE_KEYJOY_SENSITIVITY_LABEL_CHT,
      DICE_THROTTLE_KEYJOY_SENSITIVITY_LABEL_CAT_CHT,
      DICE_THROTTLE_KEYJOY_SENSITIVITY_INFO_0_CHT,
      NULL,
      "input",
      {
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "250"
   },

   {
      "dice_retromouse_paddle0",
      DICE_RETROMOUSE_PADDLE0_LABEL_CHT,
      DICE_RETROMOUSE_PADDLE0_LABEL_CAT_CHT,
      DICE_RETROMOUSE_PADDLE0_INFO_0_CHT,
      NULL,
      "retromouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_retromouse_paddle1",
      DICE_RETROMOUSE_PADDLE1_LABEL_CHT,
      DICE_RETROMOUSE_PADDLE1_LABEL_CAT_CHT,
      DICE_RETROMOUSE_PADDLE1_INFO_0_CHT,
      NULL,
      "retromouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_retromouse_paddle2",
      DICE_RETROMOUSE_PADDLE2_LABEL_CHT,
      DICE_RETROMOUSE_PADDLE2_LABEL_CAT_CHT,
      DICE_RETROMOUSE_PADDLE2_INFO_0_CHT,
      NULL,
      "retromouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_retromouse_paddle3",
      DICE_RETROMOUSE_PADDLE3_LABEL_CHT,
      DICE_RETROMOUSE_PADDLE3_LABEL_CAT_CHT,
      DICE_RETROMOUSE_PADDLE3_INFO_0_CHT,
      NULL,
      "retromouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_retromouse_paddle0_x",
      DICE_RETROMOUSE_PADDLE0_X_LABEL_CHT,
      DICE_RETROMOUSE_PADDLE0_X_LABEL_CAT_CHT,
      DICE_RETROMOUSE_PADDLE0_X_INFO_0_CHT,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_CHT},
         {"y", OPTION_VAL_Y_CHT},
         {NULL, NULL},
      },
      "x"
   },
   {
      "dice_retromouse_paddle0_y",
      DICE_RETROMOUSE_PADDLE0_Y_LABEL_CHT,
      DICE_RETROMOUSE_PADDLE0_Y_LABEL_CAT_CHT,
      DICE_RETROMOUSE_PADDLE0_Y_INFO_0_CHT,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_CHT},
         {"y", OPTION_VAL_Y_CHT},
         {NULL, NULL},
      },
      "y"
   },
   {
      "dice_retromouse_paddle1_x",
      DICE_RETROMOUSE_PADDLE1_X_LABEL_CHT,
      DICE_RETROMOUSE_PADDLE1_X_LABEL_CAT_CHT,
      DICE_RETROMOUSE_PADDLE1_X_INFO_0_CHT,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_CHT},
         {"y", OPTION_VAL_Y_CHT},
         {NULL, NULL},
      },
      "x"
   },
   {
      "dice_retromouse_paddle1_y",
      DICE_RETROMOUSE_PADDLE1_Y_LABEL_CHT,
      DICE_RETROMOUSE_PADDLE1_Y_LABEL_CAT_CHT,
      DICE_RETROMOUSE_PADDLE1_Y_INFO_0_CHT,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_CHT},
         {"y", OPTION_VAL_Y_CHT},
         {NULL, NULL},
      },
      "y"
   },
   {
      "dice_retromouse_paddle2_x",
      DICE_RETROMOUSE_PADDLE2_X_LABEL_CHT,
      DICE_RETROMOUSE_PADDLE2_X_LABEL_CAT_CHT,
      DICE_RETROMOUSE_PADDLE2_X_INFO_0_CHT,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_CHT},
         {"y", OPTION_VAL_Y_CHT},
         {NULL, NULL},
      },
      "x"
   },
   {
      "dice_retromouse_paddle2_y",
      DICE_RETROMOUSE_PADDLE2_Y_LABEL_CHT,
      DICE_RETROMOUSE_PADDLE2_Y_LABEL_CAT_CHT,
      DICE_RETROMOUSE_PADDLE2_Y_INFO_0_CHT,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_CHT},
         {"y", OPTION_VAL_Y_CHT},
         {NULL, NULL},
      },
      "y"
   },
   {
      "dice_retromouse_paddle3_x",
      DICE_RETROMOUSE_PADDLE3_X_LABEL_CHT,
      DICE_RETROMOUSE_PADDLE3_X_LABEL_CAT_CHT,
      DICE_RETROMOUSE_PADDLE3_X_INFO_0_CHT,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_CHT},
         {"y", OPTION_VAL_Y_CHT},
         {NULL, NULL},
      },
      "x"
   },
   {
      "dice_retromouse_paddle3_y",
      DICE_RETROMOUSE_PADDLE3_Y_LABEL_CHT,
      DICE_RETROMOUSE_PADDLE3_Y_LABEL_CAT_CHT,
      DICE_RETROMOUSE_PADDLE3_Y_INFO_0_CHT,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_CHT},
         {"y", OPTION_VAL_Y_CHT},
         {NULL, NULL},
      },
      "y"
   },

#ifdef MANYMOUSE
   {
      "dice_manymouse_paddle0",
      DICE_MANYMOUSE_PADDLE0_LABEL_CHT,
      DICE_RETROMOUSE_PADDLE0_LABEL_CAT_CHT,
      DICE_MANYMOUSE_PADDLE0_INFO_0_CHT,
      NULL,
      "manymouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_manymouse_paddle0_x",
      DICE_MANYMOUSE_PADDLE0_X_LABEL_CHT,
      DICE_MANYMOUSE_PADDLE0_X_LABEL_CAT_CHT,
      DICE_RETROMOUSE_PADDLE0_X_INFO_0_CHT,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_CHT},
         {"0y", OPTION_VAL_0Y_CHT},
         {"1x", OPTION_VAL_1X_CHT},
         {"1y", OPTION_VAL_1Y_CHT},
         {"2x", OPTION_VAL_2X_CHT},
         {"2y", OPTION_VAL_2Y_CHT},
         {"3x", OPTION_VAL_3X_CHT},
         {"3y", OPTION_VAL_3Y_CHT},
         {NULL, NULL},
      },
      "0x"
   },
   {
      "dice_manymouse_paddle0_y",
      DICE_MANYMOUSE_PADDLE0_Y_LABEL_CHT,
      DICE_MANYMOUSE_PADDLE0_Y_LABEL_CAT_CHT,
      DICE_RETROMOUSE_PADDLE0_Y_INFO_0_CHT,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_CHT},
         {"0y", OPTION_VAL_0Y_CHT},
         {"1x", OPTION_VAL_1X_CHT},
         {"1y", OPTION_VAL_1Y_CHT},
         {"2x", OPTION_VAL_2X_CHT},
         {"2y", OPTION_VAL_2Y_CHT},
         {"3x", OPTION_VAL_3X_CHT},
         {"3y", OPTION_VAL_3Y_CHT},
         {NULL, NULL},
      },
      "0y"
   },
   {
      "dice_manymouse_paddle1",
      DICE_MANYMOUSE_PADDLE1_LABEL_CHT,
      DICE_RETROMOUSE_PADDLE1_LABEL_CAT_CHT,
      DICE_MANYMOUSE_PADDLE1_INFO_0_CHT,
      NULL,
      "manymouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_manymouse_paddle1_x",
      DICE_MANYMOUSE_PADDLE1_X_LABEL_CHT,
      DICE_MANYMOUSE_PADDLE1_X_LABEL_CAT_CHT,
      DICE_RETROMOUSE_PADDLE1_X_INFO_0_CHT,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_CHT},
         {"0y", OPTION_VAL_0Y_CHT},
         {"1x", OPTION_VAL_1X_CHT},
         {"1y", OPTION_VAL_1Y_CHT},
         {"2x", OPTION_VAL_2X_CHT},
         {"2y", OPTION_VAL_2Y_CHT},
         {"3x", OPTION_VAL_3X_CHT},
         {"3y", OPTION_VAL_3Y_CHT},
         {NULL, NULL},
      },
      "1x"
   },
   {
      "dice_manymouse_paddle1_y",
      DICE_MANYMOUSE_PADDLE1_Y_LABEL_CHT,
      DICE_MANYMOUSE_PADDLE1_Y_LABEL_CAT_CHT,
      DICE_RETROMOUSE_PADDLE1_Y_INFO_0_CHT,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_CHT},
         {"0y", OPTION_VAL_0Y_CHT},
         {"1x", OPTION_VAL_1X_CHT},
         {"1y", OPTION_VAL_1Y_CHT},
         {"2x", OPTION_VAL_2X_CHT},
         {"2y", OPTION_VAL_2Y_CHT},
         {"3x", OPTION_VAL_3X_CHT},
         {"3y", OPTION_VAL_3Y_CHT},
         {NULL, NULL},
      },
      "1y"
   },
   {
      "dice_manymouse_paddle2",
      DICE_MANYMOUSE_PADDLE2_LABEL_CHT,
      DICE_RETROMOUSE_PADDLE2_LABEL_CAT_CHT,
      DICE_MANYMOUSE_PADDLE2_INFO_0_CHT,
      NULL,
      "manymouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_manymouse_paddle2_x",
      DICE_MANYMOUSE_PADDLE2_X_LABEL_CHT,
      DICE_MANYMOUSE_PADDLE2_X_LABEL_CAT_CHT,
      DICE_RETROMOUSE_PADDLE2_X_INFO_0_CHT,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_CHT},
         {"0y", OPTION_VAL_0Y_CHT},
         {"1x", OPTION_VAL_1X_CHT},
         {"1y", OPTION_VAL_1Y_CHT},
         {"2x", OPTION_VAL_2X_CHT},
         {"2y", OPTION_VAL_2Y_CHT},
         {"3x", OPTION_VAL_3X_CHT},
         {"3y", OPTION_VAL_3Y_CHT},
         {NULL, NULL},
      },
      "2x"
   },
   {
      "dice_manymouse_paddle2_y",
      DICE_MANYMOUSE_PADDLE2_Y_LABEL_CHT,
      DICE_MANYMOUSE_PADDLE2_Y_LABEL_CAT_CHT,
      DICE_RETROMOUSE_PADDLE2_Y_INFO_0_CHT,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_CHT},
         {"0y", OPTION_VAL_0Y_CHT},
         {"1x", OPTION_VAL_1X_CHT},
         {"1y", OPTION_VAL_1Y_CHT},
         {"2x", OPTION_VAL_2X_CHT},
         {"2y", OPTION_VAL_2Y_CHT},
         {"3x", OPTION_VAL_3X_CHT},
         {"3y", OPTION_VAL_3Y_CHT},
         {NULL, NULL},
      },
      "2y"
   },
   {
      "dice_manymouse_paddle3",
      DICE_MANYMOUSE_PADDLE3_LABEL_CHT,
      DICE_RETROMOUSE_PADDLE3_LABEL_CAT_CHT,
      DICE_MANYMOUSE_PADDLE3_INFO_0_CHT,
      NULL,
      "manymouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_manymouse_paddle3_x",
      DICE_MANYMOUSE_PADDLE3_X_LABEL_CHT,
      DICE_MANYMOUSE_PADDLE3_X_LABEL_CAT_CHT,
      DICE_RETROMOUSE_PADDLE3_X_INFO_0_CHT,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_CHT},
         {"0y", OPTION_VAL_0Y_CHT},
         {"1x", OPTION_VAL_1X_CHT},
         {"1y", OPTION_VAL_1Y_CHT},
         {"2x", OPTION_VAL_2X_CHT},
         {"2y", OPTION_VAL_2Y_CHT},
         {"3x", OPTION_VAL_3X_CHT},
         {"3y", OPTION_VAL_3Y_CHT},
         {NULL, NULL},
      },
      "3x"
   },
   {
      "dice_manymouse_paddle3_y",
      DICE_MANYMOUSE_PADDLE3_Y_LABEL_CHT,
      DICE_MANYMOUSE_PADDLE3_Y_LABEL_CAT_CHT,
      DICE_RETROMOUSE_PADDLE3_Y_INFO_0_CHT,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_CHT},
         {"0y", OPTION_VAL_0Y_CHT},
         {"1x", OPTION_VAL_1X_CHT},
         {"1y", OPTION_VAL_1Y_CHT},
         {"2x", OPTION_VAL_2X_CHT},
         {"2y", OPTION_VAL_2Y_CHT},
         {"3x", OPTION_VAL_3X_CHT},
         {"3y", OPTION_VAL_3Y_CHT},
         {NULL, NULL},
      },
      "3y"
   },
#endif

   {
      "dice_dipswitch_1",
      DICE_DIPSWITCH_1_LABEL_CHT,
      DICE_DIPSWITCH_1_LABEL_CAT_CHT,
      DICE_DIPSWITCH_1_INFO_0_CHT,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_CHT},
         {"0", NULL},
         {"1", NULL},
         {NULL, NULL},
      },
      "-1"
   },
   {
      "dice_dipswitch_2",
      DICE_DIPSWITCH_2_LABEL_CHT,
      DICE_DIPSWITCH_2_LABEL_CAT_CHT,
      DICE_DIPSWITCH_2_INFO_0_CHT,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_CHT},
         {"0", NULL},
         {"1", NULL},
         {NULL, NULL},
      },
      "-1"
   },
   {
      "dice_dipswitch_3",
      DICE_DIPSWITCH_3_LABEL_CHT,
      DICE_DIPSWITCH_3_LABEL_CAT_CHT,
      DICE_DIPSWITCH_3_INFO_0_CHT,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_CHT},
         {"0", NULL},
         {"1", NULL},
         {NULL, NULL},
      },
      "-1"
   },
   {
      "dice_dipswitch16_1",
      DICE_DIPSWITCH16_1_LABEL_CHT,
      DICE_DIPSWITCH16_1_LABEL_CAT_CHT,
      DICE_DIPSWITCH16_1_INFO_0_CHT,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_CHT},
         {"0", NULL},
         {"1", NULL},
         {"2", NULL},
         {"3", NULL},
         {"4", NULL},
         {"5", NULL},
         {"6", NULL},
         {"7", NULL},
         {"8", NULL},
         {"9", NULL},
         {"10", NULL},
         {"11", NULL},
         {"12", NULL},
         {"13", NULL},
         {"14", NULL},
         {"15", NULL},
         {NULL, NULL},
      },
      "-1"
   },
   {
      "dice_dipswitch16_2",
      DICE_DIPSWITCH16_2_LABEL_CHT,
      DICE_DIPSWITCH16_2_LABEL_CAT_CHT,
      DICE_DIPSWITCH16_2_INFO_0_CHT,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_CHT},
         {"0", NULL},
         {"1", NULL},
         {"2", NULL},
         {"3", NULL},
         {"4", NULL},
         {"5", NULL},
         {"6", NULL},
         {"7", NULL},
         {"8", NULL},
         {"9", NULL},
         {"10", NULL},
         {"11", NULL},
         {"12", NULL},
         {"13", NULL},
         {"14", NULL},
         {"15", NULL},
         {NULL, NULL},
      },
      "-1"
   },

   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_cht = {
   option_cats_cht,
   option_defs_cht
};

/* RETRO_LANGUAGE_CS */

#define CATEGORY_INPUT_LABEL_CS "Vstup"
#define CATEGORY_INPUT_INFO_0_CS "Nakonfigurujte nastavení vstupu specifická pro jádro."
#define CATEGORY_RETROMOUSE_LABEL_CS NULL
#define CATEGORY_RETROMOUSE_INFO_0_CS "Nakonfigurujte nastavení libretro pro více myší."
#define CATEGORY_MANYMOUSE_LABEL_CS NULL
#define CATEGORY_MANYMOUSE_INFO_0_CS "Nakonfigurujte nastavení pro více myší v ManyMouse."
#define CATEGORY_DIPSWITCH_LABEL_CS "Přepínač DIP"
#define CATEGORY_DIPSWITCH_INFO_0_CS "Nastavte přepínač DIP a potenciometr."
#define DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_LABEL_CS "Vstup > Použít ukazatel myši pro pádlo 1"
#define DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_LABEL_CAT_CS "Použít ukazatel myši pro pádlo 1"
#define DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_INFO_0_CS "Použijte ukazatel myši systému jako ovladač pádla 1.  Neumožňuje vybrat konkrétní myš, pokud jich máte několik."
#define DICE_PADDLE_JOYSTICK_ABSOLUTE_LABEL_CS "Vstup > Pádlový joystick využívá absolutní pohyb"
#define DICE_PADDLE_JOYSTICK_ABSOLUTE_LABEL_CAT_CS "Pádlo Joystick využívá absolutní pohyb"
#define DICE_PADDLE_JOYSTICK_ABSOLUTE_INFO_0_CS "Přímo namapujte rozsah pohybu joysticku na rozsah pádla, nikoli relativní pohyby."
#define DICE_PADDLE_KEYBOARD_SENSITIVITY_LABEL_CS "Vstup > Citlivost D-padu pádla"
#define DICE_PADDLE_KEYBOARD_SENSITIVITY_LABEL_CAT_CS "Citlivost D-padu pádla"
#define DICE_PADDLE_KEYBOARD_SENSITIVITY_INFO_0_CS "Citlivost při použití D-padu jako pádla."
#define DICE_PADDLE_JOYSTICK_SENSITIVITY_LABEL_CS "Vstup > Citlivost analogové páčky pádla"
#define DICE_PADDLE_JOYSTICK_SENSITIVITY_LABEL_CAT_CS "Citlivost analogové páčky pádla"
#define DICE_PADDLE_JOYSTICK_SENSITIVITY_INFO_0_CS "Citlivost při použití analogové páčky jako pádla."
#define DICE_RETROMOUSE_PADDLE_SENSITIVITY_LABEL_CS "Vstup > Citlivost retro myši pádla"
#define DICE_RETROMOUSE_PADDLE_SENSITIVITY_LABEL_CAT_CS "Citlivost retro myši pádla"
#define DICE_RETROMOUSE_PADDLE_SENSITIVITY_INFO_0_CS "Citlivost při použití RetroMouse jako pádla."
#define DICE_WHEEL_KEYJOY_SENSITIVITY_LABEL_CS "Vstup > Citlivost volantu"
#define DICE_WHEEL_KEYJOY_SENSITIVITY_LABEL_CAT_CS "Citlivost volantu"
#define DICE_WHEEL_KEYJOY_SENSITIVITY_INFO_0_CS "Citlivost při použití D-padu nebo analogové páčky pro volant."
#define DICE_THROTTLE_KEYJOY_SENSITIVITY_LABEL_CS "Vstup > Citlivost plynového pedálu"
#define DICE_THROTTLE_KEYJOY_SENSITIVITY_LABEL_CAT_CS "Citlivost plynu"
#define DICE_THROTTLE_KEYJOY_SENSITIVITY_INFO_0_CS "Citlivost při použití D-padu nebo analogové páčky pro ovládání plynu."
#define DICE_RETROMOUSE_PADDLE0_LABEL_CS "RetroMouse > Použijte myš pro pádlo 1"
#define DICE_RETROMOUSE_PADDLE0_LABEL_CAT_CS "Použijte myš pro pádlo 1"
#define DICE_RETROMOUSE_PADDLE0_INFO_0_CS "Použijte speciální myš pro pádlo 1, vybranou podle indexu myši portu 1."
#define DICE_RETROMOUSE_PADDLE1_LABEL_CS "RetroMouse > Použijte myš pro pádlo 2"
#define DICE_RETROMOUSE_PADDLE1_LABEL_CAT_CS "Použijte myš pro pádlo 2"
#define DICE_RETROMOUSE_PADDLE1_INFO_0_CS "Použijte speciální myš pro pádlo 2, vybranou podle indexu myši portu 2."
#define DICE_RETROMOUSE_PADDLE2_LABEL_CS "RetroMouse > Použijte myš jako pádlo 3"
#define DICE_RETROMOUSE_PADDLE2_LABEL_CAT_CS "Použijte myš pro pádlo 3"
#define DICE_RETROMOUSE_PADDLE2_INFO_0_CS "Použijte speciální myš pro pádlo 3, vybranou podle indexu myši portu 3."
#define DICE_RETROMOUSE_PADDLE3_LABEL_CS "RetroMouse > Použijte myš pro pádlo 4"
#define DICE_RETROMOUSE_PADDLE3_LABEL_CAT_CS "Použijte myš pro pádlo 4"
#define DICE_RETROMOUSE_PADDLE3_INFO_0_CS "Použijte speciální myš pro pádlo 4, vybranou podle indexu myši portu 4."
#define DICE_RETROMOUSE_PADDLE0_X_LABEL_CS "RetroMouse > Osa myši pro pádlo 1 horizontální"
#define DICE_RETROMOUSE_PADDLE0_X_LABEL_CAT_CS "Osa myši pro pádlo 1 horizontální"
#define DICE_RETROMOUSE_PADDLE0_X_INFO_0_CS "Osa myši pro hráče 1, horizontální pohyb obrazovky."
#define OPTION_VAL_X_CS NULL
#define OPTION_VAL_Y_CS NULL
#define DICE_RETROMOUSE_PADDLE0_Y_LABEL_CS "RetroMouse > Osa myši pro pádlo 1 vertikální"
#define DICE_RETROMOUSE_PADDLE0_Y_LABEL_CAT_CS "Osa myši pro pádlo 1 vertikální"
#define DICE_RETROMOUSE_PADDLE0_Y_INFO_0_CS "Osa myši pro hráče 1, vertikální pohyb obrazovky."
#define DICE_RETROMOUSE_PADDLE1_X_LABEL_CS "RetroMouse > Osa myši pro pádlo 2 horizontální"
#define DICE_RETROMOUSE_PADDLE1_X_LABEL_CAT_CS "Osa myši pro pádlo 2 horizontální"
#define DICE_RETROMOUSE_PADDLE1_X_INFO_0_CS "Osa myši pro hráče 2, horizontální pohyb obrazovky."
#define DICE_RETROMOUSE_PADDLE1_Y_LABEL_CS "RetroMouse > Osa myši pro pádlo 2 vertikální"
#define DICE_RETROMOUSE_PADDLE1_Y_LABEL_CAT_CS "Osa myši pro pádlo 2 vertikální"
#define DICE_RETROMOUSE_PADDLE1_Y_INFO_0_CS "Osa myši pro hráče 2, vertikální pohyb obrazovky."
#define DICE_RETROMOUSE_PADDLE2_X_LABEL_CS "RetroMouse > Osa myši pro pádlo 3 horizontální"
#define DICE_RETROMOUSE_PADDLE2_X_LABEL_CAT_CS "Osa myši pro pádlo 3 horizontální"
#define DICE_RETROMOUSE_PADDLE2_X_INFO_0_CS "Osa myši pro hráče 3, horizontální pohyb obrazovky."
#define DICE_RETROMOUSE_PADDLE2_Y_LABEL_CS "RetroMouse > Osa myši pro pádlo 3 vertikální"
#define DICE_RETROMOUSE_PADDLE2_Y_LABEL_CAT_CS "Osa myši pro pádlo 3 vertikální"
#define DICE_RETROMOUSE_PADDLE2_Y_INFO_0_CS "Osa myši pro hráče 3, vertikální pohyb obrazovky."
#define DICE_RETROMOUSE_PADDLE3_X_LABEL_CS "RetroMouse > Osa myši pro pádlo 4 horizontální"
#define DICE_RETROMOUSE_PADDLE3_X_LABEL_CAT_CS "Osa myši pro pádlo 4 horizontální"
#define DICE_RETROMOUSE_PADDLE3_X_INFO_0_CS "Osa myši pro hráče 4, horizontální pohyb obrazovky."
#define DICE_RETROMOUSE_PADDLE3_Y_LABEL_CS "RetroMouse > Osa myši pro pádlo 4 vertikální"
#define DICE_RETROMOUSE_PADDLE3_Y_LABEL_CAT_CS "Osa myši pro pádlo 4 vertikální"
#define DICE_RETROMOUSE_PADDLE3_Y_INFO_0_CS "Osa myši pro hráče 4, vertikální pohyb obrazovky."
#define DICE_MANYMOUSE_PADDLE0_LABEL_CS "Více myší> Použít myš pro pádlo 1"
#define DICE_MANYMOUSE_PADDLE0_INFO_0_CS "Pro pádlo 1 použijte myš."
#define DICE_MANYMOUSE_PADDLE0_X_LABEL_CS "Více myší > Myš-pádlo 1 x"
#define DICE_MANYMOUSE_PADDLE0_X_LABEL_CAT_CS "Myš-pádlo 1 x"
#define OPTION_VAL_0X_CS NULL
#define OPTION_VAL_0Y_CS NULL
#define OPTION_VAL_1X_CS NULL
#define OPTION_VAL_1Y_CS NULL
#define OPTION_VAL_2X_CS NULL
#define OPTION_VAL_2Y_CS NULL
#define OPTION_VAL_3X_CS NULL
#define OPTION_VAL_3Y_CS NULL
#define DICE_MANYMOUSE_PADDLE0_Y_LABEL_CS "Více myší > Myš-Paddle 1 y"
#define DICE_MANYMOUSE_PADDLE0_Y_LABEL_CAT_CS "Myš-pádlo 1 y"
#define DICE_MANYMOUSE_PADDLE1_LABEL_CS "Více myší > Použijte myš pro pádlo 2"
#define DICE_MANYMOUSE_PADDLE1_INFO_0_CS "Pro pádlo 2 použijte myš."
#define DICE_MANYMOUSE_PADDLE1_X_LABEL_CS "Více myší > Myš-Pádlo 2 x"
#define DICE_MANYMOUSE_PADDLE1_X_LABEL_CAT_CS "Myš-Pádlo 2 x"
#define DICE_MANYMOUSE_PADDLE1_Y_LABEL_CS "Více myší > Mouse-Pádlo 2 y"
#define DICE_MANYMOUSE_PADDLE1_Y_LABEL_CAT_CS "Myš-Pádlo 2 y"
#define DICE_MANYMOUSE_PADDLE2_LABEL_CS "Více myší > Použijte myš jako pádlo 3"
#define DICE_MANYMOUSE_PADDLE2_INFO_0_CS "Pro pádlo 3 použijte myš."
#define DICE_MANYMOUSE_PADDLE2_X_LABEL_CS "Více myší > Myš-Pádlo 3 x"
#define DICE_MANYMOUSE_PADDLE2_X_LABEL_CAT_CS "Myš-Pádlo 3 x"
#define DICE_MANYMOUSE_PADDLE2_Y_LABEL_CS "Více myší > Myš-Pádlo 3 y"
#define DICE_MANYMOUSE_PADDLE2_Y_LABEL_CAT_CS "Myš-Pádlo 3 y"
#define DICE_MANYMOUSE_PADDLE3_LABEL_CS "Více myší > Použijte myš jako pádlo 4"
#define DICE_MANYMOUSE_PADDLE3_INFO_0_CS "Pro pádlo 4 použijte myš."
#define DICE_MANYMOUSE_PADDLE3_X_LABEL_CS "Více myší > Myš-Pádlo 4 x"
#define DICE_MANYMOUSE_PADDLE3_X_LABEL_CAT_CS "Myš-Pádlo 4 x"
#define DICE_MANYMOUSE_PADDLE3_Y_LABEL_CS "Více myší > Myš-Pádlo 4 y"
#define DICE_MANYMOUSE_PADDLE3_Y_LABEL_CAT_CS "Myš-Pádlo 4 y"
#define DICE_DIPSWITCH_1_LABEL_CS "DIP přepínač > DIP přepínač 1"
#define DICE_DIPSWITCH_1_LABEL_CAT_CS "Přepínač DIP 1"
#define DICE_DIPSWITCH_1_INFO_0_CS "Nastavení DIP přepínače 1."
#define OPTION_VAL_1_CS "výchozí"
#define DICE_DIPSWITCH_2_LABEL_CS "DIP přepínač > DIP přepínač 2"
#define DICE_DIPSWITCH_2_LABEL_CAT_CS "Přepínač DIP 2"
#define DICE_DIPSWITCH_2_INFO_0_CS "Nastavení DIP přepínače 2."
#define DICE_DIPSWITCH_3_LABEL_CS "DIP přepínač > DIP přepínač 3"
#define DICE_DIPSWITCH_3_LABEL_CAT_CS "Přepínač DIP 3"
#define DICE_DIPSWITCH_3_INFO_0_CS "Nastavení DIP přepínače 3."
#define DICE_DIPSWITCH16_1_LABEL_CS "DIP přepínač > DIP přepínač Hex 1"
#define DICE_DIPSWITCH16_1_LABEL_CAT_CS "DIP přepínač Hex 1"
#define DICE_DIPSWITCH16_1_INFO_0_CS "Nastavení 16-polohového DIP přepínače číslo 1."
#define DICE_DIPSWITCH16_2_LABEL_CS "DIP přepínač > DIP přepínač Hex 2"
#define DICE_DIPSWITCH16_2_LABEL_CAT_CS "DIP přepínač Hex 2"
#define DICE_DIPSWITCH16_2_INFO_0_CS "Nastavení 16-polohového DIP přepínače číslo 2."

struct retro_core_option_v2_category option_cats_cs[] = {
   {
      "input",
      CATEGORY_INPUT_LABEL_CS,
      CATEGORY_INPUT_INFO_0_CS
   },
   {
      "retromouse",
      CATEGORY_RETROMOUSE_LABEL_CS,
      CATEGORY_RETROMOUSE_INFO_0_CS
   },
#ifdef MANYMOUSE
   {
      "manymouse",
      CATEGORY_MANYMOUSE_LABEL_CS,
      CATEGORY_MANYMOUSE_INFO_0_CS
   },
#endif
   {
      "dipswitch",
      CATEGORY_DIPSWITCH_LABEL_CS,
      CATEGORY_DIPSWITCH_INFO_0_CS
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_cs[] = {
   {
      "dice_use_mouse_pointer_for_paddle_1",
      DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_LABEL_CS,
      DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_LABEL_CAT_CS,
      DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_INFO_0_CS,
      NULL,
      "input",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_paddle_joystick_absolute",
      DICE_PADDLE_JOYSTICK_ABSOLUTE_LABEL_CS,
      DICE_PADDLE_JOYSTICK_ABSOLUTE_LABEL_CAT_CS,
      DICE_PADDLE_JOYSTICK_ABSOLUTE_INFO_0_CS,
      NULL,
      "input",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      // D-pad but not necessarily keyboard under libretro,
      // that name comes from the upstream code.
      "dice_paddle_keyboard_sensitivity",
      DICE_PADDLE_KEYBOARD_SENSITIVITY_LABEL_CS,
      DICE_PADDLE_KEYBOARD_SENSITIVITY_LABEL_CAT_CS,
      DICE_PADDLE_KEYBOARD_SENSITIVITY_INFO_0_CS,
      NULL,
      "input",
      {
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "250"
   },
   {
      "dice_paddle_joystick_sensitivity",
      DICE_PADDLE_JOYSTICK_SENSITIVITY_LABEL_CS,
      DICE_PADDLE_JOYSTICK_SENSITIVITY_LABEL_CAT_CS,
      DICE_PADDLE_JOYSTICK_SENSITIVITY_INFO_0_CS,
      NULL,
      "input",
      {
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "500"
   },
   {
      "dice_retromouse_paddle_sensitivity",
      DICE_RETROMOUSE_PADDLE_SENSITIVITY_LABEL_CS,
      DICE_RETROMOUSE_PADDLE_SENSITIVITY_LABEL_CAT_CS,
      DICE_RETROMOUSE_PADDLE_SENSITIVITY_INFO_0_CS,
      NULL,
      "input",
      {
         {"25", NULL},
         {"50", NULL},
         {"75", NULL},
         {"100", NULL},
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "125"
   },
   {
      "dice_wheel_keyjoy_sensitivity",
      DICE_WHEEL_KEYJOY_SENSITIVITY_LABEL_CS,
      DICE_WHEEL_KEYJOY_SENSITIVITY_LABEL_CAT_CS,
      DICE_WHEEL_KEYJOY_SENSITIVITY_INFO_0_CS,
      NULL,
      "input",
      {
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "500"
   },
   {
      "dice_throttle_keyjoy_sensitivity",
      DICE_THROTTLE_KEYJOY_SENSITIVITY_LABEL_CS,
      DICE_THROTTLE_KEYJOY_SENSITIVITY_LABEL_CAT_CS,
      DICE_THROTTLE_KEYJOY_SENSITIVITY_INFO_0_CS,
      NULL,
      "input",
      {
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "250"
   },

   {
      "dice_retromouse_paddle0",
      DICE_RETROMOUSE_PADDLE0_LABEL_CS,
      DICE_RETROMOUSE_PADDLE0_LABEL_CAT_CS,
      DICE_RETROMOUSE_PADDLE0_INFO_0_CS,
      NULL,
      "retromouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_retromouse_paddle1",
      DICE_RETROMOUSE_PADDLE1_LABEL_CS,
      DICE_RETROMOUSE_PADDLE1_LABEL_CAT_CS,
      DICE_RETROMOUSE_PADDLE1_INFO_0_CS,
      NULL,
      "retromouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_retromouse_paddle2",
      DICE_RETROMOUSE_PADDLE2_LABEL_CS,
      DICE_RETROMOUSE_PADDLE2_LABEL_CAT_CS,
      DICE_RETROMOUSE_PADDLE2_INFO_0_CS,
      NULL,
      "retromouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_retromouse_paddle3",
      DICE_RETROMOUSE_PADDLE3_LABEL_CS,
      DICE_RETROMOUSE_PADDLE3_LABEL_CAT_CS,
      DICE_RETROMOUSE_PADDLE3_INFO_0_CS,
      NULL,
      "retromouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_retromouse_paddle0_x",
      DICE_RETROMOUSE_PADDLE0_X_LABEL_CS,
      DICE_RETROMOUSE_PADDLE0_X_LABEL_CAT_CS,
      DICE_RETROMOUSE_PADDLE0_X_INFO_0_CS,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_CS},
         {"y", OPTION_VAL_Y_CS},
         {NULL, NULL},
      },
      "x"
   },
   {
      "dice_retromouse_paddle0_y",
      DICE_RETROMOUSE_PADDLE0_Y_LABEL_CS,
      DICE_RETROMOUSE_PADDLE0_Y_LABEL_CAT_CS,
      DICE_RETROMOUSE_PADDLE0_Y_INFO_0_CS,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_CS},
         {"y", OPTION_VAL_Y_CS},
         {NULL, NULL},
      },
      "y"
   },
   {
      "dice_retromouse_paddle1_x",
      DICE_RETROMOUSE_PADDLE1_X_LABEL_CS,
      DICE_RETROMOUSE_PADDLE1_X_LABEL_CAT_CS,
      DICE_RETROMOUSE_PADDLE1_X_INFO_0_CS,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_CS},
         {"y", OPTION_VAL_Y_CS},
         {NULL, NULL},
      },
      "x"
   },
   {
      "dice_retromouse_paddle1_y",
      DICE_RETROMOUSE_PADDLE1_Y_LABEL_CS,
      DICE_RETROMOUSE_PADDLE1_Y_LABEL_CAT_CS,
      DICE_RETROMOUSE_PADDLE1_Y_INFO_0_CS,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_CS},
         {"y", OPTION_VAL_Y_CS},
         {NULL, NULL},
      },
      "y"
   },
   {
      "dice_retromouse_paddle2_x",
      DICE_RETROMOUSE_PADDLE2_X_LABEL_CS,
      DICE_RETROMOUSE_PADDLE2_X_LABEL_CAT_CS,
      DICE_RETROMOUSE_PADDLE2_X_INFO_0_CS,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_CS},
         {"y", OPTION_VAL_Y_CS},
         {NULL, NULL},
      },
      "x"
   },
   {
      "dice_retromouse_paddle2_y",
      DICE_RETROMOUSE_PADDLE2_Y_LABEL_CS,
      DICE_RETROMOUSE_PADDLE2_Y_LABEL_CAT_CS,
      DICE_RETROMOUSE_PADDLE2_Y_INFO_0_CS,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_CS},
         {"y", OPTION_VAL_Y_CS},
         {NULL, NULL},
      },
      "y"
   },
   {
      "dice_retromouse_paddle3_x",
      DICE_RETROMOUSE_PADDLE3_X_LABEL_CS,
      DICE_RETROMOUSE_PADDLE3_X_LABEL_CAT_CS,
      DICE_RETROMOUSE_PADDLE3_X_INFO_0_CS,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_CS},
         {"y", OPTION_VAL_Y_CS},
         {NULL, NULL},
      },
      "x"
   },
   {
      "dice_retromouse_paddle3_y",
      DICE_RETROMOUSE_PADDLE3_Y_LABEL_CS,
      DICE_RETROMOUSE_PADDLE3_Y_LABEL_CAT_CS,
      DICE_RETROMOUSE_PADDLE3_Y_INFO_0_CS,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_CS},
         {"y", OPTION_VAL_Y_CS},
         {NULL, NULL},
      },
      "y"
   },

#ifdef MANYMOUSE
   {
      "dice_manymouse_paddle0",
      DICE_MANYMOUSE_PADDLE0_LABEL_CS,
      DICE_RETROMOUSE_PADDLE0_LABEL_CAT_CS,
      DICE_MANYMOUSE_PADDLE0_INFO_0_CS,
      NULL,
      "manymouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_manymouse_paddle0_x",
      DICE_MANYMOUSE_PADDLE0_X_LABEL_CS,
      DICE_MANYMOUSE_PADDLE0_X_LABEL_CAT_CS,
      DICE_RETROMOUSE_PADDLE0_X_INFO_0_CS,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_CS},
         {"0y", OPTION_VAL_0Y_CS},
         {"1x", OPTION_VAL_1X_CS},
         {"1y", OPTION_VAL_1Y_CS},
         {"2x", OPTION_VAL_2X_CS},
         {"2y", OPTION_VAL_2Y_CS},
         {"3x", OPTION_VAL_3X_CS},
         {"3y", OPTION_VAL_3Y_CS},
         {NULL, NULL},
      },
      "0x"
   },
   {
      "dice_manymouse_paddle0_y",
      DICE_MANYMOUSE_PADDLE0_Y_LABEL_CS,
      DICE_MANYMOUSE_PADDLE0_Y_LABEL_CAT_CS,
      DICE_RETROMOUSE_PADDLE0_Y_INFO_0_CS,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_CS},
         {"0y", OPTION_VAL_0Y_CS},
         {"1x", OPTION_VAL_1X_CS},
         {"1y", OPTION_VAL_1Y_CS},
         {"2x", OPTION_VAL_2X_CS},
         {"2y", OPTION_VAL_2Y_CS},
         {"3x", OPTION_VAL_3X_CS},
         {"3y", OPTION_VAL_3Y_CS},
         {NULL, NULL},
      },
      "0y"
   },
   {
      "dice_manymouse_paddle1",
      DICE_MANYMOUSE_PADDLE1_LABEL_CS,
      DICE_RETROMOUSE_PADDLE1_LABEL_CAT_CS,
      DICE_MANYMOUSE_PADDLE1_INFO_0_CS,
      NULL,
      "manymouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_manymouse_paddle1_x",
      DICE_MANYMOUSE_PADDLE1_X_LABEL_CS,
      DICE_MANYMOUSE_PADDLE1_X_LABEL_CAT_CS,
      DICE_RETROMOUSE_PADDLE1_X_INFO_0_CS,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_CS},
         {"0y", OPTION_VAL_0Y_CS},
         {"1x", OPTION_VAL_1X_CS},
         {"1y", OPTION_VAL_1Y_CS},
         {"2x", OPTION_VAL_2X_CS},
         {"2y", OPTION_VAL_2Y_CS},
         {"3x", OPTION_VAL_3X_CS},
         {"3y", OPTION_VAL_3Y_CS},
         {NULL, NULL},
      },
      "1x"
   },
   {
      "dice_manymouse_paddle1_y",
      DICE_MANYMOUSE_PADDLE1_Y_LABEL_CS,
      DICE_MANYMOUSE_PADDLE1_Y_LABEL_CAT_CS,
      DICE_RETROMOUSE_PADDLE1_Y_INFO_0_CS,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_CS},
         {"0y", OPTION_VAL_0Y_CS},
         {"1x", OPTION_VAL_1X_CS},
         {"1y", OPTION_VAL_1Y_CS},
         {"2x", OPTION_VAL_2X_CS},
         {"2y", OPTION_VAL_2Y_CS},
         {"3x", OPTION_VAL_3X_CS},
         {"3y", OPTION_VAL_3Y_CS},
         {NULL, NULL},
      },
      "1y"
   },
   {
      "dice_manymouse_paddle2",
      DICE_MANYMOUSE_PADDLE2_LABEL_CS,
      DICE_RETROMOUSE_PADDLE2_LABEL_CAT_CS,
      DICE_MANYMOUSE_PADDLE2_INFO_0_CS,
      NULL,
      "manymouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_manymouse_paddle2_x",
      DICE_MANYMOUSE_PADDLE2_X_LABEL_CS,
      DICE_MANYMOUSE_PADDLE2_X_LABEL_CAT_CS,
      DICE_RETROMOUSE_PADDLE2_X_INFO_0_CS,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_CS},
         {"0y", OPTION_VAL_0Y_CS},
         {"1x", OPTION_VAL_1X_CS},
         {"1y", OPTION_VAL_1Y_CS},
         {"2x", OPTION_VAL_2X_CS},
         {"2y", OPTION_VAL_2Y_CS},
         {"3x", OPTION_VAL_3X_CS},
         {"3y", OPTION_VAL_3Y_CS},
         {NULL, NULL},
      },
      "2x"
   },
   {
      "dice_manymouse_paddle2_y",
      DICE_MANYMOUSE_PADDLE2_Y_LABEL_CS,
      DICE_MANYMOUSE_PADDLE2_Y_LABEL_CAT_CS,
      DICE_RETROMOUSE_PADDLE2_Y_INFO_0_CS,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_CS},
         {"0y", OPTION_VAL_0Y_CS},
         {"1x", OPTION_VAL_1X_CS},
         {"1y", OPTION_VAL_1Y_CS},
         {"2x", OPTION_VAL_2X_CS},
         {"2y", OPTION_VAL_2Y_CS},
         {"3x", OPTION_VAL_3X_CS},
         {"3y", OPTION_VAL_3Y_CS},
         {NULL, NULL},
      },
      "2y"
   },
   {
      "dice_manymouse_paddle3",
      DICE_MANYMOUSE_PADDLE3_LABEL_CS,
      DICE_RETROMOUSE_PADDLE3_LABEL_CAT_CS,
      DICE_MANYMOUSE_PADDLE3_INFO_0_CS,
      NULL,
      "manymouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_manymouse_paddle3_x",
      DICE_MANYMOUSE_PADDLE3_X_LABEL_CS,
      DICE_MANYMOUSE_PADDLE3_X_LABEL_CAT_CS,
      DICE_RETROMOUSE_PADDLE3_X_INFO_0_CS,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_CS},
         {"0y", OPTION_VAL_0Y_CS},
         {"1x", OPTION_VAL_1X_CS},
         {"1y", OPTION_VAL_1Y_CS},
         {"2x", OPTION_VAL_2X_CS},
         {"2y", OPTION_VAL_2Y_CS},
         {"3x", OPTION_VAL_3X_CS},
         {"3y", OPTION_VAL_3Y_CS},
         {NULL, NULL},
      },
      "3x"
   },
   {
      "dice_manymouse_paddle3_y",
      DICE_MANYMOUSE_PADDLE3_Y_LABEL_CS,
      DICE_MANYMOUSE_PADDLE3_Y_LABEL_CAT_CS,
      DICE_RETROMOUSE_PADDLE3_Y_INFO_0_CS,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_CS},
         {"0y", OPTION_VAL_0Y_CS},
         {"1x", OPTION_VAL_1X_CS},
         {"1y", OPTION_VAL_1Y_CS},
         {"2x", OPTION_VAL_2X_CS},
         {"2y", OPTION_VAL_2Y_CS},
         {"3x", OPTION_VAL_3X_CS},
         {"3y", OPTION_VAL_3Y_CS},
         {NULL, NULL},
      },
      "3y"
   },
#endif

   {
      "dice_dipswitch_1",
      DICE_DIPSWITCH_1_LABEL_CS,
      DICE_DIPSWITCH_1_LABEL_CAT_CS,
      DICE_DIPSWITCH_1_INFO_0_CS,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_CS},
         {"0", NULL},
         {"1", NULL},
         {NULL, NULL},
      },
      "-1"
   },
   {
      "dice_dipswitch_2",
      DICE_DIPSWITCH_2_LABEL_CS,
      DICE_DIPSWITCH_2_LABEL_CAT_CS,
      DICE_DIPSWITCH_2_INFO_0_CS,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_CS},
         {"0", NULL},
         {"1", NULL},
         {NULL, NULL},
      },
      "-1"
   },
   {
      "dice_dipswitch_3",
      DICE_DIPSWITCH_3_LABEL_CS,
      DICE_DIPSWITCH_3_LABEL_CAT_CS,
      DICE_DIPSWITCH_3_INFO_0_CS,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_CS},
         {"0", NULL},
         {"1", NULL},
         {NULL, NULL},
      },
      "-1"
   },
   {
      "dice_dipswitch16_1",
      DICE_DIPSWITCH16_1_LABEL_CS,
      DICE_DIPSWITCH16_1_LABEL_CAT_CS,
      DICE_DIPSWITCH16_1_INFO_0_CS,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_CS},
         {"0", NULL},
         {"1", NULL},
         {"2", NULL},
         {"3", NULL},
         {"4", NULL},
         {"5", NULL},
         {"6", NULL},
         {"7", NULL},
         {"8", NULL},
         {"9", NULL},
         {"10", NULL},
         {"11", NULL},
         {"12", NULL},
         {"13", NULL},
         {"14", NULL},
         {"15", NULL},
         {NULL, NULL},
      },
      "-1"
   },
   {
      "dice_dipswitch16_2",
      DICE_DIPSWITCH16_2_LABEL_CS,
      DICE_DIPSWITCH16_2_LABEL_CAT_CS,
      DICE_DIPSWITCH16_2_INFO_0_CS,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_CS},
         {"0", NULL},
         {"1", NULL},
         {"2", NULL},
         {"3", NULL},
         {"4", NULL},
         {"5", NULL},
         {"6", NULL},
         {"7", NULL},
         {"8", NULL},
         {"9", NULL},
         {"10", NULL},
         {"11", NULL},
         {"12", NULL},
         {"13", NULL},
         {"14", NULL},
         {"15", NULL},
         {NULL, NULL},
      },
      "-1"
   },

   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_cs = {
   option_cats_cs,
   option_defs_cs
};

/* RETRO_LANGUAGE_CY */

#define CATEGORY_INPUT_LABEL_CY "Mewnbwn"
#define CATEGORY_INPUT_INFO_0_CY NULL
#define CATEGORY_RETROMOUSE_LABEL_CY NULL
#define CATEGORY_RETROMOUSE_INFO_0_CY NULL
#define CATEGORY_MANYMOUSE_LABEL_CY NULL
#define CATEGORY_MANYMOUSE_INFO_0_CY NULL
#define CATEGORY_DIPSWITCH_LABEL_CY NULL
#define CATEGORY_DIPSWITCH_INFO_0_CY NULL
#define DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_LABEL_CY NULL
#define DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_LABEL_CAT_CY NULL
#define DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_INFO_0_CY NULL
#define DICE_PADDLE_JOYSTICK_ABSOLUTE_LABEL_CY NULL
#define DICE_PADDLE_JOYSTICK_ABSOLUTE_LABEL_CAT_CY NULL
#define DICE_PADDLE_JOYSTICK_ABSOLUTE_INFO_0_CY NULL
#define DICE_PADDLE_KEYBOARD_SENSITIVITY_LABEL_CY NULL
#define DICE_PADDLE_KEYBOARD_SENSITIVITY_LABEL_CAT_CY NULL
#define DICE_PADDLE_KEYBOARD_SENSITIVITY_INFO_0_CY NULL
#define DICE_PADDLE_JOYSTICK_SENSITIVITY_LABEL_CY NULL
#define DICE_PADDLE_JOYSTICK_SENSITIVITY_LABEL_CAT_CY NULL
#define DICE_PADDLE_JOYSTICK_SENSITIVITY_INFO_0_CY NULL
#define DICE_RETROMOUSE_PADDLE_SENSITIVITY_LABEL_CY NULL
#define DICE_RETROMOUSE_PADDLE_SENSITIVITY_LABEL_CAT_CY NULL
#define DICE_RETROMOUSE_PADDLE_SENSITIVITY_INFO_0_CY NULL
#define DICE_WHEEL_KEYJOY_SENSITIVITY_LABEL_CY NULL
#define DICE_WHEEL_KEYJOY_SENSITIVITY_LABEL_CAT_CY NULL
#define DICE_WHEEL_KEYJOY_SENSITIVITY_INFO_0_CY NULL
#define DICE_THROTTLE_KEYJOY_SENSITIVITY_LABEL_CY NULL
#define DICE_THROTTLE_KEYJOY_SENSITIVITY_LABEL_CAT_CY NULL
#define DICE_THROTTLE_KEYJOY_SENSITIVITY_INFO_0_CY NULL
#define DICE_RETROMOUSE_PADDLE0_LABEL_CY NULL
#define DICE_RETROMOUSE_PADDLE0_LABEL_CAT_CY NULL
#define DICE_RETROMOUSE_PADDLE0_INFO_0_CY NULL
#define DICE_RETROMOUSE_PADDLE1_LABEL_CY NULL
#define DICE_RETROMOUSE_PADDLE1_LABEL_CAT_CY NULL
#define DICE_RETROMOUSE_PADDLE1_INFO_0_CY NULL
#define DICE_RETROMOUSE_PADDLE2_LABEL_CY NULL
#define DICE_RETROMOUSE_PADDLE2_LABEL_CAT_CY NULL
#define DICE_RETROMOUSE_PADDLE2_INFO_0_CY NULL
#define DICE_RETROMOUSE_PADDLE3_LABEL_CY NULL
#define DICE_RETROMOUSE_PADDLE3_LABEL_CAT_CY NULL
#define DICE_RETROMOUSE_PADDLE3_INFO_0_CY NULL
#define DICE_RETROMOUSE_PADDLE0_X_LABEL_CY NULL
#define DICE_RETROMOUSE_PADDLE0_X_LABEL_CAT_CY NULL
#define DICE_RETROMOUSE_PADDLE0_X_INFO_0_CY NULL
#define OPTION_VAL_X_CY NULL
#define OPTION_VAL_Y_CY NULL
#define DICE_RETROMOUSE_PADDLE0_Y_LABEL_CY NULL
#define DICE_RETROMOUSE_PADDLE0_Y_LABEL_CAT_CY NULL
#define DICE_RETROMOUSE_PADDLE0_Y_INFO_0_CY NULL
#define DICE_RETROMOUSE_PADDLE1_X_LABEL_CY NULL
#define DICE_RETROMOUSE_PADDLE1_X_LABEL_CAT_CY NULL
#define DICE_RETROMOUSE_PADDLE1_X_INFO_0_CY NULL
#define DICE_RETROMOUSE_PADDLE1_Y_LABEL_CY NULL
#define DICE_RETROMOUSE_PADDLE1_Y_LABEL_CAT_CY NULL
#define DICE_RETROMOUSE_PADDLE1_Y_INFO_0_CY NULL
#define DICE_RETROMOUSE_PADDLE2_X_LABEL_CY NULL
#define DICE_RETROMOUSE_PADDLE2_X_LABEL_CAT_CY NULL
#define DICE_RETROMOUSE_PADDLE2_X_INFO_0_CY NULL
#define DICE_RETROMOUSE_PADDLE2_Y_LABEL_CY NULL
#define DICE_RETROMOUSE_PADDLE2_Y_LABEL_CAT_CY NULL
#define DICE_RETROMOUSE_PADDLE2_Y_INFO_0_CY NULL
#define DICE_RETROMOUSE_PADDLE3_X_LABEL_CY NULL
#define DICE_RETROMOUSE_PADDLE3_X_LABEL_CAT_CY NULL
#define DICE_RETROMOUSE_PADDLE3_X_INFO_0_CY NULL
#define DICE_RETROMOUSE_PADDLE3_Y_LABEL_CY NULL
#define DICE_RETROMOUSE_PADDLE3_Y_LABEL_CAT_CY NULL
#define DICE_RETROMOUSE_PADDLE3_Y_INFO_0_CY NULL
#define DICE_MANYMOUSE_PADDLE0_LABEL_CY NULL
#define DICE_MANYMOUSE_PADDLE0_INFO_0_CY NULL
#define DICE_MANYMOUSE_PADDLE0_X_LABEL_CY NULL
#define DICE_MANYMOUSE_PADDLE0_X_LABEL_CAT_CY NULL
#define OPTION_VAL_0X_CY NULL
#define OPTION_VAL_0Y_CY NULL
#define OPTION_VAL_1X_CY NULL
#define OPTION_VAL_1Y_CY NULL
#define OPTION_VAL_2X_CY NULL
#define OPTION_VAL_2Y_CY NULL
#define OPTION_VAL_3X_CY NULL
#define OPTION_VAL_3Y_CY NULL
#define DICE_MANYMOUSE_PADDLE0_Y_LABEL_CY NULL
#define DICE_MANYMOUSE_PADDLE0_Y_LABEL_CAT_CY NULL
#define DICE_MANYMOUSE_PADDLE1_LABEL_CY NULL
#define DICE_MANYMOUSE_PADDLE1_INFO_0_CY NULL
#define DICE_MANYMOUSE_PADDLE1_X_LABEL_CY NULL
#define DICE_MANYMOUSE_PADDLE1_X_LABEL_CAT_CY NULL
#define DICE_MANYMOUSE_PADDLE1_Y_LABEL_CY NULL
#define DICE_MANYMOUSE_PADDLE1_Y_LABEL_CAT_CY NULL
#define DICE_MANYMOUSE_PADDLE2_LABEL_CY NULL
#define DICE_MANYMOUSE_PADDLE2_INFO_0_CY NULL
#define DICE_MANYMOUSE_PADDLE2_X_LABEL_CY NULL
#define DICE_MANYMOUSE_PADDLE2_X_LABEL_CAT_CY NULL
#define DICE_MANYMOUSE_PADDLE2_Y_LABEL_CY NULL
#define DICE_MANYMOUSE_PADDLE2_Y_LABEL_CAT_CY NULL
#define DICE_MANYMOUSE_PADDLE3_LABEL_CY NULL
#define DICE_MANYMOUSE_PADDLE3_INFO_0_CY NULL
#define DICE_MANYMOUSE_PADDLE3_X_LABEL_CY NULL
#define DICE_MANYMOUSE_PADDLE3_X_LABEL_CAT_CY NULL
#define DICE_MANYMOUSE_PADDLE3_Y_LABEL_CY NULL
#define DICE_MANYMOUSE_PADDLE3_Y_LABEL_CAT_CY NULL
#define DICE_DIPSWITCH_1_LABEL_CY NULL
#define DICE_DIPSWITCH_1_LABEL_CAT_CY NULL
#define DICE_DIPSWITCH_1_INFO_0_CY NULL
#define OPTION_VAL_1_CY NULL
#define DICE_DIPSWITCH_2_LABEL_CY NULL
#define DICE_DIPSWITCH_2_LABEL_CAT_CY NULL
#define DICE_DIPSWITCH_2_INFO_0_CY NULL
#define DICE_DIPSWITCH_3_LABEL_CY NULL
#define DICE_DIPSWITCH_3_LABEL_CAT_CY NULL
#define DICE_DIPSWITCH_3_INFO_0_CY NULL
#define DICE_DIPSWITCH16_1_LABEL_CY NULL
#define DICE_DIPSWITCH16_1_LABEL_CAT_CY NULL
#define DICE_DIPSWITCH16_1_INFO_0_CY NULL
#define DICE_DIPSWITCH16_2_LABEL_CY NULL
#define DICE_DIPSWITCH16_2_LABEL_CAT_CY NULL
#define DICE_DIPSWITCH16_2_INFO_0_CY NULL

struct retro_core_option_v2_category option_cats_cy[] = {
   {
      "input",
      CATEGORY_INPUT_LABEL_CY,
      CATEGORY_INPUT_INFO_0_CY
   },
   {
      "retromouse",
      CATEGORY_RETROMOUSE_LABEL_CY,
      CATEGORY_RETROMOUSE_INFO_0_CY
   },
#ifdef MANYMOUSE
   {
      "manymouse",
      CATEGORY_MANYMOUSE_LABEL_CY,
      CATEGORY_MANYMOUSE_INFO_0_CY
   },
#endif
   {
      "dipswitch",
      CATEGORY_DIPSWITCH_LABEL_CY,
      CATEGORY_DIPSWITCH_INFO_0_CY
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_cy[] = {
   {
      "dice_use_mouse_pointer_for_paddle_1",
      DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_LABEL_CY,
      DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_LABEL_CAT_CY,
      DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_INFO_0_CY,
      NULL,
      "input",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_paddle_joystick_absolute",
      DICE_PADDLE_JOYSTICK_ABSOLUTE_LABEL_CY,
      DICE_PADDLE_JOYSTICK_ABSOLUTE_LABEL_CAT_CY,
      DICE_PADDLE_JOYSTICK_ABSOLUTE_INFO_0_CY,
      NULL,
      "input",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      // D-pad but not necessarily keyboard under libretro,
      // that name comes from the upstream code.
      "dice_paddle_keyboard_sensitivity",
      DICE_PADDLE_KEYBOARD_SENSITIVITY_LABEL_CY,
      DICE_PADDLE_KEYBOARD_SENSITIVITY_LABEL_CAT_CY,
      DICE_PADDLE_KEYBOARD_SENSITIVITY_INFO_0_CY,
      NULL,
      "input",
      {
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "250"
   },
   {
      "dice_paddle_joystick_sensitivity",
      DICE_PADDLE_JOYSTICK_SENSITIVITY_LABEL_CY,
      DICE_PADDLE_JOYSTICK_SENSITIVITY_LABEL_CAT_CY,
      DICE_PADDLE_JOYSTICK_SENSITIVITY_INFO_0_CY,
      NULL,
      "input",
      {
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "500"
   },
   {
      "dice_retromouse_paddle_sensitivity",
      DICE_RETROMOUSE_PADDLE_SENSITIVITY_LABEL_CY,
      DICE_RETROMOUSE_PADDLE_SENSITIVITY_LABEL_CAT_CY,
      DICE_RETROMOUSE_PADDLE_SENSITIVITY_INFO_0_CY,
      NULL,
      "input",
      {
         {"25", NULL},
         {"50", NULL},
         {"75", NULL},
         {"100", NULL},
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "125"
   },
   {
      "dice_wheel_keyjoy_sensitivity",
      DICE_WHEEL_KEYJOY_SENSITIVITY_LABEL_CY,
      DICE_WHEEL_KEYJOY_SENSITIVITY_LABEL_CAT_CY,
      DICE_WHEEL_KEYJOY_SENSITIVITY_INFO_0_CY,
      NULL,
      "input",
      {
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "500"
   },
   {
      "dice_throttle_keyjoy_sensitivity",
      DICE_THROTTLE_KEYJOY_SENSITIVITY_LABEL_CY,
      DICE_THROTTLE_KEYJOY_SENSITIVITY_LABEL_CAT_CY,
      DICE_THROTTLE_KEYJOY_SENSITIVITY_INFO_0_CY,
      NULL,
      "input",
      {
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "250"
   },

   {
      "dice_retromouse_paddle0",
      DICE_RETROMOUSE_PADDLE0_LABEL_CY,
      DICE_RETROMOUSE_PADDLE0_LABEL_CAT_CY,
      DICE_RETROMOUSE_PADDLE0_INFO_0_CY,
      NULL,
      "retromouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_retromouse_paddle1",
      DICE_RETROMOUSE_PADDLE1_LABEL_CY,
      DICE_RETROMOUSE_PADDLE1_LABEL_CAT_CY,
      DICE_RETROMOUSE_PADDLE1_INFO_0_CY,
      NULL,
      "retromouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_retromouse_paddle2",
      DICE_RETROMOUSE_PADDLE2_LABEL_CY,
      DICE_RETROMOUSE_PADDLE2_LABEL_CAT_CY,
      DICE_RETROMOUSE_PADDLE2_INFO_0_CY,
      NULL,
      "retromouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_retromouse_paddle3",
      DICE_RETROMOUSE_PADDLE3_LABEL_CY,
      DICE_RETROMOUSE_PADDLE3_LABEL_CAT_CY,
      DICE_RETROMOUSE_PADDLE3_INFO_0_CY,
      NULL,
      "retromouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_retromouse_paddle0_x",
      DICE_RETROMOUSE_PADDLE0_X_LABEL_CY,
      DICE_RETROMOUSE_PADDLE0_X_LABEL_CAT_CY,
      DICE_RETROMOUSE_PADDLE0_X_INFO_0_CY,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_CY},
         {"y", OPTION_VAL_Y_CY},
         {NULL, NULL},
      },
      "x"
   },
   {
      "dice_retromouse_paddle0_y",
      DICE_RETROMOUSE_PADDLE0_Y_LABEL_CY,
      DICE_RETROMOUSE_PADDLE0_Y_LABEL_CAT_CY,
      DICE_RETROMOUSE_PADDLE0_Y_INFO_0_CY,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_CY},
         {"y", OPTION_VAL_Y_CY},
         {NULL, NULL},
      },
      "y"
   },
   {
      "dice_retromouse_paddle1_x",
      DICE_RETROMOUSE_PADDLE1_X_LABEL_CY,
      DICE_RETROMOUSE_PADDLE1_X_LABEL_CAT_CY,
      DICE_RETROMOUSE_PADDLE1_X_INFO_0_CY,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_CY},
         {"y", OPTION_VAL_Y_CY},
         {NULL, NULL},
      },
      "x"
   },
   {
      "dice_retromouse_paddle1_y",
      DICE_RETROMOUSE_PADDLE1_Y_LABEL_CY,
      DICE_RETROMOUSE_PADDLE1_Y_LABEL_CAT_CY,
      DICE_RETROMOUSE_PADDLE1_Y_INFO_0_CY,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_CY},
         {"y", OPTION_VAL_Y_CY},
         {NULL, NULL},
      },
      "y"
   },
   {
      "dice_retromouse_paddle2_x",
      DICE_RETROMOUSE_PADDLE2_X_LABEL_CY,
      DICE_RETROMOUSE_PADDLE2_X_LABEL_CAT_CY,
      DICE_RETROMOUSE_PADDLE2_X_INFO_0_CY,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_CY},
         {"y", OPTION_VAL_Y_CY},
         {NULL, NULL},
      },
      "x"
   },
   {
      "dice_retromouse_paddle2_y",
      DICE_RETROMOUSE_PADDLE2_Y_LABEL_CY,
      DICE_RETROMOUSE_PADDLE2_Y_LABEL_CAT_CY,
      DICE_RETROMOUSE_PADDLE2_Y_INFO_0_CY,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_CY},
         {"y", OPTION_VAL_Y_CY},
         {NULL, NULL},
      },
      "y"
   },
   {
      "dice_retromouse_paddle3_x",
      DICE_RETROMOUSE_PADDLE3_X_LABEL_CY,
      DICE_RETROMOUSE_PADDLE3_X_LABEL_CAT_CY,
      DICE_RETROMOUSE_PADDLE3_X_INFO_0_CY,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_CY},
         {"y", OPTION_VAL_Y_CY},
         {NULL, NULL},
      },
      "x"
   },
   {
      "dice_retromouse_paddle3_y",
      DICE_RETROMOUSE_PADDLE3_Y_LABEL_CY,
      DICE_RETROMOUSE_PADDLE3_Y_LABEL_CAT_CY,
      DICE_RETROMOUSE_PADDLE3_Y_INFO_0_CY,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_CY},
         {"y", OPTION_VAL_Y_CY},
         {NULL, NULL},
      },
      "y"
   },

#ifdef MANYMOUSE
   {
      "dice_manymouse_paddle0",
      DICE_MANYMOUSE_PADDLE0_LABEL_CY,
      DICE_RETROMOUSE_PADDLE0_LABEL_CAT_CY,
      DICE_MANYMOUSE_PADDLE0_INFO_0_CY,
      NULL,
      "manymouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_manymouse_paddle0_x",
      DICE_MANYMOUSE_PADDLE0_X_LABEL_CY,
      DICE_MANYMOUSE_PADDLE0_X_LABEL_CAT_CY,
      DICE_RETROMOUSE_PADDLE0_X_INFO_0_CY,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_CY},
         {"0y", OPTION_VAL_0Y_CY},
         {"1x", OPTION_VAL_1X_CY},
         {"1y", OPTION_VAL_1Y_CY},
         {"2x", OPTION_VAL_2X_CY},
         {"2y", OPTION_VAL_2Y_CY},
         {"3x", OPTION_VAL_3X_CY},
         {"3y", OPTION_VAL_3Y_CY},
         {NULL, NULL},
      },
      "0x"
   },
   {
      "dice_manymouse_paddle0_y",
      DICE_MANYMOUSE_PADDLE0_Y_LABEL_CY,
      DICE_MANYMOUSE_PADDLE0_Y_LABEL_CAT_CY,
      DICE_RETROMOUSE_PADDLE0_Y_INFO_0_CY,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_CY},
         {"0y", OPTION_VAL_0Y_CY},
         {"1x", OPTION_VAL_1X_CY},
         {"1y", OPTION_VAL_1Y_CY},
         {"2x", OPTION_VAL_2X_CY},
         {"2y", OPTION_VAL_2Y_CY},
         {"3x", OPTION_VAL_3X_CY},
         {"3y", OPTION_VAL_3Y_CY},
         {NULL, NULL},
      },
      "0y"
   },
   {
      "dice_manymouse_paddle1",
      DICE_MANYMOUSE_PADDLE1_LABEL_CY,
      DICE_RETROMOUSE_PADDLE1_LABEL_CAT_CY,
      DICE_MANYMOUSE_PADDLE1_INFO_0_CY,
      NULL,
      "manymouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_manymouse_paddle1_x",
      DICE_MANYMOUSE_PADDLE1_X_LABEL_CY,
      DICE_MANYMOUSE_PADDLE1_X_LABEL_CAT_CY,
      DICE_RETROMOUSE_PADDLE1_X_INFO_0_CY,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_CY},
         {"0y", OPTION_VAL_0Y_CY},
         {"1x", OPTION_VAL_1X_CY},
         {"1y", OPTION_VAL_1Y_CY},
         {"2x", OPTION_VAL_2X_CY},
         {"2y", OPTION_VAL_2Y_CY},
         {"3x", OPTION_VAL_3X_CY},
         {"3y", OPTION_VAL_3Y_CY},
         {NULL, NULL},
      },
      "1x"
   },
   {
      "dice_manymouse_paddle1_y",
      DICE_MANYMOUSE_PADDLE1_Y_LABEL_CY,
      DICE_MANYMOUSE_PADDLE1_Y_LABEL_CAT_CY,
      DICE_RETROMOUSE_PADDLE1_Y_INFO_0_CY,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_CY},
         {"0y", OPTION_VAL_0Y_CY},
         {"1x", OPTION_VAL_1X_CY},
         {"1y", OPTION_VAL_1Y_CY},
         {"2x", OPTION_VAL_2X_CY},
         {"2y", OPTION_VAL_2Y_CY},
         {"3x", OPTION_VAL_3X_CY},
         {"3y", OPTION_VAL_3Y_CY},
         {NULL, NULL},
      },
      "1y"
   },
   {
      "dice_manymouse_paddle2",
      DICE_MANYMOUSE_PADDLE2_LABEL_CY,
      DICE_RETROMOUSE_PADDLE2_LABEL_CAT_CY,
      DICE_MANYMOUSE_PADDLE2_INFO_0_CY,
      NULL,
      "manymouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_manymouse_paddle2_x",
      DICE_MANYMOUSE_PADDLE2_X_LABEL_CY,
      DICE_MANYMOUSE_PADDLE2_X_LABEL_CAT_CY,
      DICE_RETROMOUSE_PADDLE2_X_INFO_0_CY,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_CY},
         {"0y", OPTION_VAL_0Y_CY},
         {"1x", OPTION_VAL_1X_CY},
         {"1y", OPTION_VAL_1Y_CY},
         {"2x", OPTION_VAL_2X_CY},
         {"2y", OPTION_VAL_2Y_CY},
         {"3x", OPTION_VAL_3X_CY},
         {"3y", OPTION_VAL_3Y_CY},
         {NULL, NULL},
      },
      "2x"
   },
   {
      "dice_manymouse_paddle2_y",
      DICE_MANYMOUSE_PADDLE2_Y_LABEL_CY,
      DICE_MANYMOUSE_PADDLE2_Y_LABEL_CAT_CY,
      DICE_RETROMOUSE_PADDLE2_Y_INFO_0_CY,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_CY},
         {"0y", OPTION_VAL_0Y_CY},
         {"1x", OPTION_VAL_1X_CY},
         {"1y", OPTION_VAL_1Y_CY},
         {"2x", OPTION_VAL_2X_CY},
         {"2y", OPTION_VAL_2Y_CY},
         {"3x", OPTION_VAL_3X_CY},
         {"3y", OPTION_VAL_3Y_CY},
         {NULL, NULL},
      },
      "2y"
   },
   {
      "dice_manymouse_paddle3",
      DICE_MANYMOUSE_PADDLE3_LABEL_CY,
      DICE_RETROMOUSE_PADDLE3_LABEL_CAT_CY,
      DICE_MANYMOUSE_PADDLE3_INFO_0_CY,
      NULL,
      "manymouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_manymouse_paddle3_x",
      DICE_MANYMOUSE_PADDLE3_X_LABEL_CY,
      DICE_MANYMOUSE_PADDLE3_X_LABEL_CAT_CY,
      DICE_RETROMOUSE_PADDLE3_X_INFO_0_CY,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_CY},
         {"0y", OPTION_VAL_0Y_CY},
         {"1x", OPTION_VAL_1X_CY},
         {"1y", OPTION_VAL_1Y_CY},
         {"2x", OPTION_VAL_2X_CY},
         {"2y", OPTION_VAL_2Y_CY},
         {"3x", OPTION_VAL_3X_CY},
         {"3y", OPTION_VAL_3Y_CY},
         {NULL, NULL},
      },
      "3x"
   },
   {
      "dice_manymouse_paddle3_y",
      DICE_MANYMOUSE_PADDLE3_Y_LABEL_CY,
      DICE_MANYMOUSE_PADDLE3_Y_LABEL_CAT_CY,
      DICE_RETROMOUSE_PADDLE3_Y_INFO_0_CY,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_CY},
         {"0y", OPTION_VAL_0Y_CY},
         {"1x", OPTION_VAL_1X_CY},
         {"1y", OPTION_VAL_1Y_CY},
         {"2x", OPTION_VAL_2X_CY},
         {"2y", OPTION_VAL_2Y_CY},
         {"3x", OPTION_VAL_3X_CY},
         {"3y", OPTION_VAL_3Y_CY},
         {NULL, NULL},
      },
      "3y"
   },
#endif

   {
      "dice_dipswitch_1",
      DICE_DIPSWITCH_1_LABEL_CY,
      DICE_DIPSWITCH_1_LABEL_CAT_CY,
      DICE_DIPSWITCH_1_INFO_0_CY,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_CY},
         {"0", NULL},
         {"1", NULL},
         {NULL, NULL},
      },
      "-1"
   },
   {
      "dice_dipswitch_2",
      DICE_DIPSWITCH_2_LABEL_CY,
      DICE_DIPSWITCH_2_LABEL_CAT_CY,
      DICE_DIPSWITCH_2_INFO_0_CY,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_CY},
         {"0", NULL},
         {"1", NULL},
         {NULL, NULL},
      },
      "-1"
   },
   {
      "dice_dipswitch_3",
      DICE_DIPSWITCH_3_LABEL_CY,
      DICE_DIPSWITCH_3_LABEL_CAT_CY,
      DICE_DIPSWITCH_3_INFO_0_CY,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_CY},
         {"0", NULL},
         {"1", NULL},
         {NULL, NULL},
      },
      "-1"
   },
   {
      "dice_dipswitch16_1",
      DICE_DIPSWITCH16_1_LABEL_CY,
      DICE_DIPSWITCH16_1_LABEL_CAT_CY,
      DICE_DIPSWITCH16_1_INFO_0_CY,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_CY},
         {"0", NULL},
         {"1", NULL},
         {"2", NULL},
         {"3", NULL},
         {"4", NULL},
         {"5", NULL},
         {"6", NULL},
         {"7", NULL},
         {"8", NULL},
         {"9", NULL},
         {"10", NULL},
         {"11", NULL},
         {"12", NULL},
         {"13", NULL},
         {"14", NULL},
         {"15", NULL},
         {NULL, NULL},
      },
      "-1"
   },
   {
      "dice_dipswitch16_2",
      DICE_DIPSWITCH16_2_LABEL_CY,
      DICE_DIPSWITCH16_2_LABEL_CAT_CY,
      DICE_DIPSWITCH16_2_INFO_0_CY,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_CY},
         {"0", NULL},
         {"1", NULL},
         {"2", NULL},
         {"3", NULL},
         {"4", NULL},
         {"5", NULL},
         {"6", NULL},
         {"7", NULL},
         {"8", NULL},
         {"9", NULL},
         {"10", NULL},
         {"11", NULL},
         {"12", NULL},
         {"13", NULL},
         {"14", NULL},
         {"15", NULL},
         {NULL, NULL},
      },
      "-1"
   },

   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_cy = {
   option_cats_cy,
   option_defs_cy
};

/* RETRO_LANGUAGE_DA */

#define CATEGORY_INPUT_LABEL_DA NULL
#define CATEGORY_INPUT_INFO_0_DA NULL
#define CATEGORY_RETROMOUSE_LABEL_DA NULL
#define CATEGORY_RETROMOUSE_INFO_0_DA NULL
#define CATEGORY_MANYMOUSE_LABEL_DA NULL
#define CATEGORY_MANYMOUSE_INFO_0_DA NULL
#define CATEGORY_DIPSWITCH_LABEL_DA NULL
#define CATEGORY_DIPSWITCH_INFO_0_DA NULL
#define DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_LABEL_DA NULL
#define DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_LABEL_CAT_DA NULL
#define DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_INFO_0_DA NULL
#define DICE_PADDLE_JOYSTICK_ABSOLUTE_LABEL_DA NULL
#define DICE_PADDLE_JOYSTICK_ABSOLUTE_LABEL_CAT_DA NULL
#define DICE_PADDLE_JOYSTICK_ABSOLUTE_INFO_0_DA NULL
#define DICE_PADDLE_KEYBOARD_SENSITIVITY_LABEL_DA NULL
#define DICE_PADDLE_KEYBOARD_SENSITIVITY_LABEL_CAT_DA NULL
#define DICE_PADDLE_KEYBOARD_SENSITIVITY_INFO_0_DA NULL
#define DICE_PADDLE_JOYSTICK_SENSITIVITY_LABEL_DA NULL
#define DICE_PADDLE_JOYSTICK_SENSITIVITY_LABEL_CAT_DA NULL
#define DICE_PADDLE_JOYSTICK_SENSITIVITY_INFO_0_DA NULL
#define DICE_RETROMOUSE_PADDLE_SENSITIVITY_LABEL_DA NULL
#define DICE_RETROMOUSE_PADDLE_SENSITIVITY_LABEL_CAT_DA NULL
#define DICE_RETROMOUSE_PADDLE_SENSITIVITY_INFO_0_DA NULL
#define DICE_WHEEL_KEYJOY_SENSITIVITY_LABEL_DA NULL
#define DICE_WHEEL_KEYJOY_SENSITIVITY_LABEL_CAT_DA NULL
#define DICE_WHEEL_KEYJOY_SENSITIVITY_INFO_0_DA NULL
#define DICE_THROTTLE_KEYJOY_SENSITIVITY_LABEL_DA NULL
#define DICE_THROTTLE_KEYJOY_SENSITIVITY_LABEL_CAT_DA NULL
#define DICE_THROTTLE_KEYJOY_SENSITIVITY_INFO_0_DA NULL
#define DICE_RETROMOUSE_PADDLE0_LABEL_DA NULL
#define DICE_RETROMOUSE_PADDLE0_LABEL_CAT_DA NULL
#define DICE_RETROMOUSE_PADDLE0_INFO_0_DA NULL
#define DICE_RETROMOUSE_PADDLE1_LABEL_DA NULL
#define DICE_RETROMOUSE_PADDLE1_LABEL_CAT_DA NULL
#define DICE_RETROMOUSE_PADDLE1_INFO_0_DA NULL
#define DICE_RETROMOUSE_PADDLE2_LABEL_DA NULL
#define DICE_RETROMOUSE_PADDLE2_LABEL_CAT_DA NULL
#define DICE_RETROMOUSE_PADDLE2_INFO_0_DA NULL
#define DICE_RETROMOUSE_PADDLE3_LABEL_DA NULL
#define DICE_RETROMOUSE_PADDLE3_LABEL_CAT_DA NULL
#define DICE_RETROMOUSE_PADDLE3_INFO_0_DA NULL
#define DICE_RETROMOUSE_PADDLE0_X_LABEL_DA NULL
#define DICE_RETROMOUSE_PADDLE0_X_LABEL_CAT_DA NULL
#define DICE_RETROMOUSE_PADDLE0_X_INFO_0_DA NULL
#define OPTION_VAL_X_DA NULL
#define OPTION_VAL_Y_DA NULL
#define DICE_RETROMOUSE_PADDLE0_Y_LABEL_DA NULL
#define DICE_RETROMOUSE_PADDLE0_Y_LABEL_CAT_DA NULL
#define DICE_RETROMOUSE_PADDLE0_Y_INFO_0_DA NULL
#define DICE_RETROMOUSE_PADDLE1_X_LABEL_DA NULL
#define DICE_RETROMOUSE_PADDLE1_X_LABEL_CAT_DA NULL
#define DICE_RETROMOUSE_PADDLE1_X_INFO_0_DA NULL
#define DICE_RETROMOUSE_PADDLE1_Y_LABEL_DA NULL
#define DICE_RETROMOUSE_PADDLE1_Y_LABEL_CAT_DA NULL
#define DICE_RETROMOUSE_PADDLE1_Y_INFO_0_DA NULL
#define DICE_RETROMOUSE_PADDLE2_X_LABEL_DA NULL
#define DICE_RETROMOUSE_PADDLE2_X_LABEL_CAT_DA NULL
#define DICE_RETROMOUSE_PADDLE2_X_INFO_0_DA NULL
#define DICE_RETROMOUSE_PADDLE2_Y_LABEL_DA NULL
#define DICE_RETROMOUSE_PADDLE2_Y_LABEL_CAT_DA NULL
#define DICE_RETROMOUSE_PADDLE2_Y_INFO_0_DA NULL
#define DICE_RETROMOUSE_PADDLE3_X_LABEL_DA NULL
#define DICE_RETROMOUSE_PADDLE3_X_LABEL_CAT_DA NULL
#define DICE_RETROMOUSE_PADDLE3_X_INFO_0_DA NULL
#define DICE_RETROMOUSE_PADDLE3_Y_LABEL_DA NULL
#define DICE_RETROMOUSE_PADDLE3_Y_LABEL_CAT_DA NULL
#define DICE_RETROMOUSE_PADDLE3_Y_INFO_0_DA NULL
#define DICE_MANYMOUSE_PADDLE0_LABEL_DA NULL
#define DICE_MANYMOUSE_PADDLE0_INFO_0_DA NULL
#define DICE_MANYMOUSE_PADDLE0_X_LABEL_DA NULL
#define DICE_MANYMOUSE_PADDLE0_X_LABEL_CAT_DA NULL
#define OPTION_VAL_0X_DA NULL
#define OPTION_VAL_0Y_DA NULL
#define OPTION_VAL_1X_DA NULL
#define OPTION_VAL_1Y_DA NULL
#define OPTION_VAL_2X_DA NULL
#define OPTION_VAL_2Y_DA NULL
#define OPTION_VAL_3X_DA NULL
#define OPTION_VAL_3Y_DA NULL
#define DICE_MANYMOUSE_PADDLE0_Y_LABEL_DA NULL
#define DICE_MANYMOUSE_PADDLE0_Y_LABEL_CAT_DA NULL
#define DICE_MANYMOUSE_PADDLE1_LABEL_DA NULL
#define DICE_MANYMOUSE_PADDLE1_INFO_0_DA NULL
#define DICE_MANYMOUSE_PADDLE1_X_LABEL_DA NULL
#define DICE_MANYMOUSE_PADDLE1_X_LABEL_CAT_DA NULL
#define DICE_MANYMOUSE_PADDLE1_Y_LABEL_DA NULL
#define DICE_MANYMOUSE_PADDLE1_Y_LABEL_CAT_DA NULL
#define DICE_MANYMOUSE_PADDLE2_LABEL_DA NULL
#define DICE_MANYMOUSE_PADDLE2_INFO_0_DA NULL
#define DICE_MANYMOUSE_PADDLE2_X_LABEL_DA NULL
#define DICE_MANYMOUSE_PADDLE2_X_LABEL_CAT_DA NULL
#define DICE_MANYMOUSE_PADDLE2_Y_LABEL_DA NULL
#define DICE_MANYMOUSE_PADDLE2_Y_LABEL_CAT_DA NULL
#define DICE_MANYMOUSE_PADDLE3_LABEL_DA NULL
#define DICE_MANYMOUSE_PADDLE3_INFO_0_DA NULL
#define DICE_MANYMOUSE_PADDLE3_X_LABEL_DA NULL
#define DICE_MANYMOUSE_PADDLE3_X_LABEL_CAT_DA NULL
#define DICE_MANYMOUSE_PADDLE3_Y_LABEL_DA NULL
#define DICE_MANYMOUSE_PADDLE3_Y_LABEL_CAT_DA NULL
#define DICE_DIPSWITCH_1_LABEL_DA NULL
#define DICE_DIPSWITCH_1_LABEL_CAT_DA NULL
#define DICE_DIPSWITCH_1_INFO_0_DA NULL
#define OPTION_VAL_1_DA NULL
#define DICE_DIPSWITCH_2_LABEL_DA NULL
#define DICE_DIPSWITCH_2_LABEL_CAT_DA NULL
#define DICE_DIPSWITCH_2_INFO_0_DA NULL
#define DICE_DIPSWITCH_3_LABEL_DA NULL
#define DICE_DIPSWITCH_3_LABEL_CAT_DA NULL
#define DICE_DIPSWITCH_3_INFO_0_DA NULL
#define DICE_DIPSWITCH16_1_LABEL_DA NULL
#define DICE_DIPSWITCH16_1_LABEL_CAT_DA NULL
#define DICE_DIPSWITCH16_1_INFO_0_DA NULL
#define DICE_DIPSWITCH16_2_LABEL_DA NULL
#define DICE_DIPSWITCH16_2_LABEL_CAT_DA NULL
#define DICE_DIPSWITCH16_2_INFO_0_DA NULL

struct retro_core_option_v2_category option_cats_da[] = {
   {
      "input",
      CATEGORY_INPUT_LABEL_DA,
      CATEGORY_INPUT_INFO_0_DA
   },
   {
      "retromouse",
      CATEGORY_RETROMOUSE_LABEL_DA,
      CATEGORY_RETROMOUSE_INFO_0_DA
   },
#ifdef MANYMOUSE
   {
      "manymouse",
      CATEGORY_MANYMOUSE_LABEL_DA,
      CATEGORY_MANYMOUSE_INFO_0_DA
   },
#endif
   {
      "dipswitch",
      CATEGORY_DIPSWITCH_LABEL_DA,
      CATEGORY_DIPSWITCH_INFO_0_DA
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_da[] = {
   {
      "dice_use_mouse_pointer_for_paddle_1",
      DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_LABEL_DA,
      DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_LABEL_CAT_DA,
      DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_INFO_0_DA,
      NULL,
      "input",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_paddle_joystick_absolute",
      DICE_PADDLE_JOYSTICK_ABSOLUTE_LABEL_DA,
      DICE_PADDLE_JOYSTICK_ABSOLUTE_LABEL_CAT_DA,
      DICE_PADDLE_JOYSTICK_ABSOLUTE_INFO_0_DA,
      NULL,
      "input",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      // D-pad but not necessarily keyboard under libretro,
      // that name comes from the upstream code.
      "dice_paddle_keyboard_sensitivity",
      DICE_PADDLE_KEYBOARD_SENSITIVITY_LABEL_DA,
      DICE_PADDLE_KEYBOARD_SENSITIVITY_LABEL_CAT_DA,
      DICE_PADDLE_KEYBOARD_SENSITIVITY_INFO_0_DA,
      NULL,
      "input",
      {
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "250"
   },
   {
      "dice_paddle_joystick_sensitivity",
      DICE_PADDLE_JOYSTICK_SENSITIVITY_LABEL_DA,
      DICE_PADDLE_JOYSTICK_SENSITIVITY_LABEL_CAT_DA,
      DICE_PADDLE_JOYSTICK_SENSITIVITY_INFO_0_DA,
      NULL,
      "input",
      {
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "500"
   },
   {
      "dice_retromouse_paddle_sensitivity",
      DICE_RETROMOUSE_PADDLE_SENSITIVITY_LABEL_DA,
      DICE_RETROMOUSE_PADDLE_SENSITIVITY_LABEL_CAT_DA,
      DICE_RETROMOUSE_PADDLE_SENSITIVITY_INFO_0_DA,
      NULL,
      "input",
      {
         {"25", NULL},
         {"50", NULL},
         {"75", NULL},
         {"100", NULL},
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "125"
   },
   {
      "dice_wheel_keyjoy_sensitivity",
      DICE_WHEEL_KEYJOY_SENSITIVITY_LABEL_DA,
      DICE_WHEEL_KEYJOY_SENSITIVITY_LABEL_CAT_DA,
      DICE_WHEEL_KEYJOY_SENSITIVITY_INFO_0_DA,
      NULL,
      "input",
      {
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "500"
   },
   {
      "dice_throttle_keyjoy_sensitivity",
      DICE_THROTTLE_KEYJOY_SENSITIVITY_LABEL_DA,
      DICE_THROTTLE_KEYJOY_SENSITIVITY_LABEL_CAT_DA,
      DICE_THROTTLE_KEYJOY_SENSITIVITY_INFO_0_DA,
      NULL,
      "input",
      {
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "250"
   },

   {
      "dice_retromouse_paddle0",
      DICE_RETROMOUSE_PADDLE0_LABEL_DA,
      DICE_RETROMOUSE_PADDLE0_LABEL_CAT_DA,
      DICE_RETROMOUSE_PADDLE0_INFO_0_DA,
      NULL,
      "retromouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_retromouse_paddle1",
      DICE_RETROMOUSE_PADDLE1_LABEL_DA,
      DICE_RETROMOUSE_PADDLE1_LABEL_CAT_DA,
      DICE_RETROMOUSE_PADDLE1_INFO_0_DA,
      NULL,
      "retromouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_retromouse_paddle2",
      DICE_RETROMOUSE_PADDLE2_LABEL_DA,
      DICE_RETROMOUSE_PADDLE2_LABEL_CAT_DA,
      DICE_RETROMOUSE_PADDLE2_INFO_0_DA,
      NULL,
      "retromouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_retromouse_paddle3",
      DICE_RETROMOUSE_PADDLE3_LABEL_DA,
      DICE_RETROMOUSE_PADDLE3_LABEL_CAT_DA,
      DICE_RETROMOUSE_PADDLE3_INFO_0_DA,
      NULL,
      "retromouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_retromouse_paddle0_x",
      DICE_RETROMOUSE_PADDLE0_X_LABEL_DA,
      DICE_RETROMOUSE_PADDLE0_X_LABEL_CAT_DA,
      DICE_RETROMOUSE_PADDLE0_X_INFO_0_DA,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_DA},
         {"y", OPTION_VAL_Y_DA},
         {NULL, NULL},
      },
      "x"
   },
   {
      "dice_retromouse_paddle0_y",
      DICE_RETROMOUSE_PADDLE0_Y_LABEL_DA,
      DICE_RETROMOUSE_PADDLE0_Y_LABEL_CAT_DA,
      DICE_RETROMOUSE_PADDLE0_Y_INFO_0_DA,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_DA},
         {"y", OPTION_VAL_Y_DA},
         {NULL, NULL},
      },
      "y"
   },
   {
      "dice_retromouse_paddle1_x",
      DICE_RETROMOUSE_PADDLE1_X_LABEL_DA,
      DICE_RETROMOUSE_PADDLE1_X_LABEL_CAT_DA,
      DICE_RETROMOUSE_PADDLE1_X_INFO_0_DA,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_DA},
         {"y", OPTION_VAL_Y_DA},
         {NULL, NULL},
      },
      "x"
   },
   {
      "dice_retromouse_paddle1_y",
      DICE_RETROMOUSE_PADDLE1_Y_LABEL_DA,
      DICE_RETROMOUSE_PADDLE1_Y_LABEL_CAT_DA,
      DICE_RETROMOUSE_PADDLE1_Y_INFO_0_DA,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_DA},
         {"y", OPTION_VAL_Y_DA},
         {NULL, NULL},
      },
      "y"
   },
   {
      "dice_retromouse_paddle2_x",
      DICE_RETROMOUSE_PADDLE2_X_LABEL_DA,
      DICE_RETROMOUSE_PADDLE2_X_LABEL_CAT_DA,
      DICE_RETROMOUSE_PADDLE2_X_INFO_0_DA,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_DA},
         {"y", OPTION_VAL_Y_DA},
         {NULL, NULL},
      },
      "x"
   },
   {
      "dice_retromouse_paddle2_y",
      DICE_RETROMOUSE_PADDLE2_Y_LABEL_DA,
      DICE_RETROMOUSE_PADDLE2_Y_LABEL_CAT_DA,
      DICE_RETROMOUSE_PADDLE2_Y_INFO_0_DA,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_DA},
         {"y", OPTION_VAL_Y_DA},
         {NULL, NULL},
      },
      "y"
   },
   {
      "dice_retromouse_paddle3_x",
      DICE_RETROMOUSE_PADDLE3_X_LABEL_DA,
      DICE_RETROMOUSE_PADDLE3_X_LABEL_CAT_DA,
      DICE_RETROMOUSE_PADDLE3_X_INFO_0_DA,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_DA},
         {"y", OPTION_VAL_Y_DA},
         {NULL, NULL},
      },
      "x"
   },
   {
      "dice_retromouse_paddle3_y",
      DICE_RETROMOUSE_PADDLE3_Y_LABEL_DA,
      DICE_RETROMOUSE_PADDLE3_Y_LABEL_CAT_DA,
      DICE_RETROMOUSE_PADDLE3_Y_INFO_0_DA,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_DA},
         {"y", OPTION_VAL_Y_DA},
         {NULL, NULL},
      },
      "y"
   },

#ifdef MANYMOUSE
   {
      "dice_manymouse_paddle0",
      DICE_MANYMOUSE_PADDLE0_LABEL_DA,
      DICE_RETROMOUSE_PADDLE0_LABEL_CAT_DA,
      DICE_MANYMOUSE_PADDLE0_INFO_0_DA,
      NULL,
      "manymouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_manymouse_paddle0_x",
      DICE_MANYMOUSE_PADDLE0_X_LABEL_DA,
      DICE_MANYMOUSE_PADDLE0_X_LABEL_CAT_DA,
      DICE_RETROMOUSE_PADDLE0_X_INFO_0_DA,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_DA},
         {"0y", OPTION_VAL_0Y_DA},
         {"1x", OPTION_VAL_1X_DA},
         {"1y", OPTION_VAL_1Y_DA},
         {"2x", OPTION_VAL_2X_DA},
         {"2y", OPTION_VAL_2Y_DA},
         {"3x", OPTION_VAL_3X_DA},
         {"3y", OPTION_VAL_3Y_DA},
         {NULL, NULL},
      },
      "0x"
   },
   {
      "dice_manymouse_paddle0_y",
      DICE_MANYMOUSE_PADDLE0_Y_LABEL_DA,
      DICE_MANYMOUSE_PADDLE0_Y_LABEL_CAT_DA,
      DICE_RETROMOUSE_PADDLE0_Y_INFO_0_DA,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_DA},
         {"0y", OPTION_VAL_0Y_DA},
         {"1x", OPTION_VAL_1X_DA},
         {"1y", OPTION_VAL_1Y_DA},
         {"2x", OPTION_VAL_2X_DA},
         {"2y", OPTION_VAL_2Y_DA},
         {"3x", OPTION_VAL_3X_DA},
         {"3y", OPTION_VAL_3Y_DA},
         {NULL, NULL},
      },
      "0y"
   },
   {
      "dice_manymouse_paddle1",
      DICE_MANYMOUSE_PADDLE1_LABEL_DA,
      DICE_RETROMOUSE_PADDLE1_LABEL_CAT_DA,
      DICE_MANYMOUSE_PADDLE1_INFO_0_DA,
      NULL,
      "manymouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_manymouse_paddle1_x",
      DICE_MANYMOUSE_PADDLE1_X_LABEL_DA,
      DICE_MANYMOUSE_PADDLE1_X_LABEL_CAT_DA,
      DICE_RETROMOUSE_PADDLE1_X_INFO_0_DA,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_DA},
         {"0y", OPTION_VAL_0Y_DA},
         {"1x", OPTION_VAL_1X_DA},
         {"1y", OPTION_VAL_1Y_DA},
         {"2x", OPTION_VAL_2X_DA},
         {"2y", OPTION_VAL_2Y_DA},
         {"3x", OPTION_VAL_3X_DA},
         {"3y", OPTION_VAL_3Y_DA},
         {NULL, NULL},
      },
      "1x"
   },
   {
      "dice_manymouse_paddle1_y",
      DICE_MANYMOUSE_PADDLE1_Y_LABEL_DA,
      DICE_MANYMOUSE_PADDLE1_Y_LABEL_CAT_DA,
      DICE_RETROMOUSE_PADDLE1_Y_INFO_0_DA,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_DA},
         {"0y", OPTION_VAL_0Y_DA},
         {"1x", OPTION_VAL_1X_DA},
         {"1y", OPTION_VAL_1Y_DA},
         {"2x", OPTION_VAL_2X_DA},
         {"2y", OPTION_VAL_2Y_DA},
         {"3x", OPTION_VAL_3X_DA},
         {"3y", OPTION_VAL_3Y_DA},
         {NULL, NULL},
      },
      "1y"
   },
   {
      "dice_manymouse_paddle2",
      DICE_MANYMOUSE_PADDLE2_LABEL_DA,
      DICE_RETROMOUSE_PADDLE2_LABEL_CAT_DA,
      DICE_MANYMOUSE_PADDLE2_INFO_0_DA,
      NULL,
      "manymouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_manymouse_paddle2_x",
      DICE_MANYMOUSE_PADDLE2_X_LABEL_DA,
      DICE_MANYMOUSE_PADDLE2_X_LABEL_CAT_DA,
      DICE_RETROMOUSE_PADDLE2_X_INFO_0_DA,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_DA},
         {"0y", OPTION_VAL_0Y_DA},
         {"1x", OPTION_VAL_1X_DA},
         {"1y", OPTION_VAL_1Y_DA},
         {"2x", OPTION_VAL_2X_DA},
         {"2y", OPTION_VAL_2Y_DA},
         {"3x", OPTION_VAL_3X_DA},
         {"3y", OPTION_VAL_3Y_DA},
         {NULL, NULL},
      },
      "2x"
   },
   {
      "dice_manymouse_paddle2_y",
      DICE_MANYMOUSE_PADDLE2_Y_LABEL_DA,
      DICE_MANYMOUSE_PADDLE2_Y_LABEL_CAT_DA,
      DICE_RETROMOUSE_PADDLE2_Y_INFO_0_DA,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_DA},
         {"0y", OPTION_VAL_0Y_DA},
         {"1x", OPTION_VAL_1X_DA},
         {"1y", OPTION_VAL_1Y_DA},
         {"2x", OPTION_VAL_2X_DA},
         {"2y", OPTION_VAL_2Y_DA},
         {"3x", OPTION_VAL_3X_DA},
         {"3y", OPTION_VAL_3Y_DA},
         {NULL, NULL},
      },
      "2y"
   },
   {
      "dice_manymouse_paddle3",
      DICE_MANYMOUSE_PADDLE3_LABEL_DA,
      DICE_RETROMOUSE_PADDLE3_LABEL_CAT_DA,
      DICE_MANYMOUSE_PADDLE3_INFO_0_DA,
      NULL,
      "manymouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_manymouse_paddle3_x",
      DICE_MANYMOUSE_PADDLE3_X_LABEL_DA,
      DICE_MANYMOUSE_PADDLE3_X_LABEL_CAT_DA,
      DICE_RETROMOUSE_PADDLE3_X_INFO_0_DA,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_DA},
         {"0y", OPTION_VAL_0Y_DA},
         {"1x", OPTION_VAL_1X_DA},
         {"1y", OPTION_VAL_1Y_DA},
         {"2x", OPTION_VAL_2X_DA},
         {"2y", OPTION_VAL_2Y_DA},
         {"3x", OPTION_VAL_3X_DA},
         {"3y", OPTION_VAL_3Y_DA},
         {NULL, NULL},
      },
      "3x"
   },
   {
      "dice_manymouse_paddle3_y",
      DICE_MANYMOUSE_PADDLE3_Y_LABEL_DA,
      DICE_MANYMOUSE_PADDLE3_Y_LABEL_CAT_DA,
      DICE_RETROMOUSE_PADDLE3_Y_INFO_0_DA,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_DA},
         {"0y", OPTION_VAL_0Y_DA},
         {"1x", OPTION_VAL_1X_DA},
         {"1y", OPTION_VAL_1Y_DA},
         {"2x", OPTION_VAL_2X_DA},
         {"2y", OPTION_VAL_2Y_DA},
         {"3x", OPTION_VAL_3X_DA},
         {"3y", OPTION_VAL_3Y_DA},
         {NULL, NULL},
      },
      "3y"
   },
#endif

   {
      "dice_dipswitch_1",
      DICE_DIPSWITCH_1_LABEL_DA,
      DICE_DIPSWITCH_1_LABEL_CAT_DA,
      DICE_DIPSWITCH_1_INFO_0_DA,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_DA},
         {"0", NULL},
         {"1", NULL},
         {NULL, NULL},
      },
      "-1"
   },
   {
      "dice_dipswitch_2",
      DICE_DIPSWITCH_2_LABEL_DA,
      DICE_DIPSWITCH_2_LABEL_CAT_DA,
      DICE_DIPSWITCH_2_INFO_0_DA,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_DA},
         {"0", NULL},
         {"1", NULL},
         {NULL, NULL},
      },
      "-1"
   },
   {
      "dice_dipswitch_3",
      DICE_DIPSWITCH_3_LABEL_DA,
      DICE_DIPSWITCH_3_LABEL_CAT_DA,
      DICE_DIPSWITCH_3_INFO_0_DA,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_DA},
         {"0", NULL},
         {"1", NULL},
         {NULL, NULL},
      },
      "-1"
   },
   {
      "dice_dipswitch16_1",
      DICE_DIPSWITCH16_1_LABEL_DA,
      DICE_DIPSWITCH16_1_LABEL_CAT_DA,
      DICE_DIPSWITCH16_1_INFO_0_DA,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_DA},
         {"0", NULL},
         {"1", NULL},
         {"2", NULL},
         {"3", NULL},
         {"4", NULL},
         {"5", NULL},
         {"6", NULL},
         {"7", NULL},
         {"8", NULL},
         {"9", NULL},
         {"10", NULL},
         {"11", NULL},
         {"12", NULL},
         {"13", NULL},
         {"14", NULL},
         {"15", NULL},
         {NULL, NULL},
      },
      "-1"
   },
   {
      "dice_dipswitch16_2",
      DICE_DIPSWITCH16_2_LABEL_DA,
      DICE_DIPSWITCH16_2_LABEL_CAT_DA,
      DICE_DIPSWITCH16_2_INFO_0_DA,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_DA},
         {"0", NULL},
         {"1", NULL},
         {"2", NULL},
         {"3", NULL},
         {"4", NULL},
         {"5", NULL},
         {"6", NULL},
         {"7", NULL},
         {"8", NULL},
         {"9", NULL},
         {"10", NULL},
         {"11", NULL},
         {"12", NULL},
         {"13", NULL},
         {"14", NULL},
         {"15", NULL},
         {NULL, NULL},
      },
      "-1"
   },

   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_da = {
   option_cats_da,
   option_defs_da
};

/* RETRO_LANGUAGE_DE */

#define CATEGORY_INPUT_LABEL_DE "Eingabe"
#define CATEGORY_INPUT_INFO_0_DE "Core-spezifische Eingabeeinstellungen konfigurieren."
#define CATEGORY_RETROMOUSE_LABEL_DE NULL
#define CATEGORY_RETROMOUSE_INFO_0_DE "Libretro-Einstellungen für mehrere Mäuse konfigurieren."
#define CATEGORY_MANYMOUSE_LABEL_DE NULL
#define CATEGORY_MANYMOUSE_INFO_0_DE "Multi-Maus-Einstellungen von ManyMouse konfigurieren."
#define CATEGORY_DIPSWITCH_LABEL_DE "DIP-Schalter"
#define CATEGORY_DIPSWITCH_INFO_0_DE "DIP-Schalter- und Potentiometer-Einstellungen konfigurieren."
#define DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_LABEL_DE "Eingabe > Mauszeiger für Paddel 1 verwenden"
#define DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_LABEL_CAT_DE "Mauszeiger für Paddel 1 verwenden"
#define DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_INFO_0_DE "Den Mauszeiger des Systems als Paddle-Controller 1 verwenden.  Es lässt sich keine bestimmte Maus auswählen, wenn mehrere vorhanden sind."
#define DICE_PADDLE_JOYSTICK_ABSOLUTE_LABEL_DE "Eingabe > Paddel-Joystick verwendet absolute Bewegung"
#define DICE_PADDLE_JOYSTICK_ABSOLUTE_LABEL_CAT_DE "Paddel-Joystick verwendet absolute Bewegung"
#define DICE_PADDLE_JOYSTICK_ABSOLUTE_INFO_0_DE "Joystick-Bewegungsbereich dem Paddelbereich direkt zuordnen anstelle relativer Bewegungen."
#define DICE_PADDLE_KEYBOARD_SENSITIVITY_LABEL_DE "Eingabe > Paddel D-Pad-Empfindlichkeit"
#define DICE_PADDLE_KEYBOARD_SENSITIVITY_LABEL_CAT_DE "Paddel D-Pad-Empfindlichkeit"
#define DICE_PADDLE_KEYBOARD_SENSITIVITY_INFO_0_DE "Empfindlichkeit beim Verwenden des D-Pads als Paddel."
#define DICE_PADDLE_JOYSTICK_SENSITIVITY_LABEL_DE "Eingabe > Paddel Analogstick-Empfindlichkeit"
#define DICE_PADDLE_JOYSTICK_SENSITIVITY_LABEL_CAT_DE "Paddel Analogstick-Empfindlichkeit"
#define DICE_PADDLE_JOYSTICK_SENSITIVITY_INFO_0_DE "Empfindlichkeit beim Verwenden des D-Pads als Paddel."
#define DICE_RETROMOUSE_PADDLE_SENSITIVITY_LABEL_DE "Eingabe > Paddel Retromaus-Empfindlichkeit"
#define DICE_RETROMOUSE_PADDLE_SENSITIVITY_LABEL_CAT_DE "Paddel Retromaus-Empfindlichkeit"
#define DICE_RETROMOUSE_PADDLE_SENSITIVITY_INFO_0_DE "Empfindlichkeit beim Verwenden von RetroMouse als Paddel."
#define DICE_WHEEL_KEYJOY_SENSITIVITY_LABEL_DE "Eingabe > Radempfindlichkeit"
#define DICE_WHEEL_KEYJOY_SENSITIVITY_LABEL_CAT_DE "Radempfindlichkeit"
#define DICE_WHEEL_KEYJOY_SENSITIVITY_INFO_0_DE "Empfindlichkeit beim Verwenden des D-Pads oder Analogsticks als Rad."
#define DICE_THROTTLE_KEYJOY_SENSITIVITY_LABEL_DE "Eingabe > Drosselempfindlichkeit"
#define DICE_THROTTLE_KEYJOY_SENSITIVITY_LABEL_CAT_DE "Drosselempfindlichkeit"
#define DICE_THROTTLE_KEYJOY_SENSITIVITY_INFO_0_DE "Empfindlichkeit beim Verwenden des D-Pads oder Analogsticks als Drossel."
#define DICE_RETROMOUSE_PADDLE0_LABEL_DE "RetroMouse > Maus für Paddle 1 verwenden"
#define DICE_RETROMOUSE_PADDLE0_LABEL_CAT_DE "Maus für Paddel 1 verwenden"
#define DICE_RETROMOUSE_PADDLE0_INFO_0_DE "Eine bestimmte Maus als Paddel 1 verwenden, die durch den Mausindex von Port 1 bestimmt wird."
#define DICE_RETROMOUSE_PADDLE1_LABEL_DE "RetroMouse > Maus für Paddel 2 verwenden"
#define DICE_RETROMOUSE_PADDLE1_LABEL_CAT_DE "Maus für Paddel 2 verwenden"
#define DICE_RETROMOUSE_PADDLE1_INFO_0_DE "Eine bestimmte Maus als Paddel 2 verwenden, die durch den Mausindex von Port 2 bestimmt wird."
#define DICE_RETROMOUSE_PADDLE2_LABEL_DE "RetroMouse > Maus für Paddel 3 verwenden"
#define DICE_RETROMOUSE_PADDLE2_LABEL_CAT_DE "Maus für Paddel 3 verwenden"
#define DICE_RETROMOUSE_PADDLE2_INFO_0_DE "Eine bestimmte Maus als Paddel 3 verwenden, die durch den Mausindex von Port 3 bestimmt wird."
#define DICE_RETROMOUSE_PADDLE3_LABEL_DE "RetroMouse > Maus für Paddel 4 verwenden"
#define DICE_RETROMOUSE_PADDLE3_LABEL_CAT_DE "Maus für Paddel 4 verwenden"
#define DICE_RETROMOUSE_PADDLE3_INFO_0_DE "Eine bestimmte Maus als Paddel 4 verwenden, die durch den Mausindex von Port 4 bestimmt wird."
#define DICE_RETROMOUSE_PADDLE0_X_LABEL_DE "RetroMouse > Mausachse für Paddel 1 Horizontal"
#define DICE_RETROMOUSE_PADDLE0_X_LABEL_CAT_DE "Mausachse für Paddel 1 Horizontal"
#define DICE_RETROMOUSE_PADDLE0_X_INFO_0_DE "Mausachse für Spieler 1, horizontale Bildschirmbewegung."
#define OPTION_VAL_X_DE NULL
#define OPTION_VAL_Y_DE NULL
#define DICE_RETROMOUSE_PADDLE0_Y_LABEL_DE "RetroMouse > Mausachse für Paddel 1 Vertikal"
#define DICE_RETROMOUSE_PADDLE0_Y_LABEL_CAT_DE "Mausachse für Paddel 1 Vertikal"
#define DICE_RETROMOUSE_PADDLE0_Y_INFO_0_DE "Mausachse für Spieler 1, vertikale Bildschirmbewegung."
#define DICE_RETROMOUSE_PADDLE1_X_LABEL_DE "RetroMouse > Mausachse für Paddel 2 Horizontal"
#define DICE_RETROMOUSE_PADDLE1_X_LABEL_CAT_DE "Mausachse für Paddel 2 Horizontal"
#define DICE_RETROMOUSE_PADDLE1_X_INFO_0_DE "Mausachse für Spieler 2, horizontale Bildschirmbewegung."
#define DICE_RETROMOUSE_PADDLE1_Y_LABEL_DE "RetroMouse > Mausachse für Paddel 2 Horizontal"
#define DICE_RETROMOUSE_PADDLE1_Y_LABEL_CAT_DE "Mausachse für Paddel 2 Vertikal"
#define DICE_RETROMOUSE_PADDLE1_Y_INFO_0_DE "Mausachse für Spieler 2, vertikale Bildschirmbewegung."
#define DICE_RETROMOUSE_PADDLE2_X_LABEL_DE "RetroMouse > Mausachse für Paddel 3 Horizontal"
#define DICE_RETROMOUSE_PADDLE2_X_LABEL_CAT_DE "Mausachse für Paddel 3 Horizontal"
#define DICE_RETROMOUSE_PADDLE2_X_INFO_0_DE "Mausachse für Spieler 3, horizontale Bildschirmbewegung."
#define DICE_RETROMOUSE_PADDLE2_Y_LABEL_DE "RetroMouse > Mausachse für Paddel 3 Vertikal"
#define DICE_RETROMOUSE_PADDLE2_Y_LABEL_CAT_DE "Mausachse für Paddel 3 Vertikal"
#define DICE_RETROMOUSE_PADDLE2_Y_INFO_0_DE "Mausachse für Spieler 3, vertikale Bildschirmbewegung."
#define DICE_RETROMOUSE_PADDLE3_X_LABEL_DE "RetroMouse > Mausachse für Paddel 4 Horizontal"
#define DICE_RETROMOUSE_PADDLE3_X_LABEL_CAT_DE "Mausachse für Paddel 4 Horizontal"
#define DICE_RETROMOUSE_PADDLE3_X_INFO_0_DE "Mausachse für Spieler 4, horizontale Bildschirmbewegung."
#define DICE_RETROMOUSE_PADDLE3_Y_LABEL_DE "RetroMouse > Mausachse für Paddel 4 Vertikal"
#define DICE_RETROMOUSE_PADDLE3_Y_LABEL_CAT_DE "Mausachse für Paddel 4 Vertikal"
#define DICE_RETROMOUSE_PADDLE3_Y_INFO_0_DE "Mausachse für Spieler 4, vertikale Bildschirmbewegung."
#define DICE_MANYMOUSE_PADDLE0_LABEL_DE "ManyMouse > Maus für Paddel 1 verwenden"
#define DICE_MANYMOUSE_PADDLE0_INFO_0_DE "Eine Maus als Paddel 1 verwenden."
#define DICE_MANYMOUSE_PADDLE0_X_LABEL_DE "ManyMaus > Mauspaddel 1 x"
#define DICE_MANYMOUSE_PADDLE0_X_LABEL_CAT_DE "Mauspaddel 1 x"
#define OPTION_VAL_0X_DE NULL
#define OPTION_VAL_0Y_DE NULL
#define OPTION_VAL_1X_DE NULL
#define OPTION_VAL_1Y_DE NULL
#define OPTION_VAL_2X_DE NULL
#define OPTION_VAL_2Y_DE NULL
#define OPTION_VAL_3X_DE NULL
#define OPTION_VAL_3Y_DE NULL
#define DICE_MANYMOUSE_PADDLE0_Y_LABEL_DE "ManyMaus > Mauspaddel 1 y"
#define DICE_MANYMOUSE_PADDLE0_Y_LABEL_CAT_DE "Mauspaddel 1 y"
#define DICE_MANYMOUSE_PADDLE1_LABEL_DE "ManyMouse > Maus für Paddel 2 verwenden"
#define DICE_MANYMOUSE_PADDLE1_INFO_0_DE "Eine Maus als Paddel 2 verwenden."
#define DICE_MANYMOUSE_PADDLE1_X_LABEL_DE "ManyMaus > Mauspaddel 2 x"
#define DICE_MANYMOUSE_PADDLE1_X_LABEL_CAT_DE "Mauspaddel 2 x"
#define DICE_MANYMOUSE_PADDLE1_Y_LABEL_DE "ManyMaus > Mauspaddel 2 y"
#define DICE_MANYMOUSE_PADDLE1_Y_LABEL_CAT_DE "Mauspaddel 2 y"
#define DICE_MANYMOUSE_PADDLE2_LABEL_DE "ManyMouse > Maus für Paddel 3 verwenden"
#define DICE_MANYMOUSE_PADDLE2_INFO_0_DE "Eine Maus als Paddel 3 verwenden."
#define DICE_MANYMOUSE_PADDLE2_X_LABEL_DE "ManyMaus > Mauspaddel 3 x"
#define DICE_MANYMOUSE_PADDLE2_X_LABEL_CAT_DE "Mauspaddel 3 x"
#define DICE_MANYMOUSE_PADDLE2_Y_LABEL_DE "ManyMaus > Mauspaddel 3 y"
#define DICE_MANYMOUSE_PADDLE2_Y_LABEL_CAT_DE "Mauspaddel 3 y"
#define DICE_MANYMOUSE_PADDLE3_LABEL_DE "ManyMouse > Maus für Paddel 4 verwenden"
#define DICE_MANYMOUSE_PADDLE3_INFO_0_DE "Eine Maus als Paddel 4 verwenden."
#define DICE_MANYMOUSE_PADDLE3_X_LABEL_DE "ManyMaus > Mauspaddel 4 x"
#define DICE_MANYMOUSE_PADDLE3_X_LABEL_CAT_DE "Mauspaddel 4 x"
#define DICE_MANYMOUSE_PADDLE3_Y_LABEL_DE "ManyMaus > Mauspaddel 4 y"
#define DICE_MANYMOUSE_PADDLE3_Y_LABEL_CAT_DE "Mauspaddel 4 y"
#define DICE_DIPSWITCH_1_LABEL_DE "DIP-Schalter > DIP-Schalter 1"
#define DICE_DIPSWITCH_1_LABEL_CAT_DE "DIP-Schalter 1"
#define DICE_DIPSWITCH_1_INFO_0_DE "Einstellung für DIP-Schalter 1."
#define OPTION_VAL_1_DE "Standard"
#define DICE_DIPSWITCH_2_LABEL_DE "DIP-Schalter > DIP-Schalter 2"
#define DICE_DIPSWITCH_2_LABEL_CAT_DE "DIP-Schalter 2"
#define DICE_DIPSWITCH_2_INFO_0_DE "Einstellung für DIP-Schalter 2."
#define DICE_DIPSWITCH_3_LABEL_DE "DIP-Schalter > DIP-Schalter 3"
#define DICE_DIPSWITCH_3_LABEL_CAT_DE "DIP-Schalter 3"
#define DICE_DIPSWITCH_3_INFO_0_DE "Einstellung für DIP-Schalter 3."
#define DICE_DIPSWITCH16_1_LABEL_DE "DIP-Schalter > DIP-Schalter Hex 1"
#define DICE_DIPSWITCH16_1_LABEL_CAT_DE "DIP-Schalter Hex 1"
#define DICE_DIPSWITCH16_1_INFO_0_DE "Einstellung für 16-polige DIP-Schalter Nummer 1."
#define DICE_DIPSWITCH16_2_LABEL_DE "DIP-Schalter > DIP-Schalter Hex 2"
#define DICE_DIPSWITCH16_2_LABEL_CAT_DE "DIP-Schalter Hex 2"
#define DICE_DIPSWITCH16_2_INFO_0_DE "Einstellung für 16-polige DIP-Schalter Nummer 2."

struct retro_core_option_v2_category option_cats_de[] = {
   {
      "input",
      CATEGORY_INPUT_LABEL_DE,
      CATEGORY_INPUT_INFO_0_DE
   },
   {
      "retromouse",
      CATEGORY_RETROMOUSE_LABEL_DE,
      CATEGORY_RETROMOUSE_INFO_0_DE
   },
#ifdef MANYMOUSE
   {
      "manymouse",
      CATEGORY_MANYMOUSE_LABEL_DE,
      CATEGORY_MANYMOUSE_INFO_0_DE
   },
#endif
   {
      "dipswitch",
      CATEGORY_DIPSWITCH_LABEL_DE,
      CATEGORY_DIPSWITCH_INFO_0_DE
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_de[] = {
   {
      "dice_use_mouse_pointer_for_paddle_1",
      DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_LABEL_DE,
      DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_LABEL_CAT_DE,
      DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_INFO_0_DE,
      NULL,
      "input",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_paddle_joystick_absolute",
      DICE_PADDLE_JOYSTICK_ABSOLUTE_LABEL_DE,
      DICE_PADDLE_JOYSTICK_ABSOLUTE_LABEL_CAT_DE,
      DICE_PADDLE_JOYSTICK_ABSOLUTE_INFO_0_DE,
      NULL,
      "input",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      // D-pad but not necessarily keyboard under libretro,
      // that name comes from the upstream code.
      "dice_paddle_keyboard_sensitivity",
      DICE_PADDLE_KEYBOARD_SENSITIVITY_LABEL_DE,
      DICE_PADDLE_KEYBOARD_SENSITIVITY_LABEL_CAT_DE,
      DICE_PADDLE_KEYBOARD_SENSITIVITY_INFO_0_DE,
      NULL,
      "input",
      {
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "250"
   },
   {
      "dice_paddle_joystick_sensitivity",
      DICE_PADDLE_JOYSTICK_SENSITIVITY_LABEL_DE,
      DICE_PADDLE_JOYSTICK_SENSITIVITY_LABEL_CAT_DE,
      DICE_PADDLE_JOYSTICK_SENSITIVITY_INFO_0_DE,
      NULL,
      "input",
      {
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "500"
   },
   {
      "dice_retromouse_paddle_sensitivity",
      DICE_RETROMOUSE_PADDLE_SENSITIVITY_LABEL_DE,
      DICE_RETROMOUSE_PADDLE_SENSITIVITY_LABEL_CAT_DE,
      DICE_RETROMOUSE_PADDLE_SENSITIVITY_INFO_0_DE,
      NULL,
      "input",
      {
         {"25", NULL},
         {"50", NULL},
         {"75", NULL},
         {"100", NULL},
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "125"
   },
   {
      "dice_wheel_keyjoy_sensitivity",
      DICE_WHEEL_KEYJOY_SENSITIVITY_LABEL_DE,
      DICE_WHEEL_KEYJOY_SENSITIVITY_LABEL_CAT_DE,
      DICE_WHEEL_KEYJOY_SENSITIVITY_INFO_0_DE,
      NULL,
      "input",
      {
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "500"
   },
   {
      "dice_throttle_keyjoy_sensitivity",
      DICE_THROTTLE_KEYJOY_SENSITIVITY_LABEL_DE,
      DICE_THROTTLE_KEYJOY_SENSITIVITY_LABEL_CAT_DE,
      DICE_THROTTLE_KEYJOY_SENSITIVITY_INFO_0_DE,
      NULL,
      "input",
      {
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "250"
   },

   {
      "dice_retromouse_paddle0",
      DICE_RETROMOUSE_PADDLE0_LABEL_DE,
      DICE_RETROMOUSE_PADDLE0_LABEL_CAT_DE,
      DICE_RETROMOUSE_PADDLE0_INFO_0_DE,
      NULL,
      "retromouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_retromouse_paddle1",
      DICE_RETROMOUSE_PADDLE1_LABEL_DE,
      DICE_RETROMOUSE_PADDLE1_LABEL_CAT_DE,
      DICE_RETROMOUSE_PADDLE1_INFO_0_DE,
      NULL,
      "retromouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_retromouse_paddle2",
      DICE_RETROMOUSE_PADDLE2_LABEL_DE,
      DICE_RETROMOUSE_PADDLE2_LABEL_CAT_DE,
      DICE_RETROMOUSE_PADDLE2_INFO_0_DE,
      NULL,
      "retromouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_retromouse_paddle3",
      DICE_RETROMOUSE_PADDLE3_LABEL_DE,
      DICE_RETROMOUSE_PADDLE3_LABEL_CAT_DE,
      DICE_RETROMOUSE_PADDLE3_INFO_0_DE,
      NULL,
      "retromouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_retromouse_paddle0_x",
      DICE_RETROMOUSE_PADDLE0_X_LABEL_DE,
      DICE_RETROMOUSE_PADDLE0_X_LABEL_CAT_DE,
      DICE_RETROMOUSE_PADDLE0_X_INFO_0_DE,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_DE},
         {"y", OPTION_VAL_Y_DE},
         {NULL, NULL},
      },
      "x"
   },
   {
      "dice_retromouse_paddle0_y",
      DICE_RETROMOUSE_PADDLE0_Y_LABEL_DE,
      DICE_RETROMOUSE_PADDLE0_Y_LABEL_CAT_DE,
      DICE_RETROMOUSE_PADDLE0_Y_INFO_0_DE,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_DE},
         {"y", OPTION_VAL_Y_DE},
         {NULL, NULL},
      },
      "y"
   },
   {
      "dice_retromouse_paddle1_x",
      DICE_RETROMOUSE_PADDLE1_X_LABEL_DE,
      DICE_RETROMOUSE_PADDLE1_X_LABEL_CAT_DE,
      DICE_RETROMOUSE_PADDLE1_X_INFO_0_DE,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_DE},
         {"y", OPTION_VAL_Y_DE},
         {NULL, NULL},
      },
      "x"
   },
   {
      "dice_retromouse_paddle1_y",
      DICE_RETROMOUSE_PADDLE1_Y_LABEL_DE,
      DICE_RETROMOUSE_PADDLE1_Y_LABEL_CAT_DE,
      DICE_RETROMOUSE_PADDLE1_Y_INFO_0_DE,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_DE},
         {"y", OPTION_VAL_Y_DE},
         {NULL, NULL},
      },
      "y"
   },
   {
      "dice_retromouse_paddle2_x",
      DICE_RETROMOUSE_PADDLE2_X_LABEL_DE,
      DICE_RETROMOUSE_PADDLE2_X_LABEL_CAT_DE,
      DICE_RETROMOUSE_PADDLE2_X_INFO_0_DE,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_DE},
         {"y", OPTION_VAL_Y_DE},
         {NULL, NULL},
      },
      "x"
   },
   {
      "dice_retromouse_paddle2_y",
      DICE_RETROMOUSE_PADDLE2_Y_LABEL_DE,
      DICE_RETROMOUSE_PADDLE2_Y_LABEL_CAT_DE,
      DICE_RETROMOUSE_PADDLE2_Y_INFO_0_DE,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_DE},
         {"y", OPTION_VAL_Y_DE},
         {NULL, NULL},
      },
      "y"
   },
   {
      "dice_retromouse_paddle3_x",
      DICE_RETROMOUSE_PADDLE3_X_LABEL_DE,
      DICE_RETROMOUSE_PADDLE3_X_LABEL_CAT_DE,
      DICE_RETROMOUSE_PADDLE3_X_INFO_0_DE,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_DE},
         {"y", OPTION_VAL_Y_DE},
         {NULL, NULL},
      },
      "x"
   },
   {
      "dice_retromouse_paddle3_y",
      DICE_RETROMOUSE_PADDLE3_Y_LABEL_DE,
      DICE_RETROMOUSE_PADDLE3_Y_LABEL_CAT_DE,
      DICE_RETROMOUSE_PADDLE3_Y_INFO_0_DE,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_DE},
         {"y", OPTION_VAL_Y_DE},
         {NULL, NULL},
      },
      "y"
   },

#ifdef MANYMOUSE
   {
      "dice_manymouse_paddle0",
      DICE_MANYMOUSE_PADDLE0_LABEL_DE,
      DICE_RETROMOUSE_PADDLE0_LABEL_CAT_DE,
      DICE_MANYMOUSE_PADDLE0_INFO_0_DE,
      NULL,
      "manymouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_manymouse_paddle0_x",
      DICE_MANYMOUSE_PADDLE0_X_LABEL_DE,
      DICE_MANYMOUSE_PADDLE0_X_LABEL_CAT_DE,
      DICE_RETROMOUSE_PADDLE0_X_INFO_0_DE,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_DE},
         {"0y", OPTION_VAL_0Y_DE},
         {"1x", OPTION_VAL_1X_DE},
         {"1y", OPTION_VAL_1Y_DE},
         {"2x", OPTION_VAL_2X_DE},
         {"2y", OPTION_VAL_2Y_DE},
         {"3x", OPTION_VAL_3X_DE},
         {"3y", OPTION_VAL_3Y_DE},
         {NULL, NULL},
      },
      "0x"
   },
   {
      "dice_manymouse_paddle0_y",
      DICE_MANYMOUSE_PADDLE0_Y_LABEL_DE,
      DICE_MANYMOUSE_PADDLE0_Y_LABEL_CAT_DE,
      DICE_RETROMOUSE_PADDLE0_Y_INFO_0_DE,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_DE},
         {"0y", OPTION_VAL_0Y_DE},
         {"1x", OPTION_VAL_1X_DE},
         {"1y", OPTION_VAL_1Y_DE},
         {"2x", OPTION_VAL_2X_DE},
         {"2y", OPTION_VAL_2Y_DE},
         {"3x", OPTION_VAL_3X_DE},
         {"3y", OPTION_VAL_3Y_DE},
         {NULL, NULL},
      },
      "0y"
   },
   {
      "dice_manymouse_paddle1",
      DICE_MANYMOUSE_PADDLE1_LABEL_DE,
      DICE_RETROMOUSE_PADDLE1_LABEL_CAT_DE,
      DICE_MANYMOUSE_PADDLE1_INFO_0_DE,
      NULL,
      "manymouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_manymouse_paddle1_x",
      DICE_MANYMOUSE_PADDLE1_X_LABEL_DE,
      DICE_MANYMOUSE_PADDLE1_X_LABEL_CAT_DE,
      DICE_RETROMOUSE_PADDLE1_X_INFO_0_DE,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_DE},
         {"0y", OPTION_VAL_0Y_DE},
         {"1x", OPTION_VAL_1X_DE},
         {"1y", OPTION_VAL_1Y_DE},
         {"2x", OPTION_VAL_2X_DE},
         {"2y", OPTION_VAL_2Y_DE},
         {"3x", OPTION_VAL_3X_DE},
         {"3y", OPTION_VAL_3Y_DE},
         {NULL, NULL},
      },
      "1x"
   },
   {
      "dice_manymouse_paddle1_y",
      DICE_MANYMOUSE_PADDLE1_Y_LABEL_DE,
      DICE_MANYMOUSE_PADDLE1_Y_LABEL_CAT_DE,
      DICE_RETROMOUSE_PADDLE1_Y_INFO_0_DE,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_DE},
         {"0y", OPTION_VAL_0Y_DE},
         {"1x", OPTION_VAL_1X_DE},
         {"1y", OPTION_VAL_1Y_DE},
         {"2x", OPTION_VAL_2X_DE},
         {"2y", OPTION_VAL_2Y_DE},
         {"3x", OPTION_VAL_3X_DE},
         {"3y", OPTION_VAL_3Y_DE},
         {NULL, NULL},
      },
      "1y"
   },
   {
      "dice_manymouse_paddle2",
      DICE_MANYMOUSE_PADDLE2_LABEL_DE,
      DICE_RETROMOUSE_PADDLE2_LABEL_CAT_DE,
      DICE_MANYMOUSE_PADDLE2_INFO_0_DE,
      NULL,
      "manymouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_manymouse_paddle2_x",
      DICE_MANYMOUSE_PADDLE2_X_LABEL_DE,
      DICE_MANYMOUSE_PADDLE2_X_LABEL_CAT_DE,
      DICE_RETROMOUSE_PADDLE2_X_INFO_0_DE,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_DE},
         {"0y", OPTION_VAL_0Y_DE},
         {"1x", OPTION_VAL_1X_DE},
         {"1y", OPTION_VAL_1Y_DE},
         {"2x", OPTION_VAL_2X_DE},
         {"2y", OPTION_VAL_2Y_DE},
         {"3x", OPTION_VAL_3X_DE},
         {"3y", OPTION_VAL_3Y_DE},
         {NULL, NULL},
      },
      "2x"
   },
   {
      "dice_manymouse_paddle2_y",
      DICE_MANYMOUSE_PADDLE2_Y_LABEL_DE,
      DICE_MANYMOUSE_PADDLE2_Y_LABEL_CAT_DE,
      DICE_RETROMOUSE_PADDLE2_Y_INFO_0_DE,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_DE},
         {"0y", OPTION_VAL_0Y_DE},
         {"1x", OPTION_VAL_1X_DE},
         {"1y", OPTION_VAL_1Y_DE},
         {"2x", OPTION_VAL_2X_DE},
         {"2y", OPTION_VAL_2Y_DE},
         {"3x", OPTION_VAL_3X_DE},
         {"3y", OPTION_VAL_3Y_DE},
         {NULL, NULL},
      },
      "2y"
   },
   {
      "dice_manymouse_paddle3",
      DICE_MANYMOUSE_PADDLE3_LABEL_DE,
      DICE_RETROMOUSE_PADDLE3_LABEL_CAT_DE,
      DICE_MANYMOUSE_PADDLE3_INFO_0_DE,
      NULL,
      "manymouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_manymouse_paddle3_x",
      DICE_MANYMOUSE_PADDLE3_X_LABEL_DE,
      DICE_MANYMOUSE_PADDLE3_X_LABEL_CAT_DE,
      DICE_RETROMOUSE_PADDLE3_X_INFO_0_DE,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_DE},
         {"0y", OPTION_VAL_0Y_DE},
         {"1x", OPTION_VAL_1X_DE},
         {"1y", OPTION_VAL_1Y_DE},
         {"2x", OPTION_VAL_2X_DE},
         {"2y", OPTION_VAL_2Y_DE},
         {"3x", OPTION_VAL_3X_DE},
         {"3y", OPTION_VAL_3Y_DE},
         {NULL, NULL},
      },
      "3x"
   },
   {
      "dice_manymouse_paddle3_y",
      DICE_MANYMOUSE_PADDLE3_Y_LABEL_DE,
      DICE_MANYMOUSE_PADDLE3_Y_LABEL_CAT_DE,
      DICE_RETROMOUSE_PADDLE3_Y_INFO_0_DE,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_DE},
         {"0y", OPTION_VAL_0Y_DE},
         {"1x", OPTION_VAL_1X_DE},
         {"1y", OPTION_VAL_1Y_DE},
         {"2x", OPTION_VAL_2X_DE},
         {"2y", OPTION_VAL_2Y_DE},
         {"3x", OPTION_VAL_3X_DE},
         {"3y", OPTION_VAL_3Y_DE},
         {NULL, NULL},
      },
      "3y"
   },
#endif

   {
      "dice_dipswitch_1",
      DICE_DIPSWITCH_1_LABEL_DE,
      DICE_DIPSWITCH_1_LABEL_CAT_DE,
      DICE_DIPSWITCH_1_INFO_0_DE,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_DE},
         {"0", NULL},
         {"1", NULL},
         {NULL, NULL},
      },
      "-1"
   },
   {
      "dice_dipswitch_2",
      DICE_DIPSWITCH_2_LABEL_DE,
      DICE_DIPSWITCH_2_LABEL_CAT_DE,
      DICE_DIPSWITCH_2_INFO_0_DE,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_DE},
         {"0", NULL},
         {"1", NULL},
         {NULL, NULL},
      },
      "-1"
   },
   {
      "dice_dipswitch_3",
      DICE_DIPSWITCH_3_LABEL_DE,
      DICE_DIPSWITCH_3_LABEL_CAT_DE,
      DICE_DIPSWITCH_3_INFO_0_DE,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_DE},
         {"0", NULL},
         {"1", NULL},
         {NULL, NULL},
      },
      "-1"
   },
   {
      "dice_dipswitch16_1",
      DICE_DIPSWITCH16_1_LABEL_DE,
      DICE_DIPSWITCH16_1_LABEL_CAT_DE,
      DICE_DIPSWITCH16_1_INFO_0_DE,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_DE},
         {"0", NULL},
         {"1", NULL},
         {"2", NULL},
         {"3", NULL},
         {"4", NULL},
         {"5", NULL},
         {"6", NULL},
         {"7", NULL},
         {"8", NULL},
         {"9", NULL},
         {"10", NULL},
         {"11", NULL},
         {"12", NULL},
         {"13", NULL},
         {"14", NULL},
         {"15", NULL},
         {NULL, NULL},
      },
      "-1"
   },
   {
      "dice_dipswitch16_2",
      DICE_DIPSWITCH16_2_LABEL_DE,
      DICE_DIPSWITCH16_2_LABEL_CAT_DE,
      DICE_DIPSWITCH16_2_INFO_0_DE,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_DE},
         {"0", NULL},
         {"1", NULL},
         {"2", NULL},
         {"3", NULL},
         {"4", NULL},
         {"5", NULL},
         {"6", NULL},
         {"7", NULL},
         {"8", NULL},
         {"9", NULL},
         {"10", NULL},
         {"11", NULL},
         {"12", NULL},
         {"13", NULL},
         {"14", NULL},
         {"15", NULL},
         {NULL, NULL},
      },
      "-1"
   },

   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_de = {
   option_cats_de,
   option_defs_de
};

/* RETRO_LANGUAGE_EL */

#define CATEGORY_INPUT_LABEL_EL "Εισαγωγή"
#define CATEGORY_INPUT_INFO_0_EL NULL
#define CATEGORY_RETROMOUSE_LABEL_EL NULL
#define CATEGORY_RETROMOUSE_INFO_0_EL NULL
#define CATEGORY_MANYMOUSE_LABEL_EL NULL
#define CATEGORY_MANYMOUSE_INFO_0_EL NULL
#define CATEGORY_DIPSWITCH_LABEL_EL NULL
#define CATEGORY_DIPSWITCH_INFO_0_EL NULL
#define DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_LABEL_EL NULL
#define DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_LABEL_CAT_EL NULL
#define DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_INFO_0_EL NULL
#define DICE_PADDLE_JOYSTICK_ABSOLUTE_LABEL_EL NULL
#define DICE_PADDLE_JOYSTICK_ABSOLUTE_LABEL_CAT_EL NULL
#define DICE_PADDLE_JOYSTICK_ABSOLUTE_INFO_0_EL NULL
#define DICE_PADDLE_KEYBOARD_SENSITIVITY_LABEL_EL NULL
#define DICE_PADDLE_KEYBOARD_SENSITIVITY_LABEL_CAT_EL NULL
#define DICE_PADDLE_KEYBOARD_SENSITIVITY_INFO_0_EL NULL
#define DICE_PADDLE_JOYSTICK_SENSITIVITY_LABEL_EL NULL
#define DICE_PADDLE_JOYSTICK_SENSITIVITY_LABEL_CAT_EL NULL
#define DICE_PADDLE_JOYSTICK_SENSITIVITY_INFO_0_EL NULL
#define DICE_RETROMOUSE_PADDLE_SENSITIVITY_LABEL_EL NULL
#define DICE_RETROMOUSE_PADDLE_SENSITIVITY_LABEL_CAT_EL NULL
#define DICE_RETROMOUSE_PADDLE_SENSITIVITY_INFO_0_EL NULL
#define DICE_WHEEL_KEYJOY_SENSITIVITY_LABEL_EL NULL
#define DICE_WHEEL_KEYJOY_SENSITIVITY_LABEL_CAT_EL NULL
#define DICE_WHEEL_KEYJOY_SENSITIVITY_INFO_0_EL NULL
#define DICE_THROTTLE_KEYJOY_SENSITIVITY_LABEL_EL NULL
#define DICE_THROTTLE_KEYJOY_SENSITIVITY_LABEL_CAT_EL NULL
#define DICE_THROTTLE_KEYJOY_SENSITIVITY_INFO_0_EL NULL
#define DICE_RETROMOUSE_PADDLE0_LABEL_EL NULL
#define DICE_RETROMOUSE_PADDLE0_LABEL_CAT_EL NULL
#define DICE_RETROMOUSE_PADDLE0_INFO_0_EL NULL
#define DICE_RETROMOUSE_PADDLE1_LABEL_EL NULL
#define DICE_RETROMOUSE_PADDLE1_LABEL_CAT_EL NULL
#define DICE_RETROMOUSE_PADDLE1_INFO_0_EL NULL
#define DICE_RETROMOUSE_PADDLE2_LABEL_EL NULL
#define DICE_RETROMOUSE_PADDLE2_LABEL_CAT_EL NULL
#define DICE_RETROMOUSE_PADDLE2_INFO_0_EL NULL
#define DICE_RETROMOUSE_PADDLE3_LABEL_EL NULL
#define DICE_RETROMOUSE_PADDLE3_LABEL_CAT_EL NULL
#define DICE_RETROMOUSE_PADDLE3_INFO_0_EL NULL
#define DICE_RETROMOUSE_PADDLE0_X_LABEL_EL NULL
#define DICE_RETROMOUSE_PADDLE0_X_LABEL_CAT_EL NULL
#define DICE_RETROMOUSE_PADDLE0_X_INFO_0_EL NULL
#define OPTION_VAL_X_EL NULL
#define OPTION_VAL_Y_EL NULL
#define DICE_RETROMOUSE_PADDLE0_Y_LABEL_EL NULL
#define DICE_RETROMOUSE_PADDLE0_Y_LABEL_CAT_EL NULL
#define DICE_RETROMOUSE_PADDLE0_Y_INFO_0_EL NULL
#define DICE_RETROMOUSE_PADDLE1_X_LABEL_EL NULL
#define DICE_RETROMOUSE_PADDLE1_X_LABEL_CAT_EL NULL
#define DICE_RETROMOUSE_PADDLE1_X_INFO_0_EL NULL
#define DICE_RETROMOUSE_PADDLE1_Y_LABEL_EL NULL
#define DICE_RETROMOUSE_PADDLE1_Y_LABEL_CAT_EL NULL
#define DICE_RETROMOUSE_PADDLE1_Y_INFO_0_EL NULL
#define DICE_RETROMOUSE_PADDLE2_X_LABEL_EL NULL
#define DICE_RETROMOUSE_PADDLE2_X_LABEL_CAT_EL NULL
#define DICE_RETROMOUSE_PADDLE2_X_INFO_0_EL NULL
#define DICE_RETROMOUSE_PADDLE2_Y_LABEL_EL NULL
#define DICE_RETROMOUSE_PADDLE2_Y_LABEL_CAT_EL NULL
#define DICE_RETROMOUSE_PADDLE2_Y_INFO_0_EL NULL
#define DICE_RETROMOUSE_PADDLE3_X_LABEL_EL NULL
#define DICE_RETROMOUSE_PADDLE3_X_LABEL_CAT_EL NULL
#define DICE_RETROMOUSE_PADDLE3_X_INFO_0_EL NULL
#define DICE_RETROMOUSE_PADDLE3_Y_LABEL_EL NULL
#define DICE_RETROMOUSE_PADDLE3_Y_LABEL_CAT_EL NULL
#define DICE_RETROMOUSE_PADDLE3_Y_INFO_0_EL NULL
#define DICE_MANYMOUSE_PADDLE0_LABEL_EL NULL
#define DICE_MANYMOUSE_PADDLE0_INFO_0_EL NULL
#define DICE_MANYMOUSE_PADDLE0_X_LABEL_EL NULL
#define DICE_MANYMOUSE_PADDLE0_X_LABEL_CAT_EL NULL
#define OPTION_VAL_0X_EL NULL
#define OPTION_VAL_0Y_EL NULL
#define OPTION_VAL_1X_EL NULL
#define OPTION_VAL_1Y_EL NULL
#define OPTION_VAL_2X_EL NULL
#define OPTION_VAL_2Y_EL NULL
#define OPTION_VAL_3X_EL NULL
#define OPTION_VAL_3Y_EL NULL
#define DICE_MANYMOUSE_PADDLE0_Y_LABEL_EL NULL
#define DICE_MANYMOUSE_PADDLE0_Y_LABEL_CAT_EL NULL
#define DICE_MANYMOUSE_PADDLE1_LABEL_EL NULL
#define DICE_MANYMOUSE_PADDLE1_INFO_0_EL NULL
#define DICE_MANYMOUSE_PADDLE1_X_LABEL_EL NULL
#define DICE_MANYMOUSE_PADDLE1_X_LABEL_CAT_EL NULL
#define DICE_MANYMOUSE_PADDLE1_Y_LABEL_EL NULL
#define DICE_MANYMOUSE_PADDLE1_Y_LABEL_CAT_EL NULL
#define DICE_MANYMOUSE_PADDLE2_LABEL_EL NULL
#define DICE_MANYMOUSE_PADDLE2_INFO_0_EL NULL
#define DICE_MANYMOUSE_PADDLE2_X_LABEL_EL NULL
#define DICE_MANYMOUSE_PADDLE2_X_LABEL_CAT_EL NULL
#define DICE_MANYMOUSE_PADDLE2_Y_LABEL_EL NULL
#define DICE_MANYMOUSE_PADDLE2_Y_LABEL_CAT_EL NULL
#define DICE_MANYMOUSE_PADDLE3_LABEL_EL NULL
#define DICE_MANYMOUSE_PADDLE3_INFO_0_EL NULL
#define DICE_MANYMOUSE_PADDLE3_X_LABEL_EL NULL
#define DICE_MANYMOUSE_PADDLE3_X_LABEL_CAT_EL NULL
#define DICE_MANYMOUSE_PADDLE3_Y_LABEL_EL NULL
#define DICE_MANYMOUSE_PADDLE3_Y_LABEL_CAT_EL NULL
#define DICE_DIPSWITCH_1_LABEL_EL NULL
#define DICE_DIPSWITCH_1_LABEL_CAT_EL NULL
#define DICE_DIPSWITCH_1_INFO_0_EL NULL
#define OPTION_VAL_1_EL NULL
#define DICE_DIPSWITCH_2_LABEL_EL NULL
#define DICE_DIPSWITCH_2_LABEL_CAT_EL NULL
#define DICE_DIPSWITCH_2_INFO_0_EL NULL
#define DICE_DIPSWITCH_3_LABEL_EL NULL
#define DICE_DIPSWITCH_3_LABEL_CAT_EL NULL
#define DICE_DIPSWITCH_3_INFO_0_EL NULL
#define DICE_DIPSWITCH16_1_LABEL_EL NULL
#define DICE_DIPSWITCH16_1_LABEL_CAT_EL NULL
#define DICE_DIPSWITCH16_1_INFO_0_EL NULL
#define DICE_DIPSWITCH16_2_LABEL_EL NULL
#define DICE_DIPSWITCH16_2_LABEL_CAT_EL NULL
#define DICE_DIPSWITCH16_2_INFO_0_EL NULL

struct retro_core_option_v2_category option_cats_el[] = {
   {
      "input",
      CATEGORY_INPUT_LABEL_EL,
      CATEGORY_INPUT_INFO_0_EL
   },
   {
      "retromouse",
      CATEGORY_RETROMOUSE_LABEL_EL,
      CATEGORY_RETROMOUSE_INFO_0_EL
   },
#ifdef MANYMOUSE
   {
      "manymouse",
      CATEGORY_MANYMOUSE_LABEL_EL,
      CATEGORY_MANYMOUSE_INFO_0_EL
   },
#endif
   {
      "dipswitch",
      CATEGORY_DIPSWITCH_LABEL_EL,
      CATEGORY_DIPSWITCH_INFO_0_EL
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_el[] = {
   {
      "dice_use_mouse_pointer_for_paddle_1",
      DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_LABEL_EL,
      DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_LABEL_CAT_EL,
      DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_INFO_0_EL,
      NULL,
      "input",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_paddle_joystick_absolute",
      DICE_PADDLE_JOYSTICK_ABSOLUTE_LABEL_EL,
      DICE_PADDLE_JOYSTICK_ABSOLUTE_LABEL_CAT_EL,
      DICE_PADDLE_JOYSTICK_ABSOLUTE_INFO_0_EL,
      NULL,
      "input",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      // D-pad but not necessarily keyboard under libretro,
      // that name comes from the upstream code.
      "dice_paddle_keyboard_sensitivity",
      DICE_PADDLE_KEYBOARD_SENSITIVITY_LABEL_EL,
      DICE_PADDLE_KEYBOARD_SENSITIVITY_LABEL_CAT_EL,
      DICE_PADDLE_KEYBOARD_SENSITIVITY_INFO_0_EL,
      NULL,
      "input",
      {
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "250"
   },
   {
      "dice_paddle_joystick_sensitivity",
      DICE_PADDLE_JOYSTICK_SENSITIVITY_LABEL_EL,
      DICE_PADDLE_JOYSTICK_SENSITIVITY_LABEL_CAT_EL,
      DICE_PADDLE_JOYSTICK_SENSITIVITY_INFO_0_EL,
      NULL,
      "input",
      {
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "500"
   },
   {
      "dice_retromouse_paddle_sensitivity",
      DICE_RETROMOUSE_PADDLE_SENSITIVITY_LABEL_EL,
      DICE_RETROMOUSE_PADDLE_SENSITIVITY_LABEL_CAT_EL,
      DICE_RETROMOUSE_PADDLE_SENSITIVITY_INFO_0_EL,
      NULL,
      "input",
      {
         {"25", NULL},
         {"50", NULL},
         {"75", NULL},
         {"100", NULL},
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "125"
   },
   {
      "dice_wheel_keyjoy_sensitivity",
      DICE_WHEEL_KEYJOY_SENSITIVITY_LABEL_EL,
      DICE_WHEEL_KEYJOY_SENSITIVITY_LABEL_CAT_EL,
      DICE_WHEEL_KEYJOY_SENSITIVITY_INFO_0_EL,
      NULL,
      "input",
      {
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "500"
   },
   {
      "dice_throttle_keyjoy_sensitivity",
      DICE_THROTTLE_KEYJOY_SENSITIVITY_LABEL_EL,
      DICE_THROTTLE_KEYJOY_SENSITIVITY_LABEL_CAT_EL,
      DICE_THROTTLE_KEYJOY_SENSITIVITY_INFO_0_EL,
      NULL,
      "input",
      {
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "250"
   },

   {
      "dice_retromouse_paddle0",
      DICE_RETROMOUSE_PADDLE0_LABEL_EL,
      DICE_RETROMOUSE_PADDLE0_LABEL_CAT_EL,
      DICE_RETROMOUSE_PADDLE0_INFO_0_EL,
      NULL,
      "retromouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_retromouse_paddle1",
      DICE_RETROMOUSE_PADDLE1_LABEL_EL,
      DICE_RETROMOUSE_PADDLE1_LABEL_CAT_EL,
      DICE_RETROMOUSE_PADDLE1_INFO_0_EL,
      NULL,
      "retromouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_retromouse_paddle2",
      DICE_RETROMOUSE_PADDLE2_LABEL_EL,
      DICE_RETROMOUSE_PADDLE2_LABEL_CAT_EL,
      DICE_RETROMOUSE_PADDLE2_INFO_0_EL,
      NULL,
      "retromouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_retromouse_paddle3",
      DICE_RETROMOUSE_PADDLE3_LABEL_EL,
      DICE_RETROMOUSE_PADDLE3_LABEL_CAT_EL,
      DICE_RETROMOUSE_PADDLE3_INFO_0_EL,
      NULL,
      "retromouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_retromouse_paddle0_x",
      DICE_RETROMOUSE_PADDLE0_X_LABEL_EL,
      DICE_RETROMOUSE_PADDLE0_X_LABEL_CAT_EL,
      DICE_RETROMOUSE_PADDLE0_X_INFO_0_EL,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_EL},
         {"y", OPTION_VAL_Y_EL},
         {NULL, NULL},
      },
      "x"
   },
   {
      "dice_retromouse_paddle0_y",
      DICE_RETROMOUSE_PADDLE0_Y_LABEL_EL,
      DICE_RETROMOUSE_PADDLE0_Y_LABEL_CAT_EL,
      DICE_RETROMOUSE_PADDLE0_Y_INFO_0_EL,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_EL},
         {"y", OPTION_VAL_Y_EL},
         {NULL, NULL},
      },
      "y"
   },
   {
      "dice_retromouse_paddle1_x",
      DICE_RETROMOUSE_PADDLE1_X_LABEL_EL,
      DICE_RETROMOUSE_PADDLE1_X_LABEL_CAT_EL,
      DICE_RETROMOUSE_PADDLE1_X_INFO_0_EL,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_EL},
         {"y", OPTION_VAL_Y_EL},
         {NULL, NULL},
      },
      "x"
   },
   {
      "dice_retromouse_paddle1_y",
      DICE_RETROMOUSE_PADDLE1_Y_LABEL_EL,
      DICE_RETROMOUSE_PADDLE1_Y_LABEL_CAT_EL,
      DICE_RETROMOUSE_PADDLE1_Y_INFO_0_EL,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_EL},
         {"y", OPTION_VAL_Y_EL},
         {NULL, NULL},
      },
      "y"
   },
   {
      "dice_retromouse_paddle2_x",
      DICE_RETROMOUSE_PADDLE2_X_LABEL_EL,
      DICE_RETROMOUSE_PADDLE2_X_LABEL_CAT_EL,
      DICE_RETROMOUSE_PADDLE2_X_INFO_0_EL,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_EL},
         {"y", OPTION_VAL_Y_EL},
         {NULL, NULL},
      },
      "x"
   },
   {
      "dice_retromouse_paddle2_y",
      DICE_RETROMOUSE_PADDLE2_Y_LABEL_EL,
      DICE_RETROMOUSE_PADDLE2_Y_LABEL_CAT_EL,
      DICE_RETROMOUSE_PADDLE2_Y_INFO_0_EL,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_EL},
         {"y", OPTION_VAL_Y_EL},
         {NULL, NULL},
      },
      "y"
   },
   {
      "dice_retromouse_paddle3_x",
      DICE_RETROMOUSE_PADDLE3_X_LABEL_EL,
      DICE_RETROMOUSE_PADDLE3_X_LABEL_CAT_EL,
      DICE_RETROMOUSE_PADDLE3_X_INFO_0_EL,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_EL},
         {"y", OPTION_VAL_Y_EL},
         {NULL, NULL},
      },
      "x"
   },
   {
      "dice_retromouse_paddle3_y",
      DICE_RETROMOUSE_PADDLE3_Y_LABEL_EL,
      DICE_RETROMOUSE_PADDLE3_Y_LABEL_CAT_EL,
      DICE_RETROMOUSE_PADDLE3_Y_INFO_0_EL,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_EL},
         {"y", OPTION_VAL_Y_EL},
         {NULL, NULL},
      },
      "y"
   },

#ifdef MANYMOUSE
   {
      "dice_manymouse_paddle0",
      DICE_MANYMOUSE_PADDLE0_LABEL_EL,
      DICE_RETROMOUSE_PADDLE0_LABEL_CAT_EL,
      DICE_MANYMOUSE_PADDLE0_INFO_0_EL,
      NULL,
      "manymouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_manymouse_paddle0_x",
      DICE_MANYMOUSE_PADDLE0_X_LABEL_EL,
      DICE_MANYMOUSE_PADDLE0_X_LABEL_CAT_EL,
      DICE_RETROMOUSE_PADDLE0_X_INFO_0_EL,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_EL},
         {"0y", OPTION_VAL_0Y_EL},
         {"1x", OPTION_VAL_1X_EL},
         {"1y", OPTION_VAL_1Y_EL},
         {"2x", OPTION_VAL_2X_EL},
         {"2y", OPTION_VAL_2Y_EL},
         {"3x", OPTION_VAL_3X_EL},
         {"3y", OPTION_VAL_3Y_EL},
         {NULL, NULL},
      },
      "0x"
   },
   {
      "dice_manymouse_paddle0_y",
      DICE_MANYMOUSE_PADDLE0_Y_LABEL_EL,
      DICE_MANYMOUSE_PADDLE0_Y_LABEL_CAT_EL,
      DICE_RETROMOUSE_PADDLE0_Y_INFO_0_EL,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_EL},
         {"0y", OPTION_VAL_0Y_EL},
         {"1x", OPTION_VAL_1X_EL},
         {"1y", OPTION_VAL_1Y_EL},
         {"2x", OPTION_VAL_2X_EL},
         {"2y", OPTION_VAL_2Y_EL},
         {"3x", OPTION_VAL_3X_EL},
         {"3y", OPTION_VAL_3Y_EL},
         {NULL, NULL},
      },
      "0y"
   },
   {
      "dice_manymouse_paddle1",
      DICE_MANYMOUSE_PADDLE1_LABEL_EL,
      DICE_RETROMOUSE_PADDLE1_LABEL_CAT_EL,
      DICE_MANYMOUSE_PADDLE1_INFO_0_EL,
      NULL,
      "manymouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_manymouse_paddle1_x",
      DICE_MANYMOUSE_PADDLE1_X_LABEL_EL,
      DICE_MANYMOUSE_PADDLE1_X_LABEL_CAT_EL,
      DICE_RETROMOUSE_PADDLE1_X_INFO_0_EL,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_EL},
         {"0y", OPTION_VAL_0Y_EL},
         {"1x", OPTION_VAL_1X_EL},
         {"1y", OPTION_VAL_1Y_EL},
         {"2x", OPTION_VAL_2X_EL},
         {"2y", OPTION_VAL_2Y_EL},
         {"3x", OPTION_VAL_3X_EL},
         {"3y", OPTION_VAL_3Y_EL},
         {NULL, NULL},
      },
      "1x"
   },
   {
      "dice_manymouse_paddle1_y",
      DICE_MANYMOUSE_PADDLE1_Y_LABEL_EL,
      DICE_MANYMOUSE_PADDLE1_Y_LABEL_CAT_EL,
      DICE_RETROMOUSE_PADDLE1_Y_INFO_0_EL,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_EL},
         {"0y", OPTION_VAL_0Y_EL},
         {"1x", OPTION_VAL_1X_EL},
         {"1y", OPTION_VAL_1Y_EL},
         {"2x", OPTION_VAL_2X_EL},
         {"2y", OPTION_VAL_2Y_EL},
         {"3x", OPTION_VAL_3X_EL},
         {"3y", OPTION_VAL_3Y_EL},
         {NULL, NULL},
      },
      "1y"
   },
   {
      "dice_manymouse_paddle2",
      DICE_MANYMOUSE_PADDLE2_LABEL_EL,
      DICE_RETROMOUSE_PADDLE2_LABEL_CAT_EL,
      DICE_MANYMOUSE_PADDLE2_INFO_0_EL,
      NULL,
      "manymouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_manymouse_paddle2_x",
      DICE_MANYMOUSE_PADDLE2_X_LABEL_EL,
      DICE_MANYMOUSE_PADDLE2_X_LABEL_CAT_EL,
      DICE_RETROMOUSE_PADDLE2_X_INFO_0_EL,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_EL},
         {"0y", OPTION_VAL_0Y_EL},
         {"1x", OPTION_VAL_1X_EL},
         {"1y", OPTION_VAL_1Y_EL},
         {"2x", OPTION_VAL_2X_EL},
         {"2y", OPTION_VAL_2Y_EL},
         {"3x", OPTION_VAL_3X_EL},
         {"3y", OPTION_VAL_3Y_EL},
         {NULL, NULL},
      },
      "2x"
   },
   {
      "dice_manymouse_paddle2_y",
      DICE_MANYMOUSE_PADDLE2_Y_LABEL_EL,
      DICE_MANYMOUSE_PADDLE2_Y_LABEL_CAT_EL,
      DICE_RETROMOUSE_PADDLE2_Y_INFO_0_EL,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_EL},
         {"0y", OPTION_VAL_0Y_EL},
         {"1x", OPTION_VAL_1X_EL},
         {"1y", OPTION_VAL_1Y_EL},
         {"2x", OPTION_VAL_2X_EL},
         {"2y", OPTION_VAL_2Y_EL},
         {"3x", OPTION_VAL_3X_EL},
         {"3y", OPTION_VAL_3Y_EL},
         {NULL, NULL},
      },
      "2y"
   },
   {
      "dice_manymouse_paddle3",
      DICE_MANYMOUSE_PADDLE3_LABEL_EL,
      DICE_RETROMOUSE_PADDLE3_LABEL_CAT_EL,
      DICE_MANYMOUSE_PADDLE3_INFO_0_EL,
      NULL,
      "manymouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_manymouse_paddle3_x",
      DICE_MANYMOUSE_PADDLE3_X_LABEL_EL,
      DICE_MANYMOUSE_PADDLE3_X_LABEL_CAT_EL,
      DICE_RETROMOUSE_PADDLE3_X_INFO_0_EL,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_EL},
         {"0y", OPTION_VAL_0Y_EL},
         {"1x", OPTION_VAL_1X_EL},
         {"1y", OPTION_VAL_1Y_EL},
         {"2x", OPTION_VAL_2X_EL},
         {"2y", OPTION_VAL_2Y_EL},
         {"3x", OPTION_VAL_3X_EL},
         {"3y", OPTION_VAL_3Y_EL},
         {NULL, NULL},
      },
      "3x"
   },
   {
      "dice_manymouse_paddle3_y",
      DICE_MANYMOUSE_PADDLE3_Y_LABEL_EL,
      DICE_MANYMOUSE_PADDLE3_Y_LABEL_CAT_EL,
      DICE_RETROMOUSE_PADDLE3_Y_INFO_0_EL,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_EL},
         {"0y", OPTION_VAL_0Y_EL},
         {"1x", OPTION_VAL_1X_EL},
         {"1y", OPTION_VAL_1Y_EL},
         {"2x", OPTION_VAL_2X_EL},
         {"2y", OPTION_VAL_2Y_EL},
         {"3x", OPTION_VAL_3X_EL},
         {"3y", OPTION_VAL_3Y_EL},
         {NULL, NULL},
      },
      "3y"
   },
#endif

   {
      "dice_dipswitch_1",
      DICE_DIPSWITCH_1_LABEL_EL,
      DICE_DIPSWITCH_1_LABEL_CAT_EL,
      DICE_DIPSWITCH_1_INFO_0_EL,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_EL},
         {"0", NULL},
         {"1", NULL},
         {NULL, NULL},
      },
      "-1"
   },
   {
      "dice_dipswitch_2",
      DICE_DIPSWITCH_2_LABEL_EL,
      DICE_DIPSWITCH_2_LABEL_CAT_EL,
      DICE_DIPSWITCH_2_INFO_0_EL,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_EL},
         {"0", NULL},
         {"1", NULL},
         {NULL, NULL},
      },
      "-1"
   },
   {
      "dice_dipswitch_3",
      DICE_DIPSWITCH_3_LABEL_EL,
      DICE_DIPSWITCH_3_LABEL_CAT_EL,
      DICE_DIPSWITCH_3_INFO_0_EL,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_EL},
         {"0", NULL},
         {"1", NULL},
         {NULL, NULL},
      },
      "-1"
   },
   {
      "dice_dipswitch16_1",
      DICE_DIPSWITCH16_1_LABEL_EL,
      DICE_DIPSWITCH16_1_LABEL_CAT_EL,
      DICE_DIPSWITCH16_1_INFO_0_EL,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_EL},
         {"0", NULL},
         {"1", NULL},
         {"2", NULL},
         {"3", NULL},
         {"4", NULL},
         {"5", NULL},
         {"6", NULL},
         {"7", NULL},
         {"8", NULL},
         {"9", NULL},
         {"10", NULL},
         {"11", NULL},
         {"12", NULL},
         {"13", NULL},
         {"14", NULL},
         {"15", NULL},
         {NULL, NULL},
      },
      "-1"
   },
   {
      "dice_dipswitch16_2",
      DICE_DIPSWITCH16_2_LABEL_EL,
      DICE_DIPSWITCH16_2_LABEL_CAT_EL,
      DICE_DIPSWITCH16_2_INFO_0_EL,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_EL},
         {"0", NULL},
         {"1", NULL},
         {"2", NULL},
         {"3", NULL},
         {"4", NULL},
         {"5", NULL},
         {"6", NULL},
         {"7", NULL},
         {"8", NULL},
         {"9", NULL},
         {"10", NULL},
         {"11", NULL},
         {"12", NULL},
         {"13", NULL},
         {"14", NULL},
         {"15", NULL},
         {NULL, NULL},
      },
      "-1"
   },

   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_el = {
   option_cats_el,
   option_defs_el
};

/* RETRO_LANGUAGE_EN */

#define CATEGORY_INPUT_LABEL_EN NULL
#define CATEGORY_INPUT_INFO_0_EN NULL
#define CATEGORY_RETROMOUSE_LABEL_EN NULL
#define CATEGORY_RETROMOUSE_INFO_0_EN NULL
#define CATEGORY_MANYMOUSE_LABEL_EN NULL
#define CATEGORY_MANYMOUSE_INFO_0_EN NULL
#define CATEGORY_DIPSWITCH_LABEL_EN NULL
#define CATEGORY_DIPSWITCH_INFO_0_EN NULL
#define DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_LABEL_EN NULL
#define DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_LABEL_CAT_EN NULL
#define DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_INFO_0_EN NULL
#define DICE_PADDLE_JOYSTICK_ABSOLUTE_LABEL_EN NULL
#define DICE_PADDLE_JOYSTICK_ABSOLUTE_LABEL_CAT_EN NULL
#define DICE_PADDLE_JOYSTICK_ABSOLUTE_INFO_0_EN NULL
#define DICE_PADDLE_KEYBOARD_SENSITIVITY_LABEL_EN NULL
#define DICE_PADDLE_KEYBOARD_SENSITIVITY_LABEL_CAT_EN NULL
#define DICE_PADDLE_KEYBOARD_SENSITIVITY_INFO_0_EN NULL
#define DICE_PADDLE_JOYSTICK_SENSITIVITY_LABEL_EN "Input > Paddle Analogue Stick Sensitivity"
#define DICE_PADDLE_JOYSTICK_SENSITIVITY_LABEL_CAT_EN "Paddle Analogue Stick Sensitivity"
#define DICE_PADDLE_JOYSTICK_SENSITIVITY_INFO_0_EN "Sensitivity when using analogue stick for a paddle."
#define DICE_RETROMOUSE_PADDLE_SENSITIVITY_LABEL_EN NULL
#define DICE_RETROMOUSE_PADDLE_SENSITIVITY_LABEL_CAT_EN NULL
#define DICE_RETROMOUSE_PADDLE_SENSITIVITY_INFO_0_EN NULL
#define DICE_WHEEL_KEYJOY_SENSITIVITY_LABEL_EN NULL
#define DICE_WHEEL_KEYJOY_SENSITIVITY_LABEL_CAT_EN NULL
#define DICE_WHEEL_KEYJOY_SENSITIVITY_INFO_0_EN "Sensitivity when using D-pad or analogue stick for a wheel."
#define DICE_THROTTLE_KEYJOY_SENSITIVITY_LABEL_EN NULL
#define DICE_THROTTLE_KEYJOY_SENSITIVITY_LABEL_CAT_EN NULL
#define DICE_THROTTLE_KEYJOY_SENSITIVITY_INFO_0_EN "Sensitivity when using D-pad or analogue stick for a throttle."
#define DICE_RETROMOUSE_PADDLE0_LABEL_EN NULL
#define DICE_RETROMOUSE_PADDLE0_LABEL_CAT_EN NULL
#define DICE_RETROMOUSE_PADDLE0_INFO_0_EN NULL
#define DICE_RETROMOUSE_PADDLE1_LABEL_EN NULL
#define DICE_RETROMOUSE_PADDLE1_LABEL_CAT_EN NULL
#define DICE_RETROMOUSE_PADDLE1_INFO_0_EN NULL
#define DICE_RETROMOUSE_PADDLE2_LABEL_EN NULL
#define DICE_RETROMOUSE_PADDLE2_LABEL_CAT_EN NULL
#define DICE_RETROMOUSE_PADDLE2_INFO_0_EN NULL
#define DICE_RETROMOUSE_PADDLE3_LABEL_EN NULL
#define DICE_RETROMOUSE_PADDLE3_LABEL_CAT_EN NULL
#define DICE_RETROMOUSE_PADDLE3_INFO_0_EN NULL
#define DICE_RETROMOUSE_PADDLE0_X_LABEL_EN NULL
#define DICE_RETROMOUSE_PADDLE0_X_LABEL_CAT_EN NULL
#define DICE_RETROMOUSE_PADDLE0_X_INFO_0_EN NULL
#define OPTION_VAL_X_EN NULL
#define OPTION_VAL_Y_EN NULL
#define DICE_RETROMOUSE_PADDLE0_Y_LABEL_EN NULL
#define DICE_RETROMOUSE_PADDLE0_Y_LABEL_CAT_EN NULL
#define DICE_RETROMOUSE_PADDLE0_Y_INFO_0_EN NULL
#define DICE_RETROMOUSE_PADDLE1_X_LABEL_EN NULL
#define DICE_RETROMOUSE_PADDLE1_X_LABEL_CAT_EN NULL
#define DICE_RETROMOUSE_PADDLE1_X_INFO_0_EN NULL
#define DICE_RETROMOUSE_PADDLE1_Y_LABEL_EN NULL
#define DICE_RETROMOUSE_PADDLE1_Y_LABEL_CAT_EN NULL
#define DICE_RETROMOUSE_PADDLE1_Y_INFO_0_EN NULL
#define DICE_RETROMOUSE_PADDLE2_X_LABEL_EN NULL
#define DICE_RETROMOUSE_PADDLE2_X_LABEL_CAT_EN NULL
#define DICE_RETROMOUSE_PADDLE2_X_INFO_0_EN NULL
#define DICE_RETROMOUSE_PADDLE2_Y_LABEL_EN NULL
#define DICE_RETROMOUSE_PADDLE2_Y_LABEL_CAT_EN NULL
#define DICE_RETROMOUSE_PADDLE2_Y_INFO_0_EN NULL
#define DICE_RETROMOUSE_PADDLE3_X_LABEL_EN NULL
#define DICE_RETROMOUSE_PADDLE3_X_LABEL_CAT_EN NULL
#define DICE_RETROMOUSE_PADDLE3_X_INFO_0_EN NULL
#define DICE_RETROMOUSE_PADDLE3_Y_LABEL_EN NULL
#define DICE_RETROMOUSE_PADDLE3_Y_LABEL_CAT_EN NULL
#define DICE_RETROMOUSE_PADDLE3_Y_INFO_0_EN NULL
#define DICE_MANYMOUSE_PADDLE0_LABEL_EN NULL
#define DICE_MANYMOUSE_PADDLE0_INFO_0_EN NULL
#define DICE_MANYMOUSE_PADDLE0_X_LABEL_EN NULL
#define DICE_MANYMOUSE_PADDLE0_X_LABEL_CAT_EN NULL
#define OPTION_VAL_0X_EN NULL
#define OPTION_VAL_0Y_EN NULL
#define OPTION_VAL_1X_EN NULL
#define OPTION_VAL_1Y_EN NULL
#define OPTION_VAL_2X_EN NULL
#define OPTION_VAL_2Y_EN NULL
#define OPTION_VAL_3X_EN NULL
#define OPTION_VAL_3Y_EN NULL
#define DICE_MANYMOUSE_PADDLE0_Y_LABEL_EN NULL
#define DICE_MANYMOUSE_PADDLE0_Y_LABEL_CAT_EN NULL
#define DICE_MANYMOUSE_PADDLE1_LABEL_EN NULL
#define DICE_MANYMOUSE_PADDLE1_INFO_0_EN NULL
#define DICE_MANYMOUSE_PADDLE1_X_LABEL_EN NULL
#define DICE_MANYMOUSE_PADDLE1_X_LABEL_CAT_EN NULL
#define DICE_MANYMOUSE_PADDLE1_Y_LABEL_EN NULL
#define DICE_MANYMOUSE_PADDLE1_Y_LABEL_CAT_EN NULL
#define DICE_MANYMOUSE_PADDLE2_LABEL_EN NULL
#define DICE_MANYMOUSE_PADDLE2_INFO_0_EN NULL
#define DICE_MANYMOUSE_PADDLE2_X_LABEL_EN NULL
#define DICE_MANYMOUSE_PADDLE2_X_LABEL_CAT_EN NULL
#define DICE_MANYMOUSE_PADDLE2_Y_LABEL_EN NULL
#define DICE_MANYMOUSE_PADDLE2_Y_LABEL_CAT_EN NULL
#define DICE_MANYMOUSE_PADDLE3_LABEL_EN NULL
#define DICE_MANYMOUSE_PADDLE3_INFO_0_EN NULL
#define DICE_MANYMOUSE_PADDLE3_X_LABEL_EN NULL
#define DICE_MANYMOUSE_PADDLE3_X_LABEL_CAT_EN NULL
#define DICE_MANYMOUSE_PADDLE3_Y_LABEL_EN NULL
#define DICE_MANYMOUSE_PADDLE3_Y_LABEL_CAT_EN NULL
#define DICE_DIPSWITCH_1_LABEL_EN NULL
#define DICE_DIPSWITCH_1_LABEL_CAT_EN NULL
#define DICE_DIPSWITCH_1_INFO_0_EN NULL
#define OPTION_VAL_1_EN NULL
#define DICE_DIPSWITCH_2_LABEL_EN NULL
#define DICE_DIPSWITCH_2_LABEL_CAT_EN NULL
#define DICE_DIPSWITCH_2_INFO_0_EN NULL
#define DICE_DIPSWITCH_3_LABEL_EN NULL
#define DICE_DIPSWITCH_3_LABEL_CAT_EN NULL
#define DICE_DIPSWITCH_3_INFO_0_EN NULL
#define DICE_DIPSWITCH16_1_LABEL_EN NULL
#define DICE_DIPSWITCH16_1_LABEL_CAT_EN NULL
#define DICE_DIPSWITCH16_1_INFO_0_EN NULL
#define DICE_DIPSWITCH16_2_LABEL_EN NULL
#define DICE_DIPSWITCH16_2_LABEL_CAT_EN NULL
#define DICE_DIPSWITCH16_2_INFO_0_EN NULL

struct retro_core_option_v2_category option_cats_en[] = {
   {
      "input",
      CATEGORY_INPUT_LABEL_EN,
      CATEGORY_INPUT_INFO_0_EN
   },
   {
      "retromouse",
      CATEGORY_RETROMOUSE_LABEL_EN,
      CATEGORY_RETROMOUSE_INFO_0_EN
   },
#ifdef MANYMOUSE
   {
      "manymouse",
      CATEGORY_MANYMOUSE_LABEL_EN,
      CATEGORY_MANYMOUSE_INFO_0_EN
   },
#endif
   {
      "dipswitch",
      CATEGORY_DIPSWITCH_LABEL_EN,
      CATEGORY_DIPSWITCH_INFO_0_EN
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_en[] = {
   {
      "dice_use_mouse_pointer_for_paddle_1",
      DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_LABEL_EN,
      DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_LABEL_CAT_EN,
      DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_INFO_0_EN,
      NULL,
      "input",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_paddle_joystick_absolute",
      DICE_PADDLE_JOYSTICK_ABSOLUTE_LABEL_EN,
      DICE_PADDLE_JOYSTICK_ABSOLUTE_LABEL_CAT_EN,
      DICE_PADDLE_JOYSTICK_ABSOLUTE_INFO_0_EN,
      NULL,
      "input",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      // D-pad but not necessarily keyboard under libretro,
      // that name comes from the upstream code.
      "dice_paddle_keyboard_sensitivity",
      DICE_PADDLE_KEYBOARD_SENSITIVITY_LABEL_EN,
      DICE_PADDLE_KEYBOARD_SENSITIVITY_LABEL_CAT_EN,
      DICE_PADDLE_KEYBOARD_SENSITIVITY_INFO_0_EN,
      NULL,
      "input",
      {
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "250"
   },
   {
      "dice_paddle_joystick_sensitivity",
      DICE_PADDLE_JOYSTICK_SENSITIVITY_LABEL_EN,
      DICE_PADDLE_JOYSTICK_SENSITIVITY_LABEL_CAT_EN,
      DICE_PADDLE_JOYSTICK_SENSITIVITY_INFO_0_EN,
      NULL,
      "input",
      {
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "500"
   },
   {
      "dice_retromouse_paddle_sensitivity",
      DICE_RETROMOUSE_PADDLE_SENSITIVITY_LABEL_EN,
      DICE_RETROMOUSE_PADDLE_SENSITIVITY_LABEL_CAT_EN,
      DICE_RETROMOUSE_PADDLE_SENSITIVITY_INFO_0_EN,
      NULL,
      "input",
      {
         {"25", NULL},
         {"50", NULL},
         {"75", NULL},
         {"100", NULL},
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "125"
   },
   {
      "dice_wheel_keyjoy_sensitivity",
      DICE_WHEEL_KEYJOY_SENSITIVITY_LABEL_EN,
      DICE_WHEEL_KEYJOY_SENSITIVITY_LABEL_CAT_EN,
      DICE_WHEEL_KEYJOY_SENSITIVITY_INFO_0_EN,
      NULL,
      "input",
      {
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "500"
   },
   {
      "dice_throttle_keyjoy_sensitivity",
      DICE_THROTTLE_KEYJOY_SENSITIVITY_LABEL_EN,
      DICE_THROTTLE_KEYJOY_SENSITIVITY_LABEL_CAT_EN,
      DICE_THROTTLE_KEYJOY_SENSITIVITY_INFO_0_EN,
      NULL,
      "input",
      {
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "250"
   },

   {
      "dice_retromouse_paddle0",
      DICE_RETROMOUSE_PADDLE0_LABEL_EN,
      DICE_RETROMOUSE_PADDLE0_LABEL_CAT_EN,
      DICE_RETROMOUSE_PADDLE0_INFO_0_EN,
      NULL,
      "retromouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_retromouse_paddle1",
      DICE_RETROMOUSE_PADDLE1_LABEL_EN,
      DICE_RETROMOUSE_PADDLE1_LABEL_CAT_EN,
      DICE_RETROMOUSE_PADDLE1_INFO_0_EN,
      NULL,
      "retromouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_retromouse_paddle2",
      DICE_RETROMOUSE_PADDLE2_LABEL_EN,
      DICE_RETROMOUSE_PADDLE2_LABEL_CAT_EN,
      DICE_RETROMOUSE_PADDLE2_INFO_0_EN,
      NULL,
      "retromouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_retromouse_paddle3",
      DICE_RETROMOUSE_PADDLE3_LABEL_EN,
      DICE_RETROMOUSE_PADDLE3_LABEL_CAT_EN,
      DICE_RETROMOUSE_PADDLE3_INFO_0_EN,
      NULL,
      "retromouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_retromouse_paddle0_x",
      DICE_RETROMOUSE_PADDLE0_X_LABEL_EN,
      DICE_RETROMOUSE_PADDLE0_X_LABEL_CAT_EN,
      DICE_RETROMOUSE_PADDLE0_X_INFO_0_EN,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_EN},
         {"y", OPTION_VAL_Y_EN},
         {NULL, NULL},
      },
      "x"
   },
   {
      "dice_retromouse_paddle0_y",
      DICE_RETROMOUSE_PADDLE0_Y_LABEL_EN,
      DICE_RETROMOUSE_PADDLE0_Y_LABEL_CAT_EN,
      DICE_RETROMOUSE_PADDLE0_Y_INFO_0_EN,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_EN},
         {"y", OPTION_VAL_Y_EN},
         {NULL, NULL},
      },
      "y"
   },
   {
      "dice_retromouse_paddle1_x",
      DICE_RETROMOUSE_PADDLE1_X_LABEL_EN,
      DICE_RETROMOUSE_PADDLE1_X_LABEL_CAT_EN,
      DICE_RETROMOUSE_PADDLE1_X_INFO_0_EN,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_EN},
         {"y", OPTION_VAL_Y_EN},
         {NULL, NULL},
      },
      "x"
   },
   {
      "dice_retromouse_paddle1_y",
      DICE_RETROMOUSE_PADDLE1_Y_LABEL_EN,
      DICE_RETROMOUSE_PADDLE1_Y_LABEL_CAT_EN,
      DICE_RETROMOUSE_PADDLE1_Y_INFO_0_EN,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_EN},
         {"y", OPTION_VAL_Y_EN},
         {NULL, NULL},
      },
      "y"
   },
   {
      "dice_retromouse_paddle2_x",
      DICE_RETROMOUSE_PADDLE2_X_LABEL_EN,
      DICE_RETROMOUSE_PADDLE2_X_LABEL_CAT_EN,
      DICE_RETROMOUSE_PADDLE2_X_INFO_0_EN,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_EN},
         {"y", OPTION_VAL_Y_EN},
         {NULL, NULL},
      },
      "x"
   },
   {
      "dice_retromouse_paddle2_y",
      DICE_RETROMOUSE_PADDLE2_Y_LABEL_EN,
      DICE_RETROMOUSE_PADDLE2_Y_LABEL_CAT_EN,
      DICE_RETROMOUSE_PADDLE2_Y_INFO_0_EN,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_EN},
         {"y", OPTION_VAL_Y_EN},
         {NULL, NULL},
      },
      "y"
   },
   {
      "dice_retromouse_paddle3_x",
      DICE_RETROMOUSE_PADDLE3_X_LABEL_EN,
      DICE_RETROMOUSE_PADDLE3_X_LABEL_CAT_EN,
      DICE_RETROMOUSE_PADDLE3_X_INFO_0_EN,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_EN},
         {"y", OPTION_VAL_Y_EN},
         {NULL, NULL},
      },
      "x"
   },
   {
      "dice_retromouse_paddle3_y",
      DICE_RETROMOUSE_PADDLE3_Y_LABEL_EN,
      DICE_RETROMOUSE_PADDLE3_Y_LABEL_CAT_EN,
      DICE_RETROMOUSE_PADDLE3_Y_INFO_0_EN,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_EN},
         {"y", OPTION_VAL_Y_EN},
         {NULL, NULL},
      },
      "y"
   },

#ifdef MANYMOUSE
   {
      "dice_manymouse_paddle0",
      DICE_MANYMOUSE_PADDLE0_LABEL_EN,
      DICE_RETROMOUSE_PADDLE0_LABEL_CAT_EN,
      DICE_MANYMOUSE_PADDLE0_INFO_0_EN,
      NULL,
      "manymouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_manymouse_paddle0_x",
      DICE_MANYMOUSE_PADDLE0_X_LABEL_EN,
      DICE_MANYMOUSE_PADDLE0_X_LABEL_CAT_EN,
      DICE_RETROMOUSE_PADDLE0_X_INFO_0_EN,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_EN},
         {"0y", OPTION_VAL_0Y_EN},
         {"1x", OPTION_VAL_1X_EN},
         {"1y", OPTION_VAL_1Y_EN},
         {"2x", OPTION_VAL_2X_EN},
         {"2y", OPTION_VAL_2Y_EN},
         {"3x", OPTION_VAL_3X_EN},
         {"3y", OPTION_VAL_3Y_EN},
         {NULL, NULL},
      },
      "0x"
   },
   {
      "dice_manymouse_paddle0_y",
      DICE_MANYMOUSE_PADDLE0_Y_LABEL_EN,
      DICE_MANYMOUSE_PADDLE0_Y_LABEL_CAT_EN,
      DICE_RETROMOUSE_PADDLE0_Y_INFO_0_EN,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_EN},
         {"0y", OPTION_VAL_0Y_EN},
         {"1x", OPTION_VAL_1X_EN},
         {"1y", OPTION_VAL_1Y_EN},
         {"2x", OPTION_VAL_2X_EN},
         {"2y", OPTION_VAL_2Y_EN},
         {"3x", OPTION_VAL_3X_EN},
         {"3y", OPTION_VAL_3Y_EN},
         {NULL, NULL},
      },
      "0y"
   },
   {
      "dice_manymouse_paddle1",
      DICE_MANYMOUSE_PADDLE1_LABEL_EN,
      DICE_RETROMOUSE_PADDLE1_LABEL_CAT_EN,
      DICE_MANYMOUSE_PADDLE1_INFO_0_EN,
      NULL,
      "manymouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_manymouse_paddle1_x",
      DICE_MANYMOUSE_PADDLE1_X_LABEL_EN,
      DICE_MANYMOUSE_PADDLE1_X_LABEL_CAT_EN,
      DICE_RETROMOUSE_PADDLE1_X_INFO_0_EN,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_EN},
         {"0y", OPTION_VAL_0Y_EN},
         {"1x", OPTION_VAL_1X_EN},
         {"1y", OPTION_VAL_1Y_EN},
         {"2x", OPTION_VAL_2X_EN},
         {"2y", OPTION_VAL_2Y_EN},
         {"3x", OPTION_VAL_3X_EN},
         {"3y", OPTION_VAL_3Y_EN},
         {NULL, NULL},
      },
      "1x"
   },
   {
      "dice_manymouse_paddle1_y",
      DICE_MANYMOUSE_PADDLE1_Y_LABEL_EN,
      DICE_MANYMOUSE_PADDLE1_Y_LABEL_CAT_EN,
      DICE_RETROMOUSE_PADDLE1_Y_INFO_0_EN,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_EN},
         {"0y", OPTION_VAL_0Y_EN},
         {"1x", OPTION_VAL_1X_EN},
         {"1y", OPTION_VAL_1Y_EN},
         {"2x", OPTION_VAL_2X_EN},
         {"2y", OPTION_VAL_2Y_EN},
         {"3x", OPTION_VAL_3X_EN},
         {"3y", OPTION_VAL_3Y_EN},
         {NULL, NULL},
      },
      "1y"
   },
   {
      "dice_manymouse_paddle2",
      DICE_MANYMOUSE_PADDLE2_LABEL_EN,
      DICE_RETROMOUSE_PADDLE2_LABEL_CAT_EN,
      DICE_MANYMOUSE_PADDLE2_INFO_0_EN,
      NULL,
      "manymouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_manymouse_paddle2_x",
      DICE_MANYMOUSE_PADDLE2_X_LABEL_EN,
      DICE_MANYMOUSE_PADDLE2_X_LABEL_CAT_EN,
      DICE_RETROMOUSE_PADDLE2_X_INFO_0_EN,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_EN},
         {"0y", OPTION_VAL_0Y_EN},
         {"1x", OPTION_VAL_1X_EN},
         {"1y", OPTION_VAL_1Y_EN},
         {"2x", OPTION_VAL_2X_EN},
         {"2y", OPTION_VAL_2Y_EN},
         {"3x", OPTION_VAL_3X_EN},
         {"3y", OPTION_VAL_3Y_EN},
         {NULL, NULL},
      },
      "2x"
   },
   {
      "dice_manymouse_paddle2_y",
      DICE_MANYMOUSE_PADDLE2_Y_LABEL_EN,
      DICE_MANYMOUSE_PADDLE2_Y_LABEL_CAT_EN,
      DICE_RETROMOUSE_PADDLE2_Y_INFO_0_EN,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_EN},
         {"0y", OPTION_VAL_0Y_EN},
         {"1x", OPTION_VAL_1X_EN},
         {"1y", OPTION_VAL_1Y_EN},
         {"2x", OPTION_VAL_2X_EN},
         {"2y", OPTION_VAL_2Y_EN},
         {"3x", OPTION_VAL_3X_EN},
         {"3y", OPTION_VAL_3Y_EN},
         {NULL, NULL},
      },
      "2y"
   },
   {
      "dice_manymouse_paddle3",
      DICE_MANYMOUSE_PADDLE3_LABEL_EN,
      DICE_RETROMOUSE_PADDLE3_LABEL_CAT_EN,
      DICE_MANYMOUSE_PADDLE3_INFO_0_EN,
      NULL,
      "manymouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_manymouse_paddle3_x",
      DICE_MANYMOUSE_PADDLE3_X_LABEL_EN,
      DICE_MANYMOUSE_PADDLE3_X_LABEL_CAT_EN,
      DICE_RETROMOUSE_PADDLE3_X_INFO_0_EN,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_EN},
         {"0y", OPTION_VAL_0Y_EN},
         {"1x", OPTION_VAL_1X_EN},
         {"1y", OPTION_VAL_1Y_EN},
         {"2x", OPTION_VAL_2X_EN},
         {"2y", OPTION_VAL_2Y_EN},
         {"3x", OPTION_VAL_3X_EN},
         {"3y", OPTION_VAL_3Y_EN},
         {NULL, NULL},
      },
      "3x"
   },
   {
      "dice_manymouse_paddle3_y",
      DICE_MANYMOUSE_PADDLE3_Y_LABEL_EN,
      DICE_MANYMOUSE_PADDLE3_Y_LABEL_CAT_EN,
      DICE_RETROMOUSE_PADDLE3_Y_INFO_0_EN,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_EN},
         {"0y", OPTION_VAL_0Y_EN},
         {"1x", OPTION_VAL_1X_EN},
         {"1y", OPTION_VAL_1Y_EN},
         {"2x", OPTION_VAL_2X_EN},
         {"2y", OPTION_VAL_2Y_EN},
         {"3x", OPTION_VAL_3X_EN},
         {"3y", OPTION_VAL_3Y_EN},
         {NULL, NULL},
      },
      "3y"
   },
#endif

   {
      "dice_dipswitch_1",
      DICE_DIPSWITCH_1_LABEL_EN,
      DICE_DIPSWITCH_1_LABEL_CAT_EN,
      DICE_DIPSWITCH_1_INFO_0_EN,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_EN},
         {"0", NULL},
         {"1", NULL},
         {NULL, NULL},
      },
      "-1"
   },
   {
      "dice_dipswitch_2",
      DICE_DIPSWITCH_2_LABEL_EN,
      DICE_DIPSWITCH_2_LABEL_CAT_EN,
      DICE_DIPSWITCH_2_INFO_0_EN,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_EN},
         {"0", NULL},
         {"1", NULL},
         {NULL, NULL},
      },
      "-1"
   },
   {
      "dice_dipswitch_3",
      DICE_DIPSWITCH_3_LABEL_EN,
      DICE_DIPSWITCH_3_LABEL_CAT_EN,
      DICE_DIPSWITCH_3_INFO_0_EN,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_EN},
         {"0", NULL},
         {"1", NULL},
         {NULL, NULL},
      },
      "-1"
   },
   {
      "dice_dipswitch16_1",
      DICE_DIPSWITCH16_1_LABEL_EN,
      DICE_DIPSWITCH16_1_LABEL_CAT_EN,
      DICE_DIPSWITCH16_1_INFO_0_EN,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_EN},
         {"0", NULL},
         {"1", NULL},
         {"2", NULL},
         {"3", NULL},
         {"4", NULL},
         {"5", NULL},
         {"6", NULL},
         {"7", NULL},
         {"8", NULL},
         {"9", NULL},
         {"10", NULL},
         {"11", NULL},
         {"12", NULL},
         {"13", NULL},
         {"14", NULL},
         {"15", NULL},
         {NULL, NULL},
      },
      "-1"
   },
   {
      "dice_dipswitch16_2",
      DICE_DIPSWITCH16_2_LABEL_EN,
      DICE_DIPSWITCH16_2_LABEL_CAT_EN,
      DICE_DIPSWITCH16_2_INFO_0_EN,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_EN},
         {"0", NULL},
         {"1", NULL},
         {"2", NULL},
         {"3", NULL},
         {"4", NULL},
         {"5", NULL},
         {"6", NULL},
         {"7", NULL},
         {"8", NULL},
         {"9", NULL},
         {"10", NULL},
         {"11", NULL},
         {"12", NULL},
         {"13", NULL},
         {"14", NULL},
         {"15", NULL},
         {NULL, NULL},
      },
      "-1"
   },

   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_en = {
   option_cats_en,
   option_defs_en
};

/* RETRO_LANGUAGE_EO */

#define CATEGORY_INPUT_LABEL_EO "Enigo"
#define CATEGORY_INPUT_INFO_0_EO "Konfiguri enigajn agordojn specifajn de kerno."
#define CATEGORY_RETROMOUSE_LABEL_EO NULL
#define CATEGORY_RETROMOUSE_INFO_0_EO "Konfiguri plurmusajn agordojn de libretro."
#define CATEGORY_MANYMOUSE_LABEL_EO NULL
#define CATEGORY_MANYMOUSE_INFO_0_EO "Konfiguri plurmusajn agordojn de ManyMouse."
#define CATEGORY_DIPSWITCH_LABEL_EO "Ŝaltilo DIP"
#define CATEGORY_DIPSWITCH_INFO_0_EO "Konfiguri agordojn pri ŝaltilo DIP kaj potenciometro."
#define DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_LABEL_EO "Enigo > Uzi musindikilon por \"paddle\" 1"
#define DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_LABEL_CAT_EO "Uzi muzindikilon por \"paddle\" 1"
#define DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_INFO_0_EO "Uzi la sisteman musindikilon kiel regilo de \"paddle\" 1. Ĝi ne lasas al vi elekti specifan muson se vi havas pluraj."
#define DICE_PADDLE_JOYSTICK_ABSOLUTE_LABEL_EO "Enigo > Stirstango de \"paddle\" uzas absolutan movon"
#define DICE_PADDLE_JOYSTICK_ABSOLUTE_LABEL_CAT_EO "Stirstango de \"paddle\" uzas absolutan movon"
#define DICE_PADDLE_JOYSTICK_ABSOLUTE_INFO_0_EO "Rekte asigni stirstangan movgamon al gamo de \"paddle\", anstataŭ relativaj movoj."
#define DICE_PADDLE_KEYBOARD_SENSITIVITY_LABEL_EO "Enigo > Direktokruca sentemo de \"paddle\""
#define DICE_PADDLE_KEYBOARD_SENSITIVITY_LABEL_CAT_EO "Direktokruca sentemo de \"Paddle\""
#define DICE_PADDLE_KEYBOARD_SENSITIVITY_INFO_0_EO "Sentemo kiam uzante direktokrucon kiel \"paddle\"."
#define DICE_PADDLE_JOYSTICK_SENSITIVITY_LABEL_EO "Enigo > Analogstanga sentemo de \"paddle\""
#define DICE_PADDLE_JOYSTICK_SENSITIVITY_LABEL_CAT_EO "Analogstanga sentemo de \"paddle\""
#define DICE_PADDLE_JOYSTICK_SENSITIVITY_INFO_0_EO "Sentemo kiam uzante analogstangon por \"paddle\"."
#define DICE_RETROMOUSE_PADDLE_SENSITIVITY_LABEL_EO "Enigo > Sentemo de RetroMouse por \"Paddle\""
#define DICE_RETROMOUSE_PADDLE_SENSITIVITY_LABEL_CAT_EO "Sentemo de RetroMouse por \"Paddle\""
#define DICE_RETROMOUSE_PADDLE_SENSITIVITY_INFO_0_EO "Sentemo kiam uzante RetroMouse por \"paddle\"."
#define DICE_WHEEL_KEYJOY_SENSITIVITY_LABEL_EO "Enigo > Direktila sentemo"
#define DICE_WHEEL_KEYJOY_SENSITIVITY_LABEL_CAT_EO "Direktila sentemo"
#define DICE_WHEEL_KEYJOY_SENSITIVITY_INFO_0_EO "Sentemo kiam uzante direktokrucon aŭ analogstangon por direktilo."
#define DICE_THROTTLE_KEYJOY_SENSITIVITY_LABEL_EO "Enigo > Akcelila sentemo"
#define DICE_THROTTLE_KEYJOY_SENSITIVITY_LABEL_CAT_EO "Akcelila sentemo"
#define DICE_THROTTLE_KEYJOY_SENSITIVITY_INFO_0_EO "Sentemo kiam uzante direktokrucon aŭ analogstangon por akcelilo."
#define DICE_RETROMOUSE_PADDLE0_LABEL_EO "RetroMouse > Uzi muson por \"paddle\" 1"
#define DICE_RETROMOUSE_PADDLE0_LABEL_CAT_EO "Uzi muson por \"paddle\" 1"
#define DICE_RETROMOUSE_PADDLE0_INFO_0_EO "Uzi specifan muson por \"paddle\" 1, elektita de musa indico de konektejo 1."
#define DICE_RETROMOUSE_PADDLE1_LABEL_EO "RetroMouse > Uzi muson por \"paddle\" 2"
#define DICE_RETROMOUSE_PADDLE1_LABEL_CAT_EO "Uzi muson por \"paddle\" 2"
#define DICE_RETROMOUSE_PADDLE1_INFO_0_EO "Uzi specifan muson por \"paddle\" 2, elektita de musa indico de konektejo 2."
#define DICE_RETROMOUSE_PADDLE2_LABEL_EO "RetroMouse > Uzi muson por \"paddle\" 3"
#define DICE_RETROMOUSE_PADDLE2_LABEL_CAT_EO "Uzi muson por \"paddle\" 3"
#define DICE_RETROMOUSE_PADDLE2_INFO_0_EO "Uzi specifan muson por \"paddle\" 3, elektita de musa indico de konektejo 3."
#define DICE_RETROMOUSE_PADDLE3_LABEL_EO "RetroMouse > Uzi muson por \"paddle\" 4"
#define DICE_RETROMOUSE_PADDLE3_LABEL_CAT_EO "Uzi muson por \"paddle\" 4"
#define DICE_RETROMOUSE_PADDLE3_INFO_0_EO "Uzi specifan muson por \"paddle\" 4, elektita de musa indico de konektejo 4."
#define DICE_RETROMOUSE_PADDLE0_X_LABEL_EO "RetroMouse > Musa akso por horizontalo de \"paddle\" 1"
#define DICE_RETROMOUSE_PADDLE0_X_LABEL_CAT_EO "Musa akso por horizontalo de \"paddle\" 1"
#define DICE_RETROMOUSE_PADDLE0_X_INFO_0_EO "Musa akso por ludanto 1, horizontala ekrana movo."
#define OPTION_VAL_X_EO NULL
#define OPTION_VAL_Y_EO NULL
#define DICE_RETROMOUSE_PADDLE0_Y_LABEL_EO "RetroMouse > Musa akso por vertikalo de \"paddle\" 1"
#define DICE_RETROMOUSE_PADDLE0_Y_LABEL_CAT_EO "Musa akso por vertikalo de \"paddle\" 1"
#define DICE_RETROMOUSE_PADDLE0_Y_INFO_0_EO "Musa akso por ludanto 1, vertikala ekrana movo."
#define DICE_RETROMOUSE_PADDLE1_X_LABEL_EO "RetroMouse > Musa akso por horizontalo de \"paddle\" 2"
#define DICE_RETROMOUSE_PADDLE1_X_LABEL_CAT_EO "Musa akso por horizontalo de \"paddle\" 2"
#define DICE_RETROMOUSE_PADDLE1_X_INFO_0_EO "Musa akso por ludanto 2, horizontala ekrana movo."
#define DICE_RETROMOUSE_PADDLE1_Y_LABEL_EO "RetroMouse > Musa akso por vertikalo de \"paddle\" 2"
#define DICE_RETROMOUSE_PADDLE1_Y_LABEL_CAT_EO "Musa akso por vertikalo de \"paddle\" 2"
#define DICE_RETROMOUSE_PADDLE1_Y_INFO_0_EO "Musa akso por ludanto 2, vertikala ekrana movo."
#define DICE_RETROMOUSE_PADDLE2_X_LABEL_EO "RetroMouse > Musa akso por horizontalo de \"paddle\" 3"
#define DICE_RETROMOUSE_PADDLE2_X_LABEL_CAT_EO "Musa akso por horizontalo de \"paddle\" 3"
#define DICE_RETROMOUSE_PADDLE2_X_INFO_0_EO "Musa akso por ludanto 3, horizontala ekrana movo."
#define DICE_RETROMOUSE_PADDLE2_Y_LABEL_EO "RetroMouse > Musa akso por vertikalo de \"paddle\" 3"
#define DICE_RETROMOUSE_PADDLE2_Y_LABEL_CAT_EO "Musa akso por vertikalo de \"paddle\" 3"
#define DICE_RETROMOUSE_PADDLE2_Y_INFO_0_EO "Musa akso por ludanto 3, vertikala ekrana movo."
#define DICE_RETROMOUSE_PADDLE3_X_LABEL_EO "RetroMouse > Musa akso por horizontalo de \"paddle\" 4"
#define DICE_RETROMOUSE_PADDLE3_X_LABEL_CAT_EO "Musa akso por horizontalo de \"paddle\" 4"
#define DICE_RETROMOUSE_PADDLE3_X_INFO_0_EO "Musa akso por ludanto 4, horizontala ekrana movo."
#define DICE_RETROMOUSE_PADDLE3_Y_LABEL_EO "RetroMouse > Musa akso por vertikalo de \"paddle\" 4"
#define DICE_RETROMOUSE_PADDLE3_Y_LABEL_CAT_EO "Musa akso por vertikalo de \"paddle\" 4"
#define DICE_RETROMOUSE_PADDLE3_Y_INFO_0_EO "Musa akso por ludanto 4, vertikala ekrana movo."
#define DICE_MANYMOUSE_PADDLE0_LABEL_EO "ManyMouse > Uzi muson por \"paddle\" 1"
#define DICE_MANYMOUSE_PADDLE0_INFO_0_EO "Uzi muson por \"paddle\" 1."
#define DICE_MANYMOUSE_PADDLE0_X_LABEL_EO "ManyMouse > X de Muso-\"paddle\" 1"
#define DICE_MANYMOUSE_PADDLE0_X_LABEL_CAT_EO "X de Muso-\"paddle\" 1"
#define OPTION_VAL_0X_EO NULL
#define OPTION_VAL_0Y_EO NULL
#define OPTION_VAL_1X_EO NULL
#define OPTION_VAL_1Y_EO NULL
#define OPTION_VAL_2X_EO NULL
#define OPTION_VAL_2Y_EO NULL
#define OPTION_VAL_3X_EO NULL
#define OPTION_VAL_3Y_EO NULL
#define DICE_MANYMOUSE_PADDLE0_Y_LABEL_EO "ManyMouse > Y de Muso-\"paddle\" 1"
#define DICE_MANYMOUSE_PADDLE0_Y_LABEL_CAT_EO "Y de Muso-\"paddle\" 1"
#define DICE_MANYMOUSE_PADDLE1_LABEL_EO "ManyMouse > Uzi muson por \"paddle\" 2"
#define DICE_MANYMOUSE_PADDLE1_INFO_0_EO "Uzi muson por \"paddle\" 2."
#define DICE_MANYMOUSE_PADDLE1_X_LABEL_EO "ManyMouse > X de Muso-\"paddle\" 2"
#define DICE_MANYMOUSE_PADDLE1_X_LABEL_CAT_EO "X de Muso-\"paddle\" 2"
#define DICE_MANYMOUSE_PADDLE1_Y_LABEL_EO "ManyMouse > Y de Muso-\"paddle\" 2"
#define DICE_MANYMOUSE_PADDLE1_Y_LABEL_CAT_EO "Y de Muso-\"paddle\" 2"
#define DICE_MANYMOUSE_PADDLE2_LABEL_EO "ManyMouse > Uzi muson por \"paddle\" 3"
#define DICE_MANYMOUSE_PADDLE2_INFO_0_EO "Uzi muson por \"paddle\" 3."
#define DICE_MANYMOUSE_PADDLE2_X_LABEL_EO "ManyMouse > X de Muso-\"paddle\" 3"
#define DICE_MANYMOUSE_PADDLE2_X_LABEL_CAT_EO "X de Muso-\"paddle\" 3"
#define DICE_MANYMOUSE_PADDLE2_Y_LABEL_EO "ManyMouse > Y de Muso-\"paddle\" 3"
#define DICE_MANYMOUSE_PADDLE2_Y_LABEL_CAT_EO "Y de Muso-\"paddle\" 3"
#define DICE_MANYMOUSE_PADDLE3_LABEL_EO "ManyMouse > Uzi muson por \"paddle\" 4"
#define DICE_MANYMOUSE_PADDLE3_INFO_0_EO "Uzi muson por \"paddle\" 4."
#define DICE_MANYMOUSE_PADDLE3_X_LABEL_EO "ManyMouse > X de Muso-\"paddle\" 4"
#define DICE_MANYMOUSE_PADDLE3_X_LABEL_CAT_EO "X de Muso-\"paddle\" 4"
#define DICE_MANYMOUSE_PADDLE3_Y_LABEL_EO "ManyMouse > Y de Muso-\"paddle\" 4"
#define DICE_MANYMOUSE_PADDLE3_Y_LABEL_CAT_EO "Y de Muso-\"paddle\" 4"
#define DICE_DIPSWITCH_1_LABEL_EO "Ŝaltilo DIP > Ŝaltilo DIP 1"
#define DICE_DIPSWITCH_1_LABEL_CAT_EO "Ŝaltilo DIP 1"
#define DICE_DIPSWITCH_1_INFO_0_EO "Agordo por ŝaltilo DIP 1."
#define OPTION_VAL_1_EO "defaŭlta"
#define DICE_DIPSWITCH_2_LABEL_EO "Ŝaltilo DIP > Ŝaltilo DIP 2"
#define DICE_DIPSWITCH_2_LABEL_CAT_EO "Ŝaltilo DIP 2"
#define DICE_DIPSWITCH_2_INFO_0_EO "Agordo por ŝaltilo DIP 2."
#define DICE_DIPSWITCH_3_LABEL_EO "Ŝaltilo DIP > Ŝaltilo DIP 3"
#define DICE_DIPSWITCH_3_LABEL_CAT_EO "Ŝaltilo DIP 3"
#define DICE_DIPSWITCH_3_INFO_0_EO "Agordo por ŝaltilo DIP 3."
#define DICE_DIPSWITCH16_1_LABEL_EO "Ŝaltilo DIP > Deksesuma ŝaltilo DIP 1"
#define DICE_DIPSWITCH16_1_LABEL_CAT_EO "Deksesuma ŝaltilo DIP 1"
#define DICE_DIPSWITCH16_1_INFO_0_EO "Agordo por deksesuma ŝaltilo DIP numero 1."
#define DICE_DIPSWITCH16_2_LABEL_EO "Ŝaltilo DIP > Deksesuma ŝaltilo DIP 2"
#define DICE_DIPSWITCH16_2_LABEL_CAT_EO "Deksesuma ŝaltilo DIP 2"
#define DICE_DIPSWITCH16_2_INFO_0_EO "Agordo por deksesuma ŝaltilo DIP numero 2."

struct retro_core_option_v2_category option_cats_eo[] = {
   {
      "input",
      CATEGORY_INPUT_LABEL_EO,
      CATEGORY_INPUT_INFO_0_EO
   },
   {
      "retromouse",
      CATEGORY_RETROMOUSE_LABEL_EO,
      CATEGORY_RETROMOUSE_INFO_0_EO
   },
#ifdef MANYMOUSE
   {
      "manymouse",
      CATEGORY_MANYMOUSE_LABEL_EO,
      CATEGORY_MANYMOUSE_INFO_0_EO
   },
#endif
   {
      "dipswitch",
      CATEGORY_DIPSWITCH_LABEL_EO,
      CATEGORY_DIPSWITCH_INFO_0_EO
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_eo[] = {
   {
      "dice_use_mouse_pointer_for_paddle_1",
      DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_LABEL_EO,
      DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_LABEL_CAT_EO,
      DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_INFO_0_EO,
      NULL,
      "input",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_paddle_joystick_absolute",
      DICE_PADDLE_JOYSTICK_ABSOLUTE_LABEL_EO,
      DICE_PADDLE_JOYSTICK_ABSOLUTE_LABEL_CAT_EO,
      DICE_PADDLE_JOYSTICK_ABSOLUTE_INFO_0_EO,
      NULL,
      "input",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      // D-pad but not necessarily keyboard under libretro,
      // that name comes from the upstream code.
      "dice_paddle_keyboard_sensitivity",
      DICE_PADDLE_KEYBOARD_SENSITIVITY_LABEL_EO,
      DICE_PADDLE_KEYBOARD_SENSITIVITY_LABEL_CAT_EO,
      DICE_PADDLE_KEYBOARD_SENSITIVITY_INFO_0_EO,
      NULL,
      "input",
      {
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "250"
   },
   {
      "dice_paddle_joystick_sensitivity",
      DICE_PADDLE_JOYSTICK_SENSITIVITY_LABEL_EO,
      DICE_PADDLE_JOYSTICK_SENSITIVITY_LABEL_CAT_EO,
      DICE_PADDLE_JOYSTICK_SENSITIVITY_INFO_0_EO,
      NULL,
      "input",
      {
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "500"
   },
   {
      "dice_retromouse_paddle_sensitivity",
      DICE_RETROMOUSE_PADDLE_SENSITIVITY_LABEL_EO,
      DICE_RETROMOUSE_PADDLE_SENSITIVITY_LABEL_CAT_EO,
      DICE_RETROMOUSE_PADDLE_SENSITIVITY_INFO_0_EO,
      NULL,
      "input",
      {
         {"25", NULL},
         {"50", NULL},
         {"75", NULL},
         {"100", NULL},
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "125"
   },
   {
      "dice_wheel_keyjoy_sensitivity",
      DICE_WHEEL_KEYJOY_SENSITIVITY_LABEL_EO,
      DICE_WHEEL_KEYJOY_SENSITIVITY_LABEL_CAT_EO,
      DICE_WHEEL_KEYJOY_SENSITIVITY_INFO_0_EO,
      NULL,
      "input",
      {
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "500"
   },
   {
      "dice_throttle_keyjoy_sensitivity",
      DICE_THROTTLE_KEYJOY_SENSITIVITY_LABEL_EO,
      DICE_THROTTLE_KEYJOY_SENSITIVITY_LABEL_CAT_EO,
      DICE_THROTTLE_KEYJOY_SENSITIVITY_INFO_0_EO,
      NULL,
      "input",
      {
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "250"
   },

   {
      "dice_retromouse_paddle0",
      DICE_RETROMOUSE_PADDLE0_LABEL_EO,
      DICE_RETROMOUSE_PADDLE0_LABEL_CAT_EO,
      DICE_RETROMOUSE_PADDLE0_INFO_0_EO,
      NULL,
      "retromouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_retromouse_paddle1",
      DICE_RETROMOUSE_PADDLE1_LABEL_EO,
      DICE_RETROMOUSE_PADDLE1_LABEL_CAT_EO,
      DICE_RETROMOUSE_PADDLE1_INFO_0_EO,
      NULL,
      "retromouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_retromouse_paddle2",
      DICE_RETROMOUSE_PADDLE2_LABEL_EO,
      DICE_RETROMOUSE_PADDLE2_LABEL_CAT_EO,
      DICE_RETROMOUSE_PADDLE2_INFO_0_EO,
      NULL,
      "retromouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_retromouse_paddle3",
      DICE_RETROMOUSE_PADDLE3_LABEL_EO,
      DICE_RETROMOUSE_PADDLE3_LABEL_CAT_EO,
      DICE_RETROMOUSE_PADDLE3_INFO_0_EO,
      NULL,
      "retromouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_retromouse_paddle0_x",
      DICE_RETROMOUSE_PADDLE0_X_LABEL_EO,
      DICE_RETROMOUSE_PADDLE0_X_LABEL_CAT_EO,
      DICE_RETROMOUSE_PADDLE0_X_INFO_0_EO,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_EO},
         {"y", OPTION_VAL_Y_EO},
         {NULL, NULL},
      },
      "x"
   },
   {
      "dice_retromouse_paddle0_y",
      DICE_RETROMOUSE_PADDLE0_Y_LABEL_EO,
      DICE_RETROMOUSE_PADDLE0_Y_LABEL_CAT_EO,
      DICE_RETROMOUSE_PADDLE0_Y_INFO_0_EO,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_EO},
         {"y", OPTION_VAL_Y_EO},
         {NULL, NULL},
      },
      "y"
   },
   {
      "dice_retromouse_paddle1_x",
      DICE_RETROMOUSE_PADDLE1_X_LABEL_EO,
      DICE_RETROMOUSE_PADDLE1_X_LABEL_CAT_EO,
      DICE_RETROMOUSE_PADDLE1_X_INFO_0_EO,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_EO},
         {"y", OPTION_VAL_Y_EO},
         {NULL, NULL},
      },
      "x"
   },
   {
      "dice_retromouse_paddle1_y",
      DICE_RETROMOUSE_PADDLE1_Y_LABEL_EO,
      DICE_RETROMOUSE_PADDLE1_Y_LABEL_CAT_EO,
      DICE_RETROMOUSE_PADDLE1_Y_INFO_0_EO,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_EO},
         {"y", OPTION_VAL_Y_EO},
         {NULL, NULL},
      },
      "y"
   },
   {
      "dice_retromouse_paddle2_x",
      DICE_RETROMOUSE_PADDLE2_X_LABEL_EO,
      DICE_RETROMOUSE_PADDLE2_X_LABEL_CAT_EO,
      DICE_RETROMOUSE_PADDLE2_X_INFO_0_EO,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_EO},
         {"y", OPTION_VAL_Y_EO},
         {NULL, NULL},
      },
      "x"
   },
   {
      "dice_retromouse_paddle2_y",
      DICE_RETROMOUSE_PADDLE2_Y_LABEL_EO,
      DICE_RETROMOUSE_PADDLE2_Y_LABEL_CAT_EO,
      DICE_RETROMOUSE_PADDLE2_Y_INFO_0_EO,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_EO},
         {"y", OPTION_VAL_Y_EO},
         {NULL, NULL},
      },
      "y"
   },
   {
      "dice_retromouse_paddle3_x",
      DICE_RETROMOUSE_PADDLE3_X_LABEL_EO,
      DICE_RETROMOUSE_PADDLE3_X_LABEL_CAT_EO,
      DICE_RETROMOUSE_PADDLE3_X_INFO_0_EO,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_EO},
         {"y", OPTION_VAL_Y_EO},
         {NULL, NULL},
      },
      "x"
   },
   {
      "dice_retromouse_paddle3_y",
      DICE_RETROMOUSE_PADDLE3_Y_LABEL_EO,
      DICE_RETROMOUSE_PADDLE3_Y_LABEL_CAT_EO,
      DICE_RETROMOUSE_PADDLE3_Y_INFO_0_EO,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_EO},
         {"y", OPTION_VAL_Y_EO},
         {NULL, NULL},
      },
      "y"
   },

#ifdef MANYMOUSE
   {
      "dice_manymouse_paddle0",
      DICE_MANYMOUSE_PADDLE0_LABEL_EO,
      DICE_RETROMOUSE_PADDLE0_LABEL_CAT_EO,
      DICE_MANYMOUSE_PADDLE0_INFO_0_EO,
      NULL,
      "manymouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_manymouse_paddle0_x",
      DICE_MANYMOUSE_PADDLE0_X_LABEL_EO,
      DICE_MANYMOUSE_PADDLE0_X_LABEL_CAT_EO,
      DICE_RETROMOUSE_PADDLE0_X_INFO_0_EO,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_EO},
         {"0y", OPTION_VAL_0Y_EO},
         {"1x", OPTION_VAL_1X_EO},
         {"1y", OPTION_VAL_1Y_EO},
         {"2x", OPTION_VAL_2X_EO},
         {"2y", OPTION_VAL_2Y_EO},
         {"3x", OPTION_VAL_3X_EO},
         {"3y", OPTION_VAL_3Y_EO},
         {NULL, NULL},
      },
      "0x"
   },
   {
      "dice_manymouse_paddle0_y",
      DICE_MANYMOUSE_PADDLE0_Y_LABEL_EO,
      DICE_MANYMOUSE_PADDLE0_Y_LABEL_CAT_EO,
      DICE_RETROMOUSE_PADDLE0_Y_INFO_0_EO,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_EO},
         {"0y", OPTION_VAL_0Y_EO},
         {"1x", OPTION_VAL_1X_EO},
         {"1y", OPTION_VAL_1Y_EO},
         {"2x", OPTION_VAL_2X_EO},
         {"2y", OPTION_VAL_2Y_EO},
         {"3x", OPTION_VAL_3X_EO},
         {"3y", OPTION_VAL_3Y_EO},
         {NULL, NULL},
      },
      "0y"
   },
   {
      "dice_manymouse_paddle1",
      DICE_MANYMOUSE_PADDLE1_LABEL_EO,
      DICE_RETROMOUSE_PADDLE1_LABEL_CAT_EO,
      DICE_MANYMOUSE_PADDLE1_INFO_0_EO,
      NULL,
      "manymouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_manymouse_paddle1_x",
      DICE_MANYMOUSE_PADDLE1_X_LABEL_EO,
      DICE_MANYMOUSE_PADDLE1_X_LABEL_CAT_EO,
      DICE_RETROMOUSE_PADDLE1_X_INFO_0_EO,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_EO},
         {"0y", OPTION_VAL_0Y_EO},
         {"1x", OPTION_VAL_1X_EO},
         {"1y", OPTION_VAL_1Y_EO},
         {"2x", OPTION_VAL_2X_EO},
         {"2y", OPTION_VAL_2Y_EO},
         {"3x", OPTION_VAL_3X_EO},
         {"3y", OPTION_VAL_3Y_EO},
         {NULL, NULL},
      },
      "1x"
   },
   {
      "dice_manymouse_paddle1_y",
      DICE_MANYMOUSE_PADDLE1_Y_LABEL_EO,
      DICE_MANYMOUSE_PADDLE1_Y_LABEL_CAT_EO,
      DICE_RETROMOUSE_PADDLE1_Y_INFO_0_EO,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_EO},
         {"0y", OPTION_VAL_0Y_EO},
         {"1x", OPTION_VAL_1X_EO},
         {"1y", OPTION_VAL_1Y_EO},
         {"2x", OPTION_VAL_2X_EO},
         {"2y", OPTION_VAL_2Y_EO},
         {"3x", OPTION_VAL_3X_EO},
         {"3y", OPTION_VAL_3Y_EO},
         {NULL, NULL},
      },
      "1y"
   },
   {
      "dice_manymouse_paddle2",
      DICE_MANYMOUSE_PADDLE2_LABEL_EO,
      DICE_RETROMOUSE_PADDLE2_LABEL_CAT_EO,
      DICE_MANYMOUSE_PADDLE2_INFO_0_EO,
      NULL,
      "manymouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_manymouse_paddle2_x",
      DICE_MANYMOUSE_PADDLE2_X_LABEL_EO,
      DICE_MANYMOUSE_PADDLE2_X_LABEL_CAT_EO,
      DICE_RETROMOUSE_PADDLE2_X_INFO_0_EO,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_EO},
         {"0y", OPTION_VAL_0Y_EO},
         {"1x", OPTION_VAL_1X_EO},
         {"1y", OPTION_VAL_1Y_EO},
         {"2x", OPTION_VAL_2X_EO},
         {"2y", OPTION_VAL_2Y_EO},
         {"3x", OPTION_VAL_3X_EO},
         {"3y", OPTION_VAL_3Y_EO},
         {NULL, NULL},
      },
      "2x"
   },
   {
      "dice_manymouse_paddle2_y",
      DICE_MANYMOUSE_PADDLE2_Y_LABEL_EO,
      DICE_MANYMOUSE_PADDLE2_Y_LABEL_CAT_EO,
      DICE_RETROMOUSE_PADDLE2_Y_INFO_0_EO,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_EO},
         {"0y", OPTION_VAL_0Y_EO},
         {"1x", OPTION_VAL_1X_EO},
         {"1y", OPTION_VAL_1Y_EO},
         {"2x", OPTION_VAL_2X_EO},
         {"2y", OPTION_VAL_2Y_EO},
         {"3x", OPTION_VAL_3X_EO},
         {"3y", OPTION_VAL_3Y_EO},
         {NULL, NULL},
      },
      "2y"
   },
   {
      "dice_manymouse_paddle3",
      DICE_MANYMOUSE_PADDLE3_LABEL_EO,
      DICE_RETROMOUSE_PADDLE3_LABEL_CAT_EO,
      DICE_MANYMOUSE_PADDLE3_INFO_0_EO,
      NULL,
      "manymouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_manymouse_paddle3_x",
      DICE_MANYMOUSE_PADDLE3_X_LABEL_EO,
      DICE_MANYMOUSE_PADDLE3_X_LABEL_CAT_EO,
      DICE_RETROMOUSE_PADDLE3_X_INFO_0_EO,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_EO},
         {"0y", OPTION_VAL_0Y_EO},
         {"1x", OPTION_VAL_1X_EO},
         {"1y", OPTION_VAL_1Y_EO},
         {"2x", OPTION_VAL_2X_EO},
         {"2y", OPTION_VAL_2Y_EO},
         {"3x", OPTION_VAL_3X_EO},
         {"3y", OPTION_VAL_3Y_EO},
         {NULL, NULL},
      },
      "3x"
   },
   {
      "dice_manymouse_paddle3_y",
      DICE_MANYMOUSE_PADDLE3_Y_LABEL_EO,
      DICE_MANYMOUSE_PADDLE3_Y_LABEL_CAT_EO,
      DICE_RETROMOUSE_PADDLE3_Y_INFO_0_EO,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_EO},
         {"0y", OPTION_VAL_0Y_EO},
         {"1x", OPTION_VAL_1X_EO},
         {"1y", OPTION_VAL_1Y_EO},
         {"2x", OPTION_VAL_2X_EO},
         {"2y", OPTION_VAL_2Y_EO},
         {"3x", OPTION_VAL_3X_EO},
         {"3y", OPTION_VAL_3Y_EO},
         {NULL, NULL},
      },
      "3y"
   },
#endif

   {
      "dice_dipswitch_1",
      DICE_DIPSWITCH_1_LABEL_EO,
      DICE_DIPSWITCH_1_LABEL_CAT_EO,
      DICE_DIPSWITCH_1_INFO_0_EO,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_EO},
         {"0", NULL},
         {"1", NULL},
         {NULL, NULL},
      },
      "-1"
   },
   {
      "dice_dipswitch_2",
      DICE_DIPSWITCH_2_LABEL_EO,
      DICE_DIPSWITCH_2_LABEL_CAT_EO,
      DICE_DIPSWITCH_2_INFO_0_EO,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_EO},
         {"0", NULL},
         {"1", NULL},
         {NULL, NULL},
      },
      "-1"
   },
   {
      "dice_dipswitch_3",
      DICE_DIPSWITCH_3_LABEL_EO,
      DICE_DIPSWITCH_3_LABEL_CAT_EO,
      DICE_DIPSWITCH_3_INFO_0_EO,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_EO},
         {"0", NULL},
         {"1", NULL},
         {NULL, NULL},
      },
      "-1"
   },
   {
      "dice_dipswitch16_1",
      DICE_DIPSWITCH16_1_LABEL_EO,
      DICE_DIPSWITCH16_1_LABEL_CAT_EO,
      DICE_DIPSWITCH16_1_INFO_0_EO,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_EO},
         {"0", NULL},
         {"1", NULL},
         {"2", NULL},
         {"3", NULL},
         {"4", NULL},
         {"5", NULL},
         {"6", NULL},
         {"7", NULL},
         {"8", NULL},
         {"9", NULL},
         {"10", NULL},
         {"11", NULL},
         {"12", NULL},
         {"13", NULL},
         {"14", NULL},
         {"15", NULL},
         {NULL, NULL},
      },
      "-1"
   },
   {
      "dice_dipswitch16_2",
      DICE_DIPSWITCH16_2_LABEL_EO,
      DICE_DIPSWITCH16_2_LABEL_CAT_EO,
      DICE_DIPSWITCH16_2_INFO_0_EO,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_EO},
         {"0", NULL},
         {"1", NULL},
         {"2", NULL},
         {"3", NULL},
         {"4", NULL},
         {"5", NULL},
         {"6", NULL},
         {"7", NULL},
         {"8", NULL},
         {"9", NULL},
         {"10", NULL},
         {"11", NULL},
         {"12", NULL},
         {"13", NULL},
         {"14", NULL},
         {"15", NULL},
         {NULL, NULL},
      },
      "-1"
   },

   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_eo = {
   option_cats_eo,
   option_defs_eo
};

/* RETRO_LANGUAGE_ES */

#define CATEGORY_INPUT_LABEL_ES "Entrada"
#define CATEGORY_INPUT_INFO_0_ES "Cambia los ajustes específicos de este núcleo."
#define CATEGORY_RETROMOUSE_LABEL_ES NULL
#define CATEGORY_RETROMOUSE_INFO_0_ES "Cambia los ajustes multiratón de libretro."
#define CATEGORY_MANYMOUSE_LABEL_ES NULL
#define CATEGORY_MANYMOUSE_INFO_0_ES "Cambia los ajustes multiratón de ManyMouse."
#define CATEGORY_DIPSWITCH_LABEL_ES "Interruptores DIP"
#define CATEGORY_DIPSWITCH_INFO_0_ES "Cambia los ajustes de los interruptores DIP y los potenciómetros."
#define DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_LABEL_ES "Entrada > Usar puntero de ratón para el «paddle» 1"
#define DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_LABEL_CAT_ES "Usar puntero de ratón para el «paddle» 1"
#define DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_INFO_0_ES "Utiliza el puntero del ratón del sistema para el «paddle» 1. Si tienes varios ratones, no podrás elegir uno en concreto."
#define DICE_PADDLE_JOYSTICK_ABSOLUTE_LABEL_ES "Entrada > Usar movimiento absoluto para la palanca del «paddle»"
#define DICE_PADDLE_JOYSTICK_ABSOLUTE_LABEL_CAT_ES "Usar movimiento absoluto para la palanca del «paddle»"
#define DICE_PADDLE_JOYSTICK_ABSOLUTE_INFO_0_ES "Asigna tal cual el rango de movimientos del joystick al rango del «paddle», en vez de asignar movimientos relativos."
#define DICE_PADDLE_KEYBOARD_SENSITIVITY_LABEL_ES "Entrada > Sensibilidad de la cruceta para el «paddle»"
#define DICE_PADDLE_KEYBOARD_SENSITIVITY_LABEL_CAT_ES "Sensibilidad de la cruceta para el «paddle»"
#define DICE_PADDLE_KEYBOARD_SENSITIVITY_INFO_0_ES "Ajusta la sensibilidad si se va a usar una cruceta como «paddle»."
#define DICE_PADDLE_JOYSTICK_SENSITIVITY_LABEL_ES "Entrada > Sensibilidad del stick analógico para el «paddle»"
#define DICE_PADDLE_JOYSTICK_SENSITIVITY_LABEL_CAT_ES "Sensibilidad del stick analógico para el «paddle»"
#define DICE_PADDLE_JOYSTICK_SENSITIVITY_INFO_0_ES "Ajusta la sensibilidad si se va a usar un stick analógico como «paddle»."
#define DICE_RETROMOUSE_PADDLE_SENSITIVITY_LABEL_ES "Entrada > Sensibilidad del RetroMouse para el «paddle»"
#define DICE_RETROMOUSE_PADDLE_SENSITIVITY_LABEL_CAT_ES "Sensibilidad del RetroMouse para el «paddle»"
#define DICE_RETROMOUSE_PADDLE_SENSITIVITY_INFO_0_ES "Ajusta la sensibilidad si se va a usar un RetroMouse como «paddle»."
#define DICE_WHEEL_KEYJOY_SENSITIVITY_LABEL_ES "Entrada > Sensibilidad del volante"
#define DICE_WHEEL_KEYJOY_SENSITIVITY_LABEL_CAT_ES "Sensibilidad del volante"
#define DICE_WHEEL_KEYJOY_SENSITIVITY_INFO_0_ES "Ajusta la sensibilidad si se va a usar una cruceta o un stick analógico como volante."
#define DICE_THROTTLE_KEYJOY_SENSITIVITY_LABEL_ES "Entrada > Sensibilidad del acelerador"
#define DICE_THROTTLE_KEYJOY_SENSITIVITY_LABEL_CAT_ES "Sensibilidad del acelerador"
#define DICE_THROTTLE_KEYJOY_SENSITIVITY_INFO_0_ES "Ajusta la sensibilidad si se va a usar una cruceta o un stick analógico como acelerador."
#define DICE_RETROMOUSE_PADDLE0_LABEL_ES "RetroMouse > Usar ratón para el «paddle» 1"
#define DICE_RETROMOUSE_PADDLE0_LABEL_CAT_ES "Usar ratón para el «paddle» 1"
#define DICE_RETROMOUSE_PADDLE0_INFO_0_ES "Utiliza un ratón específico para el «paddle» 1, elegido según el índice del ratón del puerto 1."
#define DICE_RETROMOUSE_PADDLE1_LABEL_ES "RetroMouse > Usar ratón para el «paddle» 2"
#define DICE_RETROMOUSE_PADDLE1_LABEL_CAT_ES "Usar ratón para el «paddle» 2"
#define DICE_RETROMOUSE_PADDLE1_INFO_0_ES "Utiliza un ratón específico para el «paddle» 2, elegido según el índice del ratón del puerto 2."
#define DICE_RETROMOUSE_PADDLE2_LABEL_ES "RetroMouse > Usar ratón para el «paddle» 3"
#define DICE_RETROMOUSE_PADDLE2_LABEL_CAT_ES "Usar ratón para el «paddle» 3"
#define DICE_RETROMOUSE_PADDLE2_INFO_0_ES "Utiliza un ratón específico para el «paddle» 3, elegido según el índice del ratón del puerto 3."
#define DICE_RETROMOUSE_PADDLE3_LABEL_ES "RetroMouse > Usar ratón para el «paddle» 4"
#define DICE_RETROMOUSE_PADDLE3_LABEL_CAT_ES "Usar ratón para el «paddle» 4"
#define DICE_RETROMOUSE_PADDLE3_INFO_0_ES "Utiliza un ratón específico para el «paddle» 4, elegido según el índice del ratón del puerto 4."
#define DICE_RETROMOUSE_PADDLE0_X_LABEL_ES "RetroMouse > Eje del ratón para la dirección horizontal del «paddle» 1"
#define DICE_RETROMOUSE_PADDLE0_X_LABEL_CAT_ES "Eje del ratón para la dirección horizontal del «paddle» 1"
#define DICE_RETROMOUSE_PADDLE0_X_INFO_0_ES "Eje del ratón para los movimientos horizontales del jugador 1."
#define OPTION_VAL_X_ES "X"
#define OPTION_VAL_Y_ES "Y"
#define DICE_RETROMOUSE_PADDLE0_Y_LABEL_ES "RetroMouse > Eje del ratón para la dirección vertical del «paddle» 1"
#define DICE_RETROMOUSE_PADDLE0_Y_LABEL_CAT_ES "Eje del ratón para la dirección vertical del «paddle» 1"
#define DICE_RETROMOUSE_PADDLE0_Y_INFO_0_ES "Eje del ratón para los movimientos verticales del jugador 1."
#define DICE_RETROMOUSE_PADDLE1_X_LABEL_ES "RetroMouse > Eje del ratón para la dirección horizontal del «paddle» 2"
#define DICE_RETROMOUSE_PADDLE1_X_LABEL_CAT_ES "Eje del ratón para la dirección horizontal del «paddle» 2"
#define DICE_RETROMOUSE_PADDLE1_X_INFO_0_ES "Eje del ratón para los movimientos horizontales del jugador 2."
#define DICE_RETROMOUSE_PADDLE1_Y_LABEL_ES "RetroMouse > Eje del ratón para la dirección vertical del «paddle» 2"
#define DICE_RETROMOUSE_PADDLE1_Y_LABEL_CAT_ES "Eje del ratón para la dirección vertical del «paddle» 2"
#define DICE_RETROMOUSE_PADDLE1_Y_INFO_0_ES "Eje del ratón para los movimientos verticales del jugador 2."
#define DICE_RETROMOUSE_PADDLE2_X_LABEL_ES "RetroMouse > Eje del ratón para la dirección horizontal del «paddle» 3"
#define DICE_RETROMOUSE_PADDLE2_X_LABEL_CAT_ES "Eje del ratón para la dirección horizontal del «paddle» 3"
#define DICE_RETROMOUSE_PADDLE2_X_INFO_0_ES "Eje del ratón para los movimientos horizontales del jugador 3."
#define DICE_RETROMOUSE_PADDLE2_Y_LABEL_ES "RetroMouse > Eje del ratón para la dirección vertical del «paddle» 3"
#define DICE_RETROMOUSE_PADDLE2_Y_LABEL_CAT_ES "Eje del ratón para la dirección vertical del «paddle» 3"
#define DICE_RETROMOUSE_PADDLE2_Y_INFO_0_ES "Eje del ratón para los movimientos verticales del jugador 3."
#define DICE_RETROMOUSE_PADDLE3_X_LABEL_ES "RetroMouse > Eje del ratón para la dirección horizontal del «paddle» 4"
#define DICE_RETROMOUSE_PADDLE3_X_LABEL_CAT_ES "Eje del ratón para la dirección horizontal del «paddle» 4"
#define DICE_RETROMOUSE_PADDLE3_X_INFO_0_ES "Eje del ratón para los movimientos horizontales del jugador 4."
#define DICE_RETROMOUSE_PADDLE3_Y_LABEL_ES "RetroMouse > Eje del ratón para la dirección vertical del «paddle» 4"
#define DICE_RETROMOUSE_PADDLE3_Y_LABEL_CAT_ES "Eje del ratón para la dirección vertical del «paddle» 4"
#define DICE_RETROMOUSE_PADDLE3_Y_INFO_0_ES "Eje del ratón para los movimientos verticales del jugador 4."
#define DICE_MANYMOUSE_PADDLE0_LABEL_ES "ManyMouse > Usar ratón para el «paddle» 1"
#define DICE_MANYMOUSE_PADDLE0_INFO_0_ES "Utiliza un ratón para el «paddle» 1."
#define DICE_MANYMOUSE_PADDLE0_X_LABEL_ES "ManyMouse > Eje X del ratón/«paddle» 1"
#define DICE_MANYMOUSE_PADDLE0_X_LABEL_CAT_ES "Eje X del ratón/«paddle» 1"
#define OPTION_VAL_0X_ES NULL
#define OPTION_VAL_0Y_ES NULL
#define OPTION_VAL_1X_ES NULL
#define OPTION_VAL_1Y_ES NULL
#define OPTION_VAL_2X_ES NULL
#define OPTION_VAL_2Y_ES NULL
#define OPTION_VAL_3X_ES NULL
#define OPTION_VAL_3Y_ES NULL
#define DICE_MANYMOUSE_PADDLE0_Y_LABEL_ES "ManyMouse > Eje Y del ratón/«paddle» 1"
#define DICE_MANYMOUSE_PADDLE0_Y_LABEL_CAT_ES "Eje Y del ratón/«paddle» 1"
#define DICE_MANYMOUSE_PADDLE1_LABEL_ES "ManyMouse > Usar ratón para el «paddle» 2"
#define DICE_MANYMOUSE_PADDLE1_INFO_0_ES "Utiliza un ratón para el «paddle» 2."
#define DICE_MANYMOUSE_PADDLE1_X_LABEL_ES "ManyMouse > Eje X del ratón/«paddle» 2"
#define DICE_MANYMOUSE_PADDLE1_X_LABEL_CAT_ES "Eje X del ratón/«paddle» 2"
#define DICE_MANYMOUSE_PADDLE1_Y_LABEL_ES "ManyMouse > Eje Y del ratón/«paddle» 2"
#define DICE_MANYMOUSE_PADDLE1_Y_LABEL_CAT_ES "Eje Y del ratón/«paddle» 2"
#define DICE_MANYMOUSE_PADDLE2_LABEL_ES "ManyMouse > Usar ratón para el «paddle» 3"
#define DICE_MANYMOUSE_PADDLE2_INFO_0_ES "Utiliza un ratón para el «paddle» 3."
#define DICE_MANYMOUSE_PADDLE2_X_LABEL_ES "ManyMouse > Eje X del ratón/«paddle» 3"
#define DICE_MANYMOUSE_PADDLE2_X_LABEL_CAT_ES "Eje X del ratón/«paddle» 3"
#define DICE_MANYMOUSE_PADDLE2_Y_LABEL_ES "ManyMouse > Eje Y del ratón/«paddle» 3"
#define DICE_MANYMOUSE_PADDLE2_Y_LABEL_CAT_ES "Eje Y del ratón/«paddle» 3"
#define DICE_MANYMOUSE_PADDLE3_LABEL_ES "ManyMouse > Usar ratón para el «paddle» 4"
#define DICE_MANYMOUSE_PADDLE3_INFO_0_ES "Utiliza un ratón para el «paddle» 4."
#define DICE_MANYMOUSE_PADDLE3_X_LABEL_ES "ManyMouse > Eje X del ratón/«paddle» 4"
#define DICE_MANYMOUSE_PADDLE3_X_LABEL_CAT_ES "Eje X del ratón/«paddle» 4"
#define DICE_MANYMOUSE_PADDLE3_Y_LABEL_ES "ManyMouse > Eje Y del ratón/«paddle» 4"
#define DICE_MANYMOUSE_PADDLE3_Y_LABEL_CAT_ES "Eje Y del ratón/«paddle» 4"
#define DICE_DIPSWITCH_1_LABEL_ES "Interruptores DIP > Interruptor DIP 1"
#define DICE_DIPSWITCH_1_LABEL_CAT_ES "Interruptor DIP 1"
#define DICE_DIPSWITCH_1_INFO_0_ES "Cambia el ajuste del interruptor DIP 1."
#define OPTION_VAL_1_ES "valor predeterminado"
#define DICE_DIPSWITCH_2_LABEL_ES "Interruptores DIP > Interruptor DIP 2"
#define DICE_DIPSWITCH_2_LABEL_CAT_ES "Interruptor DIP 2"
#define DICE_DIPSWITCH_2_INFO_0_ES "Cambia el ajuste del interruptor DIP 2."
#define DICE_DIPSWITCH_3_LABEL_ES "Interruptores DIP > Interruptor DIP 3"
#define DICE_DIPSWITCH_3_LABEL_CAT_ES "Interruptor DIP 3"
#define DICE_DIPSWITCH_3_INFO_0_ES "Cambia el ajuste del interruptor DIP 3."
#define DICE_DIPSWITCH16_1_LABEL_ES "Interruptores DIP > Interruptor DIP de 16 posiciones 1"
#define DICE_DIPSWITCH16_1_LABEL_CAT_ES "Interruptor DIP de 16 posiciones 1"
#define DICE_DIPSWITCH16_1_INFO_0_ES "Cambia el ajuste del interruptor DIP de 16 posiciones n.º 1."
#define DICE_DIPSWITCH16_2_LABEL_ES "Interruptores DIP > Interruptor DIP de 16 posiciones 2"
#define DICE_DIPSWITCH16_2_LABEL_CAT_ES "Interruptor DIP de 16 posiciones 2"
#define DICE_DIPSWITCH16_2_INFO_0_ES "Cambia el ajuste del interruptor DIP de 16 posiciones n.º 2."

struct retro_core_option_v2_category option_cats_es[] = {
   {
      "input",
      CATEGORY_INPUT_LABEL_ES,
      CATEGORY_INPUT_INFO_0_ES
   },
   {
      "retromouse",
      CATEGORY_RETROMOUSE_LABEL_ES,
      CATEGORY_RETROMOUSE_INFO_0_ES
   },
#ifdef MANYMOUSE
   {
      "manymouse",
      CATEGORY_MANYMOUSE_LABEL_ES,
      CATEGORY_MANYMOUSE_INFO_0_ES
   },
#endif
   {
      "dipswitch",
      CATEGORY_DIPSWITCH_LABEL_ES,
      CATEGORY_DIPSWITCH_INFO_0_ES
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_es[] = {
   {
      "dice_use_mouse_pointer_for_paddle_1",
      DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_LABEL_ES,
      DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_LABEL_CAT_ES,
      DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_INFO_0_ES,
      NULL,
      "input",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_paddle_joystick_absolute",
      DICE_PADDLE_JOYSTICK_ABSOLUTE_LABEL_ES,
      DICE_PADDLE_JOYSTICK_ABSOLUTE_LABEL_CAT_ES,
      DICE_PADDLE_JOYSTICK_ABSOLUTE_INFO_0_ES,
      NULL,
      "input",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      // D-pad but not necessarily keyboard under libretro,
      // that name comes from the upstream code.
      "dice_paddle_keyboard_sensitivity",
      DICE_PADDLE_KEYBOARD_SENSITIVITY_LABEL_ES,
      DICE_PADDLE_KEYBOARD_SENSITIVITY_LABEL_CAT_ES,
      DICE_PADDLE_KEYBOARD_SENSITIVITY_INFO_0_ES,
      NULL,
      "input",
      {
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "250"
   },
   {
      "dice_paddle_joystick_sensitivity",
      DICE_PADDLE_JOYSTICK_SENSITIVITY_LABEL_ES,
      DICE_PADDLE_JOYSTICK_SENSITIVITY_LABEL_CAT_ES,
      DICE_PADDLE_JOYSTICK_SENSITIVITY_INFO_0_ES,
      NULL,
      "input",
      {
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "500"
   },
   {
      "dice_retromouse_paddle_sensitivity",
      DICE_RETROMOUSE_PADDLE_SENSITIVITY_LABEL_ES,
      DICE_RETROMOUSE_PADDLE_SENSITIVITY_LABEL_CAT_ES,
      DICE_RETROMOUSE_PADDLE_SENSITIVITY_INFO_0_ES,
      NULL,
      "input",
      {
         {"25", NULL},
         {"50", NULL},
         {"75", NULL},
         {"100", NULL},
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "125"
   },
   {
      "dice_wheel_keyjoy_sensitivity",
      DICE_WHEEL_KEYJOY_SENSITIVITY_LABEL_ES,
      DICE_WHEEL_KEYJOY_SENSITIVITY_LABEL_CAT_ES,
      DICE_WHEEL_KEYJOY_SENSITIVITY_INFO_0_ES,
      NULL,
      "input",
      {
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "500"
   },
   {
      "dice_throttle_keyjoy_sensitivity",
      DICE_THROTTLE_KEYJOY_SENSITIVITY_LABEL_ES,
      DICE_THROTTLE_KEYJOY_SENSITIVITY_LABEL_CAT_ES,
      DICE_THROTTLE_KEYJOY_SENSITIVITY_INFO_0_ES,
      NULL,
      "input",
      {
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "250"
   },

   {
      "dice_retromouse_paddle0",
      DICE_RETROMOUSE_PADDLE0_LABEL_ES,
      DICE_RETROMOUSE_PADDLE0_LABEL_CAT_ES,
      DICE_RETROMOUSE_PADDLE0_INFO_0_ES,
      NULL,
      "retromouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_retromouse_paddle1",
      DICE_RETROMOUSE_PADDLE1_LABEL_ES,
      DICE_RETROMOUSE_PADDLE1_LABEL_CAT_ES,
      DICE_RETROMOUSE_PADDLE1_INFO_0_ES,
      NULL,
      "retromouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_retromouse_paddle2",
      DICE_RETROMOUSE_PADDLE2_LABEL_ES,
      DICE_RETROMOUSE_PADDLE2_LABEL_CAT_ES,
      DICE_RETROMOUSE_PADDLE2_INFO_0_ES,
      NULL,
      "retromouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_retromouse_paddle3",
      DICE_RETROMOUSE_PADDLE3_LABEL_ES,
      DICE_RETROMOUSE_PADDLE3_LABEL_CAT_ES,
      DICE_RETROMOUSE_PADDLE3_INFO_0_ES,
      NULL,
      "retromouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_retromouse_paddle0_x",
      DICE_RETROMOUSE_PADDLE0_X_LABEL_ES,
      DICE_RETROMOUSE_PADDLE0_X_LABEL_CAT_ES,
      DICE_RETROMOUSE_PADDLE0_X_INFO_0_ES,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_ES},
         {"y", OPTION_VAL_Y_ES},
         {NULL, NULL},
      },
      "x"
   },
   {
      "dice_retromouse_paddle0_y",
      DICE_RETROMOUSE_PADDLE0_Y_LABEL_ES,
      DICE_RETROMOUSE_PADDLE0_Y_LABEL_CAT_ES,
      DICE_RETROMOUSE_PADDLE0_Y_INFO_0_ES,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_ES},
         {"y", OPTION_VAL_Y_ES},
         {NULL, NULL},
      },
      "y"
   },
   {
      "dice_retromouse_paddle1_x",
      DICE_RETROMOUSE_PADDLE1_X_LABEL_ES,
      DICE_RETROMOUSE_PADDLE1_X_LABEL_CAT_ES,
      DICE_RETROMOUSE_PADDLE1_X_INFO_0_ES,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_ES},
         {"y", OPTION_VAL_Y_ES},
         {NULL, NULL},
      },
      "x"
   },
   {
      "dice_retromouse_paddle1_y",
      DICE_RETROMOUSE_PADDLE1_Y_LABEL_ES,
      DICE_RETROMOUSE_PADDLE1_Y_LABEL_CAT_ES,
      DICE_RETROMOUSE_PADDLE1_Y_INFO_0_ES,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_ES},
         {"y", OPTION_VAL_Y_ES},
         {NULL, NULL},
      },
      "y"
   },
   {
      "dice_retromouse_paddle2_x",
      DICE_RETROMOUSE_PADDLE2_X_LABEL_ES,
      DICE_RETROMOUSE_PADDLE2_X_LABEL_CAT_ES,
      DICE_RETROMOUSE_PADDLE2_X_INFO_0_ES,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_ES},
         {"y", OPTION_VAL_Y_ES},
         {NULL, NULL},
      },
      "x"
   },
   {
      "dice_retromouse_paddle2_y",
      DICE_RETROMOUSE_PADDLE2_Y_LABEL_ES,
      DICE_RETROMOUSE_PADDLE2_Y_LABEL_CAT_ES,
      DICE_RETROMOUSE_PADDLE2_Y_INFO_0_ES,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_ES},
         {"y", OPTION_VAL_Y_ES},
         {NULL, NULL},
      },
      "y"
   },
   {
      "dice_retromouse_paddle3_x",
      DICE_RETROMOUSE_PADDLE3_X_LABEL_ES,
      DICE_RETROMOUSE_PADDLE3_X_LABEL_CAT_ES,
      DICE_RETROMOUSE_PADDLE3_X_INFO_0_ES,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_ES},
         {"y", OPTION_VAL_Y_ES},
         {NULL, NULL},
      },
      "x"
   },
   {
      "dice_retromouse_paddle3_y",
      DICE_RETROMOUSE_PADDLE3_Y_LABEL_ES,
      DICE_RETROMOUSE_PADDLE3_Y_LABEL_CAT_ES,
      DICE_RETROMOUSE_PADDLE3_Y_INFO_0_ES,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_ES},
         {"y", OPTION_VAL_Y_ES},
         {NULL, NULL},
      },
      "y"
   },

#ifdef MANYMOUSE
   {
      "dice_manymouse_paddle0",
      DICE_MANYMOUSE_PADDLE0_LABEL_ES,
      DICE_RETROMOUSE_PADDLE0_LABEL_CAT_ES,
      DICE_MANYMOUSE_PADDLE0_INFO_0_ES,
      NULL,
      "manymouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_manymouse_paddle0_x",
      DICE_MANYMOUSE_PADDLE0_X_LABEL_ES,
      DICE_MANYMOUSE_PADDLE0_X_LABEL_CAT_ES,
      DICE_RETROMOUSE_PADDLE0_X_INFO_0_ES,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_ES},
         {"0y", OPTION_VAL_0Y_ES},
         {"1x", OPTION_VAL_1X_ES},
         {"1y", OPTION_VAL_1Y_ES},
         {"2x", OPTION_VAL_2X_ES},
         {"2y", OPTION_VAL_2Y_ES},
         {"3x", OPTION_VAL_3X_ES},
         {"3y", OPTION_VAL_3Y_ES},
         {NULL, NULL},
      },
      "0x"
   },
   {
      "dice_manymouse_paddle0_y",
      DICE_MANYMOUSE_PADDLE0_Y_LABEL_ES,
      DICE_MANYMOUSE_PADDLE0_Y_LABEL_CAT_ES,
      DICE_RETROMOUSE_PADDLE0_Y_INFO_0_ES,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_ES},
         {"0y", OPTION_VAL_0Y_ES},
         {"1x", OPTION_VAL_1X_ES},
         {"1y", OPTION_VAL_1Y_ES},
         {"2x", OPTION_VAL_2X_ES},
         {"2y", OPTION_VAL_2Y_ES},
         {"3x", OPTION_VAL_3X_ES},
         {"3y", OPTION_VAL_3Y_ES},
         {NULL, NULL},
      },
      "0y"
   },
   {
      "dice_manymouse_paddle1",
      DICE_MANYMOUSE_PADDLE1_LABEL_ES,
      DICE_RETROMOUSE_PADDLE1_LABEL_CAT_ES,
      DICE_MANYMOUSE_PADDLE1_INFO_0_ES,
      NULL,
      "manymouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_manymouse_paddle1_x",
      DICE_MANYMOUSE_PADDLE1_X_LABEL_ES,
      DICE_MANYMOUSE_PADDLE1_X_LABEL_CAT_ES,
      DICE_RETROMOUSE_PADDLE1_X_INFO_0_ES,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_ES},
         {"0y", OPTION_VAL_0Y_ES},
         {"1x", OPTION_VAL_1X_ES},
         {"1y", OPTION_VAL_1Y_ES},
         {"2x", OPTION_VAL_2X_ES},
         {"2y", OPTION_VAL_2Y_ES},
         {"3x", OPTION_VAL_3X_ES},
         {"3y", OPTION_VAL_3Y_ES},
         {NULL, NULL},
      },
      "1x"
   },
   {
      "dice_manymouse_paddle1_y",
      DICE_MANYMOUSE_PADDLE1_Y_LABEL_ES,
      DICE_MANYMOUSE_PADDLE1_Y_LABEL_CAT_ES,
      DICE_RETROMOUSE_PADDLE1_Y_INFO_0_ES,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_ES},
         {"0y", OPTION_VAL_0Y_ES},
         {"1x", OPTION_VAL_1X_ES},
         {"1y", OPTION_VAL_1Y_ES},
         {"2x", OPTION_VAL_2X_ES},
         {"2y", OPTION_VAL_2Y_ES},
         {"3x", OPTION_VAL_3X_ES},
         {"3y", OPTION_VAL_3Y_ES},
         {NULL, NULL},
      },
      "1y"
   },
   {
      "dice_manymouse_paddle2",
      DICE_MANYMOUSE_PADDLE2_LABEL_ES,
      DICE_RETROMOUSE_PADDLE2_LABEL_CAT_ES,
      DICE_MANYMOUSE_PADDLE2_INFO_0_ES,
      NULL,
      "manymouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_manymouse_paddle2_x",
      DICE_MANYMOUSE_PADDLE2_X_LABEL_ES,
      DICE_MANYMOUSE_PADDLE2_X_LABEL_CAT_ES,
      DICE_RETROMOUSE_PADDLE2_X_INFO_0_ES,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_ES},
         {"0y", OPTION_VAL_0Y_ES},
         {"1x", OPTION_VAL_1X_ES},
         {"1y", OPTION_VAL_1Y_ES},
         {"2x", OPTION_VAL_2X_ES},
         {"2y", OPTION_VAL_2Y_ES},
         {"3x", OPTION_VAL_3X_ES},
         {"3y", OPTION_VAL_3Y_ES},
         {NULL, NULL},
      },
      "2x"
   },
   {
      "dice_manymouse_paddle2_y",
      DICE_MANYMOUSE_PADDLE2_Y_LABEL_ES,
      DICE_MANYMOUSE_PADDLE2_Y_LABEL_CAT_ES,
      DICE_RETROMOUSE_PADDLE2_Y_INFO_0_ES,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_ES},
         {"0y", OPTION_VAL_0Y_ES},
         {"1x", OPTION_VAL_1X_ES},
         {"1y", OPTION_VAL_1Y_ES},
         {"2x", OPTION_VAL_2X_ES},
         {"2y", OPTION_VAL_2Y_ES},
         {"3x", OPTION_VAL_3X_ES},
         {"3y", OPTION_VAL_3Y_ES},
         {NULL, NULL},
      },
      "2y"
   },
   {
      "dice_manymouse_paddle3",
      DICE_MANYMOUSE_PADDLE3_LABEL_ES,
      DICE_RETROMOUSE_PADDLE3_LABEL_CAT_ES,
      DICE_MANYMOUSE_PADDLE3_INFO_0_ES,
      NULL,
      "manymouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_manymouse_paddle3_x",
      DICE_MANYMOUSE_PADDLE3_X_LABEL_ES,
      DICE_MANYMOUSE_PADDLE3_X_LABEL_CAT_ES,
      DICE_RETROMOUSE_PADDLE3_X_INFO_0_ES,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_ES},
         {"0y", OPTION_VAL_0Y_ES},
         {"1x", OPTION_VAL_1X_ES},
         {"1y", OPTION_VAL_1Y_ES},
         {"2x", OPTION_VAL_2X_ES},
         {"2y", OPTION_VAL_2Y_ES},
         {"3x", OPTION_VAL_3X_ES},
         {"3y", OPTION_VAL_3Y_ES},
         {NULL, NULL},
      },
      "3x"
   },
   {
      "dice_manymouse_paddle3_y",
      DICE_MANYMOUSE_PADDLE3_Y_LABEL_ES,
      DICE_MANYMOUSE_PADDLE3_Y_LABEL_CAT_ES,
      DICE_RETROMOUSE_PADDLE3_Y_INFO_0_ES,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_ES},
         {"0y", OPTION_VAL_0Y_ES},
         {"1x", OPTION_VAL_1X_ES},
         {"1y", OPTION_VAL_1Y_ES},
         {"2x", OPTION_VAL_2X_ES},
         {"2y", OPTION_VAL_2Y_ES},
         {"3x", OPTION_VAL_3X_ES},
         {"3y", OPTION_VAL_3Y_ES},
         {NULL, NULL},
      },
      "3y"
   },
#endif

   {
      "dice_dipswitch_1",
      DICE_DIPSWITCH_1_LABEL_ES,
      DICE_DIPSWITCH_1_LABEL_CAT_ES,
      DICE_DIPSWITCH_1_INFO_0_ES,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_ES},
         {"0", NULL},
         {"1", NULL},
         {NULL, NULL},
      },
      "-1"
   },
   {
      "dice_dipswitch_2",
      DICE_DIPSWITCH_2_LABEL_ES,
      DICE_DIPSWITCH_2_LABEL_CAT_ES,
      DICE_DIPSWITCH_2_INFO_0_ES,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_ES},
         {"0", NULL},
         {"1", NULL},
         {NULL, NULL},
      },
      "-1"
   },
   {
      "dice_dipswitch_3",
      DICE_DIPSWITCH_3_LABEL_ES,
      DICE_DIPSWITCH_3_LABEL_CAT_ES,
      DICE_DIPSWITCH_3_INFO_0_ES,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_ES},
         {"0", NULL},
         {"1", NULL},
         {NULL, NULL},
      },
      "-1"
   },
   {
      "dice_dipswitch16_1",
      DICE_DIPSWITCH16_1_LABEL_ES,
      DICE_DIPSWITCH16_1_LABEL_CAT_ES,
      DICE_DIPSWITCH16_1_INFO_0_ES,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_ES},
         {"0", NULL},
         {"1", NULL},
         {"2", NULL},
         {"3", NULL},
         {"4", NULL},
         {"5", NULL},
         {"6", NULL},
         {"7", NULL},
         {"8", NULL},
         {"9", NULL},
         {"10", NULL},
         {"11", NULL},
         {"12", NULL},
         {"13", NULL},
         {"14", NULL},
         {"15", NULL},
         {NULL, NULL},
      },
      "-1"
   },
   {
      "dice_dipswitch16_2",
      DICE_DIPSWITCH16_2_LABEL_ES,
      DICE_DIPSWITCH16_2_LABEL_CAT_ES,
      DICE_DIPSWITCH16_2_INFO_0_ES,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_ES},
         {"0", NULL},
         {"1", NULL},
         {"2", NULL},
         {"3", NULL},
         {"4", NULL},
         {"5", NULL},
         {"6", NULL},
         {"7", NULL},
         {"8", NULL},
         {"9", NULL},
         {"10", NULL},
         {"11", NULL},
         {"12", NULL},
         {"13", NULL},
         {"14", NULL},
         {"15", NULL},
         {NULL, NULL},
      },
      "-1"
   },

   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_es = {
   option_cats_es,
   option_defs_es
};

/* RETRO_LANGUAGE_FA */

#define CATEGORY_INPUT_LABEL_FA "ورودی"
#define CATEGORY_INPUT_INFO_0_FA NULL
#define CATEGORY_RETROMOUSE_LABEL_FA NULL
#define CATEGORY_RETROMOUSE_INFO_0_FA NULL
#define CATEGORY_MANYMOUSE_LABEL_FA NULL
#define CATEGORY_MANYMOUSE_INFO_0_FA NULL
#define CATEGORY_DIPSWITCH_LABEL_FA NULL
#define CATEGORY_DIPSWITCH_INFO_0_FA NULL
#define DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_LABEL_FA NULL
#define DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_LABEL_CAT_FA NULL
#define DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_INFO_0_FA NULL
#define DICE_PADDLE_JOYSTICK_ABSOLUTE_LABEL_FA NULL
#define DICE_PADDLE_JOYSTICK_ABSOLUTE_LABEL_CAT_FA NULL
#define DICE_PADDLE_JOYSTICK_ABSOLUTE_INFO_0_FA NULL
#define DICE_PADDLE_KEYBOARD_SENSITIVITY_LABEL_FA NULL
#define DICE_PADDLE_KEYBOARD_SENSITIVITY_LABEL_CAT_FA NULL
#define DICE_PADDLE_KEYBOARD_SENSITIVITY_INFO_0_FA NULL
#define DICE_PADDLE_JOYSTICK_SENSITIVITY_LABEL_FA NULL
#define DICE_PADDLE_JOYSTICK_SENSITIVITY_LABEL_CAT_FA NULL
#define DICE_PADDLE_JOYSTICK_SENSITIVITY_INFO_0_FA NULL
#define DICE_RETROMOUSE_PADDLE_SENSITIVITY_LABEL_FA NULL
#define DICE_RETROMOUSE_PADDLE_SENSITIVITY_LABEL_CAT_FA NULL
#define DICE_RETROMOUSE_PADDLE_SENSITIVITY_INFO_0_FA NULL
#define DICE_WHEEL_KEYJOY_SENSITIVITY_LABEL_FA NULL
#define DICE_WHEEL_KEYJOY_SENSITIVITY_LABEL_CAT_FA NULL
#define DICE_WHEEL_KEYJOY_SENSITIVITY_INFO_0_FA NULL
#define DICE_THROTTLE_KEYJOY_SENSITIVITY_LABEL_FA NULL
#define DICE_THROTTLE_KEYJOY_SENSITIVITY_LABEL_CAT_FA NULL
#define DICE_THROTTLE_KEYJOY_SENSITIVITY_INFO_0_FA NULL
#define DICE_RETROMOUSE_PADDLE0_LABEL_FA NULL
#define DICE_RETROMOUSE_PADDLE0_LABEL_CAT_FA NULL
#define DICE_RETROMOUSE_PADDLE0_INFO_0_FA NULL
#define DICE_RETROMOUSE_PADDLE1_LABEL_FA NULL
#define DICE_RETROMOUSE_PADDLE1_LABEL_CAT_FA NULL
#define DICE_RETROMOUSE_PADDLE1_INFO_0_FA NULL
#define DICE_RETROMOUSE_PADDLE2_LABEL_FA NULL
#define DICE_RETROMOUSE_PADDLE2_LABEL_CAT_FA NULL
#define DICE_RETROMOUSE_PADDLE2_INFO_0_FA NULL
#define DICE_RETROMOUSE_PADDLE3_LABEL_FA NULL
#define DICE_RETROMOUSE_PADDLE3_LABEL_CAT_FA NULL
#define DICE_RETROMOUSE_PADDLE3_INFO_0_FA NULL
#define DICE_RETROMOUSE_PADDLE0_X_LABEL_FA NULL
#define DICE_RETROMOUSE_PADDLE0_X_LABEL_CAT_FA NULL
#define DICE_RETROMOUSE_PADDLE0_X_INFO_0_FA NULL
#define OPTION_VAL_X_FA NULL
#define OPTION_VAL_Y_FA NULL
#define DICE_RETROMOUSE_PADDLE0_Y_LABEL_FA NULL
#define DICE_RETROMOUSE_PADDLE0_Y_LABEL_CAT_FA NULL
#define DICE_RETROMOUSE_PADDLE0_Y_INFO_0_FA NULL
#define DICE_RETROMOUSE_PADDLE1_X_LABEL_FA NULL
#define DICE_RETROMOUSE_PADDLE1_X_LABEL_CAT_FA NULL
#define DICE_RETROMOUSE_PADDLE1_X_INFO_0_FA NULL
#define DICE_RETROMOUSE_PADDLE1_Y_LABEL_FA NULL
#define DICE_RETROMOUSE_PADDLE1_Y_LABEL_CAT_FA NULL
#define DICE_RETROMOUSE_PADDLE1_Y_INFO_0_FA NULL
#define DICE_RETROMOUSE_PADDLE2_X_LABEL_FA NULL
#define DICE_RETROMOUSE_PADDLE2_X_LABEL_CAT_FA NULL
#define DICE_RETROMOUSE_PADDLE2_X_INFO_0_FA NULL
#define DICE_RETROMOUSE_PADDLE2_Y_LABEL_FA NULL
#define DICE_RETROMOUSE_PADDLE2_Y_LABEL_CAT_FA NULL
#define DICE_RETROMOUSE_PADDLE2_Y_INFO_0_FA NULL
#define DICE_RETROMOUSE_PADDLE3_X_LABEL_FA NULL
#define DICE_RETROMOUSE_PADDLE3_X_LABEL_CAT_FA NULL
#define DICE_RETROMOUSE_PADDLE3_X_INFO_0_FA NULL
#define DICE_RETROMOUSE_PADDLE3_Y_LABEL_FA NULL
#define DICE_RETROMOUSE_PADDLE3_Y_LABEL_CAT_FA NULL
#define DICE_RETROMOUSE_PADDLE3_Y_INFO_0_FA NULL
#define DICE_MANYMOUSE_PADDLE0_LABEL_FA NULL
#define DICE_MANYMOUSE_PADDLE0_INFO_0_FA NULL
#define DICE_MANYMOUSE_PADDLE0_X_LABEL_FA NULL
#define DICE_MANYMOUSE_PADDLE0_X_LABEL_CAT_FA NULL
#define OPTION_VAL_0X_FA NULL
#define OPTION_VAL_0Y_FA NULL
#define OPTION_VAL_1X_FA NULL
#define OPTION_VAL_1Y_FA NULL
#define OPTION_VAL_2X_FA NULL
#define OPTION_VAL_2Y_FA NULL
#define OPTION_VAL_3X_FA NULL
#define OPTION_VAL_3Y_FA NULL
#define DICE_MANYMOUSE_PADDLE0_Y_LABEL_FA NULL
#define DICE_MANYMOUSE_PADDLE0_Y_LABEL_CAT_FA NULL
#define DICE_MANYMOUSE_PADDLE1_LABEL_FA NULL
#define DICE_MANYMOUSE_PADDLE1_INFO_0_FA NULL
#define DICE_MANYMOUSE_PADDLE1_X_LABEL_FA NULL
#define DICE_MANYMOUSE_PADDLE1_X_LABEL_CAT_FA NULL
#define DICE_MANYMOUSE_PADDLE1_Y_LABEL_FA NULL
#define DICE_MANYMOUSE_PADDLE1_Y_LABEL_CAT_FA NULL
#define DICE_MANYMOUSE_PADDLE2_LABEL_FA NULL
#define DICE_MANYMOUSE_PADDLE2_INFO_0_FA NULL
#define DICE_MANYMOUSE_PADDLE2_X_LABEL_FA NULL
#define DICE_MANYMOUSE_PADDLE2_X_LABEL_CAT_FA NULL
#define DICE_MANYMOUSE_PADDLE2_Y_LABEL_FA NULL
#define DICE_MANYMOUSE_PADDLE2_Y_LABEL_CAT_FA NULL
#define DICE_MANYMOUSE_PADDLE3_LABEL_FA NULL
#define DICE_MANYMOUSE_PADDLE3_INFO_0_FA NULL
#define DICE_MANYMOUSE_PADDLE3_X_LABEL_FA NULL
#define DICE_MANYMOUSE_PADDLE3_X_LABEL_CAT_FA NULL
#define DICE_MANYMOUSE_PADDLE3_Y_LABEL_FA NULL
#define DICE_MANYMOUSE_PADDLE3_Y_LABEL_CAT_FA NULL
#define DICE_DIPSWITCH_1_LABEL_FA NULL
#define DICE_DIPSWITCH_1_LABEL_CAT_FA NULL
#define DICE_DIPSWITCH_1_INFO_0_FA NULL
#define OPTION_VAL_1_FA NULL
#define DICE_DIPSWITCH_2_LABEL_FA NULL
#define DICE_DIPSWITCH_2_LABEL_CAT_FA NULL
#define DICE_DIPSWITCH_2_INFO_0_FA NULL
#define DICE_DIPSWITCH_3_LABEL_FA NULL
#define DICE_DIPSWITCH_3_LABEL_CAT_FA NULL
#define DICE_DIPSWITCH_3_INFO_0_FA NULL
#define DICE_DIPSWITCH16_1_LABEL_FA NULL
#define DICE_DIPSWITCH16_1_LABEL_CAT_FA NULL
#define DICE_DIPSWITCH16_1_INFO_0_FA NULL
#define DICE_DIPSWITCH16_2_LABEL_FA NULL
#define DICE_DIPSWITCH16_2_LABEL_CAT_FA NULL
#define DICE_DIPSWITCH16_2_INFO_0_FA NULL

struct retro_core_option_v2_category option_cats_fa[] = {
   {
      "input",
      CATEGORY_INPUT_LABEL_FA,
      CATEGORY_INPUT_INFO_0_FA
   },
   {
      "retromouse",
      CATEGORY_RETROMOUSE_LABEL_FA,
      CATEGORY_RETROMOUSE_INFO_0_FA
   },
#ifdef MANYMOUSE
   {
      "manymouse",
      CATEGORY_MANYMOUSE_LABEL_FA,
      CATEGORY_MANYMOUSE_INFO_0_FA
   },
#endif
   {
      "dipswitch",
      CATEGORY_DIPSWITCH_LABEL_FA,
      CATEGORY_DIPSWITCH_INFO_0_FA
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_fa[] = {
   {
      "dice_use_mouse_pointer_for_paddle_1",
      DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_LABEL_FA,
      DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_LABEL_CAT_FA,
      DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_INFO_0_FA,
      NULL,
      "input",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_paddle_joystick_absolute",
      DICE_PADDLE_JOYSTICK_ABSOLUTE_LABEL_FA,
      DICE_PADDLE_JOYSTICK_ABSOLUTE_LABEL_CAT_FA,
      DICE_PADDLE_JOYSTICK_ABSOLUTE_INFO_0_FA,
      NULL,
      "input",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      // D-pad but not necessarily keyboard under libretro,
      // that name comes from the upstream code.
      "dice_paddle_keyboard_sensitivity",
      DICE_PADDLE_KEYBOARD_SENSITIVITY_LABEL_FA,
      DICE_PADDLE_KEYBOARD_SENSITIVITY_LABEL_CAT_FA,
      DICE_PADDLE_KEYBOARD_SENSITIVITY_INFO_0_FA,
      NULL,
      "input",
      {
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "250"
   },
   {
      "dice_paddle_joystick_sensitivity",
      DICE_PADDLE_JOYSTICK_SENSITIVITY_LABEL_FA,
      DICE_PADDLE_JOYSTICK_SENSITIVITY_LABEL_CAT_FA,
      DICE_PADDLE_JOYSTICK_SENSITIVITY_INFO_0_FA,
      NULL,
      "input",
      {
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "500"
   },
   {
      "dice_retromouse_paddle_sensitivity",
      DICE_RETROMOUSE_PADDLE_SENSITIVITY_LABEL_FA,
      DICE_RETROMOUSE_PADDLE_SENSITIVITY_LABEL_CAT_FA,
      DICE_RETROMOUSE_PADDLE_SENSITIVITY_INFO_0_FA,
      NULL,
      "input",
      {
         {"25", NULL},
         {"50", NULL},
         {"75", NULL},
         {"100", NULL},
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "125"
   },
   {
      "dice_wheel_keyjoy_sensitivity",
      DICE_WHEEL_KEYJOY_SENSITIVITY_LABEL_FA,
      DICE_WHEEL_KEYJOY_SENSITIVITY_LABEL_CAT_FA,
      DICE_WHEEL_KEYJOY_SENSITIVITY_INFO_0_FA,
      NULL,
      "input",
      {
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "500"
   },
   {
      "dice_throttle_keyjoy_sensitivity",
      DICE_THROTTLE_KEYJOY_SENSITIVITY_LABEL_FA,
      DICE_THROTTLE_KEYJOY_SENSITIVITY_LABEL_CAT_FA,
      DICE_THROTTLE_KEYJOY_SENSITIVITY_INFO_0_FA,
      NULL,
      "input",
      {
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "250"
   },

   {
      "dice_retromouse_paddle0",
      DICE_RETROMOUSE_PADDLE0_LABEL_FA,
      DICE_RETROMOUSE_PADDLE0_LABEL_CAT_FA,
      DICE_RETROMOUSE_PADDLE0_INFO_0_FA,
      NULL,
      "retromouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_retromouse_paddle1",
      DICE_RETROMOUSE_PADDLE1_LABEL_FA,
      DICE_RETROMOUSE_PADDLE1_LABEL_CAT_FA,
      DICE_RETROMOUSE_PADDLE1_INFO_0_FA,
      NULL,
      "retromouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_retromouse_paddle2",
      DICE_RETROMOUSE_PADDLE2_LABEL_FA,
      DICE_RETROMOUSE_PADDLE2_LABEL_CAT_FA,
      DICE_RETROMOUSE_PADDLE2_INFO_0_FA,
      NULL,
      "retromouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_retromouse_paddle3",
      DICE_RETROMOUSE_PADDLE3_LABEL_FA,
      DICE_RETROMOUSE_PADDLE3_LABEL_CAT_FA,
      DICE_RETROMOUSE_PADDLE3_INFO_0_FA,
      NULL,
      "retromouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_retromouse_paddle0_x",
      DICE_RETROMOUSE_PADDLE0_X_LABEL_FA,
      DICE_RETROMOUSE_PADDLE0_X_LABEL_CAT_FA,
      DICE_RETROMOUSE_PADDLE0_X_INFO_0_FA,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_FA},
         {"y", OPTION_VAL_Y_FA},
         {NULL, NULL},
      },
      "x"
   },
   {
      "dice_retromouse_paddle0_y",
      DICE_RETROMOUSE_PADDLE0_Y_LABEL_FA,
      DICE_RETROMOUSE_PADDLE0_Y_LABEL_CAT_FA,
      DICE_RETROMOUSE_PADDLE0_Y_INFO_0_FA,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_FA},
         {"y", OPTION_VAL_Y_FA},
         {NULL, NULL},
      },
      "y"
   },
   {
      "dice_retromouse_paddle1_x",
      DICE_RETROMOUSE_PADDLE1_X_LABEL_FA,
      DICE_RETROMOUSE_PADDLE1_X_LABEL_CAT_FA,
      DICE_RETROMOUSE_PADDLE1_X_INFO_0_FA,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_FA},
         {"y", OPTION_VAL_Y_FA},
         {NULL, NULL},
      },
      "x"
   },
   {
      "dice_retromouse_paddle1_y",
      DICE_RETROMOUSE_PADDLE1_Y_LABEL_FA,
      DICE_RETROMOUSE_PADDLE1_Y_LABEL_CAT_FA,
      DICE_RETROMOUSE_PADDLE1_Y_INFO_0_FA,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_FA},
         {"y", OPTION_VAL_Y_FA},
         {NULL, NULL},
      },
      "y"
   },
   {
      "dice_retromouse_paddle2_x",
      DICE_RETROMOUSE_PADDLE2_X_LABEL_FA,
      DICE_RETROMOUSE_PADDLE2_X_LABEL_CAT_FA,
      DICE_RETROMOUSE_PADDLE2_X_INFO_0_FA,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_FA},
         {"y", OPTION_VAL_Y_FA},
         {NULL, NULL},
      },
      "x"
   },
   {
      "dice_retromouse_paddle2_y",
      DICE_RETROMOUSE_PADDLE2_Y_LABEL_FA,
      DICE_RETROMOUSE_PADDLE2_Y_LABEL_CAT_FA,
      DICE_RETROMOUSE_PADDLE2_Y_INFO_0_FA,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_FA},
         {"y", OPTION_VAL_Y_FA},
         {NULL, NULL},
      },
      "y"
   },
   {
      "dice_retromouse_paddle3_x",
      DICE_RETROMOUSE_PADDLE3_X_LABEL_FA,
      DICE_RETROMOUSE_PADDLE3_X_LABEL_CAT_FA,
      DICE_RETROMOUSE_PADDLE3_X_INFO_0_FA,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_FA},
         {"y", OPTION_VAL_Y_FA},
         {NULL, NULL},
      },
      "x"
   },
   {
      "dice_retromouse_paddle3_y",
      DICE_RETROMOUSE_PADDLE3_Y_LABEL_FA,
      DICE_RETROMOUSE_PADDLE3_Y_LABEL_CAT_FA,
      DICE_RETROMOUSE_PADDLE3_Y_INFO_0_FA,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_FA},
         {"y", OPTION_VAL_Y_FA},
         {NULL, NULL},
      },
      "y"
   },

#ifdef MANYMOUSE
   {
      "dice_manymouse_paddle0",
      DICE_MANYMOUSE_PADDLE0_LABEL_FA,
      DICE_RETROMOUSE_PADDLE0_LABEL_CAT_FA,
      DICE_MANYMOUSE_PADDLE0_INFO_0_FA,
      NULL,
      "manymouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_manymouse_paddle0_x",
      DICE_MANYMOUSE_PADDLE0_X_LABEL_FA,
      DICE_MANYMOUSE_PADDLE0_X_LABEL_CAT_FA,
      DICE_RETROMOUSE_PADDLE0_X_INFO_0_FA,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_FA},
         {"0y", OPTION_VAL_0Y_FA},
         {"1x", OPTION_VAL_1X_FA},
         {"1y", OPTION_VAL_1Y_FA},
         {"2x", OPTION_VAL_2X_FA},
         {"2y", OPTION_VAL_2Y_FA},
         {"3x", OPTION_VAL_3X_FA},
         {"3y", OPTION_VAL_3Y_FA},
         {NULL, NULL},
      },
      "0x"
   },
   {
      "dice_manymouse_paddle0_y",
      DICE_MANYMOUSE_PADDLE0_Y_LABEL_FA,
      DICE_MANYMOUSE_PADDLE0_Y_LABEL_CAT_FA,
      DICE_RETROMOUSE_PADDLE0_Y_INFO_0_FA,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_FA},
         {"0y", OPTION_VAL_0Y_FA},
         {"1x", OPTION_VAL_1X_FA},
         {"1y", OPTION_VAL_1Y_FA},
         {"2x", OPTION_VAL_2X_FA},
         {"2y", OPTION_VAL_2Y_FA},
         {"3x", OPTION_VAL_3X_FA},
         {"3y", OPTION_VAL_3Y_FA},
         {NULL, NULL},
      },
      "0y"
   },
   {
      "dice_manymouse_paddle1",
      DICE_MANYMOUSE_PADDLE1_LABEL_FA,
      DICE_RETROMOUSE_PADDLE1_LABEL_CAT_FA,
      DICE_MANYMOUSE_PADDLE1_INFO_0_FA,
      NULL,
      "manymouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_manymouse_paddle1_x",
      DICE_MANYMOUSE_PADDLE1_X_LABEL_FA,
      DICE_MANYMOUSE_PADDLE1_X_LABEL_CAT_FA,
      DICE_RETROMOUSE_PADDLE1_X_INFO_0_FA,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_FA},
         {"0y", OPTION_VAL_0Y_FA},
         {"1x", OPTION_VAL_1X_FA},
         {"1y", OPTION_VAL_1Y_FA},
         {"2x", OPTION_VAL_2X_FA},
         {"2y", OPTION_VAL_2Y_FA},
         {"3x", OPTION_VAL_3X_FA},
         {"3y", OPTION_VAL_3Y_FA},
         {NULL, NULL},
      },
      "1x"
   },
   {
      "dice_manymouse_paddle1_y",
      DICE_MANYMOUSE_PADDLE1_Y_LABEL_FA,
      DICE_MANYMOUSE_PADDLE1_Y_LABEL_CAT_FA,
      DICE_RETROMOUSE_PADDLE1_Y_INFO_0_FA,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_FA},
         {"0y", OPTION_VAL_0Y_FA},
         {"1x", OPTION_VAL_1X_FA},
         {"1y", OPTION_VAL_1Y_FA},
         {"2x", OPTION_VAL_2X_FA},
         {"2y", OPTION_VAL_2Y_FA},
         {"3x", OPTION_VAL_3X_FA},
         {"3y", OPTION_VAL_3Y_FA},
         {NULL, NULL},
      },
      "1y"
   },
   {
      "dice_manymouse_paddle2",
      DICE_MANYMOUSE_PADDLE2_LABEL_FA,
      DICE_RETROMOUSE_PADDLE2_LABEL_CAT_FA,
      DICE_MANYMOUSE_PADDLE2_INFO_0_FA,
      NULL,
      "manymouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_manymouse_paddle2_x",
      DICE_MANYMOUSE_PADDLE2_X_LABEL_FA,
      DICE_MANYMOUSE_PADDLE2_X_LABEL_CAT_FA,
      DICE_RETROMOUSE_PADDLE2_X_INFO_0_FA,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_FA},
         {"0y", OPTION_VAL_0Y_FA},
         {"1x", OPTION_VAL_1X_FA},
         {"1y", OPTION_VAL_1Y_FA},
         {"2x", OPTION_VAL_2X_FA},
         {"2y", OPTION_VAL_2Y_FA},
         {"3x", OPTION_VAL_3X_FA},
         {"3y", OPTION_VAL_3Y_FA},
         {NULL, NULL},
      },
      "2x"
   },
   {
      "dice_manymouse_paddle2_y",
      DICE_MANYMOUSE_PADDLE2_Y_LABEL_FA,
      DICE_MANYMOUSE_PADDLE2_Y_LABEL_CAT_FA,
      DICE_RETROMOUSE_PADDLE2_Y_INFO_0_FA,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_FA},
         {"0y", OPTION_VAL_0Y_FA},
         {"1x", OPTION_VAL_1X_FA},
         {"1y", OPTION_VAL_1Y_FA},
         {"2x", OPTION_VAL_2X_FA},
         {"2y", OPTION_VAL_2Y_FA},
         {"3x", OPTION_VAL_3X_FA},
         {"3y", OPTION_VAL_3Y_FA},
         {NULL, NULL},
      },
      "2y"
   },
   {
      "dice_manymouse_paddle3",
      DICE_MANYMOUSE_PADDLE3_LABEL_FA,
      DICE_RETROMOUSE_PADDLE3_LABEL_CAT_FA,
      DICE_MANYMOUSE_PADDLE3_INFO_0_FA,
      NULL,
      "manymouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_manymouse_paddle3_x",
      DICE_MANYMOUSE_PADDLE3_X_LABEL_FA,
      DICE_MANYMOUSE_PADDLE3_X_LABEL_CAT_FA,
      DICE_RETROMOUSE_PADDLE3_X_INFO_0_FA,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_FA},
         {"0y", OPTION_VAL_0Y_FA},
         {"1x", OPTION_VAL_1X_FA},
         {"1y", OPTION_VAL_1Y_FA},
         {"2x", OPTION_VAL_2X_FA},
         {"2y", OPTION_VAL_2Y_FA},
         {"3x", OPTION_VAL_3X_FA},
         {"3y", OPTION_VAL_3Y_FA},
         {NULL, NULL},
      },
      "3x"
   },
   {
      "dice_manymouse_paddle3_y",
      DICE_MANYMOUSE_PADDLE3_Y_LABEL_FA,
      DICE_MANYMOUSE_PADDLE3_Y_LABEL_CAT_FA,
      DICE_RETROMOUSE_PADDLE3_Y_INFO_0_FA,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_FA},
         {"0y", OPTION_VAL_0Y_FA},
         {"1x", OPTION_VAL_1X_FA},
         {"1y", OPTION_VAL_1Y_FA},
         {"2x", OPTION_VAL_2X_FA},
         {"2y", OPTION_VAL_2Y_FA},
         {"3x", OPTION_VAL_3X_FA},
         {"3y", OPTION_VAL_3Y_FA},
         {NULL, NULL},
      },
      "3y"
   },
#endif

   {
      "dice_dipswitch_1",
      DICE_DIPSWITCH_1_LABEL_FA,
      DICE_DIPSWITCH_1_LABEL_CAT_FA,
      DICE_DIPSWITCH_1_INFO_0_FA,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_FA},
         {"0", NULL},
         {"1", NULL},
         {NULL, NULL},
      },
      "-1"
   },
   {
      "dice_dipswitch_2",
      DICE_DIPSWITCH_2_LABEL_FA,
      DICE_DIPSWITCH_2_LABEL_CAT_FA,
      DICE_DIPSWITCH_2_INFO_0_FA,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_FA},
         {"0", NULL},
         {"1", NULL},
         {NULL, NULL},
      },
      "-1"
   },
   {
      "dice_dipswitch_3",
      DICE_DIPSWITCH_3_LABEL_FA,
      DICE_DIPSWITCH_3_LABEL_CAT_FA,
      DICE_DIPSWITCH_3_INFO_0_FA,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_FA},
         {"0", NULL},
         {"1", NULL},
         {NULL, NULL},
      },
      "-1"
   },
   {
      "dice_dipswitch16_1",
      DICE_DIPSWITCH16_1_LABEL_FA,
      DICE_DIPSWITCH16_1_LABEL_CAT_FA,
      DICE_DIPSWITCH16_1_INFO_0_FA,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_FA},
         {"0", NULL},
         {"1", NULL},
         {"2", NULL},
         {"3", NULL},
         {"4", NULL},
         {"5", NULL},
         {"6", NULL},
         {"7", NULL},
         {"8", NULL},
         {"9", NULL},
         {"10", NULL},
         {"11", NULL},
         {"12", NULL},
         {"13", NULL},
         {"14", NULL},
         {"15", NULL},
         {NULL, NULL},
      },
      "-1"
   },
   {
      "dice_dipswitch16_2",
      DICE_DIPSWITCH16_2_LABEL_FA,
      DICE_DIPSWITCH16_2_LABEL_CAT_FA,
      DICE_DIPSWITCH16_2_INFO_0_FA,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_FA},
         {"0", NULL},
         {"1", NULL},
         {"2", NULL},
         {"3", NULL},
         {"4", NULL},
         {"5", NULL},
         {"6", NULL},
         {"7", NULL},
         {"8", NULL},
         {"9", NULL},
         {"10", NULL},
         {"11", NULL},
         {"12", NULL},
         {"13", NULL},
         {"14", NULL},
         {"15", NULL},
         {NULL, NULL},
      },
      "-1"
   },

   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_fa = {
   option_cats_fa,
   option_defs_fa
};

/* RETRO_LANGUAGE_FI */

#define CATEGORY_INPUT_LABEL_FI "Syöte"
#define CATEGORY_INPUT_INFO_0_FI "Määritä ydinkohtaiset syöteasetukset."
#define CATEGORY_RETROMOUSE_LABEL_FI NULL
#define CATEGORY_RETROMOUSE_INFO_0_FI "Määritä libretron usean hiiren asetukset."
#define CATEGORY_MANYMOUSE_LABEL_FI NULL
#define CATEGORY_MANYMOUSE_INFO_0_FI NULL
#define CATEGORY_DIPSWITCH_LABEL_FI NULL
#define CATEGORY_DIPSWITCH_INFO_0_FI NULL
#define DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_LABEL_FI NULL
#define DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_LABEL_CAT_FI NULL
#define DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_INFO_0_FI NULL
#define DICE_PADDLE_JOYSTICK_ABSOLUTE_LABEL_FI NULL
#define DICE_PADDLE_JOYSTICK_ABSOLUTE_LABEL_CAT_FI NULL
#define DICE_PADDLE_JOYSTICK_ABSOLUTE_INFO_0_FI NULL
#define DICE_PADDLE_KEYBOARD_SENSITIVITY_LABEL_FI NULL
#define DICE_PADDLE_KEYBOARD_SENSITIVITY_LABEL_CAT_FI NULL
#define DICE_PADDLE_KEYBOARD_SENSITIVITY_INFO_0_FI NULL
#define DICE_PADDLE_JOYSTICK_SENSITIVITY_LABEL_FI NULL
#define DICE_PADDLE_JOYSTICK_SENSITIVITY_LABEL_CAT_FI NULL
#define DICE_PADDLE_JOYSTICK_SENSITIVITY_INFO_0_FI NULL
#define DICE_RETROMOUSE_PADDLE_SENSITIVITY_LABEL_FI NULL
#define DICE_RETROMOUSE_PADDLE_SENSITIVITY_LABEL_CAT_FI NULL
#define DICE_RETROMOUSE_PADDLE_SENSITIVITY_INFO_0_FI NULL
#define DICE_WHEEL_KEYJOY_SENSITIVITY_LABEL_FI NULL
#define DICE_WHEEL_KEYJOY_SENSITIVITY_LABEL_CAT_FI NULL
#define DICE_WHEEL_KEYJOY_SENSITIVITY_INFO_0_FI NULL
#define DICE_THROTTLE_KEYJOY_SENSITIVITY_LABEL_FI NULL
#define DICE_THROTTLE_KEYJOY_SENSITIVITY_LABEL_CAT_FI NULL
#define DICE_THROTTLE_KEYJOY_SENSITIVITY_INFO_0_FI NULL
#define DICE_RETROMOUSE_PADDLE0_LABEL_FI NULL
#define DICE_RETROMOUSE_PADDLE0_LABEL_CAT_FI NULL
#define DICE_RETROMOUSE_PADDLE0_INFO_0_FI NULL
#define DICE_RETROMOUSE_PADDLE1_LABEL_FI NULL
#define DICE_RETROMOUSE_PADDLE1_LABEL_CAT_FI NULL
#define DICE_RETROMOUSE_PADDLE1_INFO_0_FI NULL
#define DICE_RETROMOUSE_PADDLE2_LABEL_FI NULL
#define DICE_RETROMOUSE_PADDLE2_LABEL_CAT_FI NULL
#define DICE_RETROMOUSE_PADDLE2_INFO_0_FI NULL
#define DICE_RETROMOUSE_PADDLE3_LABEL_FI NULL
#define DICE_RETROMOUSE_PADDLE3_LABEL_CAT_FI NULL
#define DICE_RETROMOUSE_PADDLE3_INFO_0_FI NULL
#define DICE_RETROMOUSE_PADDLE0_X_LABEL_FI NULL
#define DICE_RETROMOUSE_PADDLE0_X_LABEL_CAT_FI NULL
#define DICE_RETROMOUSE_PADDLE0_X_INFO_0_FI NULL
#define OPTION_VAL_X_FI NULL
#define OPTION_VAL_Y_FI NULL
#define DICE_RETROMOUSE_PADDLE0_Y_LABEL_FI NULL
#define DICE_RETROMOUSE_PADDLE0_Y_LABEL_CAT_FI NULL
#define DICE_RETROMOUSE_PADDLE0_Y_INFO_0_FI NULL
#define DICE_RETROMOUSE_PADDLE1_X_LABEL_FI NULL
#define DICE_RETROMOUSE_PADDLE1_X_LABEL_CAT_FI NULL
#define DICE_RETROMOUSE_PADDLE1_X_INFO_0_FI NULL
#define DICE_RETROMOUSE_PADDLE1_Y_LABEL_FI NULL
#define DICE_RETROMOUSE_PADDLE1_Y_LABEL_CAT_FI NULL
#define DICE_RETROMOUSE_PADDLE1_Y_INFO_0_FI NULL
#define DICE_RETROMOUSE_PADDLE2_X_LABEL_FI NULL
#define DICE_RETROMOUSE_PADDLE2_X_LABEL_CAT_FI NULL
#define DICE_RETROMOUSE_PADDLE2_X_INFO_0_FI NULL
#define DICE_RETROMOUSE_PADDLE2_Y_LABEL_FI NULL
#define DICE_RETROMOUSE_PADDLE2_Y_LABEL_CAT_FI NULL
#define DICE_RETROMOUSE_PADDLE2_Y_INFO_0_FI NULL
#define DICE_RETROMOUSE_PADDLE3_X_LABEL_FI NULL
#define DICE_RETROMOUSE_PADDLE3_X_LABEL_CAT_FI NULL
#define DICE_RETROMOUSE_PADDLE3_X_INFO_0_FI NULL
#define DICE_RETROMOUSE_PADDLE3_Y_LABEL_FI NULL
#define DICE_RETROMOUSE_PADDLE3_Y_LABEL_CAT_FI NULL
#define DICE_RETROMOUSE_PADDLE3_Y_INFO_0_FI NULL
#define DICE_MANYMOUSE_PADDLE0_LABEL_FI NULL
#define DICE_MANYMOUSE_PADDLE0_INFO_0_FI NULL
#define DICE_MANYMOUSE_PADDLE0_X_LABEL_FI NULL
#define DICE_MANYMOUSE_PADDLE0_X_LABEL_CAT_FI NULL
#define OPTION_VAL_0X_FI NULL
#define OPTION_VAL_0Y_FI NULL
#define OPTION_VAL_1X_FI NULL
#define OPTION_VAL_1Y_FI NULL
#define OPTION_VAL_2X_FI NULL
#define OPTION_VAL_2Y_FI NULL
#define OPTION_VAL_3X_FI NULL
#define OPTION_VAL_3Y_FI NULL
#define DICE_MANYMOUSE_PADDLE0_Y_LABEL_FI NULL
#define DICE_MANYMOUSE_PADDLE0_Y_LABEL_CAT_FI NULL
#define DICE_MANYMOUSE_PADDLE1_LABEL_FI NULL
#define DICE_MANYMOUSE_PADDLE1_INFO_0_FI NULL
#define DICE_MANYMOUSE_PADDLE1_X_LABEL_FI NULL
#define DICE_MANYMOUSE_PADDLE1_X_LABEL_CAT_FI NULL
#define DICE_MANYMOUSE_PADDLE1_Y_LABEL_FI NULL
#define DICE_MANYMOUSE_PADDLE1_Y_LABEL_CAT_FI NULL
#define DICE_MANYMOUSE_PADDLE2_LABEL_FI NULL
#define DICE_MANYMOUSE_PADDLE2_INFO_0_FI NULL
#define DICE_MANYMOUSE_PADDLE2_X_LABEL_FI NULL
#define DICE_MANYMOUSE_PADDLE2_X_LABEL_CAT_FI NULL
#define DICE_MANYMOUSE_PADDLE2_Y_LABEL_FI NULL
#define DICE_MANYMOUSE_PADDLE2_Y_LABEL_CAT_FI NULL
#define DICE_MANYMOUSE_PADDLE3_LABEL_FI NULL
#define DICE_MANYMOUSE_PADDLE3_INFO_0_FI NULL
#define DICE_MANYMOUSE_PADDLE3_X_LABEL_FI NULL
#define DICE_MANYMOUSE_PADDLE3_X_LABEL_CAT_FI NULL
#define DICE_MANYMOUSE_PADDLE3_Y_LABEL_FI NULL
#define DICE_MANYMOUSE_PADDLE3_Y_LABEL_CAT_FI NULL
#define DICE_DIPSWITCH_1_LABEL_FI NULL
#define DICE_DIPSWITCH_1_LABEL_CAT_FI NULL
#define DICE_DIPSWITCH_1_INFO_0_FI NULL
#define OPTION_VAL_1_FI NULL
#define DICE_DIPSWITCH_2_LABEL_FI NULL
#define DICE_DIPSWITCH_2_LABEL_CAT_FI NULL
#define DICE_DIPSWITCH_2_INFO_0_FI NULL
#define DICE_DIPSWITCH_3_LABEL_FI NULL
#define DICE_DIPSWITCH_3_LABEL_CAT_FI NULL
#define DICE_DIPSWITCH_3_INFO_0_FI NULL
#define DICE_DIPSWITCH16_1_LABEL_FI NULL
#define DICE_DIPSWITCH16_1_LABEL_CAT_FI NULL
#define DICE_DIPSWITCH16_1_INFO_0_FI NULL
#define DICE_DIPSWITCH16_2_LABEL_FI NULL
#define DICE_DIPSWITCH16_2_LABEL_CAT_FI NULL
#define DICE_DIPSWITCH16_2_INFO_0_FI NULL

struct retro_core_option_v2_category option_cats_fi[] = {
   {
      "input",
      CATEGORY_INPUT_LABEL_FI,
      CATEGORY_INPUT_INFO_0_FI
   },
   {
      "retromouse",
      CATEGORY_RETROMOUSE_LABEL_FI,
      CATEGORY_RETROMOUSE_INFO_0_FI
   },
#ifdef MANYMOUSE
   {
      "manymouse",
      CATEGORY_MANYMOUSE_LABEL_FI,
      CATEGORY_MANYMOUSE_INFO_0_FI
   },
#endif
   {
      "dipswitch",
      CATEGORY_DIPSWITCH_LABEL_FI,
      CATEGORY_DIPSWITCH_INFO_0_FI
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_fi[] = {
   {
      "dice_use_mouse_pointer_for_paddle_1",
      DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_LABEL_FI,
      DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_LABEL_CAT_FI,
      DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_INFO_0_FI,
      NULL,
      "input",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_paddle_joystick_absolute",
      DICE_PADDLE_JOYSTICK_ABSOLUTE_LABEL_FI,
      DICE_PADDLE_JOYSTICK_ABSOLUTE_LABEL_CAT_FI,
      DICE_PADDLE_JOYSTICK_ABSOLUTE_INFO_0_FI,
      NULL,
      "input",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      // D-pad but not necessarily keyboard under libretro,
      // that name comes from the upstream code.
      "dice_paddle_keyboard_sensitivity",
      DICE_PADDLE_KEYBOARD_SENSITIVITY_LABEL_FI,
      DICE_PADDLE_KEYBOARD_SENSITIVITY_LABEL_CAT_FI,
      DICE_PADDLE_KEYBOARD_SENSITIVITY_INFO_0_FI,
      NULL,
      "input",
      {
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "250"
   },
   {
      "dice_paddle_joystick_sensitivity",
      DICE_PADDLE_JOYSTICK_SENSITIVITY_LABEL_FI,
      DICE_PADDLE_JOYSTICK_SENSITIVITY_LABEL_CAT_FI,
      DICE_PADDLE_JOYSTICK_SENSITIVITY_INFO_0_FI,
      NULL,
      "input",
      {
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "500"
   },
   {
      "dice_retromouse_paddle_sensitivity",
      DICE_RETROMOUSE_PADDLE_SENSITIVITY_LABEL_FI,
      DICE_RETROMOUSE_PADDLE_SENSITIVITY_LABEL_CAT_FI,
      DICE_RETROMOUSE_PADDLE_SENSITIVITY_INFO_0_FI,
      NULL,
      "input",
      {
         {"25", NULL},
         {"50", NULL},
         {"75", NULL},
         {"100", NULL},
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "125"
   },
   {
      "dice_wheel_keyjoy_sensitivity",
      DICE_WHEEL_KEYJOY_SENSITIVITY_LABEL_FI,
      DICE_WHEEL_KEYJOY_SENSITIVITY_LABEL_CAT_FI,
      DICE_WHEEL_KEYJOY_SENSITIVITY_INFO_0_FI,
      NULL,
      "input",
      {
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "500"
   },
   {
      "dice_throttle_keyjoy_sensitivity",
      DICE_THROTTLE_KEYJOY_SENSITIVITY_LABEL_FI,
      DICE_THROTTLE_KEYJOY_SENSITIVITY_LABEL_CAT_FI,
      DICE_THROTTLE_KEYJOY_SENSITIVITY_INFO_0_FI,
      NULL,
      "input",
      {
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "250"
   },

   {
      "dice_retromouse_paddle0",
      DICE_RETROMOUSE_PADDLE0_LABEL_FI,
      DICE_RETROMOUSE_PADDLE0_LABEL_CAT_FI,
      DICE_RETROMOUSE_PADDLE0_INFO_0_FI,
      NULL,
      "retromouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_retromouse_paddle1",
      DICE_RETROMOUSE_PADDLE1_LABEL_FI,
      DICE_RETROMOUSE_PADDLE1_LABEL_CAT_FI,
      DICE_RETROMOUSE_PADDLE1_INFO_0_FI,
      NULL,
      "retromouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_retromouse_paddle2",
      DICE_RETROMOUSE_PADDLE2_LABEL_FI,
      DICE_RETROMOUSE_PADDLE2_LABEL_CAT_FI,
      DICE_RETROMOUSE_PADDLE2_INFO_0_FI,
      NULL,
      "retromouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_retromouse_paddle3",
      DICE_RETROMOUSE_PADDLE3_LABEL_FI,
      DICE_RETROMOUSE_PADDLE3_LABEL_CAT_FI,
      DICE_RETROMOUSE_PADDLE3_INFO_0_FI,
      NULL,
      "retromouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_retromouse_paddle0_x",
      DICE_RETROMOUSE_PADDLE0_X_LABEL_FI,
      DICE_RETROMOUSE_PADDLE0_X_LABEL_CAT_FI,
      DICE_RETROMOUSE_PADDLE0_X_INFO_0_FI,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_FI},
         {"y", OPTION_VAL_Y_FI},
         {NULL, NULL},
      },
      "x"
   },
   {
      "dice_retromouse_paddle0_y",
      DICE_RETROMOUSE_PADDLE0_Y_LABEL_FI,
      DICE_RETROMOUSE_PADDLE0_Y_LABEL_CAT_FI,
      DICE_RETROMOUSE_PADDLE0_Y_INFO_0_FI,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_FI},
         {"y", OPTION_VAL_Y_FI},
         {NULL, NULL},
      },
      "y"
   },
   {
      "dice_retromouse_paddle1_x",
      DICE_RETROMOUSE_PADDLE1_X_LABEL_FI,
      DICE_RETROMOUSE_PADDLE1_X_LABEL_CAT_FI,
      DICE_RETROMOUSE_PADDLE1_X_INFO_0_FI,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_FI},
         {"y", OPTION_VAL_Y_FI},
         {NULL, NULL},
      },
      "x"
   },
   {
      "dice_retromouse_paddle1_y",
      DICE_RETROMOUSE_PADDLE1_Y_LABEL_FI,
      DICE_RETROMOUSE_PADDLE1_Y_LABEL_CAT_FI,
      DICE_RETROMOUSE_PADDLE1_Y_INFO_0_FI,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_FI},
         {"y", OPTION_VAL_Y_FI},
         {NULL, NULL},
      },
      "y"
   },
   {
      "dice_retromouse_paddle2_x",
      DICE_RETROMOUSE_PADDLE2_X_LABEL_FI,
      DICE_RETROMOUSE_PADDLE2_X_LABEL_CAT_FI,
      DICE_RETROMOUSE_PADDLE2_X_INFO_0_FI,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_FI},
         {"y", OPTION_VAL_Y_FI},
         {NULL, NULL},
      },
      "x"
   },
   {
      "dice_retromouse_paddle2_y",
      DICE_RETROMOUSE_PADDLE2_Y_LABEL_FI,
      DICE_RETROMOUSE_PADDLE2_Y_LABEL_CAT_FI,
      DICE_RETROMOUSE_PADDLE2_Y_INFO_0_FI,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_FI},
         {"y", OPTION_VAL_Y_FI},
         {NULL, NULL},
      },
      "y"
   },
   {
      "dice_retromouse_paddle3_x",
      DICE_RETROMOUSE_PADDLE3_X_LABEL_FI,
      DICE_RETROMOUSE_PADDLE3_X_LABEL_CAT_FI,
      DICE_RETROMOUSE_PADDLE3_X_INFO_0_FI,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_FI},
         {"y", OPTION_VAL_Y_FI},
         {NULL, NULL},
      },
      "x"
   },
   {
      "dice_retromouse_paddle3_y",
      DICE_RETROMOUSE_PADDLE3_Y_LABEL_FI,
      DICE_RETROMOUSE_PADDLE3_Y_LABEL_CAT_FI,
      DICE_RETROMOUSE_PADDLE3_Y_INFO_0_FI,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_FI},
         {"y", OPTION_VAL_Y_FI},
         {NULL, NULL},
      },
      "y"
   },

#ifdef MANYMOUSE
   {
      "dice_manymouse_paddle0",
      DICE_MANYMOUSE_PADDLE0_LABEL_FI,
      DICE_RETROMOUSE_PADDLE0_LABEL_CAT_FI,
      DICE_MANYMOUSE_PADDLE0_INFO_0_FI,
      NULL,
      "manymouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_manymouse_paddle0_x",
      DICE_MANYMOUSE_PADDLE0_X_LABEL_FI,
      DICE_MANYMOUSE_PADDLE0_X_LABEL_CAT_FI,
      DICE_RETROMOUSE_PADDLE0_X_INFO_0_FI,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_FI},
         {"0y", OPTION_VAL_0Y_FI},
         {"1x", OPTION_VAL_1X_FI},
         {"1y", OPTION_VAL_1Y_FI},
         {"2x", OPTION_VAL_2X_FI},
         {"2y", OPTION_VAL_2Y_FI},
         {"3x", OPTION_VAL_3X_FI},
         {"3y", OPTION_VAL_3Y_FI},
         {NULL, NULL},
      },
      "0x"
   },
   {
      "dice_manymouse_paddle0_y",
      DICE_MANYMOUSE_PADDLE0_Y_LABEL_FI,
      DICE_MANYMOUSE_PADDLE0_Y_LABEL_CAT_FI,
      DICE_RETROMOUSE_PADDLE0_Y_INFO_0_FI,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_FI},
         {"0y", OPTION_VAL_0Y_FI},
         {"1x", OPTION_VAL_1X_FI},
         {"1y", OPTION_VAL_1Y_FI},
         {"2x", OPTION_VAL_2X_FI},
         {"2y", OPTION_VAL_2Y_FI},
         {"3x", OPTION_VAL_3X_FI},
         {"3y", OPTION_VAL_3Y_FI},
         {NULL, NULL},
      },
      "0y"
   },
   {
      "dice_manymouse_paddle1",
      DICE_MANYMOUSE_PADDLE1_LABEL_FI,
      DICE_RETROMOUSE_PADDLE1_LABEL_CAT_FI,
      DICE_MANYMOUSE_PADDLE1_INFO_0_FI,
      NULL,
      "manymouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_manymouse_paddle1_x",
      DICE_MANYMOUSE_PADDLE1_X_LABEL_FI,
      DICE_MANYMOUSE_PADDLE1_X_LABEL_CAT_FI,
      DICE_RETROMOUSE_PADDLE1_X_INFO_0_FI,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_FI},
         {"0y", OPTION_VAL_0Y_FI},
         {"1x", OPTION_VAL_1X_FI},
         {"1y", OPTION_VAL_1Y_FI},
         {"2x", OPTION_VAL_2X_FI},
         {"2y", OPTION_VAL_2Y_FI},
         {"3x", OPTION_VAL_3X_FI},
         {"3y", OPTION_VAL_3Y_FI},
         {NULL, NULL},
      },
      "1x"
   },
   {
      "dice_manymouse_paddle1_y",
      DICE_MANYMOUSE_PADDLE1_Y_LABEL_FI,
      DICE_MANYMOUSE_PADDLE1_Y_LABEL_CAT_FI,
      DICE_RETROMOUSE_PADDLE1_Y_INFO_0_FI,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_FI},
         {"0y", OPTION_VAL_0Y_FI},
         {"1x", OPTION_VAL_1X_FI},
         {"1y", OPTION_VAL_1Y_FI},
         {"2x", OPTION_VAL_2X_FI},
         {"2y", OPTION_VAL_2Y_FI},
         {"3x", OPTION_VAL_3X_FI},
         {"3y", OPTION_VAL_3Y_FI},
         {NULL, NULL},
      },
      "1y"
   },
   {
      "dice_manymouse_paddle2",
      DICE_MANYMOUSE_PADDLE2_LABEL_FI,
      DICE_RETROMOUSE_PADDLE2_LABEL_CAT_FI,
      DICE_MANYMOUSE_PADDLE2_INFO_0_FI,
      NULL,
      "manymouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_manymouse_paddle2_x",
      DICE_MANYMOUSE_PADDLE2_X_LABEL_FI,
      DICE_MANYMOUSE_PADDLE2_X_LABEL_CAT_FI,
      DICE_RETROMOUSE_PADDLE2_X_INFO_0_FI,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_FI},
         {"0y", OPTION_VAL_0Y_FI},
         {"1x", OPTION_VAL_1X_FI},
         {"1y", OPTION_VAL_1Y_FI},
         {"2x", OPTION_VAL_2X_FI},
         {"2y", OPTION_VAL_2Y_FI},
         {"3x", OPTION_VAL_3X_FI},
         {"3y", OPTION_VAL_3Y_FI},
         {NULL, NULL},
      },
      "2x"
   },
   {
      "dice_manymouse_paddle2_y",
      DICE_MANYMOUSE_PADDLE2_Y_LABEL_FI,
      DICE_MANYMOUSE_PADDLE2_Y_LABEL_CAT_FI,
      DICE_RETROMOUSE_PADDLE2_Y_INFO_0_FI,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_FI},
         {"0y", OPTION_VAL_0Y_FI},
         {"1x", OPTION_VAL_1X_FI},
         {"1y", OPTION_VAL_1Y_FI},
         {"2x", OPTION_VAL_2X_FI},
         {"2y", OPTION_VAL_2Y_FI},
         {"3x", OPTION_VAL_3X_FI},
         {"3y", OPTION_VAL_3Y_FI},
         {NULL, NULL},
      },
      "2y"
   },
   {
      "dice_manymouse_paddle3",
      DICE_MANYMOUSE_PADDLE3_LABEL_FI,
      DICE_RETROMOUSE_PADDLE3_LABEL_CAT_FI,
      DICE_MANYMOUSE_PADDLE3_INFO_0_FI,
      NULL,
      "manymouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_manymouse_paddle3_x",
      DICE_MANYMOUSE_PADDLE3_X_LABEL_FI,
      DICE_MANYMOUSE_PADDLE3_X_LABEL_CAT_FI,
      DICE_RETROMOUSE_PADDLE3_X_INFO_0_FI,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_FI},
         {"0y", OPTION_VAL_0Y_FI},
         {"1x", OPTION_VAL_1X_FI},
         {"1y", OPTION_VAL_1Y_FI},
         {"2x", OPTION_VAL_2X_FI},
         {"2y", OPTION_VAL_2Y_FI},
         {"3x", OPTION_VAL_3X_FI},
         {"3y", OPTION_VAL_3Y_FI},
         {NULL, NULL},
      },
      "3x"
   },
   {
      "dice_manymouse_paddle3_y",
      DICE_MANYMOUSE_PADDLE3_Y_LABEL_FI,
      DICE_MANYMOUSE_PADDLE3_Y_LABEL_CAT_FI,
      DICE_RETROMOUSE_PADDLE3_Y_INFO_0_FI,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_FI},
         {"0y", OPTION_VAL_0Y_FI},
         {"1x", OPTION_VAL_1X_FI},
         {"1y", OPTION_VAL_1Y_FI},
         {"2x", OPTION_VAL_2X_FI},
         {"2y", OPTION_VAL_2Y_FI},
         {"3x", OPTION_VAL_3X_FI},
         {"3y", OPTION_VAL_3Y_FI},
         {NULL, NULL},
      },
      "3y"
   },
#endif

   {
      "dice_dipswitch_1",
      DICE_DIPSWITCH_1_LABEL_FI,
      DICE_DIPSWITCH_1_LABEL_CAT_FI,
      DICE_DIPSWITCH_1_INFO_0_FI,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_FI},
         {"0", NULL},
         {"1", NULL},
         {NULL, NULL},
      },
      "-1"
   },
   {
      "dice_dipswitch_2",
      DICE_DIPSWITCH_2_LABEL_FI,
      DICE_DIPSWITCH_2_LABEL_CAT_FI,
      DICE_DIPSWITCH_2_INFO_0_FI,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_FI},
         {"0", NULL},
         {"1", NULL},
         {NULL, NULL},
      },
      "-1"
   },
   {
      "dice_dipswitch_3",
      DICE_DIPSWITCH_3_LABEL_FI,
      DICE_DIPSWITCH_3_LABEL_CAT_FI,
      DICE_DIPSWITCH_3_INFO_0_FI,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_FI},
         {"0", NULL},
         {"1", NULL},
         {NULL, NULL},
      },
      "-1"
   },
   {
      "dice_dipswitch16_1",
      DICE_DIPSWITCH16_1_LABEL_FI,
      DICE_DIPSWITCH16_1_LABEL_CAT_FI,
      DICE_DIPSWITCH16_1_INFO_0_FI,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_FI},
         {"0", NULL},
         {"1", NULL},
         {"2", NULL},
         {"3", NULL},
         {"4", NULL},
         {"5", NULL},
         {"6", NULL},
         {"7", NULL},
         {"8", NULL},
         {"9", NULL},
         {"10", NULL},
         {"11", NULL},
         {"12", NULL},
         {"13", NULL},
         {"14", NULL},
         {"15", NULL},
         {NULL, NULL},
      },
      "-1"
   },
   {
      "dice_dipswitch16_2",
      DICE_DIPSWITCH16_2_LABEL_FI,
      DICE_DIPSWITCH16_2_LABEL_CAT_FI,
      DICE_DIPSWITCH16_2_INFO_0_FI,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_FI},
         {"0", NULL},
         {"1", NULL},
         {"2", NULL},
         {"3", NULL},
         {"4", NULL},
         {"5", NULL},
         {"6", NULL},
         {"7", NULL},
         {"8", NULL},
         {"9", NULL},
         {"10", NULL},
         {"11", NULL},
         {"12", NULL},
         {"13", NULL},
         {"14", NULL},
         {"15", NULL},
         {NULL, NULL},
      },
      "-1"
   },

   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_fi = {
   option_cats_fi,
   option_defs_fi
};

/* RETRO_LANGUAGE_FR */

#define CATEGORY_INPUT_LABEL_FR "Entrées"
#define CATEGORY_INPUT_INFO_0_FR "Configurer les réglages de touches spécifiques au cœur."
#define CATEGORY_RETROMOUSE_LABEL_FR "RetroSouris"
#define CATEGORY_RETROMOUSE_INFO_0_FR "Configurer les réglages multi-souris de libretro."
#define CATEGORY_MANYMOUSE_LABEL_FR NULL
#define CATEGORY_MANYMOUSE_INFO_0_FR "Configurer les réglages multi-souris de ManyMouse."
#define CATEGORY_DIPSWITCH_LABEL_FR "Interrupteur DIP"
#define CATEGORY_DIPSWITCH_INFO_0_FR "Configurer les réglages d'interrupteur DIP (DIP switch) et de potentiomètre."
#define DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_LABEL_FR "Entrée > Utiliser le curseur de la souris pour la raquette 1"
#define DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_LABEL_CAT_FR "Utiliser le curseur de la souris pour la raquette 1"
#define DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_INFO_0_FR "Utilisez le curseur de la souris du système comme contrôleur de raquette 1. Ne vous laisse pas choisir une souris spécifique si vous en avez plusieurs."
#define DICE_PADDLE_JOYSTICK_ABSOLUTE_LABEL_FR "Entrée > Manette de raquette utilise le mode de mouvement absolu"
#define DICE_PADDLE_JOYSTICK_ABSOLUTE_LABEL_CAT_FR "Manette de raquette utilise le mode de mouvement absolu"
#define DICE_PADDLE_JOYSTICK_ABSOLUTE_INFO_0_FR "Mapper directement la plage de mouvement de la manette à celle de la raquette plutôt que le mouvement relatif."
#define DICE_PADDLE_KEYBOARD_SENSITIVITY_LABEL_FR "Entrée > Sensibilité de la croix directionnelle pour la raquette"
#define DICE_PADDLE_KEYBOARD_SENSITIVITY_LABEL_CAT_FR "Sensibilité de la croix directionnelle pour la raquette"
#define DICE_PADDLE_KEYBOARD_SENSITIVITY_INFO_0_FR "Sensibilité lorsque vous utilisez la croix directionnelle pour une raquette."
#define DICE_PADDLE_JOYSTICK_SENSITIVITY_LABEL_FR "Entrée > Sensibilité du stick analogique pour la raquette"
#define DICE_PADDLE_JOYSTICK_SENSITIVITY_LABEL_CAT_FR "Sensibilité du stick analogique pour la raquette"
#define DICE_PADDLE_JOYSTICK_SENSITIVITY_INFO_0_FR "Sensibilité lorsque vous utilisez le stick analogique pour une raquette."
#define DICE_RETROMOUSE_PADDLE_SENSITIVITY_LABEL_FR "Entrée > Sensibilité de la RetroSouris pour la raquette"
#define DICE_RETROMOUSE_PADDLE_SENSITIVITY_LABEL_CAT_FR "Sensibilité de la RetroSouris pour la raquette"
#define DICE_RETROMOUSE_PADDLE_SENSITIVITY_INFO_0_FR "Sensibilité lorsque vous utilisez la RetroSouris pour une raquette."
#define DICE_WHEEL_KEYJOY_SENSITIVITY_LABEL_FR "Entrée > Sensibilité du volant"
#define DICE_WHEEL_KEYJOY_SENSITIVITY_LABEL_CAT_FR "Sensibilité du volant"
#define DICE_WHEEL_KEYJOY_SENSITIVITY_INFO_0_FR "Sensibilité lorsque vous utilisez la croix directionnelle ou le stick analogique pour un volant."
#define DICE_THROTTLE_KEYJOY_SENSITIVITY_LABEL_FR "Entrée > Sensibilité de l'accélérateur"
#define DICE_THROTTLE_KEYJOY_SENSITIVITY_LABEL_CAT_FR "Sensibilité de l'accélérateur"
#define DICE_THROTTLE_KEYJOY_SENSITIVITY_INFO_0_FR "Sensibilité lorsque vous utilisez la croix directionnelle ou le stick analogique pour l'accélérateur."
#define DICE_RETROMOUSE_PADDLE0_LABEL_FR "RetroSouris > Utiliser une souris pour la raquette 1"
#define DICE_RETROMOUSE_PADDLE0_LABEL_CAT_FR "Utilisez une souris pour la raquette 1"
#define DICE_RETROMOUSE_PADDLE0_INFO_0_FR "Utilisez une souris spécifique pour la raquette 1, choisie par l'index de souris du port 1."
#define DICE_RETROMOUSE_PADDLE1_LABEL_FR "RetroSouris > Utiliser une souris pour la raquette 2"
#define DICE_RETROMOUSE_PADDLE1_LABEL_CAT_FR "Utilisez une souris pour la raquette 2"
#define DICE_RETROMOUSE_PADDLE1_INFO_0_FR "Utilisez une souris spécifique pour la raquette 2, choisie par l'index de souris du port 2."
#define DICE_RETROMOUSE_PADDLE2_LABEL_FR "RetroSouris > Utiliser une souris pour la raquette 3"
#define DICE_RETROMOUSE_PADDLE2_LABEL_CAT_FR "Utilisez une souris pour la raquette 3"
#define DICE_RETROMOUSE_PADDLE2_INFO_0_FR "Utilisez une souris spécifique pour la raquette 3, choisie par l'index de souris du port 3."
#define DICE_RETROMOUSE_PADDLE3_LABEL_FR "RetroSouris > Utiliser une souris pour la raquette 4"
#define DICE_RETROMOUSE_PADDLE3_LABEL_CAT_FR "Utilisez une souris pour la raquette 4"
#define DICE_RETROMOUSE_PADDLE3_INFO_0_FR "Utilisez une souris spécifique pour la raquette 4, choisie par l'index de souris du port 4."
#define DICE_RETROMOUSE_PADDLE0_X_LABEL_FR "RetroSouris > Axe horizontal de la souris pour la raquette 1"
#define DICE_RETROMOUSE_PADDLE0_X_LABEL_CAT_FR "Axe horizontal de la souris pour la raquette 1"
#define DICE_RETROMOUSE_PADDLE0_X_INFO_0_FR "Axe de la souris pour le joueur 1, mouvement horizontal à l'écran."
#define OPTION_VAL_X_FR NULL
#define OPTION_VAL_Y_FR NULL
#define DICE_RETROMOUSE_PADDLE0_Y_LABEL_FR "RetroSouris > Axe vertical de la souris pour la raquette 1"
#define DICE_RETROMOUSE_PADDLE0_Y_LABEL_CAT_FR "Axe vertical de la souris pour la raquette 1"
#define DICE_RETROMOUSE_PADDLE0_Y_INFO_0_FR "Axe de la souris pour le joueur 1, mouvement vertical à l'écran."
#define DICE_RETROMOUSE_PADDLE1_X_LABEL_FR "RetroSouris > Axe horizontal de la souris pour la raquette 2"
#define DICE_RETROMOUSE_PADDLE1_X_LABEL_CAT_FR "Axe horizontal de la souris pour la raquette 2"
#define DICE_RETROMOUSE_PADDLE1_X_INFO_0_FR "Axe de la souris pour le joueur 2, mouvement horizontal à l'écran."
#define DICE_RETROMOUSE_PADDLE1_Y_LABEL_FR "RetroSouris > Axe vertical de la souris pour la raquette 2"
#define DICE_RETROMOUSE_PADDLE1_Y_LABEL_CAT_FR "Axe vertical de la souris pour la raquette 2"
#define DICE_RETROMOUSE_PADDLE1_Y_INFO_0_FR "Axe de la souris pour le joueur 2, mouvement vertical à l'écran."
#define DICE_RETROMOUSE_PADDLE2_X_LABEL_FR "RetroSouris > Axe horizontal de la souris pour la raquette 3"
#define DICE_RETROMOUSE_PADDLE2_X_LABEL_CAT_FR "Axe horizontal de la souris pour la raquette 3"
#define DICE_RETROMOUSE_PADDLE2_X_INFO_0_FR "Axe de la souris pour le joueur 3, mouvement horizontal à l'écran."
#define DICE_RETROMOUSE_PADDLE2_Y_LABEL_FR "RetroSouris > Axe vertical de la souris pour la raquette 3"
#define DICE_RETROMOUSE_PADDLE2_Y_LABEL_CAT_FR "Axe vertical de la souris pour la raquette 3"
#define DICE_RETROMOUSE_PADDLE2_Y_INFO_0_FR "Axe de la souris pour le joueur 3, mouvement vertical à l'écran."
#define DICE_RETROMOUSE_PADDLE3_X_LABEL_FR "RetroSouris > Axe horizontal de la souris pour la raquette 4"
#define DICE_RETROMOUSE_PADDLE3_X_LABEL_CAT_FR "Axe horizontal de la souris pour la raquette 4"
#define DICE_RETROMOUSE_PADDLE3_X_INFO_0_FR "Axe de la souris pour le joueur 4, mouvement horizontal à l'écran."
#define DICE_RETROMOUSE_PADDLE3_Y_LABEL_FR "RetroSouris > Axe vertical de la souris pour la raquette 4"
#define DICE_RETROMOUSE_PADDLE3_Y_LABEL_CAT_FR "Axe vertical de la souris pour la raquette 4"
#define DICE_RETROMOUSE_PADDLE3_Y_INFO_0_FR "Axe de la souris pour le joueur 4, mouvement vertical à l'écran."
#define DICE_MANYMOUSE_PADDLE0_LABEL_FR "ManyMouse > Utiliser une souris pour la raquette 1"
#define DICE_MANYMOUSE_PADDLE0_INFO_0_FR "Utilisez une souris pour la raquette 1."
#define DICE_MANYMOUSE_PADDLE0_X_LABEL_FR "ManyMouse > Souris-raquette 1 x"
#define DICE_MANYMOUSE_PADDLE0_X_LABEL_CAT_FR "Souris-raquette 1 x"
#define OPTION_VAL_0X_FR "x0"
#define OPTION_VAL_0Y_FR "0 y"
#define OPTION_VAL_1X_FR "x1"
#define OPTION_VAL_1Y_FR "1 y"
#define OPTION_VAL_2X_FR "x2"
#define OPTION_VAL_2Y_FR "2 y"
#define OPTION_VAL_3X_FR "x3"
#define OPTION_VAL_3Y_FR "3 y"
#define DICE_MANYMOUSE_PADDLE0_Y_LABEL_FR "ManyMouse > Souris-raquette 1 y"
#define DICE_MANYMOUSE_PADDLE0_Y_LABEL_CAT_FR "Souris-raquette 1 y"
#define DICE_MANYMOUSE_PADDLE1_LABEL_FR "ManyMouse > Utiliser une souris pour la raquette 2"
#define DICE_MANYMOUSE_PADDLE1_INFO_0_FR "Utilisez une souris pour la raquette 2."
#define DICE_MANYMOUSE_PADDLE1_X_LABEL_FR "ManyMouse > Souris-raquette 2 x"
#define DICE_MANYMOUSE_PADDLE1_X_LABEL_CAT_FR "Souris-raquette 2 x"
#define DICE_MANYMOUSE_PADDLE1_Y_LABEL_FR "ManyMouse > Souris-raquette 2 y"
#define DICE_MANYMOUSE_PADDLE1_Y_LABEL_CAT_FR "Souris-raquette 2 y"
#define DICE_MANYMOUSE_PADDLE2_LABEL_FR "ManyMouse > Utiliser une souris pour la raquette 3"
#define DICE_MANYMOUSE_PADDLE2_INFO_0_FR "Utilisez une souris pour la raquette 3."
#define DICE_MANYMOUSE_PADDLE2_X_LABEL_FR "ManyMouse > Souris-raquette 3 x"
#define DICE_MANYMOUSE_PADDLE2_X_LABEL_CAT_FR "Souris-raquette 3 x"
#define DICE_MANYMOUSE_PADDLE2_Y_LABEL_FR "ManyMouse > Souris-raquette 3 y"
#define DICE_MANYMOUSE_PADDLE2_Y_LABEL_CAT_FR "Souris-raquette 3 y"
#define DICE_MANYMOUSE_PADDLE3_LABEL_FR "ManyMouse > Utiliser une souris pour la raquette 4"
#define DICE_MANYMOUSE_PADDLE3_INFO_0_FR "Utilisez une souris pour la raquette 4."
#define DICE_MANYMOUSE_PADDLE3_X_LABEL_FR "ManyMouse > Souris-raquette 4 x"
#define DICE_MANYMOUSE_PADDLE3_X_LABEL_CAT_FR "Souris-raquette 4 x"
#define DICE_MANYMOUSE_PADDLE3_Y_LABEL_FR "ManyMouse > Souris-raquette 4 y"
#define DICE_MANYMOUSE_PADDLE3_Y_LABEL_CAT_FR "Souris-raquette 4 y"
#define DICE_DIPSWITCH_1_LABEL_FR "Interrupteur DIP > Interrupteur DIP 1"
#define DICE_DIPSWITCH_1_LABEL_CAT_FR "Interrupteur DIP 1"
#define DICE_DIPSWITCH_1_INFO_0_FR "Réglage pour l'interrupteur DIP 1."
#define OPTION_VAL_1_FR "par défaut"
#define DICE_DIPSWITCH_2_LABEL_FR "Interrupteur DIP > Interrupteur DIP 2"
#define DICE_DIPSWITCH_2_LABEL_CAT_FR "Interrupteur DIP 2"
#define DICE_DIPSWITCH_2_INFO_0_FR "Réglage pour l'interrupteur DIP 2."
#define DICE_DIPSWITCH_3_LABEL_FR "Interrupteur DIP > Interrupteur DIP 3"
#define DICE_DIPSWITCH_3_LABEL_CAT_FR "Interrupteur DIP 3"
#define DICE_DIPSWITCH_3_INFO_0_FR "Réglage pour l'interrupteur DIP 3."
#define DICE_DIPSWITCH16_1_LABEL_FR "Interrupteur DIP > Interrupteur DIP hex 1"
#define DICE_DIPSWITCH16_1_LABEL_CAT_FR "Interrupteur DIP hex 1"
#define DICE_DIPSWITCH16_1_INFO_0_FR "Réglage pour l'interrupteur DIP 16 positions numéro 1."
#define DICE_DIPSWITCH16_2_LABEL_FR "Interrupteur DIP > Interrupteur DIP hex 2"
#define DICE_DIPSWITCH16_2_LABEL_CAT_FR "Interrupteur DIP hex 2"
#define DICE_DIPSWITCH16_2_INFO_0_FR "Réglage pour l'interrupteur DIP 16 positions numéro 2."

struct retro_core_option_v2_category option_cats_fr[] = {
   {
      "input",
      CATEGORY_INPUT_LABEL_FR,
      CATEGORY_INPUT_INFO_0_FR
   },
   {
      "retromouse",
      CATEGORY_RETROMOUSE_LABEL_FR,
      CATEGORY_RETROMOUSE_INFO_0_FR
   },
#ifdef MANYMOUSE
   {
      "manymouse",
      CATEGORY_MANYMOUSE_LABEL_FR,
      CATEGORY_MANYMOUSE_INFO_0_FR
   },
#endif
   {
      "dipswitch",
      CATEGORY_DIPSWITCH_LABEL_FR,
      CATEGORY_DIPSWITCH_INFO_0_FR
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_fr[] = {
   {
      "dice_use_mouse_pointer_for_paddle_1",
      DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_LABEL_FR,
      DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_LABEL_CAT_FR,
      DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_INFO_0_FR,
      NULL,
      "input",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_paddle_joystick_absolute",
      DICE_PADDLE_JOYSTICK_ABSOLUTE_LABEL_FR,
      DICE_PADDLE_JOYSTICK_ABSOLUTE_LABEL_CAT_FR,
      DICE_PADDLE_JOYSTICK_ABSOLUTE_INFO_0_FR,
      NULL,
      "input",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      // D-pad but not necessarily keyboard under libretro,
      // that name comes from the upstream code.
      "dice_paddle_keyboard_sensitivity",
      DICE_PADDLE_KEYBOARD_SENSITIVITY_LABEL_FR,
      DICE_PADDLE_KEYBOARD_SENSITIVITY_LABEL_CAT_FR,
      DICE_PADDLE_KEYBOARD_SENSITIVITY_INFO_0_FR,
      NULL,
      "input",
      {
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "250"
   },
   {
      "dice_paddle_joystick_sensitivity",
      DICE_PADDLE_JOYSTICK_SENSITIVITY_LABEL_FR,
      DICE_PADDLE_JOYSTICK_SENSITIVITY_LABEL_CAT_FR,
      DICE_PADDLE_JOYSTICK_SENSITIVITY_INFO_0_FR,
      NULL,
      "input",
      {
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "500"
   },
   {
      "dice_retromouse_paddle_sensitivity",
      DICE_RETROMOUSE_PADDLE_SENSITIVITY_LABEL_FR,
      DICE_RETROMOUSE_PADDLE_SENSITIVITY_LABEL_CAT_FR,
      DICE_RETROMOUSE_PADDLE_SENSITIVITY_INFO_0_FR,
      NULL,
      "input",
      {
         {"25", NULL},
         {"50", NULL},
         {"75", NULL},
         {"100", NULL},
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "125"
   },
   {
      "dice_wheel_keyjoy_sensitivity",
      DICE_WHEEL_KEYJOY_SENSITIVITY_LABEL_FR,
      DICE_WHEEL_KEYJOY_SENSITIVITY_LABEL_CAT_FR,
      DICE_WHEEL_KEYJOY_SENSITIVITY_INFO_0_FR,
      NULL,
      "input",
      {
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "500"
   },
   {
      "dice_throttle_keyjoy_sensitivity",
      DICE_THROTTLE_KEYJOY_SENSITIVITY_LABEL_FR,
      DICE_THROTTLE_KEYJOY_SENSITIVITY_LABEL_CAT_FR,
      DICE_THROTTLE_KEYJOY_SENSITIVITY_INFO_0_FR,
      NULL,
      "input",
      {
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "250"
   },

   {
      "dice_retromouse_paddle0",
      DICE_RETROMOUSE_PADDLE0_LABEL_FR,
      DICE_RETROMOUSE_PADDLE0_LABEL_CAT_FR,
      DICE_RETROMOUSE_PADDLE0_INFO_0_FR,
      NULL,
      "retromouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_retromouse_paddle1",
      DICE_RETROMOUSE_PADDLE1_LABEL_FR,
      DICE_RETROMOUSE_PADDLE1_LABEL_CAT_FR,
      DICE_RETROMOUSE_PADDLE1_INFO_0_FR,
      NULL,
      "retromouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_retromouse_paddle2",
      DICE_RETROMOUSE_PADDLE2_LABEL_FR,
      DICE_RETROMOUSE_PADDLE2_LABEL_CAT_FR,
      DICE_RETROMOUSE_PADDLE2_INFO_0_FR,
      NULL,
      "retromouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_retromouse_paddle3",
      DICE_RETROMOUSE_PADDLE3_LABEL_FR,
      DICE_RETROMOUSE_PADDLE3_LABEL_CAT_FR,
      DICE_RETROMOUSE_PADDLE3_INFO_0_FR,
      NULL,
      "retromouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_retromouse_paddle0_x",
      DICE_RETROMOUSE_PADDLE0_X_LABEL_FR,
      DICE_RETROMOUSE_PADDLE0_X_LABEL_CAT_FR,
      DICE_RETROMOUSE_PADDLE0_X_INFO_0_FR,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_FR},
         {"y", OPTION_VAL_Y_FR},
         {NULL, NULL},
      },
      "x"
   },
   {
      "dice_retromouse_paddle0_y",
      DICE_RETROMOUSE_PADDLE0_Y_LABEL_FR,
      DICE_RETROMOUSE_PADDLE0_Y_LABEL_CAT_FR,
      DICE_RETROMOUSE_PADDLE0_Y_INFO_0_FR,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_FR},
         {"y", OPTION_VAL_Y_FR},
         {NULL, NULL},
      },
      "y"
   },
   {
      "dice_retromouse_paddle1_x",
      DICE_RETROMOUSE_PADDLE1_X_LABEL_FR,
      DICE_RETROMOUSE_PADDLE1_X_LABEL_CAT_FR,
      DICE_RETROMOUSE_PADDLE1_X_INFO_0_FR,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_FR},
         {"y", OPTION_VAL_Y_FR},
         {NULL, NULL},
      },
      "x"
   },
   {
      "dice_retromouse_paddle1_y",
      DICE_RETROMOUSE_PADDLE1_Y_LABEL_FR,
      DICE_RETROMOUSE_PADDLE1_Y_LABEL_CAT_FR,
      DICE_RETROMOUSE_PADDLE1_Y_INFO_0_FR,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_FR},
         {"y", OPTION_VAL_Y_FR},
         {NULL, NULL},
      },
      "y"
   },
   {
      "dice_retromouse_paddle2_x",
      DICE_RETROMOUSE_PADDLE2_X_LABEL_FR,
      DICE_RETROMOUSE_PADDLE2_X_LABEL_CAT_FR,
      DICE_RETROMOUSE_PADDLE2_X_INFO_0_FR,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_FR},
         {"y", OPTION_VAL_Y_FR},
         {NULL, NULL},
      },
      "x"
   },
   {
      "dice_retromouse_paddle2_y",
      DICE_RETROMOUSE_PADDLE2_Y_LABEL_FR,
      DICE_RETROMOUSE_PADDLE2_Y_LABEL_CAT_FR,
      DICE_RETROMOUSE_PADDLE2_Y_INFO_0_FR,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_FR},
         {"y", OPTION_VAL_Y_FR},
         {NULL, NULL},
      },
      "y"
   },
   {
      "dice_retromouse_paddle3_x",
      DICE_RETROMOUSE_PADDLE3_X_LABEL_FR,
      DICE_RETROMOUSE_PADDLE3_X_LABEL_CAT_FR,
      DICE_RETROMOUSE_PADDLE3_X_INFO_0_FR,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_FR},
         {"y", OPTION_VAL_Y_FR},
         {NULL, NULL},
      },
      "x"
   },
   {
      "dice_retromouse_paddle3_y",
      DICE_RETROMOUSE_PADDLE3_Y_LABEL_FR,
      DICE_RETROMOUSE_PADDLE3_Y_LABEL_CAT_FR,
      DICE_RETROMOUSE_PADDLE3_Y_INFO_0_FR,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_FR},
         {"y", OPTION_VAL_Y_FR},
         {NULL, NULL},
      },
      "y"
   },

#ifdef MANYMOUSE
   {
      "dice_manymouse_paddle0",
      DICE_MANYMOUSE_PADDLE0_LABEL_FR,
      DICE_RETROMOUSE_PADDLE0_LABEL_CAT_FR,
      DICE_MANYMOUSE_PADDLE0_INFO_0_FR,
      NULL,
      "manymouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_manymouse_paddle0_x",
      DICE_MANYMOUSE_PADDLE0_X_LABEL_FR,
      DICE_MANYMOUSE_PADDLE0_X_LABEL_CAT_FR,
      DICE_RETROMOUSE_PADDLE0_X_INFO_0_FR,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_FR},
         {"0y", OPTION_VAL_0Y_FR},
         {"1x", OPTION_VAL_1X_FR},
         {"1y", OPTION_VAL_1Y_FR},
         {"2x", OPTION_VAL_2X_FR},
         {"2y", OPTION_VAL_2Y_FR},
         {"3x", OPTION_VAL_3X_FR},
         {"3y", OPTION_VAL_3Y_FR},
         {NULL, NULL},
      },
      "0x"
   },
   {
      "dice_manymouse_paddle0_y",
      DICE_MANYMOUSE_PADDLE0_Y_LABEL_FR,
      DICE_MANYMOUSE_PADDLE0_Y_LABEL_CAT_FR,
      DICE_RETROMOUSE_PADDLE0_Y_INFO_0_FR,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_FR},
         {"0y", OPTION_VAL_0Y_FR},
         {"1x", OPTION_VAL_1X_FR},
         {"1y", OPTION_VAL_1Y_FR},
         {"2x", OPTION_VAL_2X_FR},
         {"2y", OPTION_VAL_2Y_FR},
         {"3x", OPTION_VAL_3X_FR},
         {"3y", OPTION_VAL_3Y_FR},
         {NULL, NULL},
      },
      "0y"
   },
   {
      "dice_manymouse_paddle1",
      DICE_MANYMOUSE_PADDLE1_LABEL_FR,
      DICE_RETROMOUSE_PADDLE1_LABEL_CAT_FR,
      DICE_MANYMOUSE_PADDLE1_INFO_0_FR,
      NULL,
      "manymouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_manymouse_paddle1_x",
      DICE_MANYMOUSE_PADDLE1_X_LABEL_FR,
      DICE_MANYMOUSE_PADDLE1_X_LABEL_CAT_FR,
      DICE_RETROMOUSE_PADDLE1_X_INFO_0_FR,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_FR},
         {"0y", OPTION_VAL_0Y_FR},
         {"1x", OPTION_VAL_1X_FR},
         {"1y", OPTION_VAL_1Y_FR},
         {"2x", OPTION_VAL_2X_FR},
         {"2y", OPTION_VAL_2Y_FR},
         {"3x", OPTION_VAL_3X_FR},
         {"3y", OPTION_VAL_3Y_FR},
         {NULL, NULL},
      },
      "1x"
   },
   {
      "dice_manymouse_paddle1_y",
      DICE_MANYMOUSE_PADDLE1_Y_LABEL_FR,
      DICE_MANYMOUSE_PADDLE1_Y_LABEL_CAT_FR,
      DICE_RETROMOUSE_PADDLE1_Y_INFO_0_FR,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_FR},
         {"0y", OPTION_VAL_0Y_FR},
         {"1x", OPTION_VAL_1X_FR},
         {"1y", OPTION_VAL_1Y_FR},
         {"2x", OPTION_VAL_2X_FR},
         {"2y", OPTION_VAL_2Y_FR},
         {"3x", OPTION_VAL_3X_FR},
         {"3y", OPTION_VAL_3Y_FR},
         {NULL, NULL},
      },
      "1y"
   },
   {
      "dice_manymouse_paddle2",
      DICE_MANYMOUSE_PADDLE2_LABEL_FR,
      DICE_RETROMOUSE_PADDLE2_LABEL_CAT_FR,
      DICE_MANYMOUSE_PADDLE2_INFO_0_FR,
      NULL,
      "manymouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_manymouse_paddle2_x",
      DICE_MANYMOUSE_PADDLE2_X_LABEL_FR,
      DICE_MANYMOUSE_PADDLE2_X_LABEL_CAT_FR,
      DICE_RETROMOUSE_PADDLE2_X_INFO_0_FR,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_FR},
         {"0y", OPTION_VAL_0Y_FR},
         {"1x", OPTION_VAL_1X_FR},
         {"1y", OPTION_VAL_1Y_FR},
         {"2x", OPTION_VAL_2X_FR},
         {"2y", OPTION_VAL_2Y_FR},
         {"3x", OPTION_VAL_3X_FR},
         {"3y", OPTION_VAL_3Y_FR},
         {NULL, NULL},
      },
      "2x"
   },
   {
      "dice_manymouse_paddle2_y",
      DICE_MANYMOUSE_PADDLE2_Y_LABEL_FR,
      DICE_MANYMOUSE_PADDLE2_Y_LABEL_CAT_FR,
      DICE_RETROMOUSE_PADDLE2_Y_INFO_0_FR,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_FR},
         {"0y", OPTION_VAL_0Y_FR},
         {"1x", OPTION_VAL_1X_FR},
         {"1y", OPTION_VAL_1Y_FR},
         {"2x", OPTION_VAL_2X_FR},
         {"2y", OPTION_VAL_2Y_FR},
         {"3x", OPTION_VAL_3X_FR},
         {"3y", OPTION_VAL_3Y_FR},
         {NULL, NULL},
      },
      "2y"
   },
   {
      "dice_manymouse_paddle3",
      DICE_MANYMOUSE_PADDLE3_LABEL_FR,
      DICE_RETROMOUSE_PADDLE3_LABEL_CAT_FR,
      DICE_MANYMOUSE_PADDLE3_INFO_0_FR,
      NULL,
      "manymouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_manymouse_paddle3_x",
      DICE_MANYMOUSE_PADDLE3_X_LABEL_FR,
      DICE_MANYMOUSE_PADDLE3_X_LABEL_CAT_FR,
      DICE_RETROMOUSE_PADDLE3_X_INFO_0_FR,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_FR},
         {"0y", OPTION_VAL_0Y_FR},
         {"1x", OPTION_VAL_1X_FR},
         {"1y", OPTION_VAL_1Y_FR},
         {"2x", OPTION_VAL_2X_FR},
         {"2y", OPTION_VAL_2Y_FR},
         {"3x", OPTION_VAL_3X_FR},
         {"3y", OPTION_VAL_3Y_FR},
         {NULL, NULL},
      },
      "3x"
   },
   {
      "dice_manymouse_paddle3_y",
      DICE_MANYMOUSE_PADDLE3_Y_LABEL_FR,
      DICE_MANYMOUSE_PADDLE3_Y_LABEL_CAT_FR,
      DICE_RETROMOUSE_PADDLE3_Y_INFO_0_FR,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_FR},
         {"0y", OPTION_VAL_0Y_FR},
         {"1x", OPTION_VAL_1X_FR},
         {"1y", OPTION_VAL_1Y_FR},
         {"2x", OPTION_VAL_2X_FR},
         {"2y", OPTION_VAL_2Y_FR},
         {"3x", OPTION_VAL_3X_FR},
         {"3y", OPTION_VAL_3Y_FR},
         {NULL, NULL},
      },
      "3y"
   },
#endif

   {
      "dice_dipswitch_1",
      DICE_DIPSWITCH_1_LABEL_FR,
      DICE_DIPSWITCH_1_LABEL_CAT_FR,
      DICE_DIPSWITCH_1_INFO_0_FR,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_FR},
         {"0", NULL},
         {"1", NULL},
         {NULL, NULL},
      },
      "-1"
   },
   {
      "dice_dipswitch_2",
      DICE_DIPSWITCH_2_LABEL_FR,
      DICE_DIPSWITCH_2_LABEL_CAT_FR,
      DICE_DIPSWITCH_2_INFO_0_FR,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_FR},
         {"0", NULL},
         {"1", NULL},
         {NULL, NULL},
      },
      "-1"
   },
   {
      "dice_dipswitch_3",
      DICE_DIPSWITCH_3_LABEL_FR,
      DICE_DIPSWITCH_3_LABEL_CAT_FR,
      DICE_DIPSWITCH_3_INFO_0_FR,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_FR},
         {"0", NULL},
         {"1", NULL},
         {NULL, NULL},
      },
      "-1"
   },
   {
      "dice_dipswitch16_1",
      DICE_DIPSWITCH16_1_LABEL_FR,
      DICE_DIPSWITCH16_1_LABEL_CAT_FR,
      DICE_DIPSWITCH16_1_INFO_0_FR,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_FR},
         {"0", NULL},
         {"1", NULL},
         {"2", NULL},
         {"3", NULL},
         {"4", NULL},
         {"5", NULL},
         {"6", NULL},
         {"7", NULL},
         {"8", NULL},
         {"9", NULL},
         {"10", NULL},
         {"11", NULL},
         {"12", NULL},
         {"13", NULL},
         {"14", NULL},
         {"15", NULL},
         {NULL, NULL},
      },
      "-1"
   },
   {
      "dice_dipswitch16_2",
      DICE_DIPSWITCH16_2_LABEL_FR,
      DICE_DIPSWITCH16_2_LABEL_CAT_FR,
      DICE_DIPSWITCH16_2_INFO_0_FR,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_FR},
         {"0", NULL},
         {"1", NULL},
         {"2", NULL},
         {"3", NULL},
         {"4", NULL},
         {"5", NULL},
         {"6", NULL},
         {"7", NULL},
         {"8", NULL},
         {"9", NULL},
         {"10", NULL},
         {"11", NULL},
         {"12", NULL},
         {"13", NULL},
         {"14", NULL},
         {"15", NULL},
         {NULL, NULL},
      },
      "-1"
   },

   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_fr = {
   option_cats_fr,
   option_defs_fr
};

/* RETRO_LANGUAGE_GA */

#define CATEGORY_INPUT_LABEL_GA "Ionchur"
#define CATEGORY_INPUT_INFO_0_GA "Cumraigh socruithe ionchuir croí-shonracha."
#define CATEGORY_RETROMOUSE_LABEL_GA "LuchRetro"
#define CATEGORY_RETROMOUSE_INFO_0_GA "Cumraigh socruithe il-luch libretro."
#define CATEGORY_MANYMOUSE_LABEL_GA NULL
#define CATEGORY_MANYMOUSE_INFO_0_GA "Cumraigh socruithe il-luch ManyMouse."
#define CATEGORY_DIPSWITCH_LABEL_GA "Lasc DIP"
#define CATEGORY_DIPSWITCH_INFO_0_GA "Cumraigh socruithe an lasc DIP agus an phoitéinsiméadar."
#define DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_LABEL_GA "Ionchur > Úsáid an Pointeoir Luchóige mar Pheadal 1"
#define DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_LABEL_CAT_GA "Úsáid an Pointeoir Luchóige mar Pheadal 1"
#define DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_INFO_0_GA "Úsáid pointeoir réamhshocraithe an chórais mar Pheadal Rialaitheora 1. Ní ligeann sé duit luch shonrach a roghnú má tá cinn iolracha agat."
#define DICE_PADDLE_JOYSTICK_ABSOLUTE_LABEL_GA "Ionchur > Úsáideann Luamhán stiúrtha Pheadal Gluaisne Lán"
#define DICE_PADDLE_JOYSTICK_ABSOLUTE_LABEL_CAT_GA "Úsáideann an Luamhán stiúrtha Pheadal Gluaisne Lán"
#define DICE_PADDLE_JOYSTICK_ABSOLUTE_INFO_0_GA "Déan raon gluaiseachta an luamháin stiúrtha a mhapáil go díreach chuig raon an rámha, seachas gluaiseachtaí coibhneasta."
#define DICE_PADDLE_KEYBOARD_SENSITIVITY_LABEL_GA "Ionchur > Íogaireacht Pheadal D-pad"
#define DICE_PADDLE_KEYBOARD_SENSITIVITY_LABEL_CAT_GA "Pheadal D-pad Íogaireacht"
#define DICE_PADDLE_KEYBOARD_SENSITIVITY_INFO_0_GA "Íogaireacht agus D-pad á úsáid mar peadal."
#define DICE_PADDLE_JOYSTICK_SENSITIVITY_LABEL_GA "Ionchur > Íogaireacht Bata Analógach Peadal"
#define DICE_PADDLE_JOYSTICK_SENSITIVITY_LABEL_CAT_GA "Íogaireacht Bata Analógach Peadal"
#define DICE_PADDLE_JOYSTICK_SENSITIVITY_INFO_0_GA "Íogaireacht agus bata analógach in úsáid mar peadal."
#define DICE_RETROMOUSE_PADDLE_SENSITIVITY_LABEL_GA "Ionchur > Íogaireacht Luch Retro Peadal"
#define DICE_RETROMOUSE_PADDLE_SENSITIVITY_LABEL_CAT_GA "Íogaireacht Luch Retro Peadal"
#define DICE_RETROMOUSE_PADDLE_SENSITIVITY_INFO_0_GA "Íogaireacht agus RetroMouse á úsáid mar peadal."
#define DICE_WHEEL_KEYJOY_SENSITIVITY_LABEL_GA "Ionchur > Íogaireacht Roth"
#define DICE_WHEEL_KEYJOY_SENSITIVITY_LABEL_CAT_GA "Íogaireacht Roth"
#define DICE_WHEEL_KEYJOY_SENSITIVITY_INFO_0_GA "Íogaireacht agus D-pad nó bata analógach á n-úsáid mar roth."
#define DICE_THROTTLE_KEYJOY_SENSITIVITY_LABEL_GA "Ionchur > Íogaireacht an Scóig"
#define DICE_THROTTLE_KEYJOY_SENSITIVITY_LABEL_CAT_GA "Íogaireacht an Scóig"
#define DICE_THROTTLE_KEYJOY_SENSITIVITY_INFO_0_GA "Íogaireacht agus D-pad nó bata analógach in úsáid mar scóig."
#define DICE_RETROMOUSE_PADDLE0_LABEL_GA "RetroMouse > Úsáid an Luch le haghaidh an Pheadal 1"
#define DICE_RETROMOUSE_PADDLE0_LABEL_CAT_GA "Úsáid an Luch le haghaidh an Pheadal 1"
#define DICE_RETROMOUSE_PADDLE0_INFO_0_GA "Bain úsáid as luchóg shonrach do Pheadal 1, arna roghnú ag Innéacs Luiche Port 1."
#define DICE_RETROMOUSE_PADDLE1_LABEL_GA "RetroMouse > Úsáid an Luch le haghaidh Pheadal 2"
#define DICE_RETROMOUSE_PADDLE1_LABEL_CAT_GA "Úsáid an Luch le haghaidh Pheadal 2"
#define DICE_RETROMOUSE_PADDLE1_INFO_0_GA "Bain úsáid as luchóg shonrach do Pheadal 2, arna roghnú ag Innéacs Luiche Port 2."
#define DICE_RETROMOUSE_PADDLE2_LABEL_GA "RetroMouse > Úsáid an Luch le haghaidh Pheadal 3"
#define DICE_RETROMOUSE_PADDLE2_LABEL_CAT_GA "Úsáid an Luch le haghaidh an Pheadal 3"
#define DICE_RETROMOUSE_PADDLE2_INFO_0_GA "Bain úsáid as luchóg shonrach do Pheadal 3, arna roghnú ag Innéacs Luiche Port 3."
#define DICE_RETROMOUSE_PADDLE3_LABEL_GA "RetroMouse > Úsáid an Luch le haghaidh Pheadal 4"
#define DICE_RETROMOUSE_PADDLE3_LABEL_CAT_GA "Úsáid an Luch le haghaidh an Pheadal 4"
#define DICE_RETROMOUSE_PADDLE3_INFO_0_GA "Bain úsáid as luchóg shonrach do Pheadal 4, arna roghnú ag Innéacs Luiche Port 4."
#define DICE_RETROMOUSE_PADDLE0_X_LABEL_GA "RetroMouse > Ais Luiche le haghaidh Pheadal 1 Cothrománach"
#define DICE_RETROMOUSE_PADDLE0_X_LABEL_CAT_GA "Ais Luiche le haghaidh Pheadal 1 Cothrománach"
#define DICE_RETROMOUSE_PADDLE0_X_INFO_0_GA "Ais luiche do imreoir 1, gluaiseacht chothrománach scáileáin."
#define OPTION_VAL_X_GA NULL
#define OPTION_VAL_Y_GA NULL
#define DICE_RETROMOUSE_PADDLE0_Y_LABEL_GA "RetroMouse > Ais Luiche le haghaidh Pheadal 1 Ingearach"
#define DICE_RETROMOUSE_PADDLE0_Y_LABEL_CAT_GA "Ais Luiche le haghaidh Pheadal 1 Ingearach"
#define DICE_RETROMOUSE_PADDLE0_Y_INFO_0_GA "Ais luiche do imreoir 1, gluaiseacht ingearach scáileáin."
#define DICE_RETROMOUSE_PADDLE1_X_LABEL_GA "RetroMouse > Ais Luiche le haghaidh Pheadal 2 Cothrománach"
#define DICE_RETROMOUSE_PADDLE1_X_LABEL_CAT_GA "Ais Luiche le haghaidh Pheadal 2 Cothrománach"
#define DICE_RETROMOUSE_PADDLE1_X_INFO_0_GA "Ais luiche do imreoir 2, gluaiseacht chothrománach scáileáin."
#define DICE_RETROMOUSE_PADDLE1_Y_LABEL_GA "RetroMouse > Ais Luiche le haghaidh Pheadal 2 Ingearach"
#define DICE_RETROMOUSE_PADDLE1_Y_LABEL_CAT_GA "Ais Luiche le haghaidh Pheadal 2 Ingearach"
#define DICE_RETROMOUSE_PADDLE1_Y_INFO_0_GA "Ais luiche do imreoir 2, gluaiseacht scáileáin ingearach."
#define DICE_RETROMOUSE_PADDLE2_X_LABEL_GA "RetroMouse > Ais Luiche le haghaidh Pheadal 3 Cothrománach"
#define DICE_RETROMOUSE_PADDLE2_X_LABEL_CAT_GA "Ais Luiche le haghaidh Pheadal 3 Cothrománach"
#define DICE_RETROMOUSE_PADDLE2_X_INFO_0_GA "Ais luiche do imreoir 3, gluaiseacht chothrománach scáileáin."
#define DICE_RETROMOUSE_PADDLE2_Y_LABEL_GA "RetroMouse > Ais Luiche le haghaidh Pheadal 3 Ingearach"
#define DICE_RETROMOUSE_PADDLE2_Y_LABEL_CAT_GA "Ais Luiche le haghaidh Pheadal 3 Ingearach"
#define DICE_RETROMOUSE_PADDLE2_Y_INFO_0_GA "Ais luiche do imreoir 3, gluaiseacht scáileáin ingearach."
#define DICE_RETROMOUSE_PADDLE3_X_LABEL_GA "RetroMouse > Ais Luiche le haghaidh Pheadal 4 Cothrománach"
#define DICE_RETROMOUSE_PADDLE3_X_LABEL_CAT_GA "Ais Luiche le haghaidh Pheadal 4 Cothrománach"
#define DICE_RETROMOUSE_PADDLE3_X_INFO_0_GA "Ais luiche do imreoir 4, gluaiseacht chothrománach scáileáin."
#define DICE_RETROMOUSE_PADDLE3_Y_LABEL_GA "RetroMouse > Ais Luiche le haghaidh Paddle 4 Ingearach"
#define DICE_RETROMOUSE_PADDLE3_Y_LABEL_CAT_GA "Ais Luiche le haghaidh Paddle 4 Ingearach"
#define DICE_RETROMOUSE_PADDLE3_Y_INFO_0_GA "Ais luiche do imreoir 4, gluaiseacht ingearach scáileáin."
#define DICE_MANYMOUSE_PADDLE0_LABEL_GA "ManyMouse > Úsáid an Luch le haghaidh an Phadail 1"
#define DICE_MANYMOUSE_PADDLE0_INFO_0_GA "Bain úsáid as luch le haghaidh Paddle 1."
#define DICE_MANYMOUSE_PADDLE0_X_LABEL_GA "ManyMouse > Luchóg-Padail 1 x"
#define DICE_MANYMOUSE_PADDLE0_X_LABEL_CAT_GA "Luchóg-Padail 1 x"
#define OPTION_VAL_0X_GA NULL
#define OPTION_VAL_0Y_GA NULL
#define OPTION_VAL_1X_GA NULL
#define OPTION_VAL_1Y_GA NULL
#define OPTION_VAL_2X_GA NULL
#define OPTION_VAL_2Y_GA NULL
#define OPTION_VAL_3X_GA NULL
#define OPTION_VAL_3Y_GA NULL
#define DICE_MANYMOUSE_PADDLE0_Y_LABEL_GA "ManyMouse > Luchóg-Padail 1 bliain"
#define DICE_MANYMOUSE_PADDLE0_Y_LABEL_CAT_GA "Luchóg-Padail 1 bliain"
#define DICE_MANYMOUSE_PADDLE1_LABEL_GA "ManyMouse > Úsáid Luch le haghaidh Paddle 2"
#define DICE_MANYMOUSE_PADDLE1_INFO_0_GA "Bain úsáid as luch le haghaidh Paddle 2."
#define DICE_MANYMOUSE_PADDLE1_X_LABEL_GA "ManyMouse > Luchóg-Padail 2 x"
#define DICE_MANYMOUSE_PADDLE1_X_LABEL_CAT_GA "Luchóg-Padail 2 x"
#define DICE_MANYMOUSE_PADDLE1_Y_LABEL_GA "ManyMouse > Luchóg-Padail 2 y"
#define DICE_MANYMOUSE_PADDLE1_Y_LABEL_CAT_GA "Luchóg-Padail 2 y"
#define DICE_MANYMOUSE_PADDLE2_LABEL_GA "ManyMouse > Úsáid Luch le haghaidh Paddle 3"
#define DICE_MANYMOUSE_PADDLE2_INFO_0_GA "Bain úsáid as luch le haghaidh Paddle 3."
#define DICE_MANYMOUSE_PADDLE2_X_LABEL_GA "ManyMouse > Luchóg-Padail 3 x"
#define DICE_MANYMOUSE_PADDLE2_X_LABEL_CAT_GA "Luchóg-Padail 3 x"
#define DICE_MANYMOUSE_PADDLE2_Y_LABEL_GA "ManyMouse > Luchóg-Padail 3 y"
#define DICE_MANYMOUSE_PADDLE2_Y_LABEL_CAT_GA "Luchóg-Padail 3 bliana"
#define DICE_MANYMOUSE_PADDLE3_LABEL_GA "ManyMouse > Úsáid Luch le haghaidh Paddle 4"
#define DICE_MANYMOUSE_PADDLE3_INFO_0_GA "Bain úsáid as luch le haghaidh Paddle 4."
#define DICE_MANYMOUSE_PADDLE3_X_LABEL_GA "ManyMouse > Luchóg-Padail 4 x"
#define DICE_MANYMOUSE_PADDLE3_X_LABEL_CAT_GA "Luchóg-Padail 4 x"
#define DICE_MANYMOUSE_PADDLE3_Y_LABEL_GA "ManyMouse > Luchóg-Padail 4 y"
#define DICE_MANYMOUSE_PADDLE3_Y_LABEL_CAT_GA "Luchóg-Padail 4 y"
#define DICE_DIPSWITCH_1_LABEL_GA "Lasc DIP > Lasc DIP 1"
#define DICE_DIPSWITCH_1_LABEL_CAT_GA "Lasc DIP 1"
#define DICE_DIPSWITCH_1_INFO_0_GA "Socrú le haghaidh lasc DIP 1."
#define OPTION_VAL_1_GA "réamhshocraithe"
#define DICE_DIPSWITCH_2_LABEL_GA "Lasc DIP > Lasc DIP 2"
#define DICE_DIPSWITCH_2_LABEL_CAT_GA "Lasc DIP 2"
#define DICE_DIPSWITCH_2_INFO_0_GA "Socrú le haghaidh lasc DIP 2."
#define DICE_DIPSWITCH_3_LABEL_GA "Lasc DIP > Lasc DIP 3"
#define DICE_DIPSWITCH_3_LABEL_CAT_GA "Lasc DIP 3"
#define DICE_DIPSWITCH_3_INFO_0_GA "Socrú le haghaidh lasc DIP 3."
#define DICE_DIPSWITCH16_1_LABEL_GA "Lasc DIP > Lasc DIP Heicseagánach 1"
#define DICE_DIPSWITCH16_1_LABEL_CAT_GA "Lasc DIP Heics 1"
#define DICE_DIPSWITCH16_1_INFO_0_GA "Socrú le haghaidh lasc DIP 16-shuíomh uimhir 1."
#define DICE_DIPSWITCH16_2_LABEL_GA "Lasc DIP > Lasc DIP Heicseagánach 2"
#define DICE_DIPSWITCH16_2_LABEL_CAT_GA "Lasc DIP Heics 2"
#define DICE_DIPSWITCH16_2_INFO_0_GA "Socrú le haghaidh lasc DIP 16-shuíomh uimhir 2."

struct retro_core_option_v2_category option_cats_ga[] = {
   {
      "input",
      CATEGORY_INPUT_LABEL_GA,
      CATEGORY_INPUT_INFO_0_GA
   },
   {
      "retromouse",
      CATEGORY_RETROMOUSE_LABEL_GA,
      CATEGORY_RETROMOUSE_INFO_0_GA
   },
#ifdef MANYMOUSE
   {
      "manymouse",
      CATEGORY_MANYMOUSE_LABEL_GA,
      CATEGORY_MANYMOUSE_INFO_0_GA
   },
#endif
   {
      "dipswitch",
      CATEGORY_DIPSWITCH_LABEL_GA,
      CATEGORY_DIPSWITCH_INFO_0_GA
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_ga[] = {
   {
      "dice_use_mouse_pointer_for_paddle_1",
      DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_LABEL_GA,
      DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_LABEL_CAT_GA,
      DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_INFO_0_GA,
      NULL,
      "input",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_paddle_joystick_absolute",
      DICE_PADDLE_JOYSTICK_ABSOLUTE_LABEL_GA,
      DICE_PADDLE_JOYSTICK_ABSOLUTE_LABEL_CAT_GA,
      DICE_PADDLE_JOYSTICK_ABSOLUTE_INFO_0_GA,
      NULL,
      "input",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      // D-pad but not necessarily keyboard under libretro,
      // that name comes from the upstream code.
      "dice_paddle_keyboard_sensitivity",
      DICE_PADDLE_KEYBOARD_SENSITIVITY_LABEL_GA,
      DICE_PADDLE_KEYBOARD_SENSITIVITY_LABEL_CAT_GA,
      DICE_PADDLE_KEYBOARD_SENSITIVITY_INFO_0_GA,
      NULL,
      "input",
      {
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "250"
   },
   {
      "dice_paddle_joystick_sensitivity",
      DICE_PADDLE_JOYSTICK_SENSITIVITY_LABEL_GA,
      DICE_PADDLE_JOYSTICK_SENSITIVITY_LABEL_CAT_GA,
      DICE_PADDLE_JOYSTICK_SENSITIVITY_INFO_0_GA,
      NULL,
      "input",
      {
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "500"
   },
   {
      "dice_retromouse_paddle_sensitivity",
      DICE_RETROMOUSE_PADDLE_SENSITIVITY_LABEL_GA,
      DICE_RETROMOUSE_PADDLE_SENSITIVITY_LABEL_CAT_GA,
      DICE_RETROMOUSE_PADDLE_SENSITIVITY_INFO_0_GA,
      NULL,
      "input",
      {
         {"25", NULL},
         {"50", NULL},
         {"75", NULL},
         {"100", NULL},
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "125"
   },
   {
      "dice_wheel_keyjoy_sensitivity",
      DICE_WHEEL_KEYJOY_SENSITIVITY_LABEL_GA,
      DICE_WHEEL_KEYJOY_SENSITIVITY_LABEL_CAT_GA,
      DICE_WHEEL_KEYJOY_SENSITIVITY_INFO_0_GA,
      NULL,
      "input",
      {
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "500"
   },
   {
      "dice_throttle_keyjoy_sensitivity",
      DICE_THROTTLE_KEYJOY_SENSITIVITY_LABEL_GA,
      DICE_THROTTLE_KEYJOY_SENSITIVITY_LABEL_CAT_GA,
      DICE_THROTTLE_KEYJOY_SENSITIVITY_INFO_0_GA,
      NULL,
      "input",
      {
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "250"
   },

   {
      "dice_retromouse_paddle0",
      DICE_RETROMOUSE_PADDLE0_LABEL_GA,
      DICE_RETROMOUSE_PADDLE0_LABEL_CAT_GA,
      DICE_RETROMOUSE_PADDLE0_INFO_0_GA,
      NULL,
      "retromouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_retromouse_paddle1",
      DICE_RETROMOUSE_PADDLE1_LABEL_GA,
      DICE_RETROMOUSE_PADDLE1_LABEL_CAT_GA,
      DICE_RETROMOUSE_PADDLE1_INFO_0_GA,
      NULL,
      "retromouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_retromouse_paddle2",
      DICE_RETROMOUSE_PADDLE2_LABEL_GA,
      DICE_RETROMOUSE_PADDLE2_LABEL_CAT_GA,
      DICE_RETROMOUSE_PADDLE2_INFO_0_GA,
      NULL,
      "retromouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_retromouse_paddle3",
      DICE_RETROMOUSE_PADDLE3_LABEL_GA,
      DICE_RETROMOUSE_PADDLE3_LABEL_CAT_GA,
      DICE_RETROMOUSE_PADDLE3_INFO_0_GA,
      NULL,
      "retromouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_retromouse_paddle0_x",
      DICE_RETROMOUSE_PADDLE0_X_LABEL_GA,
      DICE_RETROMOUSE_PADDLE0_X_LABEL_CAT_GA,
      DICE_RETROMOUSE_PADDLE0_X_INFO_0_GA,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_GA},
         {"y", OPTION_VAL_Y_GA},
         {NULL, NULL},
      },
      "x"
   },
   {
      "dice_retromouse_paddle0_y",
      DICE_RETROMOUSE_PADDLE0_Y_LABEL_GA,
      DICE_RETROMOUSE_PADDLE0_Y_LABEL_CAT_GA,
      DICE_RETROMOUSE_PADDLE0_Y_INFO_0_GA,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_GA},
         {"y", OPTION_VAL_Y_GA},
         {NULL, NULL},
      },
      "y"
   },
   {
      "dice_retromouse_paddle1_x",
      DICE_RETROMOUSE_PADDLE1_X_LABEL_GA,
      DICE_RETROMOUSE_PADDLE1_X_LABEL_CAT_GA,
      DICE_RETROMOUSE_PADDLE1_X_INFO_0_GA,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_GA},
         {"y", OPTION_VAL_Y_GA},
         {NULL, NULL},
      },
      "x"
   },
   {
      "dice_retromouse_paddle1_y",
      DICE_RETROMOUSE_PADDLE1_Y_LABEL_GA,
      DICE_RETROMOUSE_PADDLE1_Y_LABEL_CAT_GA,
      DICE_RETROMOUSE_PADDLE1_Y_INFO_0_GA,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_GA},
         {"y", OPTION_VAL_Y_GA},
         {NULL, NULL},
      },
      "y"
   },
   {
      "dice_retromouse_paddle2_x",
      DICE_RETROMOUSE_PADDLE2_X_LABEL_GA,
      DICE_RETROMOUSE_PADDLE2_X_LABEL_CAT_GA,
      DICE_RETROMOUSE_PADDLE2_X_INFO_0_GA,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_GA},
         {"y", OPTION_VAL_Y_GA},
         {NULL, NULL},
      },
      "x"
   },
   {
      "dice_retromouse_paddle2_y",
      DICE_RETROMOUSE_PADDLE2_Y_LABEL_GA,
      DICE_RETROMOUSE_PADDLE2_Y_LABEL_CAT_GA,
      DICE_RETROMOUSE_PADDLE2_Y_INFO_0_GA,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_GA},
         {"y", OPTION_VAL_Y_GA},
         {NULL, NULL},
      },
      "y"
   },
   {
      "dice_retromouse_paddle3_x",
      DICE_RETROMOUSE_PADDLE3_X_LABEL_GA,
      DICE_RETROMOUSE_PADDLE3_X_LABEL_CAT_GA,
      DICE_RETROMOUSE_PADDLE3_X_INFO_0_GA,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_GA},
         {"y", OPTION_VAL_Y_GA},
         {NULL, NULL},
      },
      "x"
   },
   {
      "dice_retromouse_paddle3_y",
      DICE_RETROMOUSE_PADDLE3_Y_LABEL_GA,
      DICE_RETROMOUSE_PADDLE3_Y_LABEL_CAT_GA,
      DICE_RETROMOUSE_PADDLE3_Y_INFO_0_GA,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_GA},
         {"y", OPTION_VAL_Y_GA},
         {NULL, NULL},
      },
      "y"
   },

#ifdef MANYMOUSE
   {
      "dice_manymouse_paddle0",
      DICE_MANYMOUSE_PADDLE0_LABEL_GA,
      DICE_RETROMOUSE_PADDLE0_LABEL_CAT_GA,
      DICE_MANYMOUSE_PADDLE0_INFO_0_GA,
      NULL,
      "manymouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_manymouse_paddle0_x",
      DICE_MANYMOUSE_PADDLE0_X_LABEL_GA,
      DICE_MANYMOUSE_PADDLE0_X_LABEL_CAT_GA,
      DICE_RETROMOUSE_PADDLE0_X_INFO_0_GA,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_GA},
         {"0y", OPTION_VAL_0Y_GA},
         {"1x", OPTION_VAL_1X_GA},
         {"1y", OPTION_VAL_1Y_GA},
         {"2x", OPTION_VAL_2X_GA},
         {"2y", OPTION_VAL_2Y_GA},
         {"3x", OPTION_VAL_3X_GA},
         {"3y", OPTION_VAL_3Y_GA},
         {NULL, NULL},
      },
      "0x"
   },
   {
      "dice_manymouse_paddle0_y",
      DICE_MANYMOUSE_PADDLE0_Y_LABEL_GA,
      DICE_MANYMOUSE_PADDLE0_Y_LABEL_CAT_GA,
      DICE_RETROMOUSE_PADDLE0_Y_INFO_0_GA,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_GA},
         {"0y", OPTION_VAL_0Y_GA},
         {"1x", OPTION_VAL_1X_GA},
         {"1y", OPTION_VAL_1Y_GA},
         {"2x", OPTION_VAL_2X_GA},
         {"2y", OPTION_VAL_2Y_GA},
         {"3x", OPTION_VAL_3X_GA},
         {"3y", OPTION_VAL_3Y_GA},
         {NULL, NULL},
      },
      "0y"
   },
   {
      "dice_manymouse_paddle1",
      DICE_MANYMOUSE_PADDLE1_LABEL_GA,
      DICE_RETROMOUSE_PADDLE1_LABEL_CAT_GA,
      DICE_MANYMOUSE_PADDLE1_INFO_0_GA,
      NULL,
      "manymouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_manymouse_paddle1_x",
      DICE_MANYMOUSE_PADDLE1_X_LABEL_GA,
      DICE_MANYMOUSE_PADDLE1_X_LABEL_CAT_GA,
      DICE_RETROMOUSE_PADDLE1_X_INFO_0_GA,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_GA},
         {"0y", OPTION_VAL_0Y_GA},
         {"1x", OPTION_VAL_1X_GA},
         {"1y", OPTION_VAL_1Y_GA},
         {"2x", OPTION_VAL_2X_GA},
         {"2y", OPTION_VAL_2Y_GA},
         {"3x", OPTION_VAL_3X_GA},
         {"3y", OPTION_VAL_3Y_GA},
         {NULL, NULL},
      },
      "1x"
   },
   {
      "dice_manymouse_paddle1_y",
      DICE_MANYMOUSE_PADDLE1_Y_LABEL_GA,
      DICE_MANYMOUSE_PADDLE1_Y_LABEL_CAT_GA,
      DICE_RETROMOUSE_PADDLE1_Y_INFO_0_GA,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_GA},
         {"0y", OPTION_VAL_0Y_GA},
         {"1x", OPTION_VAL_1X_GA},
         {"1y", OPTION_VAL_1Y_GA},
         {"2x", OPTION_VAL_2X_GA},
         {"2y", OPTION_VAL_2Y_GA},
         {"3x", OPTION_VAL_3X_GA},
         {"3y", OPTION_VAL_3Y_GA},
         {NULL, NULL},
      },
      "1y"
   },
   {
      "dice_manymouse_paddle2",
      DICE_MANYMOUSE_PADDLE2_LABEL_GA,
      DICE_RETROMOUSE_PADDLE2_LABEL_CAT_GA,
      DICE_MANYMOUSE_PADDLE2_INFO_0_GA,
      NULL,
      "manymouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_manymouse_paddle2_x",
      DICE_MANYMOUSE_PADDLE2_X_LABEL_GA,
      DICE_MANYMOUSE_PADDLE2_X_LABEL_CAT_GA,
      DICE_RETROMOUSE_PADDLE2_X_INFO_0_GA,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_GA},
         {"0y", OPTION_VAL_0Y_GA},
         {"1x", OPTION_VAL_1X_GA},
         {"1y", OPTION_VAL_1Y_GA},
         {"2x", OPTION_VAL_2X_GA},
         {"2y", OPTION_VAL_2Y_GA},
         {"3x", OPTION_VAL_3X_GA},
         {"3y", OPTION_VAL_3Y_GA},
         {NULL, NULL},
      },
      "2x"
   },
   {
      "dice_manymouse_paddle2_y",
      DICE_MANYMOUSE_PADDLE2_Y_LABEL_GA,
      DICE_MANYMOUSE_PADDLE2_Y_LABEL_CAT_GA,
      DICE_RETROMOUSE_PADDLE2_Y_INFO_0_GA,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_GA},
         {"0y", OPTION_VAL_0Y_GA},
         {"1x", OPTION_VAL_1X_GA},
         {"1y", OPTION_VAL_1Y_GA},
         {"2x", OPTION_VAL_2X_GA},
         {"2y", OPTION_VAL_2Y_GA},
         {"3x", OPTION_VAL_3X_GA},
         {"3y", OPTION_VAL_3Y_GA},
         {NULL, NULL},
      },
      "2y"
   },
   {
      "dice_manymouse_paddle3",
      DICE_MANYMOUSE_PADDLE3_LABEL_GA,
      DICE_RETROMOUSE_PADDLE3_LABEL_CAT_GA,
      DICE_MANYMOUSE_PADDLE3_INFO_0_GA,
      NULL,
      "manymouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_manymouse_paddle3_x",
      DICE_MANYMOUSE_PADDLE3_X_LABEL_GA,
      DICE_MANYMOUSE_PADDLE3_X_LABEL_CAT_GA,
      DICE_RETROMOUSE_PADDLE3_X_INFO_0_GA,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_GA},
         {"0y", OPTION_VAL_0Y_GA},
         {"1x", OPTION_VAL_1X_GA},
         {"1y", OPTION_VAL_1Y_GA},
         {"2x", OPTION_VAL_2X_GA},
         {"2y", OPTION_VAL_2Y_GA},
         {"3x", OPTION_VAL_3X_GA},
         {"3y", OPTION_VAL_3Y_GA},
         {NULL, NULL},
      },
      "3x"
   },
   {
      "dice_manymouse_paddle3_y",
      DICE_MANYMOUSE_PADDLE3_Y_LABEL_GA,
      DICE_MANYMOUSE_PADDLE3_Y_LABEL_CAT_GA,
      DICE_RETROMOUSE_PADDLE3_Y_INFO_0_GA,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_GA},
         {"0y", OPTION_VAL_0Y_GA},
         {"1x", OPTION_VAL_1X_GA},
         {"1y", OPTION_VAL_1Y_GA},
         {"2x", OPTION_VAL_2X_GA},
         {"2y", OPTION_VAL_2Y_GA},
         {"3x", OPTION_VAL_3X_GA},
         {"3y", OPTION_VAL_3Y_GA},
         {NULL, NULL},
      },
      "3y"
   },
#endif

   {
      "dice_dipswitch_1",
      DICE_DIPSWITCH_1_LABEL_GA,
      DICE_DIPSWITCH_1_LABEL_CAT_GA,
      DICE_DIPSWITCH_1_INFO_0_GA,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_GA},
         {"0", NULL},
         {"1", NULL},
         {NULL, NULL},
      },
      "-1"
   },
   {
      "dice_dipswitch_2",
      DICE_DIPSWITCH_2_LABEL_GA,
      DICE_DIPSWITCH_2_LABEL_CAT_GA,
      DICE_DIPSWITCH_2_INFO_0_GA,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_GA},
         {"0", NULL},
         {"1", NULL},
         {NULL, NULL},
      },
      "-1"
   },
   {
      "dice_dipswitch_3",
      DICE_DIPSWITCH_3_LABEL_GA,
      DICE_DIPSWITCH_3_LABEL_CAT_GA,
      DICE_DIPSWITCH_3_INFO_0_GA,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_GA},
         {"0", NULL},
         {"1", NULL},
         {NULL, NULL},
      },
      "-1"
   },
   {
      "dice_dipswitch16_1",
      DICE_DIPSWITCH16_1_LABEL_GA,
      DICE_DIPSWITCH16_1_LABEL_CAT_GA,
      DICE_DIPSWITCH16_1_INFO_0_GA,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_GA},
         {"0", NULL},
         {"1", NULL},
         {"2", NULL},
         {"3", NULL},
         {"4", NULL},
         {"5", NULL},
         {"6", NULL},
         {"7", NULL},
         {"8", NULL},
         {"9", NULL},
         {"10", NULL},
         {"11", NULL},
         {"12", NULL},
         {"13", NULL},
         {"14", NULL},
         {"15", NULL},
         {NULL, NULL},
      },
      "-1"
   },
   {
      "dice_dipswitch16_2",
      DICE_DIPSWITCH16_2_LABEL_GA,
      DICE_DIPSWITCH16_2_LABEL_CAT_GA,
      DICE_DIPSWITCH16_2_INFO_0_GA,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_GA},
         {"0", NULL},
         {"1", NULL},
         {"2", NULL},
         {"3", NULL},
         {"4", NULL},
         {"5", NULL},
         {"6", NULL},
         {"7", NULL},
         {"8", NULL},
         {"9", NULL},
         {"10", NULL},
         {"11", NULL},
         {"12", NULL},
         {"13", NULL},
         {"14", NULL},
         {"15", NULL},
         {NULL, NULL},
      },
      "-1"
   },

   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_ga = {
   option_cats_ga,
   option_defs_ga
};

/* RETRO_LANGUAGE_GL */

#define CATEGORY_INPUT_LABEL_GL "Entrada"
#define CATEGORY_INPUT_INFO_0_GL "Configurar a entrada específica do núcleo."
#define CATEGORY_RETROMOUSE_LABEL_GL "Rato Retro"
#define CATEGORY_RETROMOUSE_INFO_0_GL "Configurar as opcións de múltiples ratos en libretro."
#define CATEGORY_MANYMOUSE_LABEL_GL NULL
#define CATEGORY_MANYMOUSE_INFO_0_GL "Configurar os axustes para varios ratos de ManyMouse."
#define CATEGORY_DIPSWITCH_LABEL_GL "Interruptor DIP"
#define CATEGORY_DIPSWITCH_INFO_0_GL "Configurar os axustes do interruptor DIP e do potenciómetro."
#define DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_LABEL_GL "Entrada > Usar o punteiro do rato para o mando xiratorio 1"
#define DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_LABEL_CAT_GL "Usar o punteiro do rato para o mando xiratorio 1"
#define DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_INFO_0_GL "Usar o punteiro do rato do sistema como mando xiratorio 1. Non permite escoller un rato específico se tes varios conectados."
#define DICE_PADDLE_JOYSTICK_ABSOLUTE_LABEL_GL "Entrada > O mando de roda usa movemento absoluto"
#define DICE_PADDLE_JOYSTICK_ABSOLUTE_LABEL_CAT_GL "O mando de roda usa movemento absoluto"
#define DICE_PADDLE_JOYSTICK_ABSOLUTE_INFO_0_GL "Asignar directamente a gama de movemento da panca de pando á do mando de roda, en lugar de movementos relativos."
#define DICE_PADDLE_KEYBOARD_SENSITIVITY_LABEL_GL "Entrada > Sensibilidade do mando xiratorio para a cruceta"
#define DICE_PADDLE_KEYBOARD_SENSITIVITY_LABEL_CAT_GL "Sensibilidade do mando xiratorio ca cruceta"
#define DICE_PADDLE_KEYBOARD_SENSITIVITY_INFO_0_GL "Sensibilidade ao usar a cruceta para controlar un mando de roda."
#define DICE_PADDLE_JOYSTICK_SENSITIVITY_LABEL_GL "Entrada > Sensibilidade do mando de roda ca panca analóxica"
#define DICE_PADDLE_JOYSTICK_SENSITIVITY_LABEL_CAT_GL "Sensibilidade do mando de roda ca panca analóxica"
#define DICE_PADDLE_JOYSTICK_SENSITIVITY_INFO_0_GL "Sensibilidade ao usar a panca analóxica para controlar un mando de roda."
#define DICE_RETROMOUSE_PADDLE_SENSITIVITY_LABEL_GL "Entrada > Sensibilidade do mando xiratorio co RetroMouse"
#define DICE_RETROMOUSE_PADDLE_SENSITIVITY_LABEL_CAT_GL "Sensibilidade do mando xiratorio co RetroMouse"
#define DICE_RETROMOUSE_PADDLE_SENSITIVITY_INFO_0_GL "Sensibilidade ao usar RetroMouse para controlar un mando xiratorio."
#define DICE_WHEEL_KEYJOY_SENSITIVITY_LABEL_GL "Entrada > Sensibilidade do volante"
#define DICE_WHEEL_KEYJOY_SENSITIVITY_LABEL_CAT_GL "Sensibilidade do volante"
#define DICE_WHEEL_KEYJOY_SENSITIVITY_INFO_0_GL "Sensibilidade ao usar a cruceta ou a panca analóxica para controlar un volante."
#define DICE_THROTTLE_KEYJOY_SENSITIVITY_LABEL_GL "Entrada > Sensibilidade do acelerador"
#define DICE_THROTTLE_KEYJOY_SENSITIVITY_LABEL_CAT_GL "Sensibilidade do acelerador"
#define DICE_THROTTLE_KEYJOY_SENSITIVITY_INFO_0_GL "Sensibilidade ao usar a cruceta ou a panca analóxica para controlar o acelerador."
#define DICE_RETROMOUSE_PADDLE0_LABEL_GL "RetroMouse > Usar o rato para o mando xiratorio 1"
#define DICE_RETROMOUSE_PADDLE0_LABEL_CAT_GL "Usar o rato para o mando xiratorio 1"
#define DICE_RETROMOUSE_PADDLE0_INFO_0_GL "Usar un rato específico para o mando xiratorio 1, elixido polo índice de rato do porto 1."
#define DICE_RETROMOUSE_PADDLE1_LABEL_GL "RetroMouse > Usar o rato para o mando xiratorio 2"
#define DICE_RETROMOUSE_PADDLE1_LABEL_CAT_GL "Usar o rato para o mando xiratorio 2"
#define DICE_RETROMOUSE_PADDLE1_INFO_0_GL "Usar un rato específico para o mando xiratorio 2, elixido polo índice de rato do porto 2."
#define DICE_RETROMOUSE_PADDLE2_LABEL_GL "RetroMouse > Usar rato para mando xiratorio 3"
#define DICE_RETROMOUSE_PADDLE2_LABEL_CAT_GL "Usar rato para mando xiratorio 3"
#define DICE_RETROMOUSE_PADDLE2_INFO_0_GL "Usar un rato específico para o mando xiratorio 3, elixido polo índice de rato do porto 3."
#define DICE_RETROMOUSE_PADDLE3_LABEL_GL "RetroMouse > Usar rato para mando xiratorio 4"
#define DICE_RETROMOUSE_PADDLE3_LABEL_CAT_GL "Usar rato para mando xiratorio 4"
#define DICE_RETROMOUSE_PADDLE3_INFO_0_GL "Usar un rato específico para o mando xiratorio 4, elixido polo índice de rato do porto 4."
#define DICE_RETROMOUSE_PADDLE0_X_LABEL_GL "RetroMouse > Eixe do rato para mando xiratorio 1 horizontal"
#define DICE_RETROMOUSE_PADDLE0_X_LABEL_CAT_GL "Eixe do rato para o mando xiratorio 1 horizontal"
#define DICE_RETROMOUSE_PADDLE0_X_INFO_0_GL "Eixe do rato para o xogador 1, movemento horizontal na pantalla."
#define OPTION_VAL_X_GL NULL
#define OPTION_VAL_Y_GL NULL
#define DICE_RETROMOUSE_PADDLE0_Y_LABEL_GL "RetroMouse > Eixe do rato para o mando xiratorio 1 vertical"
#define DICE_RETROMOUSE_PADDLE0_Y_LABEL_CAT_GL "Eixe do rato para o mando xiratorio 1 vertical"
#define DICE_RETROMOUSE_PADDLE0_Y_INFO_0_GL "Eixe do rato para o xogador 1, movemento vertical na pantalla."
#define DICE_RETROMOUSE_PADDLE1_X_LABEL_GL "RetroMouse > Eixe do rato para o mando xiratorio 2 horizontal"
#define DICE_RETROMOUSE_PADDLE1_X_LABEL_CAT_GL "Eixe do rato para o mando xiratorio 2 horizontal"
#define DICE_RETROMOUSE_PADDLE1_X_INFO_0_GL "Eixe do rato para o xogador 2, movemento horizontal."
#define DICE_RETROMOUSE_PADDLE1_Y_LABEL_GL "RetroMouse > Eixe do rato para o mando xiratorio 2 vertical"
#define DICE_RETROMOUSE_PADDLE1_Y_LABEL_CAT_GL "Eixe do rato para o mando xiratorio 2 vertical"
#define DICE_RETROMOUSE_PADDLE1_Y_INFO_0_GL "Eixe do rato para o xogador 2, movemento vertical."
#define DICE_RETROMOUSE_PADDLE2_X_LABEL_GL "RetroMouse > Eixe do rato para o mando xiratorio 3 horizontal"
#define DICE_RETROMOUSE_PADDLE2_X_LABEL_CAT_GL "Eixe do rato para o mando xiratorio 3 horizontal"
#define DICE_RETROMOUSE_PADDLE2_X_INFO_0_GL "Eixe do rato para o xogador 3, movemento horizontal."
#define DICE_RETROMOUSE_PADDLE2_Y_LABEL_GL "RetroMouse > Eixe do rato para o mando xiratorio 3 vertical"
#define DICE_RETROMOUSE_PADDLE2_Y_LABEL_CAT_GL "Eixe do rato para o mando xiratorio 3 vertical"
#define DICE_RETROMOUSE_PADDLE2_Y_INFO_0_GL "Eixe do rato para o xogador 3, movemento vertical."
#define DICE_RETROMOUSE_PADDLE3_X_LABEL_GL "RetroMouse > Eixe do rato para o mando xiratorio 4 horizontal"
#define DICE_RETROMOUSE_PADDLE3_X_LABEL_CAT_GL "Eixe do rato para o mando xiratorio 4 horizontal"
#define DICE_RETROMOUSE_PADDLE3_X_INFO_0_GL "Eixe do rato para o xogador 4, movemento horizontal."
#define DICE_RETROMOUSE_PADDLE3_Y_LABEL_GL "RetroMouse > Eixe do rato para o mando xiratorio 4 vertical"
#define DICE_RETROMOUSE_PADDLE3_Y_LABEL_CAT_GL "Eixe do rato para o mando xiratorio 4 vertical"
#define DICE_RETROMOUSE_PADDLE3_Y_INFO_0_GL "Eixe do rato para o xogador 4, movemento vertical."
#define DICE_MANYMOUSE_PADDLE0_LABEL_GL "ManyMouse > Usar o rato para o mando xiratorio 1"
#define DICE_MANYMOUSE_PADDLE0_INFO_0_GL "Usar o rato para o mando xiratorio 1."
#define DICE_MANYMOUSE_PADDLE0_X_LABEL_GL "ManyMouse > Rato–Mando xiratorio 1 x"
#define DICE_MANYMOUSE_PADDLE0_X_LABEL_CAT_GL "Rato–Mando xiratorio 1 x"
#define OPTION_VAL_0X_GL NULL
#define OPTION_VAL_0Y_GL NULL
#define OPTION_VAL_1X_GL NULL
#define OPTION_VAL_1Y_GL NULL
#define OPTION_VAL_2X_GL NULL
#define OPTION_VAL_2Y_GL NULL
#define OPTION_VAL_3X_GL NULL
#define OPTION_VAL_3Y_GL NULL
#define DICE_MANYMOUSE_PADDLE0_Y_LABEL_GL "ManyMouse > Rato–Mando xiratorio 1 y"
#define DICE_MANYMOUSE_PADDLE0_Y_LABEL_CAT_GL "Rato–Mando xiratorio 1 y"
#define DICE_MANYMOUSE_PADDLE1_LABEL_GL "ManyMouse > Usar o rato para o mando xiratorio 2"
#define DICE_MANYMOUSE_PADDLE1_INFO_0_GL "Usar o rato para o mando xiratorio 2."
#define DICE_MANYMOUSE_PADDLE1_X_LABEL_GL "ManyMouse > Rato–Mando xiratorio 2 x"
#define DICE_MANYMOUSE_PADDLE1_X_LABEL_CAT_GL "Rato–Mando xiratorio 2 x"
#define DICE_MANYMOUSE_PADDLE1_Y_LABEL_GL "ManyMouse > Rato–Mando xiratorio 2 y"
#define DICE_MANYMOUSE_PADDLE1_Y_LABEL_CAT_GL "Rato–Mando xiratorio 2 y"
#define DICE_MANYMOUSE_PADDLE2_LABEL_GL "ManyMouse > Usar o rato para o mando xiratorio 3"
#define DICE_MANYMOUSE_PADDLE2_INFO_0_GL "Usar o rato para o mando xiratorio 3."
#define DICE_MANYMOUSE_PADDLE2_X_LABEL_GL "ManyMouse > Rato–Mando xiratorio 3 x"
#define DICE_MANYMOUSE_PADDLE2_X_LABEL_CAT_GL "Rato–Mando xiratorio 3 x"
#define DICE_MANYMOUSE_PADDLE2_Y_LABEL_GL "ManyMouse > Rato–Mando xiratorio 3 y"
#define DICE_MANYMOUSE_PADDLE2_Y_LABEL_CAT_GL "Rato–Mando xiratorio 3 y"
#define DICE_MANYMOUSE_PADDLE3_LABEL_GL "ManyMouse > Usar o rato para o mando xiratorio 4"
#define DICE_MANYMOUSE_PADDLE3_INFO_0_GL "Usar o rato para o mando xiratorio 4."
#define DICE_MANYMOUSE_PADDLE3_X_LABEL_GL "ManyMouse > Rato–Mando xiratorio 4 x"
#define DICE_MANYMOUSE_PADDLE3_X_LABEL_CAT_GL "Rato–Mando xiratorio 4 x"
#define DICE_MANYMOUSE_PADDLE3_Y_LABEL_GL "ManyMouse > Rato–Mando xiratorio 4 y"
#define DICE_MANYMOUSE_PADDLE3_Y_LABEL_CAT_GL "Rato–Mando xiratorio 4 y"
#define DICE_DIPSWITCH_1_LABEL_GL "Interruptor DIP > Interruptor DIP 1"
#define DICE_DIPSWITCH_1_LABEL_CAT_GL "Interruptor DIP 1"
#define DICE_DIPSWITCH_1_INFO_0_GL "Configuración do interruptor DIP 1."
#define OPTION_VAL_1_GL "predeterminado"
#define DICE_DIPSWITCH_2_LABEL_GL "Interruptor DIP > Interruptor DIP 2"
#define DICE_DIPSWITCH_2_LABEL_CAT_GL "Interruptor DIP 2"
#define DICE_DIPSWITCH_2_INFO_0_GL "Configuración do interruptor DIP 2."
#define DICE_DIPSWITCH_3_LABEL_GL "Interruptor DIP > Interruptor DIP 3"
#define DICE_DIPSWITCH_3_LABEL_CAT_GL "Interruptor DIP 3"
#define DICE_DIPSWITCH_3_INFO_0_GL "Configuración do interruptor DIP 3."
#define DICE_DIPSWITCH16_1_LABEL_GL "Interruptor DIP > Interruptor Hexadecimal DIP 1"
#define DICE_DIPSWITCH16_1_LABEL_CAT_GL "Interruptor DIP Hex 1"
#define DICE_DIPSWITCH16_1_INFO_0_GL "Axuste para o interruptor DIP número 1 de 16 posicións."
#define DICE_DIPSWITCH16_2_LABEL_GL "Interruptor DIP > Interruptor Hexadecimal DIP 2"
#define DICE_DIPSWITCH16_2_LABEL_CAT_GL "Interruptor DIP Hex 2"
#define DICE_DIPSWITCH16_2_INFO_0_GL "Axuste para o interruptor DIP número 2 de 16 posicións."

struct retro_core_option_v2_category option_cats_gl[] = {
   {
      "input",
      CATEGORY_INPUT_LABEL_GL,
      CATEGORY_INPUT_INFO_0_GL
   },
   {
      "retromouse",
      CATEGORY_RETROMOUSE_LABEL_GL,
      CATEGORY_RETROMOUSE_INFO_0_GL
   },
#ifdef MANYMOUSE
   {
      "manymouse",
      CATEGORY_MANYMOUSE_LABEL_GL,
      CATEGORY_MANYMOUSE_INFO_0_GL
   },
#endif
   {
      "dipswitch",
      CATEGORY_DIPSWITCH_LABEL_GL,
      CATEGORY_DIPSWITCH_INFO_0_GL
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_gl[] = {
   {
      "dice_use_mouse_pointer_for_paddle_1",
      DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_LABEL_GL,
      DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_LABEL_CAT_GL,
      DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_INFO_0_GL,
      NULL,
      "input",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_paddle_joystick_absolute",
      DICE_PADDLE_JOYSTICK_ABSOLUTE_LABEL_GL,
      DICE_PADDLE_JOYSTICK_ABSOLUTE_LABEL_CAT_GL,
      DICE_PADDLE_JOYSTICK_ABSOLUTE_INFO_0_GL,
      NULL,
      "input",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      // D-pad but not necessarily keyboard under libretro,
      // that name comes from the upstream code.
      "dice_paddle_keyboard_sensitivity",
      DICE_PADDLE_KEYBOARD_SENSITIVITY_LABEL_GL,
      DICE_PADDLE_KEYBOARD_SENSITIVITY_LABEL_CAT_GL,
      DICE_PADDLE_KEYBOARD_SENSITIVITY_INFO_0_GL,
      NULL,
      "input",
      {
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "250"
   },
   {
      "dice_paddle_joystick_sensitivity",
      DICE_PADDLE_JOYSTICK_SENSITIVITY_LABEL_GL,
      DICE_PADDLE_JOYSTICK_SENSITIVITY_LABEL_CAT_GL,
      DICE_PADDLE_JOYSTICK_SENSITIVITY_INFO_0_GL,
      NULL,
      "input",
      {
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "500"
   },
   {
      "dice_retromouse_paddle_sensitivity",
      DICE_RETROMOUSE_PADDLE_SENSITIVITY_LABEL_GL,
      DICE_RETROMOUSE_PADDLE_SENSITIVITY_LABEL_CAT_GL,
      DICE_RETROMOUSE_PADDLE_SENSITIVITY_INFO_0_GL,
      NULL,
      "input",
      {
         {"25", NULL},
         {"50", NULL},
         {"75", NULL},
         {"100", NULL},
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "125"
   },
   {
      "dice_wheel_keyjoy_sensitivity",
      DICE_WHEEL_KEYJOY_SENSITIVITY_LABEL_GL,
      DICE_WHEEL_KEYJOY_SENSITIVITY_LABEL_CAT_GL,
      DICE_WHEEL_KEYJOY_SENSITIVITY_INFO_0_GL,
      NULL,
      "input",
      {
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "500"
   },
   {
      "dice_throttle_keyjoy_sensitivity",
      DICE_THROTTLE_KEYJOY_SENSITIVITY_LABEL_GL,
      DICE_THROTTLE_KEYJOY_SENSITIVITY_LABEL_CAT_GL,
      DICE_THROTTLE_KEYJOY_SENSITIVITY_INFO_0_GL,
      NULL,
      "input",
      {
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "250"
   },

   {
      "dice_retromouse_paddle0",
      DICE_RETROMOUSE_PADDLE0_LABEL_GL,
      DICE_RETROMOUSE_PADDLE0_LABEL_CAT_GL,
      DICE_RETROMOUSE_PADDLE0_INFO_0_GL,
      NULL,
      "retromouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_retromouse_paddle1",
      DICE_RETROMOUSE_PADDLE1_LABEL_GL,
      DICE_RETROMOUSE_PADDLE1_LABEL_CAT_GL,
      DICE_RETROMOUSE_PADDLE1_INFO_0_GL,
      NULL,
      "retromouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_retromouse_paddle2",
      DICE_RETROMOUSE_PADDLE2_LABEL_GL,
      DICE_RETROMOUSE_PADDLE2_LABEL_CAT_GL,
      DICE_RETROMOUSE_PADDLE2_INFO_0_GL,
      NULL,
      "retromouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_retromouse_paddle3",
      DICE_RETROMOUSE_PADDLE3_LABEL_GL,
      DICE_RETROMOUSE_PADDLE3_LABEL_CAT_GL,
      DICE_RETROMOUSE_PADDLE3_INFO_0_GL,
      NULL,
      "retromouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_retromouse_paddle0_x",
      DICE_RETROMOUSE_PADDLE0_X_LABEL_GL,
      DICE_RETROMOUSE_PADDLE0_X_LABEL_CAT_GL,
      DICE_RETROMOUSE_PADDLE0_X_INFO_0_GL,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_GL},
         {"y", OPTION_VAL_Y_GL},
         {NULL, NULL},
      },
      "x"
   },
   {
      "dice_retromouse_paddle0_y",
      DICE_RETROMOUSE_PADDLE0_Y_LABEL_GL,
      DICE_RETROMOUSE_PADDLE0_Y_LABEL_CAT_GL,
      DICE_RETROMOUSE_PADDLE0_Y_INFO_0_GL,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_GL},
         {"y", OPTION_VAL_Y_GL},
         {NULL, NULL},
      },
      "y"
   },
   {
      "dice_retromouse_paddle1_x",
      DICE_RETROMOUSE_PADDLE1_X_LABEL_GL,
      DICE_RETROMOUSE_PADDLE1_X_LABEL_CAT_GL,
      DICE_RETROMOUSE_PADDLE1_X_INFO_0_GL,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_GL},
         {"y", OPTION_VAL_Y_GL},
         {NULL, NULL},
      },
      "x"
   },
   {
      "dice_retromouse_paddle1_y",
      DICE_RETROMOUSE_PADDLE1_Y_LABEL_GL,
      DICE_RETROMOUSE_PADDLE1_Y_LABEL_CAT_GL,
      DICE_RETROMOUSE_PADDLE1_Y_INFO_0_GL,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_GL},
         {"y", OPTION_VAL_Y_GL},
         {NULL, NULL},
      },
      "y"
   },
   {
      "dice_retromouse_paddle2_x",
      DICE_RETROMOUSE_PADDLE2_X_LABEL_GL,
      DICE_RETROMOUSE_PADDLE2_X_LABEL_CAT_GL,
      DICE_RETROMOUSE_PADDLE2_X_INFO_0_GL,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_GL},
         {"y", OPTION_VAL_Y_GL},
         {NULL, NULL},
      },
      "x"
   },
   {
      "dice_retromouse_paddle2_y",
      DICE_RETROMOUSE_PADDLE2_Y_LABEL_GL,
      DICE_RETROMOUSE_PADDLE2_Y_LABEL_CAT_GL,
      DICE_RETROMOUSE_PADDLE2_Y_INFO_0_GL,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_GL},
         {"y", OPTION_VAL_Y_GL},
         {NULL, NULL},
      },
      "y"
   },
   {
      "dice_retromouse_paddle3_x",
      DICE_RETROMOUSE_PADDLE3_X_LABEL_GL,
      DICE_RETROMOUSE_PADDLE3_X_LABEL_CAT_GL,
      DICE_RETROMOUSE_PADDLE3_X_INFO_0_GL,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_GL},
         {"y", OPTION_VAL_Y_GL},
         {NULL, NULL},
      },
      "x"
   },
   {
      "dice_retromouse_paddle3_y",
      DICE_RETROMOUSE_PADDLE3_Y_LABEL_GL,
      DICE_RETROMOUSE_PADDLE3_Y_LABEL_CAT_GL,
      DICE_RETROMOUSE_PADDLE3_Y_INFO_0_GL,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_GL},
         {"y", OPTION_VAL_Y_GL},
         {NULL, NULL},
      },
      "y"
   },

#ifdef MANYMOUSE
   {
      "dice_manymouse_paddle0",
      DICE_MANYMOUSE_PADDLE0_LABEL_GL,
      DICE_RETROMOUSE_PADDLE0_LABEL_CAT_GL,
      DICE_MANYMOUSE_PADDLE0_INFO_0_GL,
      NULL,
      "manymouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_manymouse_paddle0_x",
      DICE_MANYMOUSE_PADDLE0_X_LABEL_GL,
      DICE_MANYMOUSE_PADDLE0_X_LABEL_CAT_GL,
      DICE_RETROMOUSE_PADDLE0_X_INFO_0_GL,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_GL},
         {"0y", OPTION_VAL_0Y_GL},
         {"1x", OPTION_VAL_1X_GL},
         {"1y", OPTION_VAL_1Y_GL},
         {"2x", OPTION_VAL_2X_GL},
         {"2y", OPTION_VAL_2Y_GL},
         {"3x", OPTION_VAL_3X_GL},
         {"3y", OPTION_VAL_3Y_GL},
         {NULL, NULL},
      },
      "0x"
   },
   {
      "dice_manymouse_paddle0_y",
      DICE_MANYMOUSE_PADDLE0_Y_LABEL_GL,
      DICE_MANYMOUSE_PADDLE0_Y_LABEL_CAT_GL,
      DICE_RETROMOUSE_PADDLE0_Y_INFO_0_GL,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_GL},
         {"0y", OPTION_VAL_0Y_GL},
         {"1x", OPTION_VAL_1X_GL},
         {"1y", OPTION_VAL_1Y_GL},
         {"2x", OPTION_VAL_2X_GL},
         {"2y", OPTION_VAL_2Y_GL},
         {"3x", OPTION_VAL_3X_GL},
         {"3y", OPTION_VAL_3Y_GL},
         {NULL, NULL},
      },
      "0y"
   },
   {
      "dice_manymouse_paddle1",
      DICE_MANYMOUSE_PADDLE1_LABEL_GL,
      DICE_RETROMOUSE_PADDLE1_LABEL_CAT_GL,
      DICE_MANYMOUSE_PADDLE1_INFO_0_GL,
      NULL,
      "manymouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_manymouse_paddle1_x",
      DICE_MANYMOUSE_PADDLE1_X_LABEL_GL,
      DICE_MANYMOUSE_PADDLE1_X_LABEL_CAT_GL,
      DICE_RETROMOUSE_PADDLE1_X_INFO_0_GL,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_GL},
         {"0y", OPTION_VAL_0Y_GL},
         {"1x", OPTION_VAL_1X_GL},
         {"1y", OPTION_VAL_1Y_GL},
         {"2x", OPTION_VAL_2X_GL},
         {"2y", OPTION_VAL_2Y_GL},
         {"3x", OPTION_VAL_3X_GL},
         {"3y", OPTION_VAL_3Y_GL},
         {NULL, NULL},
      },
      "1x"
   },
   {
      "dice_manymouse_paddle1_y",
      DICE_MANYMOUSE_PADDLE1_Y_LABEL_GL,
      DICE_MANYMOUSE_PADDLE1_Y_LABEL_CAT_GL,
      DICE_RETROMOUSE_PADDLE1_Y_INFO_0_GL,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_GL},
         {"0y", OPTION_VAL_0Y_GL},
         {"1x", OPTION_VAL_1X_GL},
         {"1y", OPTION_VAL_1Y_GL},
         {"2x", OPTION_VAL_2X_GL},
         {"2y", OPTION_VAL_2Y_GL},
         {"3x", OPTION_VAL_3X_GL},
         {"3y", OPTION_VAL_3Y_GL},
         {NULL, NULL},
      },
      "1y"
   },
   {
      "dice_manymouse_paddle2",
      DICE_MANYMOUSE_PADDLE2_LABEL_GL,
      DICE_RETROMOUSE_PADDLE2_LABEL_CAT_GL,
      DICE_MANYMOUSE_PADDLE2_INFO_0_GL,
      NULL,
      "manymouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_manymouse_paddle2_x",
      DICE_MANYMOUSE_PADDLE2_X_LABEL_GL,
      DICE_MANYMOUSE_PADDLE2_X_LABEL_CAT_GL,
      DICE_RETROMOUSE_PADDLE2_X_INFO_0_GL,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_GL},
         {"0y", OPTION_VAL_0Y_GL},
         {"1x", OPTION_VAL_1X_GL},
         {"1y", OPTION_VAL_1Y_GL},
         {"2x", OPTION_VAL_2X_GL},
         {"2y", OPTION_VAL_2Y_GL},
         {"3x", OPTION_VAL_3X_GL},
         {"3y", OPTION_VAL_3Y_GL},
         {NULL, NULL},
      },
      "2x"
   },
   {
      "dice_manymouse_paddle2_y",
      DICE_MANYMOUSE_PADDLE2_Y_LABEL_GL,
      DICE_MANYMOUSE_PADDLE2_Y_LABEL_CAT_GL,
      DICE_RETROMOUSE_PADDLE2_Y_INFO_0_GL,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_GL},
         {"0y", OPTION_VAL_0Y_GL},
         {"1x", OPTION_VAL_1X_GL},
         {"1y", OPTION_VAL_1Y_GL},
         {"2x", OPTION_VAL_2X_GL},
         {"2y", OPTION_VAL_2Y_GL},
         {"3x", OPTION_VAL_3X_GL},
         {"3y", OPTION_VAL_3Y_GL},
         {NULL, NULL},
      },
      "2y"
   },
   {
      "dice_manymouse_paddle3",
      DICE_MANYMOUSE_PADDLE3_LABEL_GL,
      DICE_RETROMOUSE_PADDLE3_LABEL_CAT_GL,
      DICE_MANYMOUSE_PADDLE3_INFO_0_GL,
      NULL,
      "manymouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_manymouse_paddle3_x",
      DICE_MANYMOUSE_PADDLE3_X_LABEL_GL,
      DICE_MANYMOUSE_PADDLE3_X_LABEL_CAT_GL,
      DICE_RETROMOUSE_PADDLE3_X_INFO_0_GL,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_GL},
         {"0y", OPTION_VAL_0Y_GL},
         {"1x", OPTION_VAL_1X_GL},
         {"1y", OPTION_VAL_1Y_GL},
         {"2x", OPTION_VAL_2X_GL},
         {"2y", OPTION_VAL_2Y_GL},
         {"3x", OPTION_VAL_3X_GL},
         {"3y", OPTION_VAL_3Y_GL},
         {NULL, NULL},
      },
      "3x"
   },
   {
      "dice_manymouse_paddle3_y",
      DICE_MANYMOUSE_PADDLE3_Y_LABEL_GL,
      DICE_MANYMOUSE_PADDLE3_Y_LABEL_CAT_GL,
      DICE_RETROMOUSE_PADDLE3_Y_INFO_0_GL,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_GL},
         {"0y", OPTION_VAL_0Y_GL},
         {"1x", OPTION_VAL_1X_GL},
         {"1y", OPTION_VAL_1Y_GL},
         {"2x", OPTION_VAL_2X_GL},
         {"2y", OPTION_VAL_2Y_GL},
         {"3x", OPTION_VAL_3X_GL},
         {"3y", OPTION_VAL_3Y_GL},
         {NULL, NULL},
      },
      "3y"
   },
#endif

   {
      "dice_dipswitch_1",
      DICE_DIPSWITCH_1_LABEL_GL,
      DICE_DIPSWITCH_1_LABEL_CAT_GL,
      DICE_DIPSWITCH_1_INFO_0_GL,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_GL},
         {"0", NULL},
         {"1", NULL},
         {NULL, NULL},
      },
      "-1"
   },
   {
      "dice_dipswitch_2",
      DICE_DIPSWITCH_2_LABEL_GL,
      DICE_DIPSWITCH_2_LABEL_CAT_GL,
      DICE_DIPSWITCH_2_INFO_0_GL,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_GL},
         {"0", NULL},
         {"1", NULL},
         {NULL, NULL},
      },
      "-1"
   },
   {
      "dice_dipswitch_3",
      DICE_DIPSWITCH_3_LABEL_GL,
      DICE_DIPSWITCH_3_LABEL_CAT_GL,
      DICE_DIPSWITCH_3_INFO_0_GL,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_GL},
         {"0", NULL},
         {"1", NULL},
         {NULL, NULL},
      },
      "-1"
   },
   {
      "dice_dipswitch16_1",
      DICE_DIPSWITCH16_1_LABEL_GL,
      DICE_DIPSWITCH16_1_LABEL_CAT_GL,
      DICE_DIPSWITCH16_1_INFO_0_GL,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_GL},
         {"0", NULL},
         {"1", NULL},
         {"2", NULL},
         {"3", NULL},
         {"4", NULL},
         {"5", NULL},
         {"6", NULL},
         {"7", NULL},
         {"8", NULL},
         {"9", NULL},
         {"10", NULL},
         {"11", NULL},
         {"12", NULL},
         {"13", NULL},
         {"14", NULL},
         {"15", NULL},
         {NULL, NULL},
      },
      "-1"
   },
   {
      "dice_dipswitch16_2",
      DICE_DIPSWITCH16_2_LABEL_GL,
      DICE_DIPSWITCH16_2_LABEL_CAT_GL,
      DICE_DIPSWITCH16_2_INFO_0_GL,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_GL},
         {"0", NULL},
         {"1", NULL},
         {"2", NULL},
         {"3", NULL},
         {"4", NULL},
         {"5", NULL},
         {"6", NULL},
         {"7", NULL},
         {"8", NULL},
         {"9", NULL},
         {"10", NULL},
         {"11", NULL},
         {"12", NULL},
         {"13", NULL},
         {"14", NULL},
         {"15", NULL},
         {NULL, NULL},
      },
      "-1"
   },

   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_gl = {
   option_cats_gl,
   option_defs_gl
};

/* RETRO_LANGUAGE_HE */

#define CATEGORY_INPUT_LABEL_HE "קלט"
#define CATEGORY_INPUT_INFO_0_HE NULL
#define CATEGORY_RETROMOUSE_LABEL_HE NULL
#define CATEGORY_RETROMOUSE_INFO_0_HE NULL
#define CATEGORY_MANYMOUSE_LABEL_HE NULL
#define CATEGORY_MANYMOUSE_INFO_0_HE NULL
#define CATEGORY_DIPSWITCH_LABEL_HE NULL
#define CATEGORY_DIPSWITCH_INFO_0_HE NULL
#define DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_LABEL_HE NULL
#define DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_LABEL_CAT_HE NULL
#define DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_INFO_0_HE NULL
#define DICE_PADDLE_JOYSTICK_ABSOLUTE_LABEL_HE NULL
#define DICE_PADDLE_JOYSTICK_ABSOLUTE_LABEL_CAT_HE NULL
#define DICE_PADDLE_JOYSTICK_ABSOLUTE_INFO_0_HE NULL
#define DICE_PADDLE_KEYBOARD_SENSITIVITY_LABEL_HE NULL
#define DICE_PADDLE_KEYBOARD_SENSITIVITY_LABEL_CAT_HE NULL
#define DICE_PADDLE_KEYBOARD_SENSITIVITY_INFO_0_HE NULL
#define DICE_PADDLE_JOYSTICK_SENSITIVITY_LABEL_HE NULL
#define DICE_PADDLE_JOYSTICK_SENSITIVITY_LABEL_CAT_HE NULL
#define DICE_PADDLE_JOYSTICK_SENSITIVITY_INFO_0_HE NULL
#define DICE_RETROMOUSE_PADDLE_SENSITIVITY_LABEL_HE NULL
#define DICE_RETROMOUSE_PADDLE_SENSITIVITY_LABEL_CAT_HE NULL
#define DICE_RETROMOUSE_PADDLE_SENSITIVITY_INFO_0_HE NULL
#define DICE_WHEEL_KEYJOY_SENSITIVITY_LABEL_HE NULL
#define DICE_WHEEL_KEYJOY_SENSITIVITY_LABEL_CAT_HE NULL
#define DICE_WHEEL_KEYJOY_SENSITIVITY_INFO_0_HE NULL
#define DICE_THROTTLE_KEYJOY_SENSITIVITY_LABEL_HE NULL
#define DICE_THROTTLE_KEYJOY_SENSITIVITY_LABEL_CAT_HE NULL
#define DICE_THROTTLE_KEYJOY_SENSITIVITY_INFO_0_HE NULL
#define DICE_RETROMOUSE_PADDLE0_LABEL_HE NULL
#define DICE_RETROMOUSE_PADDLE0_LABEL_CAT_HE NULL
#define DICE_RETROMOUSE_PADDLE0_INFO_0_HE NULL
#define DICE_RETROMOUSE_PADDLE1_LABEL_HE NULL
#define DICE_RETROMOUSE_PADDLE1_LABEL_CAT_HE NULL
#define DICE_RETROMOUSE_PADDLE1_INFO_0_HE NULL
#define DICE_RETROMOUSE_PADDLE2_LABEL_HE NULL
#define DICE_RETROMOUSE_PADDLE2_LABEL_CAT_HE NULL
#define DICE_RETROMOUSE_PADDLE2_INFO_0_HE NULL
#define DICE_RETROMOUSE_PADDLE3_LABEL_HE NULL
#define DICE_RETROMOUSE_PADDLE3_LABEL_CAT_HE NULL
#define DICE_RETROMOUSE_PADDLE3_INFO_0_HE NULL
#define DICE_RETROMOUSE_PADDLE0_X_LABEL_HE NULL
#define DICE_RETROMOUSE_PADDLE0_X_LABEL_CAT_HE NULL
#define DICE_RETROMOUSE_PADDLE0_X_INFO_0_HE NULL
#define OPTION_VAL_X_HE NULL
#define OPTION_VAL_Y_HE NULL
#define DICE_RETROMOUSE_PADDLE0_Y_LABEL_HE NULL
#define DICE_RETROMOUSE_PADDLE0_Y_LABEL_CAT_HE NULL
#define DICE_RETROMOUSE_PADDLE0_Y_INFO_0_HE NULL
#define DICE_RETROMOUSE_PADDLE1_X_LABEL_HE NULL
#define DICE_RETROMOUSE_PADDLE1_X_LABEL_CAT_HE NULL
#define DICE_RETROMOUSE_PADDLE1_X_INFO_0_HE NULL
#define DICE_RETROMOUSE_PADDLE1_Y_LABEL_HE NULL
#define DICE_RETROMOUSE_PADDLE1_Y_LABEL_CAT_HE NULL
#define DICE_RETROMOUSE_PADDLE1_Y_INFO_0_HE NULL
#define DICE_RETROMOUSE_PADDLE2_X_LABEL_HE NULL
#define DICE_RETROMOUSE_PADDLE2_X_LABEL_CAT_HE NULL
#define DICE_RETROMOUSE_PADDLE2_X_INFO_0_HE NULL
#define DICE_RETROMOUSE_PADDLE2_Y_LABEL_HE NULL
#define DICE_RETROMOUSE_PADDLE2_Y_LABEL_CAT_HE NULL
#define DICE_RETROMOUSE_PADDLE2_Y_INFO_0_HE NULL
#define DICE_RETROMOUSE_PADDLE3_X_LABEL_HE NULL
#define DICE_RETROMOUSE_PADDLE3_X_LABEL_CAT_HE NULL
#define DICE_RETROMOUSE_PADDLE3_X_INFO_0_HE NULL
#define DICE_RETROMOUSE_PADDLE3_Y_LABEL_HE NULL
#define DICE_RETROMOUSE_PADDLE3_Y_LABEL_CAT_HE NULL
#define DICE_RETROMOUSE_PADDLE3_Y_INFO_0_HE NULL
#define DICE_MANYMOUSE_PADDLE0_LABEL_HE NULL
#define DICE_MANYMOUSE_PADDLE0_INFO_0_HE NULL
#define DICE_MANYMOUSE_PADDLE0_X_LABEL_HE NULL
#define DICE_MANYMOUSE_PADDLE0_X_LABEL_CAT_HE NULL
#define OPTION_VAL_0X_HE NULL
#define OPTION_VAL_0Y_HE NULL
#define OPTION_VAL_1X_HE NULL
#define OPTION_VAL_1Y_HE NULL
#define OPTION_VAL_2X_HE NULL
#define OPTION_VAL_2Y_HE NULL
#define OPTION_VAL_3X_HE NULL
#define OPTION_VAL_3Y_HE NULL
#define DICE_MANYMOUSE_PADDLE0_Y_LABEL_HE NULL
#define DICE_MANYMOUSE_PADDLE0_Y_LABEL_CAT_HE NULL
#define DICE_MANYMOUSE_PADDLE1_LABEL_HE NULL
#define DICE_MANYMOUSE_PADDLE1_INFO_0_HE NULL
#define DICE_MANYMOUSE_PADDLE1_X_LABEL_HE NULL
#define DICE_MANYMOUSE_PADDLE1_X_LABEL_CAT_HE NULL
#define DICE_MANYMOUSE_PADDLE1_Y_LABEL_HE NULL
#define DICE_MANYMOUSE_PADDLE1_Y_LABEL_CAT_HE NULL
#define DICE_MANYMOUSE_PADDLE2_LABEL_HE NULL
#define DICE_MANYMOUSE_PADDLE2_INFO_0_HE NULL
#define DICE_MANYMOUSE_PADDLE2_X_LABEL_HE NULL
#define DICE_MANYMOUSE_PADDLE2_X_LABEL_CAT_HE NULL
#define DICE_MANYMOUSE_PADDLE2_Y_LABEL_HE NULL
#define DICE_MANYMOUSE_PADDLE2_Y_LABEL_CAT_HE NULL
#define DICE_MANYMOUSE_PADDLE3_LABEL_HE NULL
#define DICE_MANYMOUSE_PADDLE3_INFO_0_HE NULL
#define DICE_MANYMOUSE_PADDLE3_X_LABEL_HE NULL
#define DICE_MANYMOUSE_PADDLE3_X_LABEL_CAT_HE NULL
#define DICE_MANYMOUSE_PADDLE3_Y_LABEL_HE NULL
#define DICE_MANYMOUSE_PADDLE3_Y_LABEL_CAT_HE NULL
#define DICE_DIPSWITCH_1_LABEL_HE NULL
#define DICE_DIPSWITCH_1_LABEL_CAT_HE NULL
#define DICE_DIPSWITCH_1_INFO_0_HE NULL
#define OPTION_VAL_1_HE NULL
#define DICE_DIPSWITCH_2_LABEL_HE NULL
#define DICE_DIPSWITCH_2_LABEL_CAT_HE NULL
#define DICE_DIPSWITCH_2_INFO_0_HE NULL
#define DICE_DIPSWITCH_3_LABEL_HE NULL
#define DICE_DIPSWITCH_3_LABEL_CAT_HE NULL
#define DICE_DIPSWITCH_3_INFO_0_HE NULL
#define DICE_DIPSWITCH16_1_LABEL_HE NULL
#define DICE_DIPSWITCH16_1_LABEL_CAT_HE NULL
#define DICE_DIPSWITCH16_1_INFO_0_HE NULL
#define DICE_DIPSWITCH16_2_LABEL_HE NULL
#define DICE_DIPSWITCH16_2_LABEL_CAT_HE NULL
#define DICE_DIPSWITCH16_2_INFO_0_HE NULL

struct retro_core_option_v2_category option_cats_he[] = {
   {
      "input",
      CATEGORY_INPUT_LABEL_HE,
      CATEGORY_INPUT_INFO_0_HE
   },
   {
      "retromouse",
      CATEGORY_RETROMOUSE_LABEL_HE,
      CATEGORY_RETROMOUSE_INFO_0_HE
   },
#ifdef MANYMOUSE
   {
      "manymouse",
      CATEGORY_MANYMOUSE_LABEL_HE,
      CATEGORY_MANYMOUSE_INFO_0_HE
   },
#endif
   {
      "dipswitch",
      CATEGORY_DIPSWITCH_LABEL_HE,
      CATEGORY_DIPSWITCH_INFO_0_HE
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_he[] = {
   {
      "dice_use_mouse_pointer_for_paddle_1",
      DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_LABEL_HE,
      DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_LABEL_CAT_HE,
      DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_INFO_0_HE,
      NULL,
      "input",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_paddle_joystick_absolute",
      DICE_PADDLE_JOYSTICK_ABSOLUTE_LABEL_HE,
      DICE_PADDLE_JOYSTICK_ABSOLUTE_LABEL_CAT_HE,
      DICE_PADDLE_JOYSTICK_ABSOLUTE_INFO_0_HE,
      NULL,
      "input",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      // D-pad but not necessarily keyboard under libretro,
      // that name comes from the upstream code.
      "dice_paddle_keyboard_sensitivity",
      DICE_PADDLE_KEYBOARD_SENSITIVITY_LABEL_HE,
      DICE_PADDLE_KEYBOARD_SENSITIVITY_LABEL_CAT_HE,
      DICE_PADDLE_KEYBOARD_SENSITIVITY_INFO_0_HE,
      NULL,
      "input",
      {
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "250"
   },
   {
      "dice_paddle_joystick_sensitivity",
      DICE_PADDLE_JOYSTICK_SENSITIVITY_LABEL_HE,
      DICE_PADDLE_JOYSTICK_SENSITIVITY_LABEL_CAT_HE,
      DICE_PADDLE_JOYSTICK_SENSITIVITY_INFO_0_HE,
      NULL,
      "input",
      {
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "500"
   },
   {
      "dice_retromouse_paddle_sensitivity",
      DICE_RETROMOUSE_PADDLE_SENSITIVITY_LABEL_HE,
      DICE_RETROMOUSE_PADDLE_SENSITIVITY_LABEL_CAT_HE,
      DICE_RETROMOUSE_PADDLE_SENSITIVITY_INFO_0_HE,
      NULL,
      "input",
      {
         {"25", NULL},
         {"50", NULL},
         {"75", NULL},
         {"100", NULL},
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "125"
   },
   {
      "dice_wheel_keyjoy_sensitivity",
      DICE_WHEEL_KEYJOY_SENSITIVITY_LABEL_HE,
      DICE_WHEEL_KEYJOY_SENSITIVITY_LABEL_CAT_HE,
      DICE_WHEEL_KEYJOY_SENSITIVITY_INFO_0_HE,
      NULL,
      "input",
      {
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "500"
   },
   {
      "dice_throttle_keyjoy_sensitivity",
      DICE_THROTTLE_KEYJOY_SENSITIVITY_LABEL_HE,
      DICE_THROTTLE_KEYJOY_SENSITIVITY_LABEL_CAT_HE,
      DICE_THROTTLE_KEYJOY_SENSITIVITY_INFO_0_HE,
      NULL,
      "input",
      {
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "250"
   },

   {
      "dice_retromouse_paddle0",
      DICE_RETROMOUSE_PADDLE0_LABEL_HE,
      DICE_RETROMOUSE_PADDLE0_LABEL_CAT_HE,
      DICE_RETROMOUSE_PADDLE0_INFO_0_HE,
      NULL,
      "retromouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_retromouse_paddle1",
      DICE_RETROMOUSE_PADDLE1_LABEL_HE,
      DICE_RETROMOUSE_PADDLE1_LABEL_CAT_HE,
      DICE_RETROMOUSE_PADDLE1_INFO_0_HE,
      NULL,
      "retromouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_retromouse_paddle2",
      DICE_RETROMOUSE_PADDLE2_LABEL_HE,
      DICE_RETROMOUSE_PADDLE2_LABEL_CAT_HE,
      DICE_RETROMOUSE_PADDLE2_INFO_0_HE,
      NULL,
      "retromouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_retromouse_paddle3",
      DICE_RETROMOUSE_PADDLE3_LABEL_HE,
      DICE_RETROMOUSE_PADDLE3_LABEL_CAT_HE,
      DICE_RETROMOUSE_PADDLE3_INFO_0_HE,
      NULL,
      "retromouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_retromouse_paddle0_x",
      DICE_RETROMOUSE_PADDLE0_X_LABEL_HE,
      DICE_RETROMOUSE_PADDLE0_X_LABEL_CAT_HE,
      DICE_RETROMOUSE_PADDLE0_X_INFO_0_HE,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_HE},
         {"y", OPTION_VAL_Y_HE},
         {NULL, NULL},
      },
      "x"
   },
   {
      "dice_retromouse_paddle0_y",
      DICE_RETROMOUSE_PADDLE0_Y_LABEL_HE,
      DICE_RETROMOUSE_PADDLE0_Y_LABEL_CAT_HE,
      DICE_RETROMOUSE_PADDLE0_Y_INFO_0_HE,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_HE},
         {"y", OPTION_VAL_Y_HE},
         {NULL, NULL},
      },
      "y"
   },
   {
      "dice_retromouse_paddle1_x",
      DICE_RETROMOUSE_PADDLE1_X_LABEL_HE,
      DICE_RETROMOUSE_PADDLE1_X_LABEL_CAT_HE,
      DICE_RETROMOUSE_PADDLE1_X_INFO_0_HE,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_HE},
         {"y", OPTION_VAL_Y_HE},
         {NULL, NULL},
      },
      "x"
   },
   {
      "dice_retromouse_paddle1_y",
      DICE_RETROMOUSE_PADDLE1_Y_LABEL_HE,
      DICE_RETROMOUSE_PADDLE1_Y_LABEL_CAT_HE,
      DICE_RETROMOUSE_PADDLE1_Y_INFO_0_HE,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_HE},
         {"y", OPTION_VAL_Y_HE},
         {NULL, NULL},
      },
      "y"
   },
   {
      "dice_retromouse_paddle2_x",
      DICE_RETROMOUSE_PADDLE2_X_LABEL_HE,
      DICE_RETROMOUSE_PADDLE2_X_LABEL_CAT_HE,
      DICE_RETROMOUSE_PADDLE2_X_INFO_0_HE,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_HE},
         {"y", OPTION_VAL_Y_HE},
         {NULL, NULL},
      },
      "x"
   },
   {
      "dice_retromouse_paddle2_y",
      DICE_RETROMOUSE_PADDLE2_Y_LABEL_HE,
      DICE_RETROMOUSE_PADDLE2_Y_LABEL_CAT_HE,
      DICE_RETROMOUSE_PADDLE2_Y_INFO_0_HE,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_HE},
         {"y", OPTION_VAL_Y_HE},
         {NULL, NULL},
      },
      "y"
   },
   {
      "dice_retromouse_paddle3_x",
      DICE_RETROMOUSE_PADDLE3_X_LABEL_HE,
      DICE_RETROMOUSE_PADDLE3_X_LABEL_CAT_HE,
      DICE_RETROMOUSE_PADDLE3_X_INFO_0_HE,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_HE},
         {"y", OPTION_VAL_Y_HE},
         {NULL, NULL},
      },
      "x"
   },
   {
      "dice_retromouse_paddle3_y",
      DICE_RETROMOUSE_PADDLE3_Y_LABEL_HE,
      DICE_RETROMOUSE_PADDLE3_Y_LABEL_CAT_HE,
      DICE_RETROMOUSE_PADDLE3_Y_INFO_0_HE,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_HE},
         {"y", OPTION_VAL_Y_HE},
         {NULL, NULL},
      },
      "y"
   },

#ifdef MANYMOUSE
   {
      "dice_manymouse_paddle0",
      DICE_MANYMOUSE_PADDLE0_LABEL_HE,
      DICE_RETROMOUSE_PADDLE0_LABEL_CAT_HE,
      DICE_MANYMOUSE_PADDLE0_INFO_0_HE,
      NULL,
      "manymouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_manymouse_paddle0_x",
      DICE_MANYMOUSE_PADDLE0_X_LABEL_HE,
      DICE_MANYMOUSE_PADDLE0_X_LABEL_CAT_HE,
      DICE_RETROMOUSE_PADDLE0_X_INFO_0_HE,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_HE},
         {"0y", OPTION_VAL_0Y_HE},
         {"1x", OPTION_VAL_1X_HE},
         {"1y", OPTION_VAL_1Y_HE},
         {"2x", OPTION_VAL_2X_HE},
         {"2y", OPTION_VAL_2Y_HE},
         {"3x", OPTION_VAL_3X_HE},
         {"3y", OPTION_VAL_3Y_HE},
         {NULL, NULL},
      },
      "0x"
   },
   {
      "dice_manymouse_paddle0_y",
      DICE_MANYMOUSE_PADDLE0_Y_LABEL_HE,
      DICE_MANYMOUSE_PADDLE0_Y_LABEL_CAT_HE,
      DICE_RETROMOUSE_PADDLE0_Y_INFO_0_HE,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_HE},
         {"0y", OPTION_VAL_0Y_HE},
         {"1x", OPTION_VAL_1X_HE},
         {"1y", OPTION_VAL_1Y_HE},
         {"2x", OPTION_VAL_2X_HE},
         {"2y", OPTION_VAL_2Y_HE},
         {"3x", OPTION_VAL_3X_HE},
         {"3y", OPTION_VAL_3Y_HE},
         {NULL, NULL},
      },
      "0y"
   },
   {
      "dice_manymouse_paddle1",
      DICE_MANYMOUSE_PADDLE1_LABEL_HE,
      DICE_RETROMOUSE_PADDLE1_LABEL_CAT_HE,
      DICE_MANYMOUSE_PADDLE1_INFO_0_HE,
      NULL,
      "manymouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_manymouse_paddle1_x",
      DICE_MANYMOUSE_PADDLE1_X_LABEL_HE,
      DICE_MANYMOUSE_PADDLE1_X_LABEL_CAT_HE,
      DICE_RETROMOUSE_PADDLE1_X_INFO_0_HE,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_HE},
         {"0y", OPTION_VAL_0Y_HE},
         {"1x", OPTION_VAL_1X_HE},
         {"1y", OPTION_VAL_1Y_HE},
         {"2x", OPTION_VAL_2X_HE},
         {"2y", OPTION_VAL_2Y_HE},
         {"3x", OPTION_VAL_3X_HE},
         {"3y", OPTION_VAL_3Y_HE},
         {NULL, NULL},
      },
      "1x"
   },
   {
      "dice_manymouse_paddle1_y",
      DICE_MANYMOUSE_PADDLE1_Y_LABEL_HE,
      DICE_MANYMOUSE_PADDLE1_Y_LABEL_CAT_HE,
      DICE_RETROMOUSE_PADDLE1_Y_INFO_0_HE,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_HE},
         {"0y", OPTION_VAL_0Y_HE},
         {"1x", OPTION_VAL_1X_HE},
         {"1y", OPTION_VAL_1Y_HE},
         {"2x", OPTION_VAL_2X_HE},
         {"2y", OPTION_VAL_2Y_HE},
         {"3x", OPTION_VAL_3X_HE},
         {"3y", OPTION_VAL_3Y_HE},
         {NULL, NULL},
      },
      "1y"
   },
   {
      "dice_manymouse_paddle2",
      DICE_MANYMOUSE_PADDLE2_LABEL_HE,
      DICE_RETROMOUSE_PADDLE2_LABEL_CAT_HE,
      DICE_MANYMOUSE_PADDLE2_INFO_0_HE,
      NULL,
      "manymouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_manymouse_paddle2_x",
      DICE_MANYMOUSE_PADDLE2_X_LABEL_HE,
      DICE_MANYMOUSE_PADDLE2_X_LABEL_CAT_HE,
      DICE_RETROMOUSE_PADDLE2_X_INFO_0_HE,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_HE},
         {"0y", OPTION_VAL_0Y_HE},
         {"1x", OPTION_VAL_1X_HE},
         {"1y", OPTION_VAL_1Y_HE},
         {"2x", OPTION_VAL_2X_HE},
         {"2y", OPTION_VAL_2Y_HE},
         {"3x", OPTION_VAL_3X_HE},
         {"3y", OPTION_VAL_3Y_HE},
         {NULL, NULL},
      },
      "2x"
   },
   {
      "dice_manymouse_paddle2_y",
      DICE_MANYMOUSE_PADDLE2_Y_LABEL_HE,
      DICE_MANYMOUSE_PADDLE2_Y_LABEL_CAT_HE,
      DICE_RETROMOUSE_PADDLE2_Y_INFO_0_HE,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_HE},
         {"0y", OPTION_VAL_0Y_HE},
         {"1x", OPTION_VAL_1X_HE},
         {"1y", OPTION_VAL_1Y_HE},
         {"2x", OPTION_VAL_2X_HE},
         {"2y", OPTION_VAL_2Y_HE},
         {"3x", OPTION_VAL_3X_HE},
         {"3y", OPTION_VAL_3Y_HE},
         {NULL, NULL},
      },
      "2y"
   },
   {
      "dice_manymouse_paddle3",
      DICE_MANYMOUSE_PADDLE3_LABEL_HE,
      DICE_RETROMOUSE_PADDLE3_LABEL_CAT_HE,
      DICE_MANYMOUSE_PADDLE3_INFO_0_HE,
      NULL,
      "manymouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_manymouse_paddle3_x",
      DICE_MANYMOUSE_PADDLE3_X_LABEL_HE,
      DICE_MANYMOUSE_PADDLE3_X_LABEL_CAT_HE,
      DICE_RETROMOUSE_PADDLE3_X_INFO_0_HE,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_HE},
         {"0y", OPTION_VAL_0Y_HE},
         {"1x", OPTION_VAL_1X_HE},
         {"1y", OPTION_VAL_1Y_HE},
         {"2x", OPTION_VAL_2X_HE},
         {"2y", OPTION_VAL_2Y_HE},
         {"3x", OPTION_VAL_3X_HE},
         {"3y", OPTION_VAL_3Y_HE},
         {NULL, NULL},
      },
      "3x"
   },
   {
      "dice_manymouse_paddle3_y",
      DICE_MANYMOUSE_PADDLE3_Y_LABEL_HE,
      DICE_MANYMOUSE_PADDLE3_Y_LABEL_CAT_HE,
      DICE_RETROMOUSE_PADDLE3_Y_INFO_0_HE,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_HE},
         {"0y", OPTION_VAL_0Y_HE},
         {"1x", OPTION_VAL_1X_HE},
         {"1y", OPTION_VAL_1Y_HE},
         {"2x", OPTION_VAL_2X_HE},
         {"2y", OPTION_VAL_2Y_HE},
         {"3x", OPTION_VAL_3X_HE},
         {"3y", OPTION_VAL_3Y_HE},
         {NULL, NULL},
      },
      "3y"
   },
#endif

   {
      "dice_dipswitch_1",
      DICE_DIPSWITCH_1_LABEL_HE,
      DICE_DIPSWITCH_1_LABEL_CAT_HE,
      DICE_DIPSWITCH_1_INFO_0_HE,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_HE},
         {"0", NULL},
         {"1", NULL},
         {NULL, NULL},
      },
      "-1"
   },
   {
      "dice_dipswitch_2",
      DICE_DIPSWITCH_2_LABEL_HE,
      DICE_DIPSWITCH_2_LABEL_CAT_HE,
      DICE_DIPSWITCH_2_INFO_0_HE,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_HE},
         {"0", NULL},
         {"1", NULL},
         {NULL, NULL},
      },
      "-1"
   },
   {
      "dice_dipswitch_3",
      DICE_DIPSWITCH_3_LABEL_HE,
      DICE_DIPSWITCH_3_LABEL_CAT_HE,
      DICE_DIPSWITCH_3_INFO_0_HE,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_HE},
         {"0", NULL},
         {"1", NULL},
         {NULL, NULL},
      },
      "-1"
   },
   {
      "dice_dipswitch16_1",
      DICE_DIPSWITCH16_1_LABEL_HE,
      DICE_DIPSWITCH16_1_LABEL_CAT_HE,
      DICE_DIPSWITCH16_1_INFO_0_HE,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_HE},
         {"0", NULL},
         {"1", NULL},
         {"2", NULL},
         {"3", NULL},
         {"4", NULL},
         {"5", NULL},
         {"6", NULL},
         {"7", NULL},
         {"8", NULL},
         {"9", NULL},
         {"10", NULL},
         {"11", NULL},
         {"12", NULL},
         {"13", NULL},
         {"14", NULL},
         {"15", NULL},
         {NULL, NULL},
      },
      "-1"
   },
   {
      "dice_dipswitch16_2",
      DICE_DIPSWITCH16_2_LABEL_HE,
      DICE_DIPSWITCH16_2_LABEL_CAT_HE,
      DICE_DIPSWITCH16_2_INFO_0_HE,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_HE},
         {"0", NULL},
         {"1", NULL},
         {"2", NULL},
         {"3", NULL},
         {"4", NULL},
         {"5", NULL},
         {"6", NULL},
         {"7", NULL},
         {"8", NULL},
         {"9", NULL},
         {"10", NULL},
         {"11", NULL},
         {"12", NULL},
         {"13", NULL},
         {"14", NULL},
         {"15", NULL},
         {NULL, NULL},
      },
      "-1"
   },

   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_he = {
   option_cats_he,
   option_defs_he
};

/* RETRO_LANGUAGE_HR */

#define CATEGORY_INPUT_LABEL_HR NULL
#define CATEGORY_INPUT_INFO_0_HR NULL
#define CATEGORY_RETROMOUSE_LABEL_HR NULL
#define CATEGORY_RETROMOUSE_INFO_0_HR NULL
#define CATEGORY_MANYMOUSE_LABEL_HR NULL
#define CATEGORY_MANYMOUSE_INFO_0_HR NULL
#define CATEGORY_DIPSWITCH_LABEL_HR NULL
#define CATEGORY_DIPSWITCH_INFO_0_HR NULL
#define DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_LABEL_HR NULL
#define DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_LABEL_CAT_HR NULL
#define DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_INFO_0_HR NULL
#define DICE_PADDLE_JOYSTICK_ABSOLUTE_LABEL_HR NULL
#define DICE_PADDLE_JOYSTICK_ABSOLUTE_LABEL_CAT_HR NULL
#define DICE_PADDLE_JOYSTICK_ABSOLUTE_INFO_0_HR NULL
#define DICE_PADDLE_KEYBOARD_SENSITIVITY_LABEL_HR NULL
#define DICE_PADDLE_KEYBOARD_SENSITIVITY_LABEL_CAT_HR NULL
#define DICE_PADDLE_KEYBOARD_SENSITIVITY_INFO_0_HR NULL
#define DICE_PADDLE_JOYSTICK_SENSITIVITY_LABEL_HR NULL
#define DICE_PADDLE_JOYSTICK_SENSITIVITY_LABEL_CAT_HR NULL
#define DICE_PADDLE_JOYSTICK_SENSITIVITY_INFO_0_HR NULL
#define DICE_RETROMOUSE_PADDLE_SENSITIVITY_LABEL_HR NULL
#define DICE_RETROMOUSE_PADDLE_SENSITIVITY_LABEL_CAT_HR NULL
#define DICE_RETROMOUSE_PADDLE_SENSITIVITY_INFO_0_HR NULL
#define DICE_WHEEL_KEYJOY_SENSITIVITY_LABEL_HR NULL
#define DICE_WHEEL_KEYJOY_SENSITIVITY_LABEL_CAT_HR NULL
#define DICE_WHEEL_KEYJOY_SENSITIVITY_INFO_0_HR NULL
#define DICE_THROTTLE_KEYJOY_SENSITIVITY_LABEL_HR NULL
#define DICE_THROTTLE_KEYJOY_SENSITIVITY_LABEL_CAT_HR NULL
#define DICE_THROTTLE_KEYJOY_SENSITIVITY_INFO_0_HR NULL
#define DICE_RETROMOUSE_PADDLE0_LABEL_HR NULL
#define DICE_RETROMOUSE_PADDLE0_LABEL_CAT_HR NULL
#define DICE_RETROMOUSE_PADDLE0_INFO_0_HR NULL
#define DICE_RETROMOUSE_PADDLE1_LABEL_HR NULL
#define DICE_RETROMOUSE_PADDLE1_LABEL_CAT_HR NULL
#define DICE_RETROMOUSE_PADDLE1_INFO_0_HR NULL
#define DICE_RETROMOUSE_PADDLE2_LABEL_HR NULL
#define DICE_RETROMOUSE_PADDLE2_LABEL_CAT_HR NULL
#define DICE_RETROMOUSE_PADDLE2_INFO_0_HR NULL
#define DICE_RETROMOUSE_PADDLE3_LABEL_HR NULL
#define DICE_RETROMOUSE_PADDLE3_LABEL_CAT_HR NULL
#define DICE_RETROMOUSE_PADDLE3_INFO_0_HR NULL
#define DICE_RETROMOUSE_PADDLE0_X_LABEL_HR NULL
#define DICE_RETROMOUSE_PADDLE0_X_LABEL_CAT_HR NULL
#define DICE_RETROMOUSE_PADDLE0_X_INFO_0_HR NULL
#define OPTION_VAL_X_HR NULL
#define OPTION_VAL_Y_HR NULL
#define DICE_RETROMOUSE_PADDLE0_Y_LABEL_HR NULL
#define DICE_RETROMOUSE_PADDLE0_Y_LABEL_CAT_HR NULL
#define DICE_RETROMOUSE_PADDLE0_Y_INFO_0_HR NULL
#define DICE_RETROMOUSE_PADDLE1_X_LABEL_HR NULL
#define DICE_RETROMOUSE_PADDLE1_X_LABEL_CAT_HR NULL
#define DICE_RETROMOUSE_PADDLE1_X_INFO_0_HR NULL
#define DICE_RETROMOUSE_PADDLE1_Y_LABEL_HR NULL
#define DICE_RETROMOUSE_PADDLE1_Y_LABEL_CAT_HR NULL
#define DICE_RETROMOUSE_PADDLE1_Y_INFO_0_HR NULL
#define DICE_RETROMOUSE_PADDLE2_X_LABEL_HR NULL
#define DICE_RETROMOUSE_PADDLE2_X_LABEL_CAT_HR NULL
#define DICE_RETROMOUSE_PADDLE2_X_INFO_0_HR NULL
#define DICE_RETROMOUSE_PADDLE2_Y_LABEL_HR NULL
#define DICE_RETROMOUSE_PADDLE2_Y_LABEL_CAT_HR NULL
#define DICE_RETROMOUSE_PADDLE2_Y_INFO_0_HR NULL
#define DICE_RETROMOUSE_PADDLE3_X_LABEL_HR NULL
#define DICE_RETROMOUSE_PADDLE3_X_LABEL_CAT_HR NULL
#define DICE_RETROMOUSE_PADDLE3_X_INFO_0_HR NULL
#define DICE_RETROMOUSE_PADDLE3_Y_LABEL_HR NULL
#define DICE_RETROMOUSE_PADDLE3_Y_LABEL_CAT_HR NULL
#define DICE_RETROMOUSE_PADDLE3_Y_INFO_0_HR NULL
#define DICE_MANYMOUSE_PADDLE0_LABEL_HR NULL
#define DICE_MANYMOUSE_PADDLE0_INFO_0_HR NULL
#define DICE_MANYMOUSE_PADDLE0_X_LABEL_HR NULL
#define DICE_MANYMOUSE_PADDLE0_X_LABEL_CAT_HR NULL
#define OPTION_VAL_0X_HR NULL
#define OPTION_VAL_0Y_HR NULL
#define OPTION_VAL_1X_HR NULL
#define OPTION_VAL_1Y_HR NULL
#define OPTION_VAL_2X_HR NULL
#define OPTION_VAL_2Y_HR NULL
#define OPTION_VAL_3X_HR NULL
#define OPTION_VAL_3Y_HR NULL
#define DICE_MANYMOUSE_PADDLE0_Y_LABEL_HR NULL
#define DICE_MANYMOUSE_PADDLE0_Y_LABEL_CAT_HR NULL
#define DICE_MANYMOUSE_PADDLE1_LABEL_HR NULL
#define DICE_MANYMOUSE_PADDLE1_INFO_0_HR NULL
#define DICE_MANYMOUSE_PADDLE1_X_LABEL_HR NULL
#define DICE_MANYMOUSE_PADDLE1_X_LABEL_CAT_HR NULL
#define DICE_MANYMOUSE_PADDLE1_Y_LABEL_HR NULL
#define DICE_MANYMOUSE_PADDLE1_Y_LABEL_CAT_HR NULL
#define DICE_MANYMOUSE_PADDLE2_LABEL_HR NULL
#define DICE_MANYMOUSE_PADDLE2_INFO_0_HR NULL
#define DICE_MANYMOUSE_PADDLE2_X_LABEL_HR NULL
#define DICE_MANYMOUSE_PADDLE2_X_LABEL_CAT_HR NULL
#define DICE_MANYMOUSE_PADDLE2_Y_LABEL_HR NULL
#define DICE_MANYMOUSE_PADDLE2_Y_LABEL_CAT_HR NULL
#define DICE_MANYMOUSE_PADDLE3_LABEL_HR NULL
#define DICE_MANYMOUSE_PADDLE3_INFO_0_HR NULL
#define DICE_MANYMOUSE_PADDLE3_X_LABEL_HR NULL
#define DICE_MANYMOUSE_PADDLE3_X_LABEL_CAT_HR NULL
#define DICE_MANYMOUSE_PADDLE3_Y_LABEL_HR NULL
#define DICE_MANYMOUSE_PADDLE3_Y_LABEL_CAT_HR NULL
#define DICE_DIPSWITCH_1_LABEL_HR NULL
#define DICE_DIPSWITCH_1_LABEL_CAT_HR NULL
#define DICE_DIPSWITCH_1_INFO_0_HR NULL
#define OPTION_VAL_1_HR NULL
#define DICE_DIPSWITCH_2_LABEL_HR NULL
#define DICE_DIPSWITCH_2_LABEL_CAT_HR NULL
#define DICE_DIPSWITCH_2_INFO_0_HR NULL
#define DICE_DIPSWITCH_3_LABEL_HR NULL
#define DICE_DIPSWITCH_3_LABEL_CAT_HR NULL
#define DICE_DIPSWITCH_3_INFO_0_HR NULL
#define DICE_DIPSWITCH16_1_LABEL_HR NULL
#define DICE_DIPSWITCH16_1_LABEL_CAT_HR NULL
#define DICE_DIPSWITCH16_1_INFO_0_HR NULL
#define DICE_DIPSWITCH16_2_LABEL_HR NULL
#define DICE_DIPSWITCH16_2_LABEL_CAT_HR NULL
#define DICE_DIPSWITCH16_2_INFO_0_HR NULL

struct retro_core_option_v2_category option_cats_hr[] = {
   {
      "input",
      CATEGORY_INPUT_LABEL_HR,
      CATEGORY_INPUT_INFO_0_HR
   },
   {
      "retromouse",
      CATEGORY_RETROMOUSE_LABEL_HR,
      CATEGORY_RETROMOUSE_INFO_0_HR
   },
#ifdef MANYMOUSE
   {
      "manymouse",
      CATEGORY_MANYMOUSE_LABEL_HR,
      CATEGORY_MANYMOUSE_INFO_0_HR
   },
#endif
   {
      "dipswitch",
      CATEGORY_DIPSWITCH_LABEL_HR,
      CATEGORY_DIPSWITCH_INFO_0_HR
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_hr[] = {
   {
      "dice_use_mouse_pointer_for_paddle_1",
      DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_LABEL_HR,
      DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_LABEL_CAT_HR,
      DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_INFO_0_HR,
      NULL,
      "input",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_paddle_joystick_absolute",
      DICE_PADDLE_JOYSTICK_ABSOLUTE_LABEL_HR,
      DICE_PADDLE_JOYSTICK_ABSOLUTE_LABEL_CAT_HR,
      DICE_PADDLE_JOYSTICK_ABSOLUTE_INFO_0_HR,
      NULL,
      "input",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      // D-pad but not necessarily keyboard under libretro,
      // that name comes from the upstream code.
      "dice_paddle_keyboard_sensitivity",
      DICE_PADDLE_KEYBOARD_SENSITIVITY_LABEL_HR,
      DICE_PADDLE_KEYBOARD_SENSITIVITY_LABEL_CAT_HR,
      DICE_PADDLE_KEYBOARD_SENSITIVITY_INFO_0_HR,
      NULL,
      "input",
      {
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "250"
   },
   {
      "dice_paddle_joystick_sensitivity",
      DICE_PADDLE_JOYSTICK_SENSITIVITY_LABEL_HR,
      DICE_PADDLE_JOYSTICK_SENSITIVITY_LABEL_CAT_HR,
      DICE_PADDLE_JOYSTICK_SENSITIVITY_INFO_0_HR,
      NULL,
      "input",
      {
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "500"
   },
   {
      "dice_retromouse_paddle_sensitivity",
      DICE_RETROMOUSE_PADDLE_SENSITIVITY_LABEL_HR,
      DICE_RETROMOUSE_PADDLE_SENSITIVITY_LABEL_CAT_HR,
      DICE_RETROMOUSE_PADDLE_SENSITIVITY_INFO_0_HR,
      NULL,
      "input",
      {
         {"25", NULL},
         {"50", NULL},
         {"75", NULL},
         {"100", NULL},
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "125"
   },
   {
      "dice_wheel_keyjoy_sensitivity",
      DICE_WHEEL_KEYJOY_SENSITIVITY_LABEL_HR,
      DICE_WHEEL_KEYJOY_SENSITIVITY_LABEL_CAT_HR,
      DICE_WHEEL_KEYJOY_SENSITIVITY_INFO_0_HR,
      NULL,
      "input",
      {
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "500"
   },
   {
      "dice_throttle_keyjoy_sensitivity",
      DICE_THROTTLE_KEYJOY_SENSITIVITY_LABEL_HR,
      DICE_THROTTLE_KEYJOY_SENSITIVITY_LABEL_CAT_HR,
      DICE_THROTTLE_KEYJOY_SENSITIVITY_INFO_0_HR,
      NULL,
      "input",
      {
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "250"
   },

   {
      "dice_retromouse_paddle0",
      DICE_RETROMOUSE_PADDLE0_LABEL_HR,
      DICE_RETROMOUSE_PADDLE0_LABEL_CAT_HR,
      DICE_RETROMOUSE_PADDLE0_INFO_0_HR,
      NULL,
      "retromouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_retromouse_paddle1",
      DICE_RETROMOUSE_PADDLE1_LABEL_HR,
      DICE_RETROMOUSE_PADDLE1_LABEL_CAT_HR,
      DICE_RETROMOUSE_PADDLE1_INFO_0_HR,
      NULL,
      "retromouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_retromouse_paddle2",
      DICE_RETROMOUSE_PADDLE2_LABEL_HR,
      DICE_RETROMOUSE_PADDLE2_LABEL_CAT_HR,
      DICE_RETROMOUSE_PADDLE2_INFO_0_HR,
      NULL,
      "retromouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_retromouse_paddle3",
      DICE_RETROMOUSE_PADDLE3_LABEL_HR,
      DICE_RETROMOUSE_PADDLE3_LABEL_CAT_HR,
      DICE_RETROMOUSE_PADDLE3_INFO_0_HR,
      NULL,
      "retromouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_retromouse_paddle0_x",
      DICE_RETROMOUSE_PADDLE0_X_LABEL_HR,
      DICE_RETROMOUSE_PADDLE0_X_LABEL_CAT_HR,
      DICE_RETROMOUSE_PADDLE0_X_INFO_0_HR,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_HR},
         {"y", OPTION_VAL_Y_HR},
         {NULL, NULL},
      },
      "x"
   },
   {
      "dice_retromouse_paddle0_y",
      DICE_RETROMOUSE_PADDLE0_Y_LABEL_HR,
      DICE_RETROMOUSE_PADDLE0_Y_LABEL_CAT_HR,
      DICE_RETROMOUSE_PADDLE0_Y_INFO_0_HR,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_HR},
         {"y", OPTION_VAL_Y_HR},
         {NULL, NULL},
      },
      "y"
   },
   {
      "dice_retromouse_paddle1_x",
      DICE_RETROMOUSE_PADDLE1_X_LABEL_HR,
      DICE_RETROMOUSE_PADDLE1_X_LABEL_CAT_HR,
      DICE_RETROMOUSE_PADDLE1_X_INFO_0_HR,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_HR},
         {"y", OPTION_VAL_Y_HR},
         {NULL, NULL},
      },
      "x"
   },
   {
      "dice_retromouse_paddle1_y",
      DICE_RETROMOUSE_PADDLE1_Y_LABEL_HR,
      DICE_RETROMOUSE_PADDLE1_Y_LABEL_CAT_HR,
      DICE_RETROMOUSE_PADDLE1_Y_INFO_0_HR,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_HR},
         {"y", OPTION_VAL_Y_HR},
         {NULL, NULL},
      },
      "y"
   },
   {
      "dice_retromouse_paddle2_x",
      DICE_RETROMOUSE_PADDLE2_X_LABEL_HR,
      DICE_RETROMOUSE_PADDLE2_X_LABEL_CAT_HR,
      DICE_RETROMOUSE_PADDLE2_X_INFO_0_HR,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_HR},
         {"y", OPTION_VAL_Y_HR},
         {NULL, NULL},
      },
      "x"
   },
   {
      "dice_retromouse_paddle2_y",
      DICE_RETROMOUSE_PADDLE2_Y_LABEL_HR,
      DICE_RETROMOUSE_PADDLE2_Y_LABEL_CAT_HR,
      DICE_RETROMOUSE_PADDLE2_Y_INFO_0_HR,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_HR},
         {"y", OPTION_VAL_Y_HR},
         {NULL, NULL},
      },
      "y"
   },
   {
      "dice_retromouse_paddle3_x",
      DICE_RETROMOUSE_PADDLE3_X_LABEL_HR,
      DICE_RETROMOUSE_PADDLE3_X_LABEL_CAT_HR,
      DICE_RETROMOUSE_PADDLE3_X_INFO_0_HR,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_HR},
         {"y", OPTION_VAL_Y_HR},
         {NULL, NULL},
      },
      "x"
   },
   {
      "dice_retromouse_paddle3_y",
      DICE_RETROMOUSE_PADDLE3_Y_LABEL_HR,
      DICE_RETROMOUSE_PADDLE3_Y_LABEL_CAT_HR,
      DICE_RETROMOUSE_PADDLE3_Y_INFO_0_HR,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_HR},
         {"y", OPTION_VAL_Y_HR},
         {NULL, NULL},
      },
      "y"
   },

#ifdef MANYMOUSE
   {
      "dice_manymouse_paddle0",
      DICE_MANYMOUSE_PADDLE0_LABEL_HR,
      DICE_RETROMOUSE_PADDLE0_LABEL_CAT_HR,
      DICE_MANYMOUSE_PADDLE0_INFO_0_HR,
      NULL,
      "manymouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_manymouse_paddle0_x",
      DICE_MANYMOUSE_PADDLE0_X_LABEL_HR,
      DICE_MANYMOUSE_PADDLE0_X_LABEL_CAT_HR,
      DICE_RETROMOUSE_PADDLE0_X_INFO_0_HR,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_HR},
         {"0y", OPTION_VAL_0Y_HR},
         {"1x", OPTION_VAL_1X_HR},
         {"1y", OPTION_VAL_1Y_HR},
         {"2x", OPTION_VAL_2X_HR},
         {"2y", OPTION_VAL_2Y_HR},
         {"3x", OPTION_VAL_3X_HR},
         {"3y", OPTION_VAL_3Y_HR},
         {NULL, NULL},
      },
      "0x"
   },
   {
      "dice_manymouse_paddle0_y",
      DICE_MANYMOUSE_PADDLE0_Y_LABEL_HR,
      DICE_MANYMOUSE_PADDLE0_Y_LABEL_CAT_HR,
      DICE_RETROMOUSE_PADDLE0_Y_INFO_0_HR,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_HR},
         {"0y", OPTION_VAL_0Y_HR},
         {"1x", OPTION_VAL_1X_HR},
         {"1y", OPTION_VAL_1Y_HR},
         {"2x", OPTION_VAL_2X_HR},
         {"2y", OPTION_VAL_2Y_HR},
         {"3x", OPTION_VAL_3X_HR},
         {"3y", OPTION_VAL_3Y_HR},
         {NULL, NULL},
      },
      "0y"
   },
   {
      "dice_manymouse_paddle1",
      DICE_MANYMOUSE_PADDLE1_LABEL_HR,
      DICE_RETROMOUSE_PADDLE1_LABEL_CAT_HR,
      DICE_MANYMOUSE_PADDLE1_INFO_0_HR,
      NULL,
      "manymouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_manymouse_paddle1_x",
      DICE_MANYMOUSE_PADDLE1_X_LABEL_HR,
      DICE_MANYMOUSE_PADDLE1_X_LABEL_CAT_HR,
      DICE_RETROMOUSE_PADDLE1_X_INFO_0_HR,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_HR},
         {"0y", OPTION_VAL_0Y_HR},
         {"1x", OPTION_VAL_1X_HR},
         {"1y", OPTION_VAL_1Y_HR},
         {"2x", OPTION_VAL_2X_HR},
         {"2y", OPTION_VAL_2Y_HR},
         {"3x", OPTION_VAL_3X_HR},
         {"3y", OPTION_VAL_3Y_HR},
         {NULL, NULL},
      },
      "1x"
   },
   {
      "dice_manymouse_paddle1_y",
      DICE_MANYMOUSE_PADDLE1_Y_LABEL_HR,
      DICE_MANYMOUSE_PADDLE1_Y_LABEL_CAT_HR,
      DICE_RETROMOUSE_PADDLE1_Y_INFO_0_HR,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_HR},
         {"0y", OPTION_VAL_0Y_HR},
         {"1x", OPTION_VAL_1X_HR},
         {"1y", OPTION_VAL_1Y_HR},
         {"2x", OPTION_VAL_2X_HR},
         {"2y", OPTION_VAL_2Y_HR},
         {"3x", OPTION_VAL_3X_HR},
         {"3y", OPTION_VAL_3Y_HR},
         {NULL, NULL},
      },
      "1y"
   },
   {
      "dice_manymouse_paddle2",
      DICE_MANYMOUSE_PADDLE2_LABEL_HR,
      DICE_RETROMOUSE_PADDLE2_LABEL_CAT_HR,
      DICE_MANYMOUSE_PADDLE2_INFO_0_HR,
      NULL,
      "manymouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_manymouse_paddle2_x",
      DICE_MANYMOUSE_PADDLE2_X_LABEL_HR,
      DICE_MANYMOUSE_PADDLE2_X_LABEL_CAT_HR,
      DICE_RETROMOUSE_PADDLE2_X_INFO_0_HR,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_HR},
         {"0y", OPTION_VAL_0Y_HR},
         {"1x", OPTION_VAL_1X_HR},
         {"1y", OPTION_VAL_1Y_HR},
         {"2x", OPTION_VAL_2X_HR},
         {"2y", OPTION_VAL_2Y_HR},
         {"3x", OPTION_VAL_3X_HR},
         {"3y", OPTION_VAL_3Y_HR},
         {NULL, NULL},
      },
      "2x"
   },
   {
      "dice_manymouse_paddle2_y",
      DICE_MANYMOUSE_PADDLE2_Y_LABEL_HR,
      DICE_MANYMOUSE_PADDLE2_Y_LABEL_CAT_HR,
      DICE_RETROMOUSE_PADDLE2_Y_INFO_0_HR,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_HR},
         {"0y", OPTION_VAL_0Y_HR},
         {"1x", OPTION_VAL_1X_HR},
         {"1y", OPTION_VAL_1Y_HR},
         {"2x", OPTION_VAL_2X_HR},
         {"2y", OPTION_VAL_2Y_HR},
         {"3x", OPTION_VAL_3X_HR},
         {"3y", OPTION_VAL_3Y_HR},
         {NULL, NULL},
      },
      "2y"
   },
   {
      "dice_manymouse_paddle3",
      DICE_MANYMOUSE_PADDLE3_LABEL_HR,
      DICE_RETROMOUSE_PADDLE3_LABEL_CAT_HR,
      DICE_MANYMOUSE_PADDLE3_INFO_0_HR,
      NULL,
      "manymouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_manymouse_paddle3_x",
      DICE_MANYMOUSE_PADDLE3_X_LABEL_HR,
      DICE_MANYMOUSE_PADDLE3_X_LABEL_CAT_HR,
      DICE_RETROMOUSE_PADDLE3_X_INFO_0_HR,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_HR},
         {"0y", OPTION_VAL_0Y_HR},
         {"1x", OPTION_VAL_1X_HR},
         {"1y", OPTION_VAL_1Y_HR},
         {"2x", OPTION_VAL_2X_HR},
         {"2y", OPTION_VAL_2Y_HR},
         {"3x", OPTION_VAL_3X_HR},
         {"3y", OPTION_VAL_3Y_HR},
         {NULL, NULL},
      },
      "3x"
   },
   {
      "dice_manymouse_paddle3_y",
      DICE_MANYMOUSE_PADDLE3_Y_LABEL_HR,
      DICE_MANYMOUSE_PADDLE3_Y_LABEL_CAT_HR,
      DICE_RETROMOUSE_PADDLE3_Y_INFO_0_HR,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_HR},
         {"0y", OPTION_VAL_0Y_HR},
         {"1x", OPTION_VAL_1X_HR},
         {"1y", OPTION_VAL_1Y_HR},
         {"2x", OPTION_VAL_2X_HR},
         {"2y", OPTION_VAL_2Y_HR},
         {"3x", OPTION_VAL_3X_HR},
         {"3y", OPTION_VAL_3Y_HR},
         {NULL, NULL},
      },
      "3y"
   },
#endif

   {
      "dice_dipswitch_1",
      DICE_DIPSWITCH_1_LABEL_HR,
      DICE_DIPSWITCH_1_LABEL_CAT_HR,
      DICE_DIPSWITCH_1_INFO_0_HR,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_HR},
         {"0", NULL},
         {"1", NULL},
         {NULL, NULL},
      },
      "-1"
   },
   {
      "dice_dipswitch_2",
      DICE_DIPSWITCH_2_LABEL_HR,
      DICE_DIPSWITCH_2_LABEL_CAT_HR,
      DICE_DIPSWITCH_2_INFO_0_HR,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_HR},
         {"0", NULL},
         {"1", NULL},
         {NULL, NULL},
      },
      "-1"
   },
   {
      "dice_dipswitch_3",
      DICE_DIPSWITCH_3_LABEL_HR,
      DICE_DIPSWITCH_3_LABEL_CAT_HR,
      DICE_DIPSWITCH_3_INFO_0_HR,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_HR},
         {"0", NULL},
         {"1", NULL},
         {NULL, NULL},
      },
      "-1"
   },
   {
      "dice_dipswitch16_1",
      DICE_DIPSWITCH16_1_LABEL_HR,
      DICE_DIPSWITCH16_1_LABEL_CAT_HR,
      DICE_DIPSWITCH16_1_INFO_0_HR,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_HR},
         {"0", NULL},
         {"1", NULL},
         {"2", NULL},
         {"3", NULL},
         {"4", NULL},
         {"5", NULL},
         {"6", NULL},
         {"7", NULL},
         {"8", NULL},
         {"9", NULL},
         {"10", NULL},
         {"11", NULL},
         {"12", NULL},
         {"13", NULL},
         {"14", NULL},
         {"15", NULL},
         {NULL, NULL},
      },
      "-1"
   },
   {
      "dice_dipswitch16_2",
      DICE_DIPSWITCH16_2_LABEL_HR,
      DICE_DIPSWITCH16_2_LABEL_CAT_HR,
      DICE_DIPSWITCH16_2_INFO_0_HR,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_HR},
         {"0", NULL},
         {"1", NULL},
         {"2", NULL},
         {"3", NULL},
         {"4", NULL},
         {"5", NULL},
         {"6", NULL},
         {"7", NULL},
         {"8", NULL},
         {"9", NULL},
         {"10", NULL},
         {"11", NULL},
         {"12", NULL},
         {"13", NULL},
         {"14", NULL},
         {"15", NULL},
         {NULL, NULL},
      },
      "-1"
   },

   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_hr = {
   option_cats_hr,
   option_defs_hr
};

/* RETRO_LANGUAGE_HU */

#define CATEGORY_INPUT_LABEL_HU "Bemenet"
#define CATEGORY_INPUT_INFO_0_HU "Magspecifikus bemeneti beállítások."
#define CATEGORY_RETROMOUSE_LABEL_HU NULL
#define CATEGORY_RETROMOUSE_INFO_0_HU "Egynél több egér beállításai (libretro)."
#define CATEGORY_MANYMOUSE_LABEL_HU NULL
#define CATEGORY_MANYMOUSE_INFO_0_HU "Egynél több egér beállításai (ManyMouse)."
#define CATEGORY_DIPSWITCH_LABEL_HU "DIP kapcsolók"
#define CATEGORY_DIPSWITCH_INFO_0_HU "A DIP kapcsolók és potenciométerek beállításai."
#define DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_LABEL_HU "Bemenet > Egérmutató használata az 1. ütőhöz"
#define DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_LABEL_CAT_HU "Egérmutató használata az 1. ütőhöz"
#define DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_INFO_0_HU "A rendszeregér mutatójának használata az 1. ütő irányításához. Több egér esetén nem lehet választani közülük."
#define DICE_PADDLE_JOYSTICK_ABSOLUTE_LABEL_HU "Bemenet > A joystick abszolút értékének használata az ütőhöz"
#define DICE_PADDLE_JOYSTICK_ABSOLUTE_LABEL_CAT_HU "A joystick abszolút értékének használata az ütőhöz"
#define DICE_PADDLE_JOYSTICK_ABSOLUTE_INFO_0_HU "A joystick mozgástartományának direkt leképezése az ütő tartományára, a relatív elmozdulás helyett."
#define DICE_PADDLE_KEYBOARD_SENSITIVITY_LABEL_HU "Bemenet > A D-pad érzékenysége az ütőhöz"
#define DICE_PADDLE_KEYBOARD_SENSITIVITY_LABEL_CAT_HU "A D-pad érzékenysége az ütőhöz"
#define DICE_PADDLE_KEYBOARD_SENSITIVITY_INFO_0_HU "A D-pad érzékenysége az ütő irányításához."
#define DICE_PADDLE_JOYSTICK_SENSITIVITY_LABEL_HU "Bemenet > Analóg kar érzékenysége az ütőhöz"
#define DICE_PADDLE_JOYSTICK_SENSITIVITY_LABEL_CAT_HU "Analóg kar érzékenysége az ütőhöz"
#define DICE_PADDLE_JOYSTICK_SENSITIVITY_INFO_0_HU "Az analóg kar érzékenysége az ütő irányításához."
#define DICE_RETROMOUSE_PADDLE_SENSITIVITY_LABEL_HU "Bemenet > RetroMouse érzékenysége az ütőhöz"
#define DICE_RETROMOUSE_PADDLE_SENSITIVITY_LABEL_CAT_HU "RetroMouse érzékenysége az ütőhöz"
#define DICE_RETROMOUSE_PADDLE_SENSITIVITY_INFO_0_HU "A RetroMouse érzékenysége az ütő irányításához."
#define DICE_WHEEL_KEYJOY_SENSITIVITY_LABEL_HU "Bemenet > Kerék érzékenysége"
#define DICE_WHEEL_KEYJOY_SENSITIVITY_LABEL_CAT_HU "Kerék érzékenysége"
#define DICE_WHEEL_KEYJOY_SENSITIVITY_INFO_0_HU "A D-pad vagy analóg kar érzékenysége a kerék irányításához."
#define DICE_THROTTLE_KEYJOY_SENSITIVITY_LABEL_HU "Bemenet > Gázkar érzékenysége"
#define DICE_THROTTLE_KEYJOY_SENSITIVITY_LABEL_CAT_HU "Gázkar érzékenysége"
#define DICE_THROTTLE_KEYJOY_SENSITIVITY_INFO_0_HU "A D-pad vagy analóg kar érzékenysége a gázkar irányításához."
#define DICE_RETROMOUSE_PADDLE0_LABEL_HU "RetroMouse > Egér használata az 1. ütőhöz"
#define DICE_RETROMOUSE_PADDLE0_LABEL_CAT_HU "Egér használata az 1. ütőhöz"
#define DICE_RETROMOUSE_PADDLE0_INFO_0_HU "Kijelölt egér használata az 1. ütőhöz, az 1. csatlakozó egerének sorszáma szerint."
#define DICE_RETROMOUSE_PADDLE1_LABEL_HU "RetroMouse > Egér használata az 2. ütőhöz"
#define DICE_RETROMOUSE_PADDLE1_LABEL_CAT_HU "Egér használata a 2. ütőhöz"
#define DICE_RETROMOUSE_PADDLE1_INFO_0_HU "Kijelölt egér használata a 2. ütőhöz, a 2. csatlakozó egerének sorszáma szerint."
#define DICE_RETROMOUSE_PADDLE2_LABEL_HU "RetroMouse > Egér használata a 3. ütőhöz"
#define DICE_RETROMOUSE_PADDLE2_LABEL_CAT_HU "Egér használata a 3. ütőhöz"
#define DICE_RETROMOUSE_PADDLE2_INFO_0_HU "Kijelölt egér használata a 3. ütőhöz, a 3. csatlakozó egerének sorszáma szerint."
#define DICE_RETROMOUSE_PADDLE3_LABEL_HU "RetroMouse > Egér használata a 4. ütőhöz"
#define DICE_RETROMOUSE_PADDLE3_LABEL_CAT_HU "Egér használata a 4. ütőhöz"
#define DICE_RETROMOUSE_PADDLE3_INFO_0_HU "Kijelölt egér használata a 4. ütőhöz, a 4. csatlakozó egerének sorszáma szerint."
#define DICE_RETROMOUSE_PADDLE0_X_LABEL_HU "RetroMouse > Egér tengelye az 1. ütő vízszintes mozgatásához"
#define DICE_RETROMOUSE_PADDLE0_X_LABEL_CAT_HU "Egér tengelye az 1. ütő vízszintes mozgatásához"
#define DICE_RETROMOUSE_PADDLE0_X_INFO_0_HU "Az 1. játékos egerének tengelye, vízszintes mozgáshoz a képernyőn."
#define OPTION_VAL_X_HU NULL
#define OPTION_VAL_Y_HU NULL
#define DICE_RETROMOUSE_PADDLE0_Y_LABEL_HU "RetroMouse > Egér tengelye az 1. ütő függőleges mozgatásához"
#define DICE_RETROMOUSE_PADDLE0_Y_LABEL_CAT_HU "Egér tengelye az 1. ütő függőleges mozgatásához"
#define DICE_RETROMOUSE_PADDLE0_Y_INFO_0_HU "Az 1. játékos egerének tengelye, függőleges mozgáshoz a képernyőn."
#define DICE_RETROMOUSE_PADDLE1_X_LABEL_HU "RetroMouse > Egér tengelye a 2. ütő vízszintes mozgatásához"
#define DICE_RETROMOUSE_PADDLE1_X_LABEL_CAT_HU "Egér tengelye a 2. ütő vízszintes mozgatásához"
#define DICE_RETROMOUSE_PADDLE1_X_INFO_0_HU "A 2. játékos egerének tengelye, vízszintes mozgáshoz a képernyőn."
#define DICE_RETROMOUSE_PADDLE1_Y_LABEL_HU "RetroMouse > Egér tengelye az 2. ütő függőleges mozgatásához"
#define DICE_RETROMOUSE_PADDLE1_Y_LABEL_CAT_HU "Egér tengelye a 2. ütő függőleges mozgatásához"
#define DICE_RETROMOUSE_PADDLE1_Y_INFO_0_HU "A 2. játékos egerének tengelye, függőleges mozgáshoz a képernyőn."
#define DICE_RETROMOUSE_PADDLE2_X_LABEL_HU "RetroMouse > Egér tengelye a 3. ütő vízszintes mozgatásához"
#define DICE_RETROMOUSE_PADDLE2_X_LABEL_CAT_HU "Egér tengelye a 3. ütő vízszintes mozgatásához"
#define DICE_RETROMOUSE_PADDLE2_X_INFO_0_HU "A 3. játékos egerének tengelye, vízszintes mozgáshoz a képernyőn."
#define DICE_RETROMOUSE_PADDLE2_Y_LABEL_HU "RetroMouse > Egér tengelye a 3. ütő függőleges mozgatásához"
#define DICE_RETROMOUSE_PADDLE2_Y_LABEL_CAT_HU "Egér tengelye a 3. ütő függőleges mozgatásához"
#define DICE_RETROMOUSE_PADDLE2_Y_INFO_0_HU "A 3. játékos egerének tengelye, függőleges mozgáshoz a képernyőn."
#define DICE_RETROMOUSE_PADDLE3_X_LABEL_HU "RetroMouse > Egér tengelye a 4. ütő vízszintes mozgatásához"
#define DICE_RETROMOUSE_PADDLE3_X_LABEL_CAT_HU "Egér tengelye a 4. ütő vízszintes mozgatásához"
#define DICE_RETROMOUSE_PADDLE3_X_INFO_0_HU "A 4. játékos egerének tengelye, vízszintes mozgáshoz a képernyőn."
#define DICE_RETROMOUSE_PADDLE3_Y_LABEL_HU "RetroMouse > Egér tengelye a 4. ütő függőleges mozgatásához"
#define DICE_RETROMOUSE_PADDLE3_Y_LABEL_CAT_HU "Egér tengelye a 4. ütő függőleges mozgatásához"
#define DICE_RETROMOUSE_PADDLE3_Y_INFO_0_HU "A 4. játékos egerének tengelye, függőleges mozgáshoz a képernyőn."
#define DICE_MANYMOUSE_PADDLE0_LABEL_HU "ManyMouse > Egér használata az 1. ütőhöz"
#define DICE_MANYMOUSE_PADDLE0_INFO_0_HU "Egér használata az 1. ütőhöz."
#define DICE_MANYMOUSE_PADDLE0_X_LABEL_HU "ManyMouse > Egér-Ütő 1 x"
#define DICE_MANYMOUSE_PADDLE0_X_LABEL_CAT_HU "Egér-Ütő 1 x"
#define OPTION_VAL_0X_HU NULL
#define OPTION_VAL_0Y_HU NULL
#define OPTION_VAL_1X_HU NULL
#define OPTION_VAL_1Y_HU NULL
#define OPTION_VAL_2X_HU NULL
#define OPTION_VAL_2Y_HU NULL
#define OPTION_VAL_3X_HU NULL
#define OPTION_VAL_3Y_HU NULL
#define DICE_MANYMOUSE_PADDLE0_Y_LABEL_HU "ManyMouse > Egér-Ütő 1 y"
#define DICE_MANYMOUSE_PADDLE0_Y_LABEL_CAT_HU "Egér-Ütő 1 y"
#define DICE_MANYMOUSE_PADDLE1_LABEL_HU "ManyMouse > Egér használata a 2. ütőhöz"
#define DICE_MANYMOUSE_PADDLE1_INFO_0_HU "Egér használata a 2. ütőhöz."
#define DICE_MANYMOUSE_PADDLE1_X_LABEL_HU "ManyMouse > Egér-Ütő 2 x"
#define DICE_MANYMOUSE_PADDLE1_X_LABEL_CAT_HU "Egér-Ütő 2 x"
#define DICE_MANYMOUSE_PADDLE1_Y_LABEL_HU "ManyMouse > Egér-Ütő 2 y"
#define DICE_MANYMOUSE_PADDLE1_Y_LABEL_CAT_HU "Egér-Ütő 2 y"
#define DICE_MANYMOUSE_PADDLE2_LABEL_HU "ManyMouse > Egér használata a 3. ütőhöz"
#define DICE_MANYMOUSE_PADDLE2_INFO_0_HU "Egér használata a 3. ütőhöz."
#define DICE_MANYMOUSE_PADDLE2_X_LABEL_HU "ManyMouse > Egér-Ütő 3 x"
#define DICE_MANYMOUSE_PADDLE2_X_LABEL_CAT_HU "Egér-Ütő 3 x"
#define DICE_MANYMOUSE_PADDLE2_Y_LABEL_HU "ManyMouse > Egér-Ütő 3 y"
#define DICE_MANYMOUSE_PADDLE2_Y_LABEL_CAT_HU "Egér-Ütő 3 y"
#define DICE_MANYMOUSE_PADDLE3_LABEL_HU "ManyMouse > Egér használata a 4. ütőhöz"
#define DICE_MANYMOUSE_PADDLE3_INFO_0_HU "Egér használata a 4. ütőhöz."
#define DICE_MANYMOUSE_PADDLE3_X_LABEL_HU "ManyMouse > Egér-Ütő 4 x"
#define DICE_MANYMOUSE_PADDLE3_X_LABEL_CAT_HU "Egér-Ütő 4 x"
#define DICE_MANYMOUSE_PADDLE3_Y_LABEL_HU "ManyMouse > Egér-Ütő 4 y"
#define DICE_MANYMOUSE_PADDLE3_Y_LABEL_CAT_HU "Egér-Ütő 4 y"
#define DICE_DIPSWITCH_1_LABEL_HU "DIP kapcsoló > DIP kapcsoló 1"
#define DICE_DIPSWITCH_1_LABEL_CAT_HU "DIP kapcsoló 1"
#define DICE_DIPSWITCH_1_INFO_0_HU "Az 1. DIP kapcsoló beállítása."
#define OPTION_VAL_1_HU "alapértelmezett"
#define DICE_DIPSWITCH_2_LABEL_HU "DIP kapcsoló > DIP kapcsoló 2"
#define DICE_DIPSWITCH_2_LABEL_CAT_HU "DIP kapcsoló 2"
#define DICE_DIPSWITCH_2_INFO_0_HU "A 2. DIP kapcsoló beállítása."
#define DICE_DIPSWITCH_3_LABEL_HU "DIP kapcsoló > DIP kapcsoló 3"
#define DICE_DIPSWITCH_3_LABEL_CAT_HU "DIP kapcsoló 3"
#define DICE_DIPSWITCH_3_INFO_0_HU "A 3. DIP kapcsoló beállítása."
#define DICE_DIPSWITCH16_1_LABEL_HU "DIP kapcsoló > Hexa DIP kapcsoló 1"
#define DICE_DIPSWITCH16_1_LABEL_CAT_HU "Hexa DIP kapcsoló 1"
#define DICE_DIPSWITCH16_1_INFO_0_HU "A 16 állású 1. DIP kapcsoló beállítása."
#define DICE_DIPSWITCH16_2_LABEL_HU "DIP kapcsoló > Hexa DIP kapcsoló 2"
#define DICE_DIPSWITCH16_2_LABEL_CAT_HU "Hexa DIP kapcsoló 2"
#define DICE_DIPSWITCH16_2_INFO_0_HU "A 16 állású 2. DIP kapcsoló beállítása."

struct retro_core_option_v2_category option_cats_hu[] = {
   {
      "input",
      CATEGORY_INPUT_LABEL_HU,
      CATEGORY_INPUT_INFO_0_HU
   },
   {
      "retromouse",
      CATEGORY_RETROMOUSE_LABEL_HU,
      CATEGORY_RETROMOUSE_INFO_0_HU
   },
#ifdef MANYMOUSE
   {
      "manymouse",
      CATEGORY_MANYMOUSE_LABEL_HU,
      CATEGORY_MANYMOUSE_INFO_0_HU
   },
#endif
   {
      "dipswitch",
      CATEGORY_DIPSWITCH_LABEL_HU,
      CATEGORY_DIPSWITCH_INFO_0_HU
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_hu[] = {
   {
      "dice_use_mouse_pointer_for_paddle_1",
      DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_LABEL_HU,
      DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_LABEL_CAT_HU,
      DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_INFO_0_HU,
      NULL,
      "input",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_paddle_joystick_absolute",
      DICE_PADDLE_JOYSTICK_ABSOLUTE_LABEL_HU,
      DICE_PADDLE_JOYSTICK_ABSOLUTE_LABEL_CAT_HU,
      DICE_PADDLE_JOYSTICK_ABSOLUTE_INFO_0_HU,
      NULL,
      "input",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      // D-pad but not necessarily keyboard under libretro,
      // that name comes from the upstream code.
      "dice_paddle_keyboard_sensitivity",
      DICE_PADDLE_KEYBOARD_SENSITIVITY_LABEL_HU,
      DICE_PADDLE_KEYBOARD_SENSITIVITY_LABEL_CAT_HU,
      DICE_PADDLE_KEYBOARD_SENSITIVITY_INFO_0_HU,
      NULL,
      "input",
      {
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "250"
   },
   {
      "dice_paddle_joystick_sensitivity",
      DICE_PADDLE_JOYSTICK_SENSITIVITY_LABEL_HU,
      DICE_PADDLE_JOYSTICK_SENSITIVITY_LABEL_CAT_HU,
      DICE_PADDLE_JOYSTICK_SENSITIVITY_INFO_0_HU,
      NULL,
      "input",
      {
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "500"
   },
   {
      "dice_retromouse_paddle_sensitivity",
      DICE_RETROMOUSE_PADDLE_SENSITIVITY_LABEL_HU,
      DICE_RETROMOUSE_PADDLE_SENSITIVITY_LABEL_CAT_HU,
      DICE_RETROMOUSE_PADDLE_SENSITIVITY_INFO_0_HU,
      NULL,
      "input",
      {
         {"25", NULL},
         {"50", NULL},
         {"75", NULL},
         {"100", NULL},
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "125"
   },
   {
      "dice_wheel_keyjoy_sensitivity",
      DICE_WHEEL_KEYJOY_SENSITIVITY_LABEL_HU,
      DICE_WHEEL_KEYJOY_SENSITIVITY_LABEL_CAT_HU,
      DICE_WHEEL_KEYJOY_SENSITIVITY_INFO_0_HU,
      NULL,
      "input",
      {
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "500"
   },
   {
      "dice_throttle_keyjoy_sensitivity",
      DICE_THROTTLE_KEYJOY_SENSITIVITY_LABEL_HU,
      DICE_THROTTLE_KEYJOY_SENSITIVITY_LABEL_CAT_HU,
      DICE_THROTTLE_KEYJOY_SENSITIVITY_INFO_0_HU,
      NULL,
      "input",
      {
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "250"
   },

   {
      "dice_retromouse_paddle0",
      DICE_RETROMOUSE_PADDLE0_LABEL_HU,
      DICE_RETROMOUSE_PADDLE0_LABEL_CAT_HU,
      DICE_RETROMOUSE_PADDLE0_INFO_0_HU,
      NULL,
      "retromouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_retromouse_paddle1",
      DICE_RETROMOUSE_PADDLE1_LABEL_HU,
      DICE_RETROMOUSE_PADDLE1_LABEL_CAT_HU,
      DICE_RETROMOUSE_PADDLE1_INFO_0_HU,
      NULL,
      "retromouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_retromouse_paddle2",
      DICE_RETROMOUSE_PADDLE2_LABEL_HU,
      DICE_RETROMOUSE_PADDLE2_LABEL_CAT_HU,
      DICE_RETROMOUSE_PADDLE2_INFO_0_HU,
      NULL,
      "retromouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_retromouse_paddle3",
      DICE_RETROMOUSE_PADDLE3_LABEL_HU,
      DICE_RETROMOUSE_PADDLE3_LABEL_CAT_HU,
      DICE_RETROMOUSE_PADDLE3_INFO_0_HU,
      NULL,
      "retromouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_retromouse_paddle0_x",
      DICE_RETROMOUSE_PADDLE0_X_LABEL_HU,
      DICE_RETROMOUSE_PADDLE0_X_LABEL_CAT_HU,
      DICE_RETROMOUSE_PADDLE0_X_INFO_0_HU,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_HU},
         {"y", OPTION_VAL_Y_HU},
         {NULL, NULL},
      },
      "x"
   },
   {
      "dice_retromouse_paddle0_y",
      DICE_RETROMOUSE_PADDLE0_Y_LABEL_HU,
      DICE_RETROMOUSE_PADDLE0_Y_LABEL_CAT_HU,
      DICE_RETROMOUSE_PADDLE0_Y_INFO_0_HU,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_HU},
         {"y", OPTION_VAL_Y_HU},
         {NULL, NULL},
      },
      "y"
   },
   {
      "dice_retromouse_paddle1_x",
      DICE_RETROMOUSE_PADDLE1_X_LABEL_HU,
      DICE_RETROMOUSE_PADDLE1_X_LABEL_CAT_HU,
      DICE_RETROMOUSE_PADDLE1_X_INFO_0_HU,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_HU},
         {"y", OPTION_VAL_Y_HU},
         {NULL, NULL},
      },
      "x"
   },
   {
      "dice_retromouse_paddle1_y",
      DICE_RETROMOUSE_PADDLE1_Y_LABEL_HU,
      DICE_RETROMOUSE_PADDLE1_Y_LABEL_CAT_HU,
      DICE_RETROMOUSE_PADDLE1_Y_INFO_0_HU,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_HU},
         {"y", OPTION_VAL_Y_HU},
         {NULL, NULL},
      },
      "y"
   },
   {
      "dice_retromouse_paddle2_x",
      DICE_RETROMOUSE_PADDLE2_X_LABEL_HU,
      DICE_RETROMOUSE_PADDLE2_X_LABEL_CAT_HU,
      DICE_RETROMOUSE_PADDLE2_X_INFO_0_HU,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_HU},
         {"y", OPTION_VAL_Y_HU},
         {NULL, NULL},
      },
      "x"
   },
   {
      "dice_retromouse_paddle2_y",
      DICE_RETROMOUSE_PADDLE2_Y_LABEL_HU,
      DICE_RETROMOUSE_PADDLE2_Y_LABEL_CAT_HU,
      DICE_RETROMOUSE_PADDLE2_Y_INFO_0_HU,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_HU},
         {"y", OPTION_VAL_Y_HU},
         {NULL, NULL},
      },
      "y"
   },
   {
      "dice_retromouse_paddle3_x",
      DICE_RETROMOUSE_PADDLE3_X_LABEL_HU,
      DICE_RETROMOUSE_PADDLE3_X_LABEL_CAT_HU,
      DICE_RETROMOUSE_PADDLE3_X_INFO_0_HU,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_HU},
         {"y", OPTION_VAL_Y_HU},
         {NULL, NULL},
      },
      "x"
   },
   {
      "dice_retromouse_paddle3_y",
      DICE_RETROMOUSE_PADDLE3_Y_LABEL_HU,
      DICE_RETROMOUSE_PADDLE3_Y_LABEL_CAT_HU,
      DICE_RETROMOUSE_PADDLE3_Y_INFO_0_HU,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_HU},
         {"y", OPTION_VAL_Y_HU},
         {NULL, NULL},
      },
      "y"
   },

#ifdef MANYMOUSE
   {
      "dice_manymouse_paddle0",
      DICE_MANYMOUSE_PADDLE0_LABEL_HU,
      DICE_RETROMOUSE_PADDLE0_LABEL_CAT_HU,
      DICE_MANYMOUSE_PADDLE0_INFO_0_HU,
      NULL,
      "manymouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_manymouse_paddle0_x",
      DICE_MANYMOUSE_PADDLE0_X_LABEL_HU,
      DICE_MANYMOUSE_PADDLE0_X_LABEL_CAT_HU,
      DICE_RETROMOUSE_PADDLE0_X_INFO_0_HU,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_HU},
         {"0y", OPTION_VAL_0Y_HU},
         {"1x", OPTION_VAL_1X_HU},
         {"1y", OPTION_VAL_1Y_HU},
         {"2x", OPTION_VAL_2X_HU},
         {"2y", OPTION_VAL_2Y_HU},
         {"3x", OPTION_VAL_3X_HU},
         {"3y", OPTION_VAL_3Y_HU},
         {NULL, NULL},
      },
      "0x"
   },
   {
      "dice_manymouse_paddle0_y",
      DICE_MANYMOUSE_PADDLE0_Y_LABEL_HU,
      DICE_MANYMOUSE_PADDLE0_Y_LABEL_CAT_HU,
      DICE_RETROMOUSE_PADDLE0_Y_INFO_0_HU,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_HU},
         {"0y", OPTION_VAL_0Y_HU},
         {"1x", OPTION_VAL_1X_HU},
         {"1y", OPTION_VAL_1Y_HU},
         {"2x", OPTION_VAL_2X_HU},
         {"2y", OPTION_VAL_2Y_HU},
         {"3x", OPTION_VAL_3X_HU},
         {"3y", OPTION_VAL_3Y_HU},
         {NULL, NULL},
      },
      "0y"
   },
   {
      "dice_manymouse_paddle1",
      DICE_MANYMOUSE_PADDLE1_LABEL_HU,
      DICE_RETROMOUSE_PADDLE1_LABEL_CAT_HU,
      DICE_MANYMOUSE_PADDLE1_INFO_0_HU,
      NULL,
      "manymouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_manymouse_paddle1_x",
      DICE_MANYMOUSE_PADDLE1_X_LABEL_HU,
      DICE_MANYMOUSE_PADDLE1_X_LABEL_CAT_HU,
      DICE_RETROMOUSE_PADDLE1_X_INFO_0_HU,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_HU},
         {"0y", OPTION_VAL_0Y_HU},
         {"1x", OPTION_VAL_1X_HU},
         {"1y", OPTION_VAL_1Y_HU},
         {"2x", OPTION_VAL_2X_HU},
         {"2y", OPTION_VAL_2Y_HU},
         {"3x", OPTION_VAL_3X_HU},
         {"3y", OPTION_VAL_3Y_HU},
         {NULL, NULL},
      },
      "1x"
   },
   {
      "dice_manymouse_paddle1_y",
      DICE_MANYMOUSE_PADDLE1_Y_LABEL_HU,
      DICE_MANYMOUSE_PADDLE1_Y_LABEL_CAT_HU,
      DICE_RETROMOUSE_PADDLE1_Y_INFO_0_HU,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_HU},
         {"0y", OPTION_VAL_0Y_HU},
         {"1x", OPTION_VAL_1X_HU},
         {"1y", OPTION_VAL_1Y_HU},
         {"2x", OPTION_VAL_2X_HU},
         {"2y", OPTION_VAL_2Y_HU},
         {"3x", OPTION_VAL_3X_HU},
         {"3y", OPTION_VAL_3Y_HU},
         {NULL, NULL},
      },
      "1y"
   },
   {
      "dice_manymouse_paddle2",
      DICE_MANYMOUSE_PADDLE2_LABEL_HU,
      DICE_RETROMOUSE_PADDLE2_LABEL_CAT_HU,
      DICE_MANYMOUSE_PADDLE2_INFO_0_HU,
      NULL,
      "manymouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_manymouse_paddle2_x",
      DICE_MANYMOUSE_PADDLE2_X_LABEL_HU,
      DICE_MANYMOUSE_PADDLE2_X_LABEL_CAT_HU,
      DICE_RETROMOUSE_PADDLE2_X_INFO_0_HU,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_HU},
         {"0y", OPTION_VAL_0Y_HU},
         {"1x", OPTION_VAL_1X_HU},
         {"1y", OPTION_VAL_1Y_HU},
         {"2x", OPTION_VAL_2X_HU},
         {"2y", OPTION_VAL_2Y_HU},
         {"3x", OPTION_VAL_3X_HU},
         {"3y", OPTION_VAL_3Y_HU},
         {NULL, NULL},
      },
      "2x"
   },
   {
      "dice_manymouse_paddle2_y",
      DICE_MANYMOUSE_PADDLE2_Y_LABEL_HU,
      DICE_MANYMOUSE_PADDLE2_Y_LABEL_CAT_HU,
      DICE_RETROMOUSE_PADDLE2_Y_INFO_0_HU,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_HU},
         {"0y", OPTION_VAL_0Y_HU},
         {"1x", OPTION_VAL_1X_HU},
         {"1y", OPTION_VAL_1Y_HU},
         {"2x", OPTION_VAL_2X_HU},
         {"2y", OPTION_VAL_2Y_HU},
         {"3x", OPTION_VAL_3X_HU},
         {"3y", OPTION_VAL_3Y_HU},
         {NULL, NULL},
      },
      "2y"
   },
   {
      "dice_manymouse_paddle3",
      DICE_MANYMOUSE_PADDLE3_LABEL_HU,
      DICE_RETROMOUSE_PADDLE3_LABEL_CAT_HU,
      DICE_MANYMOUSE_PADDLE3_INFO_0_HU,
      NULL,
      "manymouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_manymouse_paddle3_x",
      DICE_MANYMOUSE_PADDLE3_X_LABEL_HU,
      DICE_MANYMOUSE_PADDLE3_X_LABEL_CAT_HU,
      DICE_RETROMOUSE_PADDLE3_X_INFO_0_HU,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_HU},
         {"0y", OPTION_VAL_0Y_HU},
         {"1x", OPTION_VAL_1X_HU},
         {"1y", OPTION_VAL_1Y_HU},
         {"2x", OPTION_VAL_2X_HU},
         {"2y", OPTION_VAL_2Y_HU},
         {"3x", OPTION_VAL_3X_HU},
         {"3y", OPTION_VAL_3Y_HU},
         {NULL, NULL},
      },
      "3x"
   },
   {
      "dice_manymouse_paddle3_y",
      DICE_MANYMOUSE_PADDLE3_Y_LABEL_HU,
      DICE_MANYMOUSE_PADDLE3_Y_LABEL_CAT_HU,
      DICE_RETROMOUSE_PADDLE3_Y_INFO_0_HU,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_HU},
         {"0y", OPTION_VAL_0Y_HU},
         {"1x", OPTION_VAL_1X_HU},
         {"1y", OPTION_VAL_1Y_HU},
         {"2x", OPTION_VAL_2X_HU},
         {"2y", OPTION_VAL_2Y_HU},
         {"3x", OPTION_VAL_3X_HU},
         {"3y", OPTION_VAL_3Y_HU},
         {NULL, NULL},
      },
      "3y"
   },
#endif

   {
      "dice_dipswitch_1",
      DICE_DIPSWITCH_1_LABEL_HU,
      DICE_DIPSWITCH_1_LABEL_CAT_HU,
      DICE_DIPSWITCH_1_INFO_0_HU,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_HU},
         {"0", NULL},
         {"1", NULL},
         {NULL, NULL},
      },
      "-1"
   },
   {
      "dice_dipswitch_2",
      DICE_DIPSWITCH_2_LABEL_HU,
      DICE_DIPSWITCH_2_LABEL_CAT_HU,
      DICE_DIPSWITCH_2_INFO_0_HU,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_HU},
         {"0", NULL},
         {"1", NULL},
         {NULL, NULL},
      },
      "-1"
   },
   {
      "dice_dipswitch_3",
      DICE_DIPSWITCH_3_LABEL_HU,
      DICE_DIPSWITCH_3_LABEL_CAT_HU,
      DICE_DIPSWITCH_3_INFO_0_HU,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_HU},
         {"0", NULL},
         {"1", NULL},
         {NULL, NULL},
      },
      "-1"
   },
   {
      "dice_dipswitch16_1",
      DICE_DIPSWITCH16_1_LABEL_HU,
      DICE_DIPSWITCH16_1_LABEL_CAT_HU,
      DICE_DIPSWITCH16_1_INFO_0_HU,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_HU},
         {"0", NULL},
         {"1", NULL},
         {"2", NULL},
         {"3", NULL},
         {"4", NULL},
         {"5", NULL},
         {"6", NULL},
         {"7", NULL},
         {"8", NULL},
         {"9", NULL},
         {"10", NULL},
         {"11", NULL},
         {"12", NULL},
         {"13", NULL},
         {"14", NULL},
         {"15", NULL},
         {NULL, NULL},
      },
      "-1"
   },
   {
      "dice_dipswitch16_2",
      DICE_DIPSWITCH16_2_LABEL_HU,
      DICE_DIPSWITCH16_2_LABEL_CAT_HU,
      DICE_DIPSWITCH16_2_INFO_0_HU,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_HU},
         {"0", NULL},
         {"1", NULL},
         {"2", NULL},
         {"3", NULL},
         {"4", NULL},
         {"5", NULL},
         {"6", NULL},
         {"7", NULL},
         {"8", NULL},
         {"9", NULL},
         {"10", NULL},
         {"11", NULL},
         {"12", NULL},
         {"13", NULL},
         {"14", NULL},
         {"15", NULL},
         {NULL, NULL},
      },
      "-1"
   },

   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_hu = {
   option_cats_hu,
   option_defs_hu
};

/* RETRO_LANGUAGE_ID */

#define CATEGORY_INPUT_LABEL_ID "Masukan"
#define CATEGORY_INPUT_INFO_0_ID NULL
#define CATEGORY_RETROMOUSE_LABEL_ID NULL
#define CATEGORY_RETROMOUSE_INFO_0_ID NULL
#define CATEGORY_MANYMOUSE_LABEL_ID NULL
#define CATEGORY_MANYMOUSE_INFO_0_ID NULL
#define CATEGORY_DIPSWITCH_LABEL_ID NULL
#define CATEGORY_DIPSWITCH_INFO_0_ID NULL
#define DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_LABEL_ID NULL
#define DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_LABEL_CAT_ID NULL
#define DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_INFO_0_ID NULL
#define DICE_PADDLE_JOYSTICK_ABSOLUTE_LABEL_ID NULL
#define DICE_PADDLE_JOYSTICK_ABSOLUTE_LABEL_CAT_ID NULL
#define DICE_PADDLE_JOYSTICK_ABSOLUTE_INFO_0_ID NULL
#define DICE_PADDLE_KEYBOARD_SENSITIVITY_LABEL_ID NULL
#define DICE_PADDLE_KEYBOARD_SENSITIVITY_LABEL_CAT_ID NULL
#define DICE_PADDLE_KEYBOARD_SENSITIVITY_INFO_0_ID NULL
#define DICE_PADDLE_JOYSTICK_SENSITIVITY_LABEL_ID NULL
#define DICE_PADDLE_JOYSTICK_SENSITIVITY_LABEL_CAT_ID NULL
#define DICE_PADDLE_JOYSTICK_SENSITIVITY_INFO_0_ID NULL
#define DICE_RETROMOUSE_PADDLE_SENSITIVITY_LABEL_ID NULL
#define DICE_RETROMOUSE_PADDLE_SENSITIVITY_LABEL_CAT_ID NULL
#define DICE_RETROMOUSE_PADDLE_SENSITIVITY_INFO_0_ID NULL
#define DICE_WHEEL_KEYJOY_SENSITIVITY_LABEL_ID NULL
#define DICE_WHEEL_KEYJOY_SENSITIVITY_LABEL_CAT_ID NULL
#define DICE_WHEEL_KEYJOY_SENSITIVITY_INFO_0_ID NULL
#define DICE_THROTTLE_KEYJOY_SENSITIVITY_LABEL_ID NULL
#define DICE_THROTTLE_KEYJOY_SENSITIVITY_LABEL_CAT_ID NULL
#define DICE_THROTTLE_KEYJOY_SENSITIVITY_INFO_0_ID NULL
#define DICE_RETROMOUSE_PADDLE0_LABEL_ID NULL
#define DICE_RETROMOUSE_PADDLE0_LABEL_CAT_ID NULL
#define DICE_RETROMOUSE_PADDLE0_INFO_0_ID NULL
#define DICE_RETROMOUSE_PADDLE1_LABEL_ID NULL
#define DICE_RETROMOUSE_PADDLE1_LABEL_CAT_ID NULL
#define DICE_RETROMOUSE_PADDLE1_INFO_0_ID NULL
#define DICE_RETROMOUSE_PADDLE2_LABEL_ID NULL
#define DICE_RETROMOUSE_PADDLE2_LABEL_CAT_ID NULL
#define DICE_RETROMOUSE_PADDLE2_INFO_0_ID NULL
#define DICE_RETROMOUSE_PADDLE3_LABEL_ID NULL
#define DICE_RETROMOUSE_PADDLE3_LABEL_CAT_ID NULL
#define DICE_RETROMOUSE_PADDLE3_INFO_0_ID NULL
#define DICE_RETROMOUSE_PADDLE0_X_LABEL_ID NULL
#define DICE_RETROMOUSE_PADDLE0_X_LABEL_CAT_ID NULL
#define DICE_RETROMOUSE_PADDLE0_X_INFO_0_ID NULL
#define OPTION_VAL_X_ID NULL
#define OPTION_VAL_Y_ID NULL
#define DICE_RETROMOUSE_PADDLE0_Y_LABEL_ID NULL
#define DICE_RETROMOUSE_PADDLE0_Y_LABEL_CAT_ID NULL
#define DICE_RETROMOUSE_PADDLE0_Y_INFO_0_ID NULL
#define DICE_RETROMOUSE_PADDLE1_X_LABEL_ID NULL
#define DICE_RETROMOUSE_PADDLE1_X_LABEL_CAT_ID NULL
#define DICE_RETROMOUSE_PADDLE1_X_INFO_0_ID NULL
#define DICE_RETROMOUSE_PADDLE1_Y_LABEL_ID NULL
#define DICE_RETROMOUSE_PADDLE1_Y_LABEL_CAT_ID NULL
#define DICE_RETROMOUSE_PADDLE1_Y_INFO_0_ID NULL
#define DICE_RETROMOUSE_PADDLE2_X_LABEL_ID NULL
#define DICE_RETROMOUSE_PADDLE2_X_LABEL_CAT_ID NULL
#define DICE_RETROMOUSE_PADDLE2_X_INFO_0_ID NULL
#define DICE_RETROMOUSE_PADDLE2_Y_LABEL_ID NULL
#define DICE_RETROMOUSE_PADDLE2_Y_LABEL_CAT_ID NULL
#define DICE_RETROMOUSE_PADDLE2_Y_INFO_0_ID NULL
#define DICE_RETROMOUSE_PADDLE3_X_LABEL_ID NULL
#define DICE_RETROMOUSE_PADDLE3_X_LABEL_CAT_ID NULL
#define DICE_RETROMOUSE_PADDLE3_X_INFO_0_ID NULL
#define DICE_RETROMOUSE_PADDLE3_Y_LABEL_ID NULL
#define DICE_RETROMOUSE_PADDLE3_Y_LABEL_CAT_ID NULL
#define DICE_RETROMOUSE_PADDLE3_Y_INFO_0_ID NULL
#define DICE_MANYMOUSE_PADDLE0_LABEL_ID NULL
#define DICE_MANYMOUSE_PADDLE0_INFO_0_ID NULL
#define DICE_MANYMOUSE_PADDLE0_X_LABEL_ID NULL
#define DICE_MANYMOUSE_PADDLE0_X_LABEL_CAT_ID NULL
#define OPTION_VAL_0X_ID NULL
#define OPTION_VAL_0Y_ID NULL
#define OPTION_VAL_1X_ID NULL
#define OPTION_VAL_1Y_ID NULL
#define OPTION_VAL_2X_ID NULL
#define OPTION_VAL_2Y_ID NULL
#define OPTION_VAL_3X_ID NULL
#define OPTION_VAL_3Y_ID NULL
#define DICE_MANYMOUSE_PADDLE0_Y_LABEL_ID NULL
#define DICE_MANYMOUSE_PADDLE0_Y_LABEL_CAT_ID NULL
#define DICE_MANYMOUSE_PADDLE1_LABEL_ID NULL
#define DICE_MANYMOUSE_PADDLE1_INFO_0_ID NULL
#define DICE_MANYMOUSE_PADDLE1_X_LABEL_ID NULL
#define DICE_MANYMOUSE_PADDLE1_X_LABEL_CAT_ID NULL
#define DICE_MANYMOUSE_PADDLE1_Y_LABEL_ID NULL
#define DICE_MANYMOUSE_PADDLE1_Y_LABEL_CAT_ID NULL
#define DICE_MANYMOUSE_PADDLE2_LABEL_ID NULL
#define DICE_MANYMOUSE_PADDLE2_INFO_0_ID NULL
#define DICE_MANYMOUSE_PADDLE2_X_LABEL_ID NULL
#define DICE_MANYMOUSE_PADDLE2_X_LABEL_CAT_ID NULL
#define DICE_MANYMOUSE_PADDLE2_Y_LABEL_ID NULL
#define DICE_MANYMOUSE_PADDLE2_Y_LABEL_CAT_ID NULL
#define DICE_MANYMOUSE_PADDLE3_LABEL_ID NULL
#define DICE_MANYMOUSE_PADDLE3_INFO_0_ID NULL
#define DICE_MANYMOUSE_PADDLE3_X_LABEL_ID NULL
#define DICE_MANYMOUSE_PADDLE3_X_LABEL_CAT_ID NULL
#define DICE_MANYMOUSE_PADDLE3_Y_LABEL_ID NULL
#define DICE_MANYMOUSE_PADDLE3_Y_LABEL_CAT_ID NULL
#define DICE_DIPSWITCH_1_LABEL_ID NULL
#define DICE_DIPSWITCH_1_LABEL_CAT_ID NULL
#define DICE_DIPSWITCH_1_INFO_0_ID NULL
#define OPTION_VAL_1_ID NULL
#define DICE_DIPSWITCH_2_LABEL_ID NULL
#define DICE_DIPSWITCH_2_LABEL_CAT_ID NULL
#define DICE_DIPSWITCH_2_INFO_0_ID NULL
#define DICE_DIPSWITCH_3_LABEL_ID NULL
#define DICE_DIPSWITCH_3_LABEL_CAT_ID NULL
#define DICE_DIPSWITCH_3_INFO_0_ID NULL
#define DICE_DIPSWITCH16_1_LABEL_ID NULL
#define DICE_DIPSWITCH16_1_LABEL_CAT_ID NULL
#define DICE_DIPSWITCH16_1_INFO_0_ID NULL
#define DICE_DIPSWITCH16_2_LABEL_ID NULL
#define DICE_DIPSWITCH16_2_LABEL_CAT_ID NULL
#define DICE_DIPSWITCH16_2_INFO_0_ID NULL

struct retro_core_option_v2_category option_cats_id[] = {
   {
      "input",
      CATEGORY_INPUT_LABEL_ID,
      CATEGORY_INPUT_INFO_0_ID
   },
   {
      "retromouse",
      CATEGORY_RETROMOUSE_LABEL_ID,
      CATEGORY_RETROMOUSE_INFO_0_ID
   },
#ifdef MANYMOUSE
   {
      "manymouse",
      CATEGORY_MANYMOUSE_LABEL_ID,
      CATEGORY_MANYMOUSE_INFO_0_ID
   },
#endif
   {
      "dipswitch",
      CATEGORY_DIPSWITCH_LABEL_ID,
      CATEGORY_DIPSWITCH_INFO_0_ID
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_id[] = {
   {
      "dice_use_mouse_pointer_for_paddle_1",
      DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_LABEL_ID,
      DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_LABEL_CAT_ID,
      DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_INFO_0_ID,
      NULL,
      "input",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_paddle_joystick_absolute",
      DICE_PADDLE_JOYSTICK_ABSOLUTE_LABEL_ID,
      DICE_PADDLE_JOYSTICK_ABSOLUTE_LABEL_CAT_ID,
      DICE_PADDLE_JOYSTICK_ABSOLUTE_INFO_0_ID,
      NULL,
      "input",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      // D-pad but not necessarily keyboard under libretro,
      // that name comes from the upstream code.
      "dice_paddle_keyboard_sensitivity",
      DICE_PADDLE_KEYBOARD_SENSITIVITY_LABEL_ID,
      DICE_PADDLE_KEYBOARD_SENSITIVITY_LABEL_CAT_ID,
      DICE_PADDLE_KEYBOARD_SENSITIVITY_INFO_0_ID,
      NULL,
      "input",
      {
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "250"
   },
   {
      "dice_paddle_joystick_sensitivity",
      DICE_PADDLE_JOYSTICK_SENSITIVITY_LABEL_ID,
      DICE_PADDLE_JOYSTICK_SENSITIVITY_LABEL_CAT_ID,
      DICE_PADDLE_JOYSTICK_SENSITIVITY_INFO_0_ID,
      NULL,
      "input",
      {
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "500"
   },
   {
      "dice_retromouse_paddle_sensitivity",
      DICE_RETROMOUSE_PADDLE_SENSITIVITY_LABEL_ID,
      DICE_RETROMOUSE_PADDLE_SENSITIVITY_LABEL_CAT_ID,
      DICE_RETROMOUSE_PADDLE_SENSITIVITY_INFO_0_ID,
      NULL,
      "input",
      {
         {"25", NULL},
         {"50", NULL},
         {"75", NULL},
         {"100", NULL},
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "125"
   },
   {
      "dice_wheel_keyjoy_sensitivity",
      DICE_WHEEL_KEYJOY_SENSITIVITY_LABEL_ID,
      DICE_WHEEL_KEYJOY_SENSITIVITY_LABEL_CAT_ID,
      DICE_WHEEL_KEYJOY_SENSITIVITY_INFO_0_ID,
      NULL,
      "input",
      {
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "500"
   },
   {
      "dice_throttle_keyjoy_sensitivity",
      DICE_THROTTLE_KEYJOY_SENSITIVITY_LABEL_ID,
      DICE_THROTTLE_KEYJOY_SENSITIVITY_LABEL_CAT_ID,
      DICE_THROTTLE_KEYJOY_SENSITIVITY_INFO_0_ID,
      NULL,
      "input",
      {
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "250"
   },

   {
      "dice_retromouse_paddle0",
      DICE_RETROMOUSE_PADDLE0_LABEL_ID,
      DICE_RETROMOUSE_PADDLE0_LABEL_CAT_ID,
      DICE_RETROMOUSE_PADDLE0_INFO_0_ID,
      NULL,
      "retromouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_retromouse_paddle1",
      DICE_RETROMOUSE_PADDLE1_LABEL_ID,
      DICE_RETROMOUSE_PADDLE1_LABEL_CAT_ID,
      DICE_RETROMOUSE_PADDLE1_INFO_0_ID,
      NULL,
      "retromouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_retromouse_paddle2",
      DICE_RETROMOUSE_PADDLE2_LABEL_ID,
      DICE_RETROMOUSE_PADDLE2_LABEL_CAT_ID,
      DICE_RETROMOUSE_PADDLE2_INFO_0_ID,
      NULL,
      "retromouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_retromouse_paddle3",
      DICE_RETROMOUSE_PADDLE3_LABEL_ID,
      DICE_RETROMOUSE_PADDLE3_LABEL_CAT_ID,
      DICE_RETROMOUSE_PADDLE3_INFO_0_ID,
      NULL,
      "retromouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_retromouse_paddle0_x",
      DICE_RETROMOUSE_PADDLE0_X_LABEL_ID,
      DICE_RETROMOUSE_PADDLE0_X_LABEL_CAT_ID,
      DICE_RETROMOUSE_PADDLE0_X_INFO_0_ID,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_ID},
         {"y", OPTION_VAL_Y_ID},
         {NULL, NULL},
      },
      "x"
   },
   {
      "dice_retromouse_paddle0_y",
      DICE_RETROMOUSE_PADDLE0_Y_LABEL_ID,
      DICE_RETROMOUSE_PADDLE0_Y_LABEL_CAT_ID,
      DICE_RETROMOUSE_PADDLE0_Y_INFO_0_ID,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_ID},
         {"y", OPTION_VAL_Y_ID},
         {NULL, NULL},
      },
      "y"
   },
   {
      "dice_retromouse_paddle1_x",
      DICE_RETROMOUSE_PADDLE1_X_LABEL_ID,
      DICE_RETROMOUSE_PADDLE1_X_LABEL_CAT_ID,
      DICE_RETROMOUSE_PADDLE1_X_INFO_0_ID,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_ID},
         {"y", OPTION_VAL_Y_ID},
         {NULL, NULL},
      },
      "x"
   },
   {
      "dice_retromouse_paddle1_y",
      DICE_RETROMOUSE_PADDLE1_Y_LABEL_ID,
      DICE_RETROMOUSE_PADDLE1_Y_LABEL_CAT_ID,
      DICE_RETROMOUSE_PADDLE1_Y_INFO_0_ID,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_ID},
         {"y", OPTION_VAL_Y_ID},
         {NULL, NULL},
      },
      "y"
   },
   {
      "dice_retromouse_paddle2_x",
      DICE_RETROMOUSE_PADDLE2_X_LABEL_ID,
      DICE_RETROMOUSE_PADDLE2_X_LABEL_CAT_ID,
      DICE_RETROMOUSE_PADDLE2_X_INFO_0_ID,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_ID},
         {"y", OPTION_VAL_Y_ID},
         {NULL, NULL},
      },
      "x"
   },
   {
      "dice_retromouse_paddle2_y",
      DICE_RETROMOUSE_PADDLE2_Y_LABEL_ID,
      DICE_RETROMOUSE_PADDLE2_Y_LABEL_CAT_ID,
      DICE_RETROMOUSE_PADDLE2_Y_INFO_0_ID,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_ID},
         {"y", OPTION_VAL_Y_ID},
         {NULL, NULL},
      },
      "y"
   },
   {
      "dice_retromouse_paddle3_x",
      DICE_RETROMOUSE_PADDLE3_X_LABEL_ID,
      DICE_RETROMOUSE_PADDLE3_X_LABEL_CAT_ID,
      DICE_RETROMOUSE_PADDLE3_X_INFO_0_ID,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_ID},
         {"y", OPTION_VAL_Y_ID},
         {NULL, NULL},
      },
      "x"
   },
   {
      "dice_retromouse_paddle3_y",
      DICE_RETROMOUSE_PADDLE3_Y_LABEL_ID,
      DICE_RETROMOUSE_PADDLE3_Y_LABEL_CAT_ID,
      DICE_RETROMOUSE_PADDLE3_Y_INFO_0_ID,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_ID},
         {"y", OPTION_VAL_Y_ID},
         {NULL, NULL},
      },
      "y"
   },

#ifdef MANYMOUSE
   {
      "dice_manymouse_paddle0",
      DICE_MANYMOUSE_PADDLE0_LABEL_ID,
      DICE_RETROMOUSE_PADDLE0_LABEL_CAT_ID,
      DICE_MANYMOUSE_PADDLE0_INFO_0_ID,
      NULL,
      "manymouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_manymouse_paddle0_x",
      DICE_MANYMOUSE_PADDLE0_X_LABEL_ID,
      DICE_MANYMOUSE_PADDLE0_X_LABEL_CAT_ID,
      DICE_RETROMOUSE_PADDLE0_X_INFO_0_ID,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_ID},
         {"0y", OPTION_VAL_0Y_ID},
         {"1x", OPTION_VAL_1X_ID},
         {"1y", OPTION_VAL_1Y_ID},
         {"2x", OPTION_VAL_2X_ID},
         {"2y", OPTION_VAL_2Y_ID},
         {"3x", OPTION_VAL_3X_ID},
         {"3y", OPTION_VAL_3Y_ID},
         {NULL, NULL},
      },
      "0x"
   },
   {
      "dice_manymouse_paddle0_y",
      DICE_MANYMOUSE_PADDLE0_Y_LABEL_ID,
      DICE_MANYMOUSE_PADDLE0_Y_LABEL_CAT_ID,
      DICE_RETROMOUSE_PADDLE0_Y_INFO_0_ID,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_ID},
         {"0y", OPTION_VAL_0Y_ID},
         {"1x", OPTION_VAL_1X_ID},
         {"1y", OPTION_VAL_1Y_ID},
         {"2x", OPTION_VAL_2X_ID},
         {"2y", OPTION_VAL_2Y_ID},
         {"3x", OPTION_VAL_3X_ID},
         {"3y", OPTION_VAL_3Y_ID},
         {NULL, NULL},
      },
      "0y"
   },
   {
      "dice_manymouse_paddle1",
      DICE_MANYMOUSE_PADDLE1_LABEL_ID,
      DICE_RETROMOUSE_PADDLE1_LABEL_CAT_ID,
      DICE_MANYMOUSE_PADDLE1_INFO_0_ID,
      NULL,
      "manymouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_manymouse_paddle1_x",
      DICE_MANYMOUSE_PADDLE1_X_LABEL_ID,
      DICE_MANYMOUSE_PADDLE1_X_LABEL_CAT_ID,
      DICE_RETROMOUSE_PADDLE1_X_INFO_0_ID,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_ID},
         {"0y", OPTION_VAL_0Y_ID},
         {"1x", OPTION_VAL_1X_ID},
         {"1y", OPTION_VAL_1Y_ID},
         {"2x", OPTION_VAL_2X_ID},
         {"2y", OPTION_VAL_2Y_ID},
         {"3x", OPTION_VAL_3X_ID},
         {"3y", OPTION_VAL_3Y_ID},
         {NULL, NULL},
      },
      "1x"
   },
   {
      "dice_manymouse_paddle1_y",
      DICE_MANYMOUSE_PADDLE1_Y_LABEL_ID,
      DICE_MANYMOUSE_PADDLE1_Y_LABEL_CAT_ID,
      DICE_RETROMOUSE_PADDLE1_Y_INFO_0_ID,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_ID},
         {"0y", OPTION_VAL_0Y_ID},
         {"1x", OPTION_VAL_1X_ID},
         {"1y", OPTION_VAL_1Y_ID},
         {"2x", OPTION_VAL_2X_ID},
         {"2y", OPTION_VAL_2Y_ID},
         {"3x", OPTION_VAL_3X_ID},
         {"3y", OPTION_VAL_3Y_ID},
         {NULL, NULL},
      },
      "1y"
   },
   {
      "dice_manymouse_paddle2",
      DICE_MANYMOUSE_PADDLE2_LABEL_ID,
      DICE_RETROMOUSE_PADDLE2_LABEL_CAT_ID,
      DICE_MANYMOUSE_PADDLE2_INFO_0_ID,
      NULL,
      "manymouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_manymouse_paddle2_x",
      DICE_MANYMOUSE_PADDLE2_X_LABEL_ID,
      DICE_MANYMOUSE_PADDLE2_X_LABEL_CAT_ID,
      DICE_RETROMOUSE_PADDLE2_X_INFO_0_ID,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_ID},
         {"0y", OPTION_VAL_0Y_ID},
         {"1x", OPTION_VAL_1X_ID},
         {"1y", OPTION_VAL_1Y_ID},
         {"2x", OPTION_VAL_2X_ID},
         {"2y", OPTION_VAL_2Y_ID},
         {"3x", OPTION_VAL_3X_ID},
         {"3y", OPTION_VAL_3Y_ID},
         {NULL, NULL},
      },
      "2x"
   },
   {
      "dice_manymouse_paddle2_y",
      DICE_MANYMOUSE_PADDLE2_Y_LABEL_ID,
      DICE_MANYMOUSE_PADDLE2_Y_LABEL_CAT_ID,
      DICE_RETROMOUSE_PADDLE2_Y_INFO_0_ID,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_ID},
         {"0y", OPTION_VAL_0Y_ID},
         {"1x", OPTION_VAL_1X_ID},
         {"1y", OPTION_VAL_1Y_ID},
         {"2x", OPTION_VAL_2X_ID},
         {"2y", OPTION_VAL_2Y_ID},
         {"3x", OPTION_VAL_3X_ID},
         {"3y", OPTION_VAL_3Y_ID},
         {NULL, NULL},
      },
      "2y"
   },
   {
      "dice_manymouse_paddle3",
      DICE_MANYMOUSE_PADDLE3_LABEL_ID,
      DICE_RETROMOUSE_PADDLE3_LABEL_CAT_ID,
      DICE_MANYMOUSE_PADDLE3_INFO_0_ID,
      NULL,
      "manymouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_manymouse_paddle3_x",
      DICE_MANYMOUSE_PADDLE3_X_LABEL_ID,
      DICE_MANYMOUSE_PADDLE3_X_LABEL_CAT_ID,
      DICE_RETROMOUSE_PADDLE3_X_INFO_0_ID,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_ID},
         {"0y", OPTION_VAL_0Y_ID},
         {"1x", OPTION_VAL_1X_ID},
         {"1y", OPTION_VAL_1Y_ID},
         {"2x", OPTION_VAL_2X_ID},
         {"2y", OPTION_VAL_2Y_ID},
         {"3x", OPTION_VAL_3X_ID},
         {"3y", OPTION_VAL_3Y_ID},
         {NULL, NULL},
      },
      "3x"
   },
   {
      "dice_manymouse_paddle3_y",
      DICE_MANYMOUSE_PADDLE3_Y_LABEL_ID,
      DICE_MANYMOUSE_PADDLE3_Y_LABEL_CAT_ID,
      DICE_RETROMOUSE_PADDLE3_Y_INFO_0_ID,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_ID},
         {"0y", OPTION_VAL_0Y_ID},
         {"1x", OPTION_VAL_1X_ID},
         {"1y", OPTION_VAL_1Y_ID},
         {"2x", OPTION_VAL_2X_ID},
         {"2y", OPTION_VAL_2Y_ID},
         {"3x", OPTION_VAL_3X_ID},
         {"3y", OPTION_VAL_3Y_ID},
         {NULL, NULL},
      },
      "3y"
   },
#endif

   {
      "dice_dipswitch_1",
      DICE_DIPSWITCH_1_LABEL_ID,
      DICE_DIPSWITCH_1_LABEL_CAT_ID,
      DICE_DIPSWITCH_1_INFO_0_ID,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_ID},
         {"0", NULL},
         {"1", NULL},
         {NULL, NULL},
      },
      "-1"
   },
   {
      "dice_dipswitch_2",
      DICE_DIPSWITCH_2_LABEL_ID,
      DICE_DIPSWITCH_2_LABEL_CAT_ID,
      DICE_DIPSWITCH_2_INFO_0_ID,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_ID},
         {"0", NULL},
         {"1", NULL},
         {NULL, NULL},
      },
      "-1"
   },
   {
      "dice_dipswitch_3",
      DICE_DIPSWITCH_3_LABEL_ID,
      DICE_DIPSWITCH_3_LABEL_CAT_ID,
      DICE_DIPSWITCH_3_INFO_0_ID,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_ID},
         {"0", NULL},
         {"1", NULL},
         {NULL, NULL},
      },
      "-1"
   },
   {
      "dice_dipswitch16_1",
      DICE_DIPSWITCH16_1_LABEL_ID,
      DICE_DIPSWITCH16_1_LABEL_CAT_ID,
      DICE_DIPSWITCH16_1_INFO_0_ID,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_ID},
         {"0", NULL},
         {"1", NULL},
         {"2", NULL},
         {"3", NULL},
         {"4", NULL},
         {"5", NULL},
         {"6", NULL},
         {"7", NULL},
         {"8", NULL},
         {"9", NULL},
         {"10", NULL},
         {"11", NULL},
         {"12", NULL},
         {"13", NULL},
         {"14", NULL},
         {"15", NULL},
         {NULL, NULL},
      },
      "-1"
   },
   {
      "dice_dipswitch16_2",
      DICE_DIPSWITCH16_2_LABEL_ID,
      DICE_DIPSWITCH16_2_LABEL_CAT_ID,
      DICE_DIPSWITCH16_2_INFO_0_ID,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_ID},
         {"0", NULL},
         {"1", NULL},
         {"2", NULL},
         {"3", NULL},
         {"4", NULL},
         {"5", NULL},
         {"6", NULL},
         {"7", NULL},
         {"8", NULL},
         {"9", NULL},
         {"10", NULL},
         {"11", NULL},
         {"12", NULL},
         {"13", NULL},
         {"14", NULL},
         {"15", NULL},
         {NULL, NULL},
      },
      "-1"
   },

   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_id = {
   option_cats_id,
   option_defs_id
};

/* RETRO_LANGUAGE_IT */

#define CATEGORY_INPUT_LABEL_IT NULL
#define CATEGORY_INPUT_INFO_0_IT "Configura le impostazioni di input per core."
#define CATEGORY_RETROMOUSE_LABEL_IT NULL
#define CATEGORY_RETROMOUSE_INFO_0_IT "Configura le impostazioni di libretro multiple-mouse."
#define CATEGORY_MANYMOUSE_LABEL_IT NULL
#define CATEGORY_MANYMOUSE_INFO_0_IT "Configura le impostazioni di ManyMouse multiple-mouse."
#define CATEGORY_DIPSWITCH_LABEL_IT "Interruttore DIP"
#define CATEGORY_DIPSWITCH_INFO_0_IT "Configura le impostazioni del DIP e del potenziometro."
#define DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_LABEL_IT "Ingresso > Usa Il Puntatore Del Mouse Per La Racchetta 1"
#define DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_LABEL_CAT_IT "Usa Il Puntatore Del Mouse Per La Racchetta 1"
#define DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_INFO_0_IT "Utilizzare il puntatore del mouse di sistema come regolatore di paddle 1. Non consente di scegliere un mouse specifico se si dispone di parecchi puntatori."
#define DICE_PADDLE_JOYSTICK_ABSOLUTE_LABEL_IT "Ingresso > Paddle Joystick Usa Il Movimento Assoluto"
#define DICE_PADDLE_JOYSTICK_ABSOLUTE_LABEL_CAT_IT "Joystick Per la Racchetta Usa Il Movimento Assoluto"
#define DICE_PADDLE_JOYSTICK_ABSOLUTE_INFO_0_IT "Mappare direttamente la gamma di movimento del joystick per la gamma di paddle, piuttosto che i movimenti relativi."
#define DICE_PADDLE_KEYBOARD_SENSITIVITY_LABEL_IT "Input > Sensibilità D-Pad Racchetta"
#define DICE_PADDLE_KEYBOARD_SENSITIVITY_LABEL_CAT_IT "Sensibilità D-pad Della Racchetta"
#define DICE_PADDLE_KEYBOARD_SENSITIVITY_INFO_0_IT "Sensibilità quando si utilizza D-pad per una racchetta."
#define DICE_PADDLE_JOYSTICK_SENSITIVITY_LABEL_IT "Input > Sensibilità dello stick analogico Paddle"
#define DICE_PADDLE_JOYSTICK_SENSITIVITY_LABEL_CAT_IT "Sensibilità dello stick analogico Paddle"
#define DICE_PADDLE_JOYSTICK_SENSITIVITY_INFO_0_IT "Sensibilità nell'uso dello stick analogico per il paddle."
#define DICE_RETROMOUSE_PADDLE_SENSITIVITY_LABEL_IT "Input > Sensibilità del RetroMouse per il Paddle"
#define DICE_RETROMOUSE_PADDLE_SENSITIVITY_LABEL_CAT_IT "Sensibilità del RetroMouse per il Paddle"
#define DICE_RETROMOUSE_PADDLE_SENSITIVITY_INFO_0_IT "Sensibilità quando si utilizza RetroMouse per il paddle."
#define DICE_WHEEL_KEYJOY_SENSITIVITY_LABEL_IT "Ingresso > Sensibilità Sterzo"
#define DICE_WHEEL_KEYJOY_SENSITIVITY_LABEL_CAT_IT "Sensibilità Sterzo"
#define DICE_WHEEL_KEYJOY_SENSITIVITY_INFO_0_IT "Sensibilità quando si utilizza D-pad o stick analogico per una ruota."
#define DICE_THROTTLE_KEYJOY_SENSITIVITY_LABEL_IT "Input > Sensibilità Dell'acceletatore"
#define DICE_THROTTLE_KEYJOY_SENSITIVITY_LABEL_CAT_IT "Sensibilità Acceleratore"
#define DICE_THROTTLE_KEYJOY_SENSITIVITY_INFO_0_IT "Sensibilità nell’uso del D-pad o dello stick analogico per l'acceleratore."
#define DICE_RETROMOUSE_PADDLE0_LABEL_IT "RetroMouse > usa il mouse per il paddle 1"
#define DICE_RETROMOUSE_PADDLE0_LABEL_CAT_IT "Usa il mouse per il paddle 1"
#define DICE_RETROMOUSE_PADDLE0_INFO_0_IT "Usa un mouse specifico per paddle 1, scelto dall'indice del mouse della porta 1."
#define DICE_RETROMOUSE_PADDLE1_LABEL_IT "RetroMouse > usa il mouse per il paddle 2"
#define DICE_RETROMOUSE_PADDLE1_LABEL_CAT_IT "Usa il mouse per il paddle 2"
#define DICE_RETROMOUSE_PADDLE1_INFO_0_IT "Usa un mouse specifico per il paddle 2, scelto dall'indice del mouse della porta 2."
#define DICE_RETROMOUSE_PADDLE2_LABEL_IT "RetroMouse > usa il mouse per il paddle 3"
#define DICE_RETROMOUSE_PADDLE2_LABEL_CAT_IT "Usa il mouse per il paddle 3"
#define DICE_RETROMOUSE_PADDLE2_INFO_0_IT "Usa un mouse specifico per il paddle 3, scelto dall'indice del mouse della porta 3."
#define DICE_RETROMOUSE_PADDLE3_LABEL_IT "RetroMouse > usa il mouse per il paddle 4"
#define DICE_RETROMOUSE_PADDLE3_LABEL_CAT_IT "Usa il Mouse Per La Racchetta 4"
#define DICE_RETROMOUSE_PADDLE3_INFO_0_IT "Usa un mouse specifico per il paddle 4, scelto dall'indice del mouse della porta 4."
#define DICE_RETROMOUSE_PADDLE0_X_LABEL_IT "RetroMouse > Asse del mouse per il paddle 1 orizzontale"
#define DICE_RETROMOUSE_PADDLE0_X_LABEL_CAT_IT "Asse del mouse per il paddle 1 orizzontale"
#define DICE_RETROMOUSE_PADDLE0_X_INFO_0_IT "Asse del mouse per il giocatore 1, movimento orizzontale dello schermo."
#define OPTION_VAL_X_IT NULL
#define OPTION_VAL_Y_IT NULL
#define DICE_RETROMOUSE_PADDLE0_Y_LABEL_IT "RetroMouse > Asse del mouse per il paddle 1 verticale"
#define DICE_RETROMOUSE_PADDLE0_Y_LABEL_CAT_IT "Asse del mouse per il paddle 1 verticale"
#define DICE_RETROMOUSE_PADDLE0_Y_INFO_0_IT "Asse del mouse per il giocatore 1, movimento verticale dello schermo."
#define DICE_RETROMOUSE_PADDLE1_X_LABEL_IT "RetroMouse > Asse del mouse per il paddle 2 orizzontale"
#define DICE_RETROMOUSE_PADDLE1_X_LABEL_CAT_IT "Asse del mouse per il paddle 2 orizzontale"
#define DICE_RETROMOUSE_PADDLE1_X_INFO_0_IT "Asse del mouse per il giocatore 2, movimento orizzontale dello schermo."
#define DICE_RETROMOUSE_PADDLE1_Y_LABEL_IT "RetroMouse > Asse del mouse per il paddle 2 verticale"
#define DICE_RETROMOUSE_PADDLE1_Y_LABEL_CAT_IT "Asse del mouse per il paddle 2 verticale"
#define DICE_RETROMOUSE_PADDLE1_Y_INFO_0_IT "Asse del mouse per il giocatore 2, movimento verticale dello schermo."
#define DICE_RETROMOUSE_PADDLE2_X_LABEL_IT "RetroMouse > Asse del mouse per il paddle 3 orizzontale"
#define DICE_RETROMOUSE_PADDLE2_X_LABEL_CAT_IT "Asse del mouse per il paddle 3 orizzontale"
#define DICE_RETROMOUSE_PADDLE2_X_INFO_0_IT "Asse del mouse per il giocatore 3, movimento orizzontale dello schermo."
#define DICE_RETROMOUSE_PADDLE2_Y_LABEL_IT "RetroMouse > Asse del mouse per il paddle 3 verticale"
#define DICE_RETROMOUSE_PADDLE2_Y_LABEL_CAT_IT "Asse del mouse per il paddle 3 verticale"
#define DICE_RETROMOUSE_PADDLE2_Y_INFO_0_IT "Asse del mouse per il giocatore 3, movimento verticale dello schermo."
#define DICE_RETROMOUSE_PADDLE3_X_LABEL_IT "RetroMouse > Asse del mouse per il paddle 4 orizzontale"
#define DICE_RETROMOUSE_PADDLE3_X_LABEL_CAT_IT "Asse del mouse per il paddle 4 orizzontale"
#define DICE_RETROMOUSE_PADDLE3_X_INFO_0_IT "Asse del mouse per il giocatore 4, movimento orizzontale dello schermo."
#define DICE_RETROMOUSE_PADDLE3_Y_LABEL_IT "RetroMouse > Asse del mouse per il paddle 4 verticale"
#define DICE_RETROMOUSE_PADDLE3_Y_LABEL_CAT_IT "Asse del mouse per il paddle 4 verticale"
#define DICE_RETROMOUSE_PADDLE3_Y_INFO_0_IT "Asse del mouse per il giocatore 4, movimento verticale dello schermo."
#define DICE_MANYMOUSE_PADDLE0_LABEL_IT "RetroMouse > usa il mouse per il paddle 1"
#define DICE_MANYMOUSE_PADDLE0_INFO_0_IT "Usa un mouse per il paddle 1."
#define DICE_MANYMOUSE_PADDLE0_X_LABEL_IT NULL
#define DICE_MANYMOUSE_PADDLE0_X_LABEL_CAT_IT NULL
#define OPTION_VAL_0X_IT NULL
#define OPTION_VAL_0Y_IT NULL
#define OPTION_VAL_1X_IT NULL
#define OPTION_VAL_1Y_IT NULL
#define OPTION_VAL_2X_IT NULL
#define OPTION_VAL_2Y_IT NULL
#define OPTION_VAL_3X_IT NULL
#define OPTION_VAL_3Y_IT NULL
#define DICE_MANYMOUSE_PADDLE0_Y_LABEL_IT NULL
#define DICE_MANYMOUSE_PADDLE0_Y_LABEL_CAT_IT NULL
#define DICE_MANYMOUSE_PADDLE1_LABEL_IT "ManyMouse > usa il mouse per il paddle 2"
#define DICE_MANYMOUSE_PADDLE1_INFO_0_IT "Usa un mouse per il paddle 2."
#define DICE_MANYMOUSE_PADDLE1_X_LABEL_IT NULL
#define DICE_MANYMOUSE_PADDLE1_X_LABEL_CAT_IT NULL
#define DICE_MANYMOUSE_PADDLE1_Y_LABEL_IT NULL
#define DICE_MANYMOUSE_PADDLE1_Y_LABEL_CAT_IT NULL
#define DICE_MANYMOUSE_PADDLE2_LABEL_IT "ManyMouse > usa il mouse per il paddle 3"
#define DICE_MANYMOUSE_PADDLE2_INFO_0_IT "Usa un mouse per il paddle 3."
#define DICE_MANYMOUSE_PADDLE2_X_LABEL_IT NULL
#define DICE_MANYMOUSE_PADDLE2_X_LABEL_CAT_IT NULL
#define DICE_MANYMOUSE_PADDLE2_Y_LABEL_IT NULL
#define DICE_MANYMOUSE_PADDLE2_Y_LABEL_CAT_IT NULL
#define DICE_MANYMOUSE_PADDLE3_LABEL_IT "RetroMouse > usa il mouse per il paddle 4"
#define DICE_MANYMOUSE_PADDLE3_INFO_0_IT "Usa un mouse per il paddle 4."
#define DICE_MANYMOUSE_PADDLE3_X_LABEL_IT NULL
#define DICE_MANYMOUSE_PADDLE3_X_LABEL_CAT_IT NULL
#define DICE_MANYMOUSE_PADDLE3_Y_LABEL_IT NULL
#define DICE_MANYMOUSE_PADDLE3_Y_LABEL_CAT_IT NULL
#define DICE_DIPSWITCH_1_LABEL_IT "Interruttore DIP > Interruttore DIP 1"
#define DICE_DIPSWITCH_1_LABEL_CAT_IT "Interruttore DIP 1"
#define DICE_DIPSWITCH_1_INFO_0_IT "Impostazione dell'interruttore DIP 1."
#define OPTION_VAL_1_IT "predefinito"
#define DICE_DIPSWITCH_2_LABEL_IT "Interruttore DIP > Interruttore DIP 2"
#define DICE_DIPSWITCH_2_LABEL_CAT_IT "Interruttore DIP 2"
#define DICE_DIPSWITCH_2_INFO_0_IT "Impostazione dell'interruttore DIP 2."
#define DICE_DIPSWITCH_3_LABEL_IT "Interruttore DIP > Interruttore DIP 3"
#define DICE_DIPSWITCH_3_LABEL_CAT_IT "Interruttore DIP 3"
#define DICE_DIPSWITCH_3_INFO_0_IT "Impostazione dell'interruttore DIP 3."
#define DICE_DIPSWITCH16_1_LABEL_IT "Interruttore DIP > Interruttore DIP hex 1"
#define DICE_DIPSWITCH16_1_LABEL_CAT_IT "Interruttore DIP hex 1"
#define DICE_DIPSWITCH16_1_INFO_0_IT "Impostazione per interruttore DIP a 16 posizioni numero 1."
#define DICE_DIPSWITCH16_2_LABEL_IT "Interruttore DIP > Interruttore DIP hex 2"
#define DICE_DIPSWITCH16_2_LABEL_CAT_IT "Interruttore DIP hex 2"
#define DICE_DIPSWITCH16_2_INFO_0_IT "Impostazione per interruttore DIP a 16 posizioni numero 2."

struct retro_core_option_v2_category option_cats_it[] = {
   {
      "input",
      CATEGORY_INPUT_LABEL_IT,
      CATEGORY_INPUT_INFO_0_IT
   },
   {
      "retromouse",
      CATEGORY_RETROMOUSE_LABEL_IT,
      CATEGORY_RETROMOUSE_INFO_0_IT
   },
#ifdef MANYMOUSE
   {
      "manymouse",
      CATEGORY_MANYMOUSE_LABEL_IT,
      CATEGORY_MANYMOUSE_INFO_0_IT
   },
#endif
   {
      "dipswitch",
      CATEGORY_DIPSWITCH_LABEL_IT,
      CATEGORY_DIPSWITCH_INFO_0_IT
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_it[] = {
   {
      "dice_use_mouse_pointer_for_paddle_1",
      DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_LABEL_IT,
      DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_LABEL_CAT_IT,
      DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_INFO_0_IT,
      NULL,
      "input",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_paddle_joystick_absolute",
      DICE_PADDLE_JOYSTICK_ABSOLUTE_LABEL_IT,
      DICE_PADDLE_JOYSTICK_ABSOLUTE_LABEL_CAT_IT,
      DICE_PADDLE_JOYSTICK_ABSOLUTE_INFO_0_IT,
      NULL,
      "input",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      // D-pad but not necessarily keyboard under libretro,
      // that name comes from the upstream code.
      "dice_paddle_keyboard_sensitivity",
      DICE_PADDLE_KEYBOARD_SENSITIVITY_LABEL_IT,
      DICE_PADDLE_KEYBOARD_SENSITIVITY_LABEL_CAT_IT,
      DICE_PADDLE_KEYBOARD_SENSITIVITY_INFO_0_IT,
      NULL,
      "input",
      {
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "250"
   },
   {
      "dice_paddle_joystick_sensitivity",
      DICE_PADDLE_JOYSTICK_SENSITIVITY_LABEL_IT,
      DICE_PADDLE_JOYSTICK_SENSITIVITY_LABEL_CAT_IT,
      DICE_PADDLE_JOYSTICK_SENSITIVITY_INFO_0_IT,
      NULL,
      "input",
      {
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "500"
   },
   {
      "dice_retromouse_paddle_sensitivity",
      DICE_RETROMOUSE_PADDLE_SENSITIVITY_LABEL_IT,
      DICE_RETROMOUSE_PADDLE_SENSITIVITY_LABEL_CAT_IT,
      DICE_RETROMOUSE_PADDLE_SENSITIVITY_INFO_0_IT,
      NULL,
      "input",
      {
         {"25", NULL},
         {"50", NULL},
         {"75", NULL},
         {"100", NULL},
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "125"
   },
   {
      "dice_wheel_keyjoy_sensitivity",
      DICE_WHEEL_KEYJOY_SENSITIVITY_LABEL_IT,
      DICE_WHEEL_KEYJOY_SENSITIVITY_LABEL_CAT_IT,
      DICE_WHEEL_KEYJOY_SENSITIVITY_INFO_0_IT,
      NULL,
      "input",
      {
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "500"
   },
   {
      "dice_throttle_keyjoy_sensitivity",
      DICE_THROTTLE_KEYJOY_SENSITIVITY_LABEL_IT,
      DICE_THROTTLE_KEYJOY_SENSITIVITY_LABEL_CAT_IT,
      DICE_THROTTLE_KEYJOY_SENSITIVITY_INFO_0_IT,
      NULL,
      "input",
      {
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "250"
   },

   {
      "dice_retromouse_paddle0",
      DICE_RETROMOUSE_PADDLE0_LABEL_IT,
      DICE_RETROMOUSE_PADDLE0_LABEL_CAT_IT,
      DICE_RETROMOUSE_PADDLE0_INFO_0_IT,
      NULL,
      "retromouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_retromouse_paddle1",
      DICE_RETROMOUSE_PADDLE1_LABEL_IT,
      DICE_RETROMOUSE_PADDLE1_LABEL_CAT_IT,
      DICE_RETROMOUSE_PADDLE1_INFO_0_IT,
      NULL,
      "retromouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_retromouse_paddle2",
      DICE_RETROMOUSE_PADDLE2_LABEL_IT,
      DICE_RETROMOUSE_PADDLE2_LABEL_CAT_IT,
      DICE_RETROMOUSE_PADDLE2_INFO_0_IT,
      NULL,
      "retromouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_retromouse_paddle3",
      DICE_RETROMOUSE_PADDLE3_LABEL_IT,
      DICE_RETROMOUSE_PADDLE3_LABEL_CAT_IT,
      DICE_RETROMOUSE_PADDLE3_INFO_0_IT,
      NULL,
      "retromouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_retromouse_paddle0_x",
      DICE_RETROMOUSE_PADDLE0_X_LABEL_IT,
      DICE_RETROMOUSE_PADDLE0_X_LABEL_CAT_IT,
      DICE_RETROMOUSE_PADDLE0_X_INFO_0_IT,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_IT},
         {"y", OPTION_VAL_Y_IT},
         {NULL, NULL},
      },
      "x"
   },
   {
      "dice_retromouse_paddle0_y",
      DICE_RETROMOUSE_PADDLE0_Y_LABEL_IT,
      DICE_RETROMOUSE_PADDLE0_Y_LABEL_CAT_IT,
      DICE_RETROMOUSE_PADDLE0_Y_INFO_0_IT,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_IT},
         {"y", OPTION_VAL_Y_IT},
         {NULL, NULL},
      },
      "y"
   },
   {
      "dice_retromouse_paddle1_x",
      DICE_RETROMOUSE_PADDLE1_X_LABEL_IT,
      DICE_RETROMOUSE_PADDLE1_X_LABEL_CAT_IT,
      DICE_RETROMOUSE_PADDLE1_X_INFO_0_IT,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_IT},
         {"y", OPTION_VAL_Y_IT},
         {NULL, NULL},
      },
      "x"
   },
   {
      "dice_retromouse_paddle1_y",
      DICE_RETROMOUSE_PADDLE1_Y_LABEL_IT,
      DICE_RETROMOUSE_PADDLE1_Y_LABEL_CAT_IT,
      DICE_RETROMOUSE_PADDLE1_Y_INFO_0_IT,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_IT},
         {"y", OPTION_VAL_Y_IT},
         {NULL, NULL},
      },
      "y"
   },
   {
      "dice_retromouse_paddle2_x",
      DICE_RETROMOUSE_PADDLE2_X_LABEL_IT,
      DICE_RETROMOUSE_PADDLE2_X_LABEL_CAT_IT,
      DICE_RETROMOUSE_PADDLE2_X_INFO_0_IT,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_IT},
         {"y", OPTION_VAL_Y_IT},
         {NULL, NULL},
      },
      "x"
   },
   {
      "dice_retromouse_paddle2_y",
      DICE_RETROMOUSE_PADDLE2_Y_LABEL_IT,
      DICE_RETROMOUSE_PADDLE2_Y_LABEL_CAT_IT,
      DICE_RETROMOUSE_PADDLE2_Y_INFO_0_IT,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_IT},
         {"y", OPTION_VAL_Y_IT},
         {NULL, NULL},
      },
      "y"
   },
   {
      "dice_retromouse_paddle3_x",
      DICE_RETROMOUSE_PADDLE3_X_LABEL_IT,
      DICE_RETROMOUSE_PADDLE3_X_LABEL_CAT_IT,
      DICE_RETROMOUSE_PADDLE3_X_INFO_0_IT,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_IT},
         {"y", OPTION_VAL_Y_IT},
         {NULL, NULL},
      },
      "x"
   },
   {
      "dice_retromouse_paddle3_y",
      DICE_RETROMOUSE_PADDLE3_Y_LABEL_IT,
      DICE_RETROMOUSE_PADDLE3_Y_LABEL_CAT_IT,
      DICE_RETROMOUSE_PADDLE3_Y_INFO_0_IT,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_IT},
         {"y", OPTION_VAL_Y_IT},
         {NULL, NULL},
      },
      "y"
   },

#ifdef MANYMOUSE
   {
      "dice_manymouse_paddle0",
      DICE_MANYMOUSE_PADDLE0_LABEL_IT,
      DICE_RETROMOUSE_PADDLE0_LABEL_CAT_IT,
      DICE_MANYMOUSE_PADDLE0_INFO_0_IT,
      NULL,
      "manymouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_manymouse_paddle0_x",
      DICE_MANYMOUSE_PADDLE0_X_LABEL_IT,
      DICE_MANYMOUSE_PADDLE0_X_LABEL_CAT_IT,
      DICE_RETROMOUSE_PADDLE0_X_INFO_0_IT,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_IT},
         {"0y", OPTION_VAL_0Y_IT},
         {"1x", OPTION_VAL_1X_IT},
         {"1y", OPTION_VAL_1Y_IT},
         {"2x", OPTION_VAL_2X_IT},
         {"2y", OPTION_VAL_2Y_IT},
         {"3x", OPTION_VAL_3X_IT},
         {"3y", OPTION_VAL_3Y_IT},
         {NULL, NULL},
      },
      "0x"
   },
   {
      "dice_manymouse_paddle0_y",
      DICE_MANYMOUSE_PADDLE0_Y_LABEL_IT,
      DICE_MANYMOUSE_PADDLE0_Y_LABEL_CAT_IT,
      DICE_RETROMOUSE_PADDLE0_Y_INFO_0_IT,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_IT},
         {"0y", OPTION_VAL_0Y_IT},
         {"1x", OPTION_VAL_1X_IT},
         {"1y", OPTION_VAL_1Y_IT},
         {"2x", OPTION_VAL_2X_IT},
         {"2y", OPTION_VAL_2Y_IT},
         {"3x", OPTION_VAL_3X_IT},
         {"3y", OPTION_VAL_3Y_IT},
         {NULL, NULL},
      },
      "0y"
   },
   {
      "dice_manymouse_paddle1",
      DICE_MANYMOUSE_PADDLE1_LABEL_IT,
      DICE_RETROMOUSE_PADDLE1_LABEL_CAT_IT,
      DICE_MANYMOUSE_PADDLE1_INFO_0_IT,
      NULL,
      "manymouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_manymouse_paddle1_x",
      DICE_MANYMOUSE_PADDLE1_X_LABEL_IT,
      DICE_MANYMOUSE_PADDLE1_X_LABEL_CAT_IT,
      DICE_RETROMOUSE_PADDLE1_X_INFO_0_IT,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_IT},
         {"0y", OPTION_VAL_0Y_IT},
         {"1x", OPTION_VAL_1X_IT},
         {"1y", OPTION_VAL_1Y_IT},
         {"2x", OPTION_VAL_2X_IT},
         {"2y", OPTION_VAL_2Y_IT},
         {"3x", OPTION_VAL_3X_IT},
         {"3y", OPTION_VAL_3Y_IT},
         {NULL, NULL},
      },
      "1x"
   },
   {
      "dice_manymouse_paddle1_y",
      DICE_MANYMOUSE_PADDLE1_Y_LABEL_IT,
      DICE_MANYMOUSE_PADDLE1_Y_LABEL_CAT_IT,
      DICE_RETROMOUSE_PADDLE1_Y_INFO_0_IT,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_IT},
         {"0y", OPTION_VAL_0Y_IT},
         {"1x", OPTION_VAL_1X_IT},
         {"1y", OPTION_VAL_1Y_IT},
         {"2x", OPTION_VAL_2X_IT},
         {"2y", OPTION_VAL_2Y_IT},
         {"3x", OPTION_VAL_3X_IT},
         {"3y", OPTION_VAL_3Y_IT},
         {NULL, NULL},
      },
      "1y"
   },
   {
      "dice_manymouse_paddle2",
      DICE_MANYMOUSE_PADDLE2_LABEL_IT,
      DICE_RETROMOUSE_PADDLE2_LABEL_CAT_IT,
      DICE_MANYMOUSE_PADDLE2_INFO_0_IT,
      NULL,
      "manymouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_manymouse_paddle2_x",
      DICE_MANYMOUSE_PADDLE2_X_LABEL_IT,
      DICE_MANYMOUSE_PADDLE2_X_LABEL_CAT_IT,
      DICE_RETROMOUSE_PADDLE2_X_INFO_0_IT,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_IT},
         {"0y", OPTION_VAL_0Y_IT},
         {"1x", OPTION_VAL_1X_IT},
         {"1y", OPTION_VAL_1Y_IT},
         {"2x", OPTION_VAL_2X_IT},
         {"2y", OPTION_VAL_2Y_IT},
         {"3x", OPTION_VAL_3X_IT},
         {"3y", OPTION_VAL_3Y_IT},
         {NULL, NULL},
      },
      "2x"
   },
   {
      "dice_manymouse_paddle2_y",
      DICE_MANYMOUSE_PADDLE2_Y_LABEL_IT,
      DICE_MANYMOUSE_PADDLE2_Y_LABEL_CAT_IT,
      DICE_RETROMOUSE_PADDLE2_Y_INFO_0_IT,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_IT},
         {"0y", OPTION_VAL_0Y_IT},
         {"1x", OPTION_VAL_1X_IT},
         {"1y", OPTION_VAL_1Y_IT},
         {"2x", OPTION_VAL_2X_IT},
         {"2y", OPTION_VAL_2Y_IT},
         {"3x", OPTION_VAL_3X_IT},
         {"3y", OPTION_VAL_3Y_IT},
         {NULL, NULL},
      },
      "2y"
   },
   {
      "dice_manymouse_paddle3",
      DICE_MANYMOUSE_PADDLE3_LABEL_IT,
      DICE_RETROMOUSE_PADDLE3_LABEL_CAT_IT,
      DICE_MANYMOUSE_PADDLE3_INFO_0_IT,
      NULL,
      "manymouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_manymouse_paddle3_x",
      DICE_MANYMOUSE_PADDLE3_X_LABEL_IT,
      DICE_MANYMOUSE_PADDLE3_X_LABEL_CAT_IT,
      DICE_RETROMOUSE_PADDLE3_X_INFO_0_IT,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_IT},
         {"0y", OPTION_VAL_0Y_IT},
         {"1x", OPTION_VAL_1X_IT},
         {"1y", OPTION_VAL_1Y_IT},
         {"2x", OPTION_VAL_2X_IT},
         {"2y", OPTION_VAL_2Y_IT},
         {"3x", OPTION_VAL_3X_IT},
         {"3y", OPTION_VAL_3Y_IT},
         {NULL, NULL},
      },
      "3x"
   },
   {
      "dice_manymouse_paddle3_y",
      DICE_MANYMOUSE_PADDLE3_Y_LABEL_IT,
      DICE_MANYMOUSE_PADDLE3_Y_LABEL_CAT_IT,
      DICE_RETROMOUSE_PADDLE3_Y_INFO_0_IT,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_IT},
         {"0y", OPTION_VAL_0Y_IT},
         {"1x", OPTION_VAL_1X_IT},
         {"1y", OPTION_VAL_1Y_IT},
         {"2x", OPTION_VAL_2X_IT},
         {"2y", OPTION_VAL_2Y_IT},
         {"3x", OPTION_VAL_3X_IT},
         {"3y", OPTION_VAL_3Y_IT},
         {NULL, NULL},
      },
      "3y"
   },
#endif

   {
      "dice_dipswitch_1",
      DICE_DIPSWITCH_1_LABEL_IT,
      DICE_DIPSWITCH_1_LABEL_CAT_IT,
      DICE_DIPSWITCH_1_INFO_0_IT,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_IT},
         {"0", NULL},
         {"1", NULL},
         {NULL, NULL},
      },
      "-1"
   },
   {
      "dice_dipswitch_2",
      DICE_DIPSWITCH_2_LABEL_IT,
      DICE_DIPSWITCH_2_LABEL_CAT_IT,
      DICE_DIPSWITCH_2_INFO_0_IT,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_IT},
         {"0", NULL},
         {"1", NULL},
         {NULL, NULL},
      },
      "-1"
   },
   {
      "dice_dipswitch_3",
      DICE_DIPSWITCH_3_LABEL_IT,
      DICE_DIPSWITCH_3_LABEL_CAT_IT,
      DICE_DIPSWITCH_3_INFO_0_IT,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_IT},
         {"0", NULL},
         {"1", NULL},
         {NULL, NULL},
      },
      "-1"
   },
   {
      "dice_dipswitch16_1",
      DICE_DIPSWITCH16_1_LABEL_IT,
      DICE_DIPSWITCH16_1_LABEL_CAT_IT,
      DICE_DIPSWITCH16_1_INFO_0_IT,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_IT},
         {"0", NULL},
         {"1", NULL},
         {"2", NULL},
         {"3", NULL},
         {"4", NULL},
         {"5", NULL},
         {"6", NULL},
         {"7", NULL},
         {"8", NULL},
         {"9", NULL},
         {"10", NULL},
         {"11", NULL},
         {"12", NULL},
         {"13", NULL},
         {"14", NULL},
         {"15", NULL},
         {NULL, NULL},
      },
      "-1"
   },
   {
      "dice_dipswitch16_2",
      DICE_DIPSWITCH16_2_LABEL_IT,
      DICE_DIPSWITCH16_2_LABEL_CAT_IT,
      DICE_DIPSWITCH16_2_INFO_0_IT,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_IT},
         {"0", NULL},
         {"1", NULL},
         {"2", NULL},
         {"3", NULL},
         {"4", NULL},
         {"5", NULL},
         {"6", NULL},
         {"7", NULL},
         {"8", NULL},
         {"9", NULL},
         {"10", NULL},
         {"11", NULL},
         {"12", NULL},
         {"13", NULL},
         {"14", NULL},
         {"15", NULL},
         {NULL, NULL},
      },
      "-1"
   },

   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_it = {
   option_cats_it,
   option_defs_it
};

/* RETRO_LANGUAGE_JA */

#define CATEGORY_INPUT_LABEL_JA "入力"
#define CATEGORY_INPUT_INFO_0_JA NULL
#define CATEGORY_RETROMOUSE_LABEL_JA NULL
#define CATEGORY_RETROMOUSE_INFO_0_JA NULL
#define CATEGORY_MANYMOUSE_LABEL_JA NULL
#define CATEGORY_MANYMOUSE_INFO_0_JA NULL
#define CATEGORY_DIPSWITCH_LABEL_JA NULL
#define CATEGORY_DIPSWITCH_INFO_0_JA NULL
#define DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_LABEL_JA NULL
#define DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_LABEL_CAT_JA NULL
#define DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_INFO_0_JA NULL
#define DICE_PADDLE_JOYSTICK_ABSOLUTE_LABEL_JA NULL
#define DICE_PADDLE_JOYSTICK_ABSOLUTE_LABEL_CAT_JA NULL
#define DICE_PADDLE_JOYSTICK_ABSOLUTE_INFO_0_JA NULL
#define DICE_PADDLE_KEYBOARD_SENSITIVITY_LABEL_JA NULL
#define DICE_PADDLE_KEYBOARD_SENSITIVITY_LABEL_CAT_JA NULL
#define DICE_PADDLE_KEYBOARD_SENSITIVITY_INFO_0_JA NULL
#define DICE_PADDLE_JOYSTICK_SENSITIVITY_LABEL_JA NULL
#define DICE_PADDLE_JOYSTICK_SENSITIVITY_LABEL_CAT_JA NULL
#define DICE_PADDLE_JOYSTICK_SENSITIVITY_INFO_0_JA NULL
#define DICE_RETROMOUSE_PADDLE_SENSITIVITY_LABEL_JA NULL
#define DICE_RETROMOUSE_PADDLE_SENSITIVITY_LABEL_CAT_JA NULL
#define DICE_RETROMOUSE_PADDLE_SENSITIVITY_INFO_0_JA NULL
#define DICE_WHEEL_KEYJOY_SENSITIVITY_LABEL_JA NULL
#define DICE_WHEEL_KEYJOY_SENSITIVITY_LABEL_CAT_JA NULL
#define DICE_WHEEL_KEYJOY_SENSITIVITY_INFO_0_JA NULL
#define DICE_THROTTLE_KEYJOY_SENSITIVITY_LABEL_JA NULL
#define DICE_THROTTLE_KEYJOY_SENSITIVITY_LABEL_CAT_JA NULL
#define DICE_THROTTLE_KEYJOY_SENSITIVITY_INFO_0_JA NULL
#define DICE_RETROMOUSE_PADDLE0_LABEL_JA NULL
#define DICE_RETROMOUSE_PADDLE0_LABEL_CAT_JA NULL
#define DICE_RETROMOUSE_PADDLE0_INFO_0_JA NULL
#define DICE_RETROMOUSE_PADDLE1_LABEL_JA NULL
#define DICE_RETROMOUSE_PADDLE1_LABEL_CAT_JA NULL
#define DICE_RETROMOUSE_PADDLE1_INFO_0_JA NULL
#define DICE_RETROMOUSE_PADDLE2_LABEL_JA NULL
#define DICE_RETROMOUSE_PADDLE2_LABEL_CAT_JA NULL
#define DICE_RETROMOUSE_PADDLE2_INFO_0_JA NULL
#define DICE_RETROMOUSE_PADDLE3_LABEL_JA NULL
#define DICE_RETROMOUSE_PADDLE3_LABEL_CAT_JA NULL
#define DICE_RETROMOUSE_PADDLE3_INFO_0_JA NULL
#define DICE_RETROMOUSE_PADDLE0_X_LABEL_JA NULL
#define DICE_RETROMOUSE_PADDLE0_X_LABEL_CAT_JA NULL
#define DICE_RETROMOUSE_PADDLE0_X_INFO_0_JA NULL
#define OPTION_VAL_X_JA NULL
#define OPTION_VAL_Y_JA NULL
#define DICE_RETROMOUSE_PADDLE0_Y_LABEL_JA NULL
#define DICE_RETROMOUSE_PADDLE0_Y_LABEL_CAT_JA NULL
#define DICE_RETROMOUSE_PADDLE0_Y_INFO_0_JA NULL
#define DICE_RETROMOUSE_PADDLE1_X_LABEL_JA NULL
#define DICE_RETROMOUSE_PADDLE1_X_LABEL_CAT_JA NULL
#define DICE_RETROMOUSE_PADDLE1_X_INFO_0_JA NULL
#define DICE_RETROMOUSE_PADDLE1_Y_LABEL_JA NULL
#define DICE_RETROMOUSE_PADDLE1_Y_LABEL_CAT_JA NULL
#define DICE_RETROMOUSE_PADDLE1_Y_INFO_0_JA NULL
#define DICE_RETROMOUSE_PADDLE2_X_LABEL_JA NULL
#define DICE_RETROMOUSE_PADDLE2_X_LABEL_CAT_JA NULL
#define DICE_RETROMOUSE_PADDLE2_X_INFO_0_JA NULL
#define DICE_RETROMOUSE_PADDLE2_Y_LABEL_JA NULL
#define DICE_RETROMOUSE_PADDLE2_Y_LABEL_CAT_JA NULL
#define DICE_RETROMOUSE_PADDLE2_Y_INFO_0_JA NULL
#define DICE_RETROMOUSE_PADDLE3_X_LABEL_JA NULL
#define DICE_RETROMOUSE_PADDLE3_X_LABEL_CAT_JA NULL
#define DICE_RETROMOUSE_PADDLE3_X_INFO_0_JA NULL
#define DICE_RETROMOUSE_PADDLE3_Y_LABEL_JA NULL
#define DICE_RETROMOUSE_PADDLE3_Y_LABEL_CAT_JA NULL
#define DICE_RETROMOUSE_PADDLE3_Y_INFO_0_JA NULL
#define DICE_MANYMOUSE_PADDLE0_LABEL_JA NULL
#define DICE_MANYMOUSE_PADDLE0_INFO_0_JA NULL
#define DICE_MANYMOUSE_PADDLE0_X_LABEL_JA NULL
#define DICE_MANYMOUSE_PADDLE0_X_LABEL_CAT_JA NULL
#define OPTION_VAL_0X_JA NULL
#define OPTION_VAL_0Y_JA NULL
#define OPTION_VAL_1X_JA NULL
#define OPTION_VAL_1Y_JA NULL
#define OPTION_VAL_2X_JA NULL
#define OPTION_VAL_2Y_JA NULL
#define OPTION_VAL_3X_JA NULL
#define OPTION_VAL_3Y_JA NULL
#define DICE_MANYMOUSE_PADDLE0_Y_LABEL_JA NULL
#define DICE_MANYMOUSE_PADDLE0_Y_LABEL_CAT_JA NULL
#define DICE_MANYMOUSE_PADDLE1_LABEL_JA NULL
#define DICE_MANYMOUSE_PADDLE1_INFO_0_JA NULL
#define DICE_MANYMOUSE_PADDLE1_X_LABEL_JA NULL
#define DICE_MANYMOUSE_PADDLE1_X_LABEL_CAT_JA NULL
#define DICE_MANYMOUSE_PADDLE1_Y_LABEL_JA NULL
#define DICE_MANYMOUSE_PADDLE1_Y_LABEL_CAT_JA NULL
#define DICE_MANYMOUSE_PADDLE2_LABEL_JA NULL
#define DICE_MANYMOUSE_PADDLE2_INFO_0_JA NULL
#define DICE_MANYMOUSE_PADDLE2_X_LABEL_JA NULL
#define DICE_MANYMOUSE_PADDLE2_X_LABEL_CAT_JA NULL
#define DICE_MANYMOUSE_PADDLE2_Y_LABEL_JA NULL
#define DICE_MANYMOUSE_PADDLE2_Y_LABEL_CAT_JA NULL
#define DICE_MANYMOUSE_PADDLE3_LABEL_JA NULL
#define DICE_MANYMOUSE_PADDLE3_INFO_0_JA NULL
#define DICE_MANYMOUSE_PADDLE3_X_LABEL_JA NULL
#define DICE_MANYMOUSE_PADDLE3_X_LABEL_CAT_JA NULL
#define DICE_MANYMOUSE_PADDLE3_Y_LABEL_JA NULL
#define DICE_MANYMOUSE_PADDLE3_Y_LABEL_CAT_JA NULL
#define DICE_DIPSWITCH_1_LABEL_JA NULL
#define DICE_DIPSWITCH_1_LABEL_CAT_JA NULL
#define DICE_DIPSWITCH_1_INFO_0_JA NULL
#define OPTION_VAL_1_JA NULL
#define DICE_DIPSWITCH_2_LABEL_JA NULL
#define DICE_DIPSWITCH_2_LABEL_CAT_JA NULL
#define DICE_DIPSWITCH_2_INFO_0_JA NULL
#define DICE_DIPSWITCH_3_LABEL_JA NULL
#define DICE_DIPSWITCH_3_LABEL_CAT_JA NULL
#define DICE_DIPSWITCH_3_INFO_0_JA NULL
#define DICE_DIPSWITCH16_1_LABEL_JA NULL
#define DICE_DIPSWITCH16_1_LABEL_CAT_JA NULL
#define DICE_DIPSWITCH16_1_INFO_0_JA NULL
#define DICE_DIPSWITCH16_2_LABEL_JA NULL
#define DICE_DIPSWITCH16_2_LABEL_CAT_JA NULL
#define DICE_DIPSWITCH16_2_INFO_0_JA NULL

struct retro_core_option_v2_category option_cats_ja[] = {
   {
      "input",
      CATEGORY_INPUT_LABEL_JA,
      CATEGORY_INPUT_INFO_0_JA
   },
   {
      "retromouse",
      CATEGORY_RETROMOUSE_LABEL_JA,
      CATEGORY_RETROMOUSE_INFO_0_JA
   },
#ifdef MANYMOUSE
   {
      "manymouse",
      CATEGORY_MANYMOUSE_LABEL_JA,
      CATEGORY_MANYMOUSE_INFO_0_JA
   },
#endif
   {
      "dipswitch",
      CATEGORY_DIPSWITCH_LABEL_JA,
      CATEGORY_DIPSWITCH_INFO_0_JA
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_ja[] = {
   {
      "dice_use_mouse_pointer_for_paddle_1",
      DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_LABEL_JA,
      DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_LABEL_CAT_JA,
      DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_INFO_0_JA,
      NULL,
      "input",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_paddle_joystick_absolute",
      DICE_PADDLE_JOYSTICK_ABSOLUTE_LABEL_JA,
      DICE_PADDLE_JOYSTICK_ABSOLUTE_LABEL_CAT_JA,
      DICE_PADDLE_JOYSTICK_ABSOLUTE_INFO_0_JA,
      NULL,
      "input",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      // D-pad but not necessarily keyboard under libretro,
      // that name comes from the upstream code.
      "dice_paddle_keyboard_sensitivity",
      DICE_PADDLE_KEYBOARD_SENSITIVITY_LABEL_JA,
      DICE_PADDLE_KEYBOARD_SENSITIVITY_LABEL_CAT_JA,
      DICE_PADDLE_KEYBOARD_SENSITIVITY_INFO_0_JA,
      NULL,
      "input",
      {
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "250"
   },
   {
      "dice_paddle_joystick_sensitivity",
      DICE_PADDLE_JOYSTICK_SENSITIVITY_LABEL_JA,
      DICE_PADDLE_JOYSTICK_SENSITIVITY_LABEL_CAT_JA,
      DICE_PADDLE_JOYSTICK_SENSITIVITY_INFO_0_JA,
      NULL,
      "input",
      {
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "500"
   },
   {
      "dice_retromouse_paddle_sensitivity",
      DICE_RETROMOUSE_PADDLE_SENSITIVITY_LABEL_JA,
      DICE_RETROMOUSE_PADDLE_SENSITIVITY_LABEL_CAT_JA,
      DICE_RETROMOUSE_PADDLE_SENSITIVITY_INFO_0_JA,
      NULL,
      "input",
      {
         {"25", NULL},
         {"50", NULL},
         {"75", NULL},
         {"100", NULL},
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "125"
   },
   {
      "dice_wheel_keyjoy_sensitivity",
      DICE_WHEEL_KEYJOY_SENSITIVITY_LABEL_JA,
      DICE_WHEEL_KEYJOY_SENSITIVITY_LABEL_CAT_JA,
      DICE_WHEEL_KEYJOY_SENSITIVITY_INFO_0_JA,
      NULL,
      "input",
      {
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "500"
   },
   {
      "dice_throttle_keyjoy_sensitivity",
      DICE_THROTTLE_KEYJOY_SENSITIVITY_LABEL_JA,
      DICE_THROTTLE_KEYJOY_SENSITIVITY_LABEL_CAT_JA,
      DICE_THROTTLE_KEYJOY_SENSITIVITY_INFO_0_JA,
      NULL,
      "input",
      {
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "250"
   },

   {
      "dice_retromouse_paddle0",
      DICE_RETROMOUSE_PADDLE0_LABEL_JA,
      DICE_RETROMOUSE_PADDLE0_LABEL_CAT_JA,
      DICE_RETROMOUSE_PADDLE0_INFO_0_JA,
      NULL,
      "retromouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_retromouse_paddle1",
      DICE_RETROMOUSE_PADDLE1_LABEL_JA,
      DICE_RETROMOUSE_PADDLE1_LABEL_CAT_JA,
      DICE_RETROMOUSE_PADDLE1_INFO_0_JA,
      NULL,
      "retromouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_retromouse_paddle2",
      DICE_RETROMOUSE_PADDLE2_LABEL_JA,
      DICE_RETROMOUSE_PADDLE2_LABEL_CAT_JA,
      DICE_RETROMOUSE_PADDLE2_INFO_0_JA,
      NULL,
      "retromouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_retromouse_paddle3",
      DICE_RETROMOUSE_PADDLE3_LABEL_JA,
      DICE_RETROMOUSE_PADDLE3_LABEL_CAT_JA,
      DICE_RETROMOUSE_PADDLE3_INFO_0_JA,
      NULL,
      "retromouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_retromouse_paddle0_x",
      DICE_RETROMOUSE_PADDLE0_X_LABEL_JA,
      DICE_RETROMOUSE_PADDLE0_X_LABEL_CAT_JA,
      DICE_RETROMOUSE_PADDLE0_X_INFO_0_JA,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_JA},
         {"y", OPTION_VAL_Y_JA},
         {NULL, NULL},
      },
      "x"
   },
   {
      "dice_retromouse_paddle0_y",
      DICE_RETROMOUSE_PADDLE0_Y_LABEL_JA,
      DICE_RETROMOUSE_PADDLE0_Y_LABEL_CAT_JA,
      DICE_RETROMOUSE_PADDLE0_Y_INFO_0_JA,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_JA},
         {"y", OPTION_VAL_Y_JA},
         {NULL, NULL},
      },
      "y"
   },
   {
      "dice_retromouse_paddle1_x",
      DICE_RETROMOUSE_PADDLE1_X_LABEL_JA,
      DICE_RETROMOUSE_PADDLE1_X_LABEL_CAT_JA,
      DICE_RETROMOUSE_PADDLE1_X_INFO_0_JA,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_JA},
         {"y", OPTION_VAL_Y_JA},
         {NULL, NULL},
      },
      "x"
   },
   {
      "dice_retromouse_paddle1_y",
      DICE_RETROMOUSE_PADDLE1_Y_LABEL_JA,
      DICE_RETROMOUSE_PADDLE1_Y_LABEL_CAT_JA,
      DICE_RETROMOUSE_PADDLE1_Y_INFO_0_JA,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_JA},
         {"y", OPTION_VAL_Y_JA},
         {NULL, NULL},
      },
      "y"
   },
   {
      "dice_retromouse_paddle2_x",
      DICE_RETROMOUSE_PADDLE2_X_LABEL_JA,
      DICE_RETROMOUSE_PADDLE2_X_LABEL_CAT_JA,
      DICE_RETROMOUSE_PADDLE2_X_INFO_0_JA,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_JA},
         {"y", OPTION_VAL_Y_JA},
         {NULL, NULL},
      },
      "x"
   },
   {
      "dice_retromouse_paddle2_y",
      DICE_RETROMOUSE_PADDLE2_Y_LABEL_JA,
      DICE_RETROMOUSE_PADDLE2_Y_LABEL_CAT_JA,
      DICE_RETROMOUSE_PADDLE2_Y_INFO_0_JA,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_JA},
         {"y", OPTION_VAL_Y_JA},
         {NULL, NULL},
      },
      "y"
   },
   {
      "dice_retromouse_paddle3_x",
      DICE_RETROMOUSE_PADDLE3_X_LABEL_JA,
      DICE_RETROMOUSE_PADDLE3_X_LABEL_CAT_JA,
      DICE_RETROMOUSE_PADDLE3_X_INFO_0_JA,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_JA},
         {"y", OPTION_VAL_Y_JA},
         {NULL, NULL},
      },
      "x"
   },
   {
      "dice_retromouse_paddle3_y",
      DICE_RETROMOUSE_PADDLE3_Y_LABEL_JA,
      DICE_RETROMOUSE_PADDLE3_Y_LABEL_CAT_JA,
      DICE_RETROMOUSE_PADDLE3_Y_INFO_0_JA,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_JA},
         {"y", OPTION_VAL_Y_JA},
         {NULL, NULL},
      },
      "y"
   },

#ifdef MANYMOUSE
   {
      "dice_manymouse_paddle0",
      DICE_MANYMOUSE_PADDLE0_LABEL_JA,
      DICE_RETROMOUSE_PADDLE0_LABEL_CAT_JA,
      DICE_MANYMOUSE_PADDLE0_INFO_0_JA,
      NULL,
      "manymouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_manymouse_paddle0_x",
      DICE_MANYMOUSE_PADDLE0_X_LABEL_JA,
      DICE_MANYMOUSE_PADDLE0_X_LABEL_CAT_JA,
      DICE_RETROMOUSE_PADDLE0_X_INFO_0_JA,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_JA},
         {"0y", OPTION_VAL_0Y_JA},
         {"1x", OPTION_VAL_1X_JA},
         {"1y", OPTION_VAL_1Y_JA},
         {"2x", OPTION_VAL_2X_JA},
         {"2y", OPTION_VAL_2Y_JA},
         {"3x", OPTION_VAL_3X_JA},
         {"3y", OPTION_VAL_3Y_JA},
         {NULL, NULL},
      },
      "0x"
   },
   {
      "dice_manymouse_paddle0_y",
      DICE_MANYMOUSE_PADDLE0_Y_LABEL_JA,
      DICE_MANYMOUSE_PADDLE0_Y_LABEL_CAT_JA,
      DICE_RETROMOUSE_PADDLE0_Y_INFO_0_JA,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_JA},
         {"0y", OPTION_VAL_0Y_JA},
         {"1x", OPTION_VAL_1X_JA},
         {"1y", OPTION_VAL_1Y_JA},
         {"2x", OPTION_VAL_2X_JA},
         {"2y", OPTION_VAL_2Y_JA},
         {"3x", OPTION_VAL_3X_JA},
         {"3y", OPTION_VAL_3Y_JA},
         {NULL, NULL},
      },
      "0y"
   },
   {
      "dice_manymouse_paddle1",
      DICE_MANYMOUSE_PADDLE1_LABEL_JA,
      DICE_RETROMOUSE_PADDLE1_LABEL_CAT_JA,
      DICE_MANYMOUSE_PADDLE1_INFO_0_JA,
      NULL,
      "manymouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_manymouse_paddle1_x",
      DICE_MANYMOUSE_PADDLE1_X_LABEL_JA,
      DICE_MANYMOUSE_PADDLE1_X_LABEL_CAT_JA,
      DICE_RETROMOUSE_PADDLE1_X_INFO_0_JA,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_JA},
         {"0y", OPTION_VAL_0Y_JA},
         {"1x", OPTION_VAL_1X_JA},
         {"1y", OPTION_VAL_1Y_JA},
         {"2x", OPTION_VAL_2X_JA},
         {"2y", OPTION_VAL_2Y_JA},
         {"3x", OPTION_VAL_3X_JA},
         {"3y", OPTION_VAL_3Y_JA},
         {NULL, NULL},
      },
      "1x"
   },
   {
      "dice_manymouse_paddle1_y",
      DICE_MANYMOUSE_PADDLE1_Y_LABEL_JA,
      DICE_MANYMOUSE_PADDLE1_Y_LABEL_CAT_JA,
      DICE_RETROMOUSE_PADDLE1_Y_INFO_0_JA,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_JA},
         {"0y", OPTION_VAL_0Y_JA},
         {"1x", OPTION_VAL_1X_JA},
         {"1y", OPTION_VAL_1Y_JA},
         {"2x", OPTION_VAL_2X_JA},
         {"2y", OPTION_VAL_2Y_JA},
         {"3x", OPTION_VAL_3X_JA},
         {"3y", OPTION_VAL_3Y_JA},
         {NULL, NULL},
      },
      "1y"
   },
   {
      "dice_manymouse_paddle2",
      DICE_MANYMOUSE_PADDLE2_LABEL_JA,
      DICE_RETROMOUSE_PADDLE2_LABEL_CAT_JA,
      DICE_MANYMOUSE_PADDLE2_INFO_0_JA,
      NULL,
      "manymouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_manymouse_paddle2_x",
      DICE_MANYMOUSE_PADDLE2_X_LABEL_JA,
      DICE_MANYMOUSE_PADDLE2_X_LABEL_CAT_JA,
      DICE_RETROMOUSE_PADDLE2_X_INFO_0_JA,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_JA},
         {"0y", OPTION_VAL_0Y_JA},
         {"1x", OPTION_VAL_1X_JA},
         {"1y", OPTION_VAL_1Y_JA},
         {"2x", OPTION_VAL_2X_JA},
         {"2y", OPTION_VAL_2Y_JA},
         {"3x", OPTION_VAL_3X_JA},
         {"3y", OPTION_VAL_3Y_JA},
         {NULL, NULL},
      },
      "2x"
   },
   {
      "dice_manymouse_paddle2_y",
      DICE_MANYMOUSE_PADDLE2_Y_LABEL_JA,
      DICE_MANYMOUSE_PADDLE2_Y_LABEL_CAT_JA,
      DICE_RETROMOUSE_PADDLE2_Y_INFO_0_JA,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_JA},
         {"0y", OPTION_VAL_0Y_JA},
         {"1x", OPTION_VAL_1X_JA},
         {"1y", OPTION_VAL_1Y_JA},
         {"2x", OPTION_VAL_2X_JA},
         {"2y", OPTION_VAL_2Y_JA},
         {"3x", OPTION_VAL_3X_JA},
         {"3y", OPTION_VAL_3Y_JA},
         {NULL, NULL},
      },
      "2y"
   },
   {
      "dice_manymouse_paddle3",
      DICE_MANYMOUSE_PADDLE3_LABEL_JA,
      DICE_RETROMOUSE_PADDLE3_LABEL_CAT_JA,
      DICE_MANYMOUSE_PADDLE3_INFO_0_JA,
      NULL,
      "manymouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_manymouse_paddle3_x",
      DICE_MANYMOUSE_PADDLE3_X_LABEL_JA,
      DICE_MANYMOUSE_PADDLE3_X_LABEL_CAT_JA,
      DICE_RETROMOUSE_PADDLE3_X_INFO_0_JA,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_JA},
         {"0y", OPTION_VAL_0Y_JA},
         {"1x", OPTION_VAL_1X_JA},
         {"1y", OPTION_VAL_1Y_JA},
         {"2x", OPTION_VAL_2X_JA},
         {"2y", OPTION_VAL_2Y_JA},
         {"3x", OPTION_VAL_3X_JA},
         {"3y", OPTION_VAL_3Y_JA},
         {NULL, NULL},
      },
      "3x"
   },
   {
      "dice_manymouse_paddle3_y",
      DICE_MANYMOUSE_PADDLE3_Y_LABEL_JA,
      DICE_MANYMOUSE_PADDLE3_Y_LABEL_CAT_JA,
      DICE_RETROMOUSE_PADDLE3_Y_INFO_0_JA,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_JA},
         {"0y", OPTION_VAL_0Y_JA},
         {"1x", OPTION_VAL_1X_JA},
         {"1y", OPTION_VAL_1Y_JA},
         {"2x", OPTION_VAL_2X_JA},
         {"2y", OPTION_VAL_2Y_JA},
         {"3x", OPTION_VAL_3X_JA},
         {"3y", OPTION_VAL_3Y_JA},
         {NULL, NULL},
      },
      "3y"
   },
#endif

   {
      "dice_dipswitch_1",
      DICE_DIPSWITCH_1_LABEL_JA,
      DICE_DIPSWITCH_1_LABEL_CAT_JA,
      DICE_DIPSWITCH_1_INFO_0_JA,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_JA},
         {"0", NULL},
         {"1", NULL},
         {NULL, NULL},
      },
      "-1"
   },
   {
      "dice_dipswitch_2",
      DICE_DIPSWITCH_2_LABEL_JA,
      DICE_DIPSWITCH_2_LABEL_CAT_JA,
      DICE_DIPSWITCH_2_INFO_0_JA,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_JA},
         {"0", NULL},
         {"1", NULL},
         {NULL, NULL},
      },
      "-1"
   },
   {
      "dice_dipswitch_3",
      DICE_DIPSWITCH_3_LABEL_JA,
      DICE_DIPSWITCH_3_LABEL_CAT_JA,
      DICE_DIPSWITCH_3_INFO_0_JA,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_JA},
         {"0", NULL},
         {"1", NULL},
         {NULL, NULL},
      },
      "-1"
   },
   {
      "dice_dipswitch16_1",
      DICE_DIPSWITCH16_1_LABEL_JA,
      DICE_DIPSWITCH16_1_LABEL_CAT_JA,
      DICE_DIPSWITCH16_1_INFO_0_JA,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_JA},
         {"0", NULL},
         {"1", NULL},
         {"2", NULL},
         {"3", NULL},
         {"4", NULL},
         {"5", NULL},
         {"6", NULL},
         {"7", NULL},
         {"8", NULL},
         {"9", NULL},
         {"10", NULL},
         {"11", NULL},
         {"12", NULL},
         {"13", NULL},
         {"14", NULL},
         {"15", NULL},
         {NULL, NULL},
      },
      "-1"
   },
   {
      "dice_dipswitch16_2",
      DICE_DIPSWITCH16_2_LABEL_JA,
      DICE_DIPSWITCH16_2_LABEL_CAT_JA,
      DICE_DIPSWITCH16_2_INFO_0_JA,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_JA},
         {"0", NULL},
         {"1", NULL},
         {"2", NULL},
         {"3", NULL},
         {"4", NULL},
         {"5", NULL},
         {"6", NULL},
         {"7", NULL},
         {"8", NULL},
         {"9", NULL},
         {"10", NULL},
         {"11", NULL},
         {"12", NULL},
         {"13", NULL},
         {"14", NULL},
         {"15", NULL},
         {NULL, NULL},
      },
      "-1"
   },

   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_ja = {
   option_cats_ja,
   option_defs_ja
};

/* RETRO_LANGUAGE_KO */

#define CATEGORY_INPUT_LABEL_KO "입력"
#define CATEGORY_INPUT_INFO_0_KO "코어별 입력 설정을 구성합니다."
#define CATEGORY_RETROMOUSE_LABEL_KO "레트로마우스"
#define CATEGORY_RETROMOUSE_INFO_0_KO "Libretro 다중 마우스 설정을 구성합니다."
#define CATEGORY_MANYMOUSE_LABEL_KO "매니마우스"
#define CATEGORY_MANYMOUSE_INFO_0_KO "매니마우스 다중 마우스 설정을 구성합니다."
#define CATEGORY_DIPSWITCH_LABEL_KO "DIP 스위치"
#define CATEGORY_DIPSWITCH_INFO_0_KO "DIP 스위치와 전위차계 설정을 구성합니다."
#define DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_LABEL_KO "입력 > 패들 1에 마우스 포인터 사용"
#define DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_LABEL_CAT_KO "패들 1에 마우스 포인터 사용"
#define DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_INFO_0_KO "시스템 마우스 포인터를 패들 컨트롤러로 사용합니다. 1. 마우스가 여러 개 있는 경우 특정 마우스를 선택할 수 없습니다."
#define DICE_PADDLE_JOYSTICK_ABSOLUTE_LABEL_KO "입력 > 패들 조이스틱은 절대 모션 사용"
#define DICE_PADDLE_JOYSTICK_ABSOLUTE_LABEL_CAT_KO "패들 조이스틱은 절대 모션 사용"
#define DICE_PADDLE_JOYSTICK_ABSOLUTE_INFO_0_KO "상대적인 동작이 아닌, 조이스틱의 움직임 범위를 패들 범위에 직접 매핑합니다."
#define DICE_PADDLE_KEYBOARD_SENSITIVITY_LABEL_KO "입력 > 패들 십자 패드 감도"
#define DICE_PADDLE_KEYBOARD_SENSITIVITY_LABEL_CAT_KO "패들 십자 패드 감도"
#define DICE_PADDLE_KEYBOARD_SENSITIVITY_INFO_0_KO "패들의 십자 패드를 사용할 때의 감도."
#define DICE_PADDLE_JOYSTICK_SENSITIVITY_LABEL_KO "입력 > 패들 아날로그 스틱 감도"
#define DICE_PADDLE_JOYSTICK_SENSITIVITY_LABEL_CAT_KO "패들 아날로그 스틱 감도"
#define DICE_PADDLE_JOYSTICK_SENSITIVITY_INFO_0_KO "패들에 아날로그 스틱을 사용할 때의 감도입니다."
#define DICE_RETROMOUSE_PADDLE_SENSITIVITY_LABEL_KO "입력 > 패들 레트로마우스 감도"
#define DICE_RETROMOUSE_PADDLE_SENSITIVITY_LABEL_CAT_KO "패들 레트로마우스 감도"
#define DICE_RETROMOUSE_PADDLE_SENSITIVITY_INFO_0_KO "레트로마우스를 패들로 사용할 때의 감도입니다."
#define DICE_WHEEL_KEYJOY_SENSITIVITY_LABEL_KO "입력 > 휠 감도"
#define DICE_WHEEL_KEYJOY_SENSITIVITY_LABEL_CAT_KO "휠 감도"
#define DICE_WHEEL_KEYJOY_SENSITIVITY_INFO_0_KO "휠의 십자 패드나 아날로그 스틱을 사용할 때의 감도입니다."
#define DICE_THROTTLE_KEYJOY_SENSITIVITY_LABEL_KO "입력 > 스로틀 감도"
#define DICE_THROTTLE_KEYJOY_SENSITIVITY_LABEL_CAT_KO "스로틀 감도"
#define DICE_THROTTLE_KEYJOY_SENSITIVITY_INFO_0_KO "십자 패드나 아날로그 스틱을 사용하여 조절 시의 감도입니다."
#define DICE_RETROMOUSE_PADDLE0_LABEL_KO "레트로마우스 > 패들 1에 마우스 사용"
#define DICE_RETROMOUSE_PADDLE0_LABEL_CAT_KO "패들 1에 마우스 사용"
#define DICE_RETROMOUSE_PADDLE0_INFO_0_KO "포트 1의 마우스 인덱스에서 선택한 특정 마우스를 패들 1에 사용합니다."
#define DICE_RETROMOUSE_PADDLE1_LABEL_KO "레트로마우스 > 패들 2에 마우스 사용"
#define DICE_RETROMOUSE_PADDLE1_LABEL_CAT_KO "패들 2에 마우스 사용"
#define DICE_RETROMOUSE_PADDLE1_INFO_0_KO "포트 2의 마우스 인덱스에서 선택한 특정 마우스를 패들 2에 사용합니다."
#define DICE_RETROMOUSE_PADDLE2_LABEL_KO "레트로마우스 > 패들 3에 마우스 사용"
#define DICE_RETROMOUSE_PADDLE2_LABEL_CAT_KO "패들 3에 마우스 사용"
#define DICE_RETROMOUSE_PADDLE2_INFO_0_KO "포트 3의 마우스 인덱스에서 선택한 특정 마우스를 패들 3에 사용합니다."
#define DICE_RETROMOUSE_PADDLE3_LABEL_KO "레트로마우스 > 패들 4에 마우스 사용"
#define DICE_RETROMOUSE_PADDLE3_LABEL_CAT_KO "패들 4에 마우스 사용"
#define DICE_RETROMOUSE_PADDLE3_INFO_0_KO "포트 4의 마우스 인덱스에서 선택한 특정 마우스를 패들 4에 사용합니다."
#define DICE_RETROMOUSE_PADDLE0_X_LABEL_KO "레트로마우스 > 패들 1 수평 마우스 축"
#define DICE_RETROMOUSE_PADDLE0_X_LABEL_CAT_KO "패들 1 수평 마우스 축"
#define DICE_RETROMOUSE_PADDLE0_X_INFO_0_KO "플레이어 1의 마우스 축, 수평 화면 동작입니다."
#define OPTION_VAL_X_KO NULL
#define OPTION_VAL_Y_KO NULL
#define DICE_RETROMOUSE_PADDLE0_Y_LABEL_KO "RetroMouse > 패들 1 수직 마우스 축"
#define DICE_RETROMOUSE_PADDLE0_Y_LABEL_CAT_KO "패들 1 수직 마우스 축"
#define DICE_RETROMOUSE_PADDLE0_Y_INFO_0_KO "플레이어 1의 마우스 축, 수직 화면 동작입니다."
#define DICE_RETROMOUSE_PADDLE1_X_LABEL_KO "레트로마우스 > 패들 2 수평 마우스 축"
#define DICE_RETROMOUSE_PADDLE1_X_LABEL_CAT_KO "패들 2 수평 마우스 축"
#define DICE_RETROMOUSE_PADDLE1_X_INFO_0_KO "플레이어 2의 마우스 축, 수평 화면 동작입니다."
#define DICE_RETROMOUSE_PADDLE1_Y_LABEL_KO "레트로마우스 > 패들 2 수직 마우스 축"
#define DICE_RETROMOUSE_PADDLE1_Y_LABEL_CAT_KO "패들 2 수직 마우스 축"
#define DICE_RETROMOUSE_PADDLE1_Y_INFO_0_KO "플레이어 2의 마우스 축, 수직 화면 동작입니다."
#define DICE_RETROMOUSE_PADDLE2_X_LABEL_KO "레트로마우스 > 패들 3 수평 마우스 축"
#define DICE_RETROMOUSE_PADDLE2_X_LABEL_CAT_KO "패들 3 수평 마우스 축"
#define DICE_RETROMOUSE_PADDLE2_X_INFO_0_KO "플레이어 3의 마우스 축, 수평 화면 동작입니다."
#define DICE_RETROMOUSE_PADDLE2_Y_LABEL_KO "레트로마우스 > 패들 3 수직 마우스 축"
#define DICE_RETROMOUSE_PADDLE2_Y_LABEL_CAT_KO "패들 3 수직 마우스 축"
#define DICE_RETROMOUSE_PADDLE2_Y_INFO_0_KO "플레이어 3의 마우스 축, 수직 화면 동작입니다."
#define DICE_RETROMOUSE_PADDLE3_X_LABEL_KO "레트로마우스 > 패들 4 수평 마우스 축"
#define DICE_RETROMOUSE_PADDLE3_X_LABEL_CAT_KO "패들 4 수평 마우스 축"
#define DICE_RETROMOUSE_PADDLE3_X_INFO_0_KO "플레이어 4의 마우스 축, 수평 화면 동작입니다."
#define DICE_RETROMOUSE_PADDLE3_Y_LABEL_KO "레트로마우스 > 패들 4 수직 마우스 축"
#define DICE_RETROMOUSE_PADDLE3_Y_LABEL_CAT_KO "패들 4 수직 마우스 축"
#define DICE_RETROMOUSE_PADDLE3_Y_INFO_0_KO "플레이어 4의 마우스 축, 수직 화면 동작입니다."
#define DICE_MANYMOUSE_PADDLE0_LABEL_KO "매니마우스 > 패들 1에 마우스 사용"
#define DICE_MANYMOUSE_PADDLE0_INFO_0_KO "패들 1에 마우스를 사용합니다."
#define DICE_MANYMOUSE_PADDLE0_X_LABEL_KO "매니마우스 > 마우스 패들 1 x"
#define DICE_MANYMOUSE_PADDLE0_X_LABEL_CAT_KO "마우스 패들 1 x"
#define OPTION_VAL_0X_KO NULL
#define OPTION_VAL_0Y_KO NULL
#define OPTION_VAL_1X_KO NULL
#define OPTION_VAL_1Y_KO NULL
#define OPTION_VAL_2X_KO NULL
#define OPTION_VAL_2Y_KO NULL
#define OPTION_VAL_3X_KO NULL
#define OPTION_VAL_3Y_KO NULL
#define DICE_MANYMOUSE_PADDLE0_Y_LABEL_KO "매니마우스 > 마우스 패들 1 y"
#define DICE_MANYMOUSE_PADDLE0_Y_LABEL_CAT_KO "마우스 패들 1 y"
#define DICE_MANYMOUSE_PADDLE1_LABEL_KO "매니마우스 > 패들 2에 마우스 사용"
#define DICE_MANYMOUSE_PADDLE1_INFO_0_KO "패들 2에 마우스 사용합니다."
#define DICE_MANYMOUSE_PADDLE1_X_LABEL_KO "매니마우스 > 마우스 패들 2 x"
#define DICE_MANYMOUSE_PADDLE1_X_LABEL_CAT_KO "마우스 패들 2 x"
#define DICE_MANYMOUSE_PADDLE1_Y_LABEL_KO "매니마우스 > 마우스 패들 2 y"
#define DICE_MANYMOUSE_PADDLE1_Y_LABEL_CAT_KO "마우스 패들 2 y"
#define DICE_MANYMOUSE_PADDLE2_LABEL_KO "매니마우스 > 패들 3에 마우스 사용"
#define DICE_MANYMOUSE_PADDLE2_INFO_0_KO "패들 3에 마우스를 사용합니다."
#define DICE_MANYMOUSE_PADDLE2_X_LABEL_KO "매니마우스 > 마우스 패들 3 x"
#define DICE_MANYMOUSE_PADDLE2_X_LABEL_CAT_KO "마우스 패들 3 x"
#define DICE_MANYMOUSE_PADDLE2_Y_LABEL_KO "매니마우스 > 마우스 패들 3 y"
#define DICE_MANYMOUSE_PADDLE2_Y_LABEL_CAT_KO "마우스 패들 3 y"
#define DICE_MANYMOUSE_PADDLE3_LABEL_KO "매니마우스 > 패들 4에 마우스 사용"
#define DICE_MANYMOUSE_PADDLE3_INFO_0_KO "패들 4에 마우스를 사용합니다."
#define DICE_MANYMOUSE_PADDLE3_X_LABEL_KO "매니마우스 > 마우스 패들 4 x"
#define DICE_MANYMOUSE_PADDLE3_X_LABEL_CAT_KO "마우스 패들 4 x"
#define DICE_MANYMOUSE_PADDLE3_Y_LABEL_KO "매니마우스 > 마우스 패들 4 y"
#define DICE_MANYMOUSE_PADDLE3_Y_LABEL_CAT_KO "마우스 패들 4 y"
#define DICE_DIPSWITCH_1_LABEL_KO "DIP 스위치 > DIP 스위치 1"
#define DICE_DIPSWITCH_1_LABEL_CAT_KO "DIP 스위치 1"
#define DICE_DIPSWITCH_1_INFO_0_KO "DIP 스위치 1 설정입니다."
#define OPTION_VAL_1_KO "기본"
#define DICE_DIPSWITCH_2_LABEL_KO "DIP 스위치 > DIP 스위치 2"
#define DICE_DIPSWITCH_2_LABEL_CAT_KO "DIP 스위치 2"
#define DICE_DIPSWITCH_2_INFO_0_KO "DIP 스위치 2에 대한 설정입니다."
#define DICE_DIPSWITCH_3_LABEL_KO "DIP 스위치 > DIP 스위치 3"
#define DICE_DIPSWITCH_3_LABEL_CAT_KO "DIP 스위치 3"
#define DICE_DIPSWITCH_3_INFO_0_KO "DIP 스위치 3에 대한 설정입니다."
#define DICE_DIPSWITCH16_1_LABEL_KO "DIP 스위치 > DIP 스위치 헥스 1"
#define DICE_DIPSWITCH16_1_LABEL_CAT_KO "DIP 스위치 헥스 1"
#define DICE_DIPSWITCH16_1_INFO_0_KO "16위치 DIP 스위치 번호 1에 대한 설정입니다."
#define DICE_DIPSWITCH16_2_LABEL_KO "DIP 스위치 > DIP 스위치 헥스 2"
#define DICE_DIPSWITCH16_2_LABEL_CAT_KO "DIP 스위치 헥스 2"
#define DICE_DIPSWITCH16_2_INFO_0_KO "16위치 DIP 스위치 번호 2에 대한 설정입니다."

struct retro_core_option_v2_category option_cats_ko[] = {
   {
      "input",
      CATEGORY_INPUT_LABEL_KO,
      CATEGORY_INPUT_INFO_0_KO
   },
   {
      "retromouse",
      CATEGORY_RETROMOUSE_LABEL_KO,
      CATEGORY_RETROMOUSE_INFO_0_KO
   },
#ifdef MANYMOUSE
   {
      "manymouse",
      CATEGORY_MANYMOUSE_LABEL_KO,
      CATEGORY_MANYMOUSE_INFO_0_KO
   },
#endif
   {
      "dipswitch",
      CATEGORY_DIPSWITCH_LABEL_KO,
      CATEGORY_DIPSWITCH_INFO_0_KO
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_ko[] = {
   {
      "dice_use_mouse_pointer_for_paddle_1",
      DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_LABEL_KO,
      DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_LABEL_CAT_KO,
      DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_INFO_0_KO,
      NULL,
      "input",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_paddle_joystick_absolute",
      DICE_PADDLE_JOYSTICK_ABSOLUTE_LABEL_KO,
      DICE_PADDLE_JOYSTICK_ABSOLUTE_LABEL_CAT_KO,
      DICE_PADDLE_JOYSTICK_ABSOLUTE_INFO_0_KO,
      NULL,
      "input",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      // D-pad but not necessarily keyboard under libretro,
      // that name comes from the upstream code.
      "dice_paddle_keyboard_sensitivity",
      DICE_PADDLE_KEYBOARD_SENSITIVITY_LABEL_KO,
      DICE_PADDLE_KEYBOARD_SENSITIVITY_LABEL_CAT_KO,
      DICE_PADDLE_KEYBOARD_SENSITIVITY_INFO_0_KO,
      NULL,
      "input",
      {
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "250"
   },
   {
      "dice_paddle_joystick_sensitivity",
      DICE_PADDLE_JOYSTICK_SENSITIVITY_LABEL_KO,
      DICE_PADDLE_JOYSTICK_SENSITIVITY_LABEL_CAT_KO,
      DICE_PADDLE_JOYSTICK_SENSITIVITY_INFO_0_KO,
      NULL,
      "input",
      {
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "500"
   },
   {
      "dice_retromouse_paddle_sensitivity",
      DICE_RETROMOUSE_PADDLE_SENSITIVITY_LABEL_KO,
      DICE_RETROMOUSE_PADDLE_SENSITIVITY_LABEL_CAT_KO,
      DICE_RETROMOUSE_PADDLE_SENSITIVITY_INFO_0_KO,
      NULL,
      "input",
      {
         {"25", NULL},
         {"50", NULL},
         {"75", NULL},
         {"100", NULL},
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "125"
   },
   {
      "dice_wheel_keyjoy_sensitivity",
      DICE_WHEEL_KEYJOY_SENSITIVITY_LABEL_KO,
      DICE_WHEEL_KEYJOY_SENSITIVITY_LABEL_CAT_KO,
      DICE_WHEEL_KEYJOY_SENSITIVITY_INFO_0_KO,
      NULL,
      "input",
      {
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "500"
   },
   {
      "dice_throttle_keyjoy_sensitivity",
      DICE_THROTTLE_KEYJOY_SENSITIVITY_LABEL_KO,
      DICE_THROTTLE_KEYJOY_SENSITIVITY_LABEL_CAT_KO,
      DICE_THROTTLE_KEYJOY_SENSITIVITY_INFO_0_KO,
      NULL,
      "input",
      {
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "250"
   },

   {
      "dice_retromouse_paddle0",
      DICE_RETROMOUSE_PADDLE0_LABEL_KO,
      DICE_RETROMOUSE_PADDLE0_LABEL_CAT_KO,
      DICE_RETROMOUSE_PADDLE0_INFO_0_KO,
      NULL,
      "retromouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_retromouse_paddle1",
      DICE_RETROMOUSE_PADDLE1_LABEL_KO,
      DICE_RETROMOUSE_PADDLE1_LABEL_CAT_KO,
      DICE_RETROMOUSE_PADDLE1_INFO_0_KO,
      NULL,
      "retromouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_retromouse_paddle2",
      DICE_RETROMOUSE_PADDLE2_LABEL_KO,
      DICE_RETROMOUSE_PADDLE2_LABEL_CAT_KO,
      DICE_RETROMOUSE_PADDLE2_INFO_0_KO,
      NULL,
      "retromouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_retromouse_paddle3",
      DICE_RETROMOUSE_PADDLE3_LABEL_KO,
      DICE_RETROMOUSE_PADDLE3_LABEL_CAT_KO,
      DICE_RETROMOUSE_PADDLE3_INFO_0_KO,
      NULL,
      "retromouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_retromouse_paddle0_x",
      DICE_RETROMOUSE_PADDLE0_X_LABEL_KO,
      DICE_RETROMOUSE_PADDLE0_X_LABEL_CAT_KO,
      DICE_RETROMOUSE_PADDLE0_X_INFO_0_KO,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_KO},
         {"y", OPTION_VAL_Y_KO},
         {NULL, NULL},
      },
      "x"
   },
   {
      "dice_retromouse_paddle0_y",
      DICE_RETROMOUSE_PADDLE0_Y_LABEL_KO,
      DICE_RETROMOUSE_PADDLE0_Y_LABEL_CAT_KO,
      DICE_RETROMOUSE_PADDLE0_Y_INFO_0_KO,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_KO},
         {"y", OPTION_VAL_Y_KO},
         {NULL, NULL},
      },
      "y"
   },
   {
      "dice_retromouse_paddle1_x",
      DICE_RETROMOUSE_PADDLE1_X_LABEL_KO,
      DICE_RETROMOUSE_PADDLE1_X_LABEL_CAT_KO,
      DICE_RETROMOUSE_PADDLE1_X_INFO_0_KO,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_KO},
         {"y", OPTION_VAL_Y_KO},
         {NULL, NULL},
      },
      "x"
   },
   {
      "dice_retromouse_paddle1_y",
      DICE_RETROMOUSE_PADDLE1_Y_LABEL_KO,
      DICE_RETROMOUSE_PADDLE1_Y_LABEL_CAT_KO,
      DICE_RETROMOUSE_PADDLE1_Y_INFO_0_KO,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_KO},
         {"y", OPTION_VAL_Y_KO},
         {NULL, NULL},
      },
      "y"
   },
   {
      "dice_retromouse_paddle2_x",
      DICE_RETROMOUSE_PADDLE2_X_LABEL_KO,
      DICE_RETROMOUSE_PADDLE2_X_LABEL_CAT_KO,
      DICE_RETROMOUSE_PADDLE2_X_INFO_0_KO,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_KO},
         {"y", OPTION_VAL_Y_KO},
         {NULL, NULL},
      },
      "x"
   },
   {
      "dice_retromouse_paddle2_y",
      DICE_RETROMOUSE_PADDLE2_Y_LABEL_KO,
      DICE_RETROMOUSE_PADDLE2_Y_LABEL_CAT_KO,
      DICE_RETROMOUSE_PADDLE2_Y_INFO_0_KO,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_KO},
         {"y", OPTION_VAL_Y_KO},
         {NULL, NULL},
      },
      "y"
   },
   {
      "dice_retromouse_paddle3_x",
      DICE_RETROMOUSE_PADDLE3_X_LABEL_KO,
      DICE_RETROMOUSE_PADDLE3_X_LABEL_CAT_KO,
      DICE_RETROMOUSE_PADDLE3_X_INFO_0_KO,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_KO},
         {"y", OPTION_VAL_Y_KO},
         {NULL, NULL},
      },
      "x"
   },
   {
      "dice_retromouse_paddle3_y",
      DICE_RETROMOUSE_PADDLE3_Y_LABEL_KO,
      DICE_RETROMOUSE_PADDLE3_Y_LABEL_CAT_KO,
      DICE_RETROMOUSE_PADDLE3_Y_INFO_0_KO,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_KO},
         {"y", OPTION_VAL_Y_KO},
         {NULL, NULL},
      },
      "y"
   },

#ifdef MANYMOUSE
   {
      "dice_manymouse_paddle0",
      DICE_MANYMOUSE_PADDLE0_LABEL_KO,
      DICE_RETROMOUSE_PADDLE0_LABEL_CAT_KO,
      DICE_MANYMOUSE_PADDLE0_INFO_0_KO,
      NULL,
      "manymouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_manymouse_paddle0_x",
      DICE_MANYMOUSE_PADDLE0_X_LABEL_KO,
      DICE_MANYMOUSE_PADDLE0_X_LABEL_CAT_KO,
      DICE_RETROMOUSE_PADDLE0_X_INFO_0_KO,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_KO},
         {"0y", OPTION_VAL_0Y_KO},
         {"1x", OPTION_VAL_1X_KO},
         {"1y", OPTION_VAL_1Y_KO},
         {"2x", OPTION_VAL_2X_KO},
         {"2y", OPTION_VAL_2Y_KO},
         {"3x", OPTION_VAL_3X_KO},
         {"3y", OPTION_VAL_3Y_KO},
         {NULL, NULL},
      },
      "0x"
   },
   {
      "dice_manymouse_paddle0_y",
      DICE_MANYMOUSE_PADDLE0_Y_LABEL_KO,
      DICE_MANYMOUSE_PADDLE0_Y_LABEL_CAT_KO,
      DICE_RETROMOUSE_PADDLE0_Y_INFO_0_KO,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_KO},
         {"0y", OPTION_VAL_0Y_KO},
         {"1x", OPTION_VAL_1X_KO},
         {"1y", OPTION_VAL_1Y_KO},
         {"2x", OPTION_VAL_2X_KO},
         {"2y", OPTION_VAL_2Y_KO},
         {"3x", OPTION_VAL_3X_KO},
         {"3y", OPTION_VAL_3Y_KO},
         {NULL, NULL},
      },
      "0y"
   },
   {
      "dice_manymouse_paddle1",
      DICE_MANYMOUSE_PADDLE1_LABEL_KO,
      DICE_RETROMOUSE_PADDLE1_LABEL_CAT_KO,
      DICE_MANYMOUSE_PADDLE1_INFO_0_KO,
      NULL,
      "manymouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_manymouse_paddle1_x",
      DICE_MANYMOUSE_PADDLE1_X_LABEL_KO,
      DICE_MANYMOUSE_PADDLE1_X_LABEL_CAT_KO,
      DICE_RETROMOUSE_PADDLE1_X_INFO_0_KO,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_KO},
         {"0y", OPTION_VAL_0Y_KO},
         {"1x", OPTION_VAL_1X_KO},
         {"1y", OPTION_VAL_1Y_KO},
         {"2x", OPTION_VAL_2X_KO},
         {"2y", OPTION_VAL_2Y_KO},
         {"3x", OPTION_VAL_3X_KO},
         {"3y", OPTION_VAL_3Y_KO},
         {NULL, NULL},
      },
      "1x"
   },
   {
      "dice_manymouse_paddle1_y",
      DICE_MANYMOUSE_PADDLE1_Y_LABEL_KO,
      DICE_MANYMOUSE_PADDLE1_Y_LABEL_CAT_KO,
      DICE_RETROMOUSE_PADDLE1_Y_INFO_0_KO,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_KO},
         {"0y", OPTION_VAL_0Y_KO},
         {"1x", OPTION_VAL_1X_KO},
         {"1y", OPTION_VAL_1Y_KO},
         {"2x", OPTION_VAL_2X_KO},
         {"2y", OPTION_VAL_2Y_KO},
         {"3x", OPTION_VAL_3X_KO},
         {"3y", OPTION_VAL_3Y_KO},
         {NULL, NULL},
      },
      "1y"
   },
   {
      "dice_manymouse_paddle2",
      DICE_MANYMOUSE_PADDLE2_LABEL_KO,
      DICE_RETROMOUSE_PADDLE2_LABEL_CAT_KO,
      DICE_MANYMOUSE_PADDLE2_INFO_0_KO,
      NULL,
      "manymouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_manymouse_paddle2_x",
      DICE_MANYMOUSE_PADDLE2_X_LABEL_KO,
      DICE_MANYMOUSE_PADDLE2_X_LABEL_CAT_KO,
      DICE_RETROMOUSE_PADDLE2_X_INFO_0_KO,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_KO},
         {"0y", OPTION_VAL_0Y_KO},
         {"1x", OPTION_VAL_1X_KO},
         {"1y", OPTION_VAL_1Y_KO},
         {"2x", OPTION_VAL_2X_KO},
         {"2y", OPTION_VAL_2Y_KO},
         {"3x", OPTION_VAL_3X_KO},
         {"3y", OPTION_VAL_3Y_KO},
         {NULL, NULL},
      },
      "2x"
   },
   {
      "dice_manymouse_paddle2_y",
      DICE_MANYMOUSE_PADDLE2_Y_LABEL_KO,
      DICE_MANYMOUSE_PADDLE2_Y_LABEL_CAT_KO,
      DICE_RETROMOUSE_PADDLE2_Y_INFO_0_KO,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_KO},
         {"0y", OPTION_VAL_0Y_KO},
         {"1x", OPTION_VAL_1X_KO},
         {"1y", OPTION_VAL_1Y_KO},
         {"2x", OPTION_VAL_2X_KO},
         {"2y", OPTION_VAL_2Y_KO},
         {"3x", OPTION_VAL_3X_KO},
         {"3y", OPTION_VAL_3Y_KO},
         {NULL, NULL},
      },
      "2y"
   },
   {
      "dice_manymouse_paddle3",
      DICE_MANYMOUSE_PADDLE3_LABEL_KO,
      DICE_RETROMOUSE_PADDLE3_LABEL_CAT_KO,
      DICE_MANYMOUSE_PADDLE3_INFO_0_KO,
      NULL,
      "manymouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_manymouse_paddle3_x",
      DICE_MANYMOUSE_PADDLE3_X_LABEL_KO,
      DICE_MANYMOUSE_PADDLE3_X_LABEL_CAT_KO,
      DICE_RETROMOUSE_PADDLE3_X_INFO_0_KO,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_KO},
         {"0y", OPTION_VAL_0Y_KO},
         {"1x", OPTION_VAL_1X_KO},
         {"1y", OPTION_VAL_1Y_KO},
         {"2x", OPTION_VAL_2X_KO},
         {"2y", OPTION_VAL_2Y_KO},
         {"3x", OPTION_VAL_3X_KO},
         {"3y", OPTION_VAL_3Y_KO},
         {NULL, NULL},
      },
      "3x"
   },
   {
      "dice_manymouse_paddle3_y",
      DICE_MANYMOUSE_PADDLE3_Y_LABEL_KO,
      DICE_MANYMOUSE_PADDLE3_Y_LABEL_CAT_KO,
      DICE_RETROMOUSE_PADDLE3_Y_INFO_0_KO,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_KO},
         {"0y", OPTION_VAL_0Y_KO},
         {"1x", OPTION_VAL_1X_KO},
         {"1y", OPTION_VAL_1Y_KO},
         {"2x", OPTION_VAL_2X_KO},
         {"2y", OPTION_VAL_2Y_KO},
         {"3x", OPTION_VAL_3X_KO},
         {"3y", OPTION_VAL_3Y_KO},
         {NULL, NULL},
      },
      "3y"
   },
#endif

   {
      "dice_dipswitch_1",
      DICE_DIPSWITCH_1_LABEL_KO,
      DICE_DIPSWITCH_1_LABEL_CAT_KO,
      DICE_DIPSWITCH_1_INFO_0_KO,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_KO},
         {"0", NULL},
         {"1", NULL},
         {NULL, NULL},
      },
      "-1"
   },
   {
      "dice_dipswitch_2",
      DICE_DIPSWITCH_2_LABEL_KO,
      DICE_DIPSWITCH_2_LABEL_CAT_KO,
      DICE_DIPSWITCH_2_INFO_0_KO,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_KO},
         {"0", NULL},
         {"1", NULL},
         {NULL, NULL},
      },
      "-1"
   },
   {
      "dice_dipswitch_3",
      DICE_DIPSWITCH_3_LABEL_KO,
      DICE_DIPSWITCH_3_LABEL_CAT_KO,
      DICE_DIPSWITCH_3_INFO_0_KO,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_KO},
         {"0", NULL},
         {"1", NULL},
         {NULL, NULL},
      },
      "-1"
   },
   {
      "dice_dipswitch16_1",
      DICE_DIPSWITCH16_1_LABEL_KO,
      DICE_DIPSWITCH16_1_LABEL_CAT_KO,
      DICE_DIPSWITCH16_1_INFO_0_KO,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_KO},
         {"0", NULL},
         {"1", NULL},
         {"2", NULL},
         {"3", NULL},
         {"4", NULL},
         {"5", NULL},
         {"6", NULL},
         {"7", NULL},
         {"8", NULL},
         {"9", NULL},
         {"10", NULL},
         {"11", NULL},
         {"12", NULL},
         {"13", NULL},
         {"14", NULL},
         {"15", NULL},
         {NULL, NULL},
      },
      "-1"
   },
   {
      "dice_dipswitch16_2",
      DICE_DIPSWITCH16_2_LABEL_KO,
      DICE_DIPSWITCH16_2_LABEL_CAT_KO,
      DICE_DIPSWITCH16_2_INFO_0_KO,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_KO},
         {"0", NULL},
         {"1", NULL},
         {"2", NULL},
         {"3", NULL},
         {"4", NULL},
         {"5", NULL},
         {"6", NULL},
         {"7", NULL},
         {"8", NULL},
         {"9", NULL},
         {"10", NULL},
         {"11", NULL},
         {"12", NULL},
         {"13", NULL},
         {"14", NULL},
         {"15", NULL},
         {NULL, NULL},
      },
      "-1"
   },

   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_ko = {
   option_cats_ko,
   option_defs_ko
};

/* RETRO_LANGUAGE_NL */

#define CATEGORY_INPUT_LABEL_NL "Invoer"
#define CATEGORY_INPUT_INFO_0_NL NULL
#define CATEGORY_RETROMOUSE_LABEL_NL NULL
#define CATEGORY_RETROMOUSE_INFO_0_NL NULL
#define CATEGORY_MANYMOUSE_LABEL_NL NULL
#define CATEGORY_MANYMOUSE_INFO_0_NL NULL
#define CATEGORY_DIPSWITCH_LABEL_NL NULL
#define CATEGORY_DIPSWITCH_INFO_0_NL NULL
#define DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_LABEL_NL NULL
#define DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_LABEL_CAT_NL NULL
#define DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_INFO_0_NL NULL
#define DICE_PADDLE_JOYSTICK_ABSOLUTE_LABEL_NL NULL
#define DICE_PADDLE_JOYSTICK_ABSOLUTE_LABEL_CAT_NL NULL
#define DICE_PADDLE_JOYSTICK_ABSOLUTE_INFO_0_NL NULL
#define DICE_PADDLE_KEYBOARD_SENSITIVITY_LABEL_NL NULL
#define DICE_PADDLE_KEYBOARD_SENSITIVITY_LABEL_CAT_NL NULL
#define DICE_PADDLE_KEYBOARD_SENSITIVITY_INFO_0_NL NULL
#define DICE_PADDLE_JOYSTICK_SENSITIVITY_LABEL_NL NULL
#define DICE_PADDLE_JOYSTICK_SENSITIVITY_LABEL_CAT_NL NULL
#define DICE_PADDLE_JOYSTICK_SENSITIVITY_INFO_0_NL NULL
#define DICE_RETROMOUSE_PADDLE_SENSITIVITY_LABEL_NL NULL
#define DICE_RETROMOUSE_PADDLE_SENSITIVITY_LABEL_CAT_NL NULL
#define DICE_RETROMOUSE_PADDLE_SENSITIVITY_INFO_0_NL NULL
#define DICE_WHEEL_KEYJOY_SENSITIVITY_LABEL_NL NULL
#define DICE_WHEEL_KEYJOY_SENSITIVITY_LABEL_CAT_NL NULL
#define DICE_WHEEL_KEYJOY_SENSITIVITY_INFO_0_NL NULL
#define DICE_THROTTLE_KEYJOY_SENSITIVITY_LABEL_NL NULL
#define DICE_THROTTLE_KEYJOY_SENSITIVITY_LABEL_CAT_NL NULL
#define DICE_THROTTLE_KEYJOY_SENSITIVITY_INFO_0_NL NULL
#define DICE_RETROMOUSE_PADDLE0_LABEL_NL NULL
#define DICE_RETROMOUSE_PADDLE0_LABEL_CAT_NL NULL
#define DICE_RETROMOUSE_PADDLE0_INFO_0_NL NULL
#define DICE_RETROMOUSE_PADDLE1_LABEL_NL NULL
#define DICE_RETROMOUSE_PADDLE1_LABEL_CAT_NL NULL
#define DICE_RETROMOUSE_PADDLE1_INFO_0_NL NULL
#define DICE_RETROMOUSE_PADDLE2_LABEL_NL NULL
#define DICE_RETROMOUSE_PADDLE2_LABEL_CAT_NL NULL
#define DICE_RETROMOUSE_PADDLE2_INFO_0_NL NULL
#define DICE_RETROMOUSE_PADDLE3_LABEL_NL NULL
#define DICE_RETROMOUSE_PADDLE3_LABEL_CAT_NL NULL
#define DICE_RETROMOUSE_PADDLE3_INFO_0_NL NULL
#define DICE_RETROMOUSE_PADDLE0_X_LABEL_NL NULL
#define DICE_RETROMOUSE_PADDLE0_X_LABEL_CAT_NL NULL
#define DICE_RETROMOUSE_PADDLE0_X_INFO_0_NL NULL
#define OPTION_VAL_X_NL NULL
#define OPTION_VAL_Y_NL NULL
#define DICE_RETROMOUSE_PADDLE0_Y_LABEL_NL NULL
#define DICE_RETROMOUSE_PADDLE0_Y_LABEL_CAT_NL NULL
#define DICE_RETROMOUSE_PADDLE0_Y_INFO_0_NL NULL
#define DICE_RETROMOUSE_PADDLE1_X_LABEL_NL NULL
#define DICE_RETROMOUSE_PADDLE1_X_LABEL_CAT_NL NULL
#define DICE_RETROMOUSE_PADDLE1_X_INFO_0_NL NULL
#define DICE_RETROMOUSE_PADDLE1_Y_LABEL_NL NULL
#define DICE_RETROMOUSE_PADDLE1_Y_LABEL_CAT_NL NULL
#define DICE_RETROMOUSE_PADDLE1_Y_INFO_0_NL NULL
#define DICE_RETROMOUSE_PADDLE2_X_LABEL_NL NULL
#define DICE_RETROMOUSE_PADDLE2_X_LABEL_CAT_NL NULL
#define DICE_RETROMOUSE_PADDLE2_X_INFO_0_NL NULL
#define DICE_RETROMOUSE_PADDLE2_Y_LABEL_NL NULL
#define DICE_RETROMOUSE_PADDLE2_Y_LABEL_CAT_NL NULL
#define DICE_RETROMOUSE_PADDLE2_Y_INFO_0_NL NULL
#define DICE_RETROMOUSE_PADDLE3_X_LABEL_NL NULL
#define DICE_RETROMOUSE_PADDLE3_X_LABEL_CAT_NL NULL
#define DICE_RETROMOUSE_PADDLE3_X_INFO_0_NL NULL
#define DICE_RETROMOUSE_PADDLE3_Y_LABEL_NL NULL
#define DICE_RETROMOUSE_PADDLE3_Y_LABEL_CAT_NL NULL
#define DICE_RETROMOUSE_PADDLE3_Y_INFO_0_NL NULL
#define DICE_MANYMOUSE_PADDLE0_LABEL_NL NULL
#define DICE_MANYMOUSE_PADDLE0_INFO_0_NL NULL
#define DICE_MANYMOUSE_PADDLE0_X_LABEL_NL NULL
#define DICE_MANYMOUSE_PADDLE0_X_LABEL_CAT_NL NULL
#define OPTION_VAL_0X_NL NULL
#define OPTION_VAL_0Y_NL NULL
#define OPTION_VAL_1X_NL NULL
#define OPTION_VAL_1Y_NL NULL
#define OPTION_VAL_2X_NL NULL
#define OPTION_VAL_2Y_NL NULL
#define OPTION_VAL_3X_NL NULL
#define OPTION_VAL_3Y_NL NULL
#define DICE_MANYMOUSE_PADDLE0_Y_LABEL_NL NULL
#define DICE_MANYMOUSE_PADDLE0_Y_LABEL_CAT_NL NULL
#define DICE_MANYMOUSE_PADDLE1_LABEL_NL NULL
#define DICE_MANYMOUSE_PADDLE1_INFO_0_NL NULL
#define DICE_MANYMOUSE_PADDLE1_X_LABEL_NL NULL
#define DICE_MANYMOUSE_PADDLE1_X_LABEL_CAT_NL NULL
#define DICE_MANYMOUSE_PADDLE1_Y_LABEL_NL NULL
#define DICE_MANYMOUSE_PADDLE1_Y_LABEL_CAT_NL NULL
#define DICE_MANYMOUSE_PADDLE2_LABEL_NL NULL
#define DICE_MANYMOUSE_PADDLE2_INFO_0_NL NULL
#define DICE_MANYMOUSE_PADDLE2_X_LABEL_NL NULL
#define DICE_MANYMOUSE_PADDLE2_X_LABEL_CAT_NL NULL
#define DICE_MANYMOUSE_PADDLE2_Y_LABEL_NL NULL
#define DICE_MANYMOUSE_PADDLE2_Y_LABEL_CAT_NL NULL
#define DICE_MANYMOUSE_PADDLE3_LABEL_NL NULL
#define DICE_MANYMOUSE_PADDLE3_INFO_0_NL NULL
#define DICE_MANYMOUSE_PADDLE3_X_LABEL_NL NULL
#define DICE_MANYMOUSE_PADDLE3_X_LABEL_CAT_NL NULL
#define DICE_MANYMOUSE_PADDLE3_Y_LABEL_NL NULL
#define DICE_MANYMOUSE_PADDLE3_Y_LABEL_CAT_NL NULL
#define DICE_DIPSWITCH_1_LABEL_NL NULL
#define DICE_DIPSWITCH_1_LABEL_CAT_NL NULL
#define DICE_DIPSWITCH_1_INFO_0_NL NULL
#define OPTION_VAL_1_NL NULL
#define DICE_DIPSWITCH_2_LABEL_NL NULL
#define DICE_DIPSWITCH_2_LABEL_CAT_NL NULL
#define DICE_DIPSWITCH_2_INFO_0_NL NULL
#define DICE_DIPSWITCH_3_LABEL_NL NULL
#define DICE_DIPSWITCH_3_LABEL_CAT_NL NULL
#define DICE_DIPSWITCH_3_INFO_0_NL NULL
#define DICE_DIPSWITCH16_1_LABEL_NL NULL
#define DICE_DIPSWITCH16_1_LABEL_CAT_NL NULL
#define DICE_DIPSWITCH16_1_INFO_0_NL NULL
#define DICE_DIPSWITCH16_2_LABEL_NL NULL
#define DICE_DIPSWITCH16_2_LABEL_CAT_NL NULL
#define DICE_DIPSWITCH16_2_INFO_0_NL NULL

struct retro_core_option_v2_category option_cats_nl[] = {
   {
      "input",
      CATEGORY_INPUT_LABEL_NL,
      CATEGORY_INPUT_INFO_0_NL
   },
   {
      "retromouse",
      CATEGORY_RETROMOUSE_LABEL_NL,
      CATEGORY_RETROMOUSE_INFO_0_NL
   },
#ifdef MANYMOUSE
   {
      "manymouse",
      CATEGORY_MANYMOUSE_LABEL_NL,
      CATEGORY_MANYMOUSE_INFO_0_NL
   },
#endif
   {
      "dipswitch",
      CATEGORY_DIPSWITCH_LABEL_NL,
      CATEGORY_DIPSWITCH_INFO_0_NL
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_nl[] = {
   {
      "dice_use_mouse_pointer_for_paddle_1",
      DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_LABEL_NL,
      DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_LABEL_CAT_NL,
      DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_INFO_0_NL,
      NULL,
      "input",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_paddle_joystick_absolute",
      DICE_PADDLE_JOYSTICK_ABSOLUTE_LABEL_NL,
      DICE_PADDLE_JOYSTICK_ABSOLUTE_LABEL_CAT_NL,
      DICE_PADDLE_JOYSTICK_ABSOLUTE_INFO_0_NL,
      NULL,
      "input",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      // D-pad but not necessarily keyboard under libretro,
      // that name comes from the upstream code.
      "dice_paddle_keyboard_sensitivity",
      DICE_PADDLE_KEYBOARD_SENSITIVITY_LABEL_NL,
      DICE_PADDLE_KEYBOARD_SENSITIVITY_LABEL_CAT_NL,
      DICE_PADDLE_KEYBOARD_SENSITIVITY_INFO_0_NL,
      NULL,
      "input",
      {
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "250"
   },
   {
      "dice_paddle_joystick_sensitivity",
      DICE_PADDLE_JOYSTICK_SENSITIVITY_LABEL_NL,
      DICE_PADDLE_JOYSTICK_SENSITIVITY_LABEL_CAT_NL,
      DICE_PADDLE_JOYSTICK_SENSITIVITY_INFO_0_NL,
      NULL,
      "input",
      {
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "500"
   },
   {
      "dice_retromouse_paddle_sensitivity",
      DICE_RETROMOUSE_PADDLE_SENSITIVITY_LABEL_NL,
      DICE_RETROMOUSE_PADDLE_SENSITIVITY_LABEL_CAT_NL,
      DICE_RETROMOUSE_PADDLE_SENSITIVITY_INFO_0_NL,
      NULL,
      "input",
      {
         {"25", NULL},
         {"50", NULL},
         {"75", NULL},
         {"100", NULL},
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "125"
   },
   {
      "dice_wheel_keyjoy_sensitivity",
      DICE_WHEEL_KEYJOY_SENSITIVITY_LABEL_NL,
      DICE_WHEEL_KEYJOY_SENSITIVITY_LABEL_CAT_NL,
      DICE_WHEEL_KEYJOY_SENSITIVITY_INFO_0_NL,
      NULL,
      "input",
      {
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "500"
   },
   {
      "dice_throttle_keyjoy_sensitivity",
      DICE_THROTTLE_KEYJOY_SENSITIVITY_LABEL_NL,
      DICE_THROTTLE_KEYJOY_SENSITIVITY_LABEL_CAT_NL,
      DICE_THROTTLE_KEYJOY_SENSITIVITY_INFO_0_NL,
      NULL,
      "input",
      {
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "250"
   },

   {
      "dice_retromouse_paddle0",
      DICE_RETROMOUSE_PADDLE0_LABEL_NL,
      DICE_RETROMOUSE_PADDLE0_LABEL_CAT_NL,
      DICE_RETROMOUSE_PADDLE0_INFO_0_NL,
      NULL,
      "retromouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_retromouse_paddle1",
      DICE_RETROMOUSE_PADDLE1_LABEL_NL,
      DICE_RETROMOUSE_PADDLE1_LABEL_CAT_NL,
      DICE_RETROMOUSE_PADDLE1_INFO_0_NL,
      NULL,
      "retromouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_retromouse_paddle2",
      DICE_RETROMOUSE_PADDLE2_LABEL_NL,
      DICE_RETROMOUSE_PADDLE2_LABEL_CAT_NL,
      DICE_RETROMOUSE_PADDLE2_INFO_0_NL,
      NULL,
      "retromouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_retromouse_paddle3",
      DICE_RETROMOUSE_PADDLE3_LABEL_NL,
      DICE_RETROMOUSE_PADDLE3_LABEL_CAT_NL,
      DICE_RETROMOUSE_PADDLE3_INFO_0_NL,
      NULL,
      "retromouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_retromouse_paddle0_x",
      DICE_RETROMOUSE_PADDLE0_X_LABEL_NL,
      DICE_RETROMOUSE_PADDLE0_X_LABEL_CAT_NL,
      DICE_RETROMOUSE_PADDLE0_X_INFO_0_NL,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_NL},
         {"y", OPTION_VAL_Y_NL},
         {NULL, NULL},
      },
      "x"
   },
   {
      "dice_retromouse_paddle0_y",
      DICE_RETROMOUSE_PADDLE0_Y_LABEL_NL,
      DICE_RETROMOUSE_PADDLE0_Y_LABEL_CAT_NL,
      DICE_RETROMOUSE_PADDLE0_Y_INFO_0_NL,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_NL},
         {"y", OPTION_VAL_Y_NL},
         {NULL, NULL},
      },
      "y"
   },
   {
      "dice_retromouse_paddle1_x",
      DICE_RETROMOUSE_PADDLE1_X_LABEL_NL,
      DICE_RETROMOUSE_PADDLE1_X_LABEL_CAT_NL,
      DICE_RETROMOUSE_PADDLE1_X_INFO_0_NL,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_NL},
         {"y", OPTION_VAL_Y_NL},
         {NULL, NULL},
      },
      "x"
   },
   {
      "dice_retromouse_paddle1_y",
      DICE_RETROMOUSE_PADDLE1_Y_LABEL_NL,
      DICE_RETROMOUSE_PADDLE1_Y_LABEL_CAT_NL,
      DICE_RETROMOUSE_PADDLE1_Y_INFO_0_NL,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_NL},
         {"y", OPTION_VAL_Y_NL},
         {NULL, NULL},
      },
      "y"
   },
   {
      "dice_retromouse_paddle2_x",
      DICE_RETROMOUSE_PADDLE2_X_LABEL_NL,
      DICE_RETROMOUSE_PADDLE2_X_LABEL_CAT_NL,
      DICE_RETROMOUSE_PADDLE2_X_INFO_0_NL,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_NL},
         {"y", OPTION_VAL_Y_NL},
         {NULL, NULL},
      },
      "x"
   },
   {
      "dice_retromouse_paddle2_y",
      DICE_RETROMOUSE_PADDLE2_Y_LABEL_NL,
      DICE_RETROMOUSE_PADDLE2_Y_LABEL_CAT_NL,
      DICE_RETROMOUSE_PADDLE2_Y_INFO_0_NL,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_NL},
         {"y", OPTION_VAL_Y_NL},
         {NULL, NULL},
      },
      "y"
   },
   {
      "dice_retromouse_paddle3_x",
      DICE_RETROMOUSE_PADDLE3_X_LABEL_NL,
      DICE_RETROMOUSE_PADDLE3_X_LABEL_CAT_NL,
      DICE_RETROMOUSE_PADDLE3_X_INFO_0_NL,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_NL},
         {"y", OPTION_VAL_Y_NL},
         {NULL, NULL},
      },
      "x"
   },
   {
      "dice_retromouse_paddle3_y",
      DICE_RETROMOUSE_PADDLE3_Y_LABEL_NL,
      DICE_RETROMOUSE_PADDLE3_Y_LABEL_CAT_NL,
      DICE_RETROMOUSE_PADDLE3_Y_INFO_0_NL,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_NL},
         {"y", OPTION_VAL_Y_NL},
         {NULL, NULL},
      },
      "y"
   },

#ifdef MANYMOUSE
   {
      "dice_manymouse_paddle0",
      DICE_MANYMOUSE_PADDLE0_LABEL_NL,
      DICE_RETROMOUSE_PADDLE0_LABEL_CAT_NL,
      DICE_MANYMOUSE_PADDLE0_INFO_0_NL,
      NULL,
      "manymouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_manymouse_paddle0_x",
      DICE_MANYMOUSE_PADDLE0_X_LABEL_NL,
      DICE_MANYMOUSE_PADDLE0_X_LABEL_CAT_NL,
      DICE_RETROMOUSE_PADDLE0_X_INFO_0_NL,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_NL},
         {"0y", OPTION_VAL_0Y_NL},
         {"1x", OPTION_VAL_1X_NL},
         {"1y", OPTION_VAL_1Y_NL},
         {"2x", OPTION_VAL_2X_NL},
         {"2y", OPTION_VAL_2Y_NL},
         {"3x", OPTION_VAL_3X_NL},
         {"3y", OPTION_VAL_3Y_NL},
         {NULL, NULL},
      },
      "0x"
   },
   {
      "dice_manymouse_paddle0_y",
      DICE_MANYMOUSE_PADDLE0_Y_LABEL_NL,
      DICE_MANYMOUSE_PADDLE0_Y_LABEL_CAT_NL,
      DICE_RETROMOUSE_PADDLE0_Y_INFO_0_NL,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_NL},
         {"0y", OPTION_VAL_0Y_NL},
         {"1x", OPTION_VAL_1X_NL},
         {"1y", OPTION_VAL_1Y_NL},
         {"2x", OPTION_VAL_2X_NL},
         {"2y", OPTION_VAL_2Y_NL},
         {"3x", OPTION_VAL_3X_NL},
         {"3y", OPTION_VAL_3Y_NL},
         {NULL, NULL},
      },
      "0y"
   },
   {
      "dice_manymouse_paddle1",
      DICE_MANYMOUSE_PADDLE1_LABEL_NL,
      DICE_RETROMOUSE_PADDLE1_LABEL_CAT_NL,
      DICE_MANYMOUSE_PADDLE1_INFO_0_NL,
      NULL,
      "manymouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_manymouse_paddle1_x",
      DICE_MANYMOUSE_PADDLE1_X_LABEL_NL,
      DICE_MANYMOUSE_PADDLE1_X_LABEL_CAT_NL,
      DICE_RETROMOUSE_PADDLE1_X_INFO_0_NL,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_NL},
         {"0y", OPTION_VAL_0Y_NL},
         {"1x", OPTION_VAL_1X_NL},
         {"1y", OPTION_VAL_1Y_NL},
         {"2x", OPTION_VAL_2X_NL},
         {"2y", OPTION_VAL_2Y_NL},
         {"3x", OPTION_VAL_3X_NL},
         {"3y", OPTION_VAL_3Y_NL},
         {NULL, NULL},
      },
      "1x"
   },
   {
      "dice_manymouse_paddle1_y",
      DICE_MANYMOUSE_PADDLE1_Y_LABEL_NL,
      DICE_MANYMOUSE_PADDLE1_Y_LABEL_CAT_NL,
      DICE_RETROMOUSE_PADDLE1_Y_INFO_0_NL,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_NL},
         {"0y", OPTION_VAL_0Y_NL},
         {"1x", OPTION_VAL_1X_NL},
         {"1y", OPTION_VAL_1Y_NL},
         {"2x", OPTION_VAL_2X_NL},
         {"2y", OPTION_VAL_2Y_NL},
         {"3x", OPTION_VAL_3X_NL},
         {"3y", OPTION_VAL_3Y_NL},
         {NULL, NULL},
      },
      "1y"
   },
   {
      "dice_manymouse_paddle2",
      DICE_MANYMOUSE_PADDLE2_LABEL_NL,
      DICE_RETROMOUSE_PADDLE2_LABEL_CAT_NL,
      DICE_MANYMOUSE_PADDLE2_INFO_0_NL,
      NULL,
      "manymouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_manymouse_paddle2_x",
      DICE_MANYMOUSE_PADDLE2_X_LABEL_NL,
      DICE_MANYMOUSE_PADDLE2_X_LABEL_CAT_NL,
      DICE_RETROMOUSE_PADDLE2_X_INFO_0_NL,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_NL},
         {"0y", OPTION_VAL_0Y_NL},
         {"1x", OPTION_VAL_1X_NL},
         {"1y", OPTION_VAL_1Y_NL},
         {"2x", OPTION_VAL_2X_NL},
         {"2y", OPTION_VAL_2Y_NL},
         {"3x", OPTION_VAL_3X_NL},
         {"3y", OPTION_VAL_3Y_NL},
         {NULL, NULL},
      },
      "2x"
   },
   {
      "dice_manymouse_paddle2_y",
      DICE_MANYMOUSE_PADDLE2_Y_LABEL_NL,
      DICE_MANYMOUSE_PADDLE2_Y_LABEL_CAT_NL,
      DICE_RETROMOUSE_PADDLE2_Y_INFO_0_NL,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_NL},
         {"0y", OPTION_VAL_0Y_NL},
         {"1x", OPTION_VAL_1X_NL},
         {"1y", OPTION_VAL_1Y_NL},
         {"2x", OPTION_VAL_2X_NL},
         {"2y", OPTION_VAL_2Y_NL},
         {"3x", OPTION_VAL_3X_NL},
         {"3y", OPTION_VAL_3Y_NL},
         {NULL, NULL},
      },
      "2y"
   },
   {
      "dice_manymouse_paddle3",
      DICE_MANYMOUSE_PADDLE3_LABEL_NL,
      DICE_RETROMOUSE_PADDLE3_LABEL_CAT_NL,
      DICE_MANYMOUSE_PADDLE3_INFO_0_NL,
      NULL,
      "manymouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_manymouse_paddle3_x",
      DICE_MANYMOUSE_PADDLE3_X_LABEL_NL,
      DICE_MANYMOUSE_PADDLE3_X_LABEL_CAT_NL,
      DICE_RETROMOUSE_PADDLE3_X_INFO_0_NL,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_NL},
         {"0y", OPTION_VAL_0Y_NL},
         {"1x", OPTION_VAL_1X_NL},
         {"1y", OPTION_VAL_1Y_NL},
         {"2x", OPTION_VAL_2X_NL},
         {"2y", OPTION_VAL_2Y_NL},
         {"3x", OPTION_VAL_3X_NL},
         {"3y", OPTION_VAL_3Y_NL},
         {NULL, NULL},
      },
      "3x"
   },
   {
      "dice_manymouse_paddle3_y",
      DICE_MANYMOUSE_PADDLE3_Y_LABEL_NL,
      DICE_MANYMOUSE_PADDLE3_Y_LABEL_CAT_NL,
      DICE_RETROMOUSE_PADDLE3_Y_INFO_0_NL,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_NL},
         {"0y", OPTION_VAL_0Y_NL},
         {"1x", OPTION_VAL_1X_NL},
         {"1y", OPTION_VAL_1Y_NL},
         {"2x", OPTION_VAL_2X_NL},
         {"2y", OPTION_VAL_2Y_NL},
         {"3x", OPTION_VAL_3X_NL},
         {"3y", OPTION_VAL_3Y_NL},
         {NULL, NULL},
      },
      "3y"
   },
#endif

   {
      "dice_dipswitch_1",
      DICE_DIPSWITCH_1_LABEL_NL,
      DICE_DIPSWITCH_1_LABEL_CAT_NL,
      DICE_DIPSWITCH_1_INFO_0_NL,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_NL},
         {"0", NULL},
         {"1", NULL},
         {NULL, NULL},
      },
      "-1"
   },
   {
      "dice_dipswitch_2",
      DICE_DIPSWITCH_2_LABEL_NL,
      DICE_DIPSWITCH_2_LABEL_CAT_NL,
      DICE_DIPSWITCH_2_INFO_0_NL,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_NL},
         {"0", NULL},
         {"1", NULL},
         {NULL, NULL},
      },
      "-1"
   },
   {
      "dice_dipswitch_3",
      DICE_DIPSWITCH_3_LABEL_NL,
      DICE_DIPSWITCH_3_LABEL_CAT_NL,
      DICE_DIPSWITCH_3_INFO_0_NL,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_NL},
         {"0", NULL},
         {"1", NULL},
         {NULL, NULL},
      },
      "-1"
   },
   {
      "dice_dipswitch16_1",
      DICE_DIPSWITCH16_1_LABEL_NL,
      DICE_DIPSWITCH16_1_LABEL_CAT_NL,
      DICE_DIPSWITCH16_1_INFO_0_NL,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_NL},
         {"0", NULL},
         {"1", NULL},
         {"2", NULL},
         {"3", NULL},
         {"4", NULL},
         {"5", NULL},
         {"6", NULL},
         {"7", NULL},
         {"8", NULL},
         {"9", NULL},
         {"10", NULL},
         {"11", NULL},
         {"12", NULL},
         {"13", NULL},
         {"14", NULL},
         {"15", NULL},
         {NULL, NULL},
      },
      "-1"
   },
   {
      "dice_dipswitch16_2",
      DICE_DIPSWITCH16_2_LABEL_NL,
      DICE_DIPSWITCH16_2_LABEL_CAT_NL,
      DICE_DIPSWITCH16_2_INFO_0_NL,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_NL},
         {"0", NULL},
         {"1", NULL},
         {"2", NULL},
         {"3", NULL},
         {"4", NULL},
         {"5", NULL},
         {"6", NULL},
         {"7", NULL},
         {"8", NULL},
         {"9", NULL},
         {"10", NULL},
         {"11", NULL},
         {"12", NULL},
         {"13", NULL},
         {"14", NULL},
         {"15", NULL},
         {NULL, NULL},
      },
      "-1"
   },

   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_nl = {
   option_cats_nl,
   option_defs_nl
};

/* RETRO_LANGUAGE_NO */

#define CATEGORY_INPUT_LABEL_NO "Inndata"
#define CATEGORY_INPUT_INFO_0_NO NULL
#define CATEGORY_RETROMOUSE_LABEL_NO NULL
#define CATEGORY_RETROMOUSE_INFO_0_NO NULL
#define CATEGORY_MANYMOUSE_LABEL_NO NULL
#define CATEGORY_MANYMOUSE_INFO_0_NO NULL
#define CATEGORY_DIPSWITCH_LABEL_NO NULL
#define CATEGORY_DIPSWITCH_INFO_0_NO NULL
#define DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_LABEL_NO NULL
#define DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_LABEL_CAT_NO NULL
#define DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_INFO_0_NO NULL
#define DICE_PADDLE_JOYSTICK_ABSOLUTE_LABEL_NO NULL
#define DICE_PADDLE_JOYSTICK_ABSOLUTE_LABEL_CAT_NO NULL
#define DICE_PADDLE_JOYSTICK_ABSOLUTE_INFO_0_NO NULL
#define DICE_PADDLE_KEYBOARD_SENSITIVITY_LABEL_NO NULL
#define DICE_PADDLE_KEYBOARD_SENSITIVITY_LABEL_CAT_NO NULL
#define DICE_PADDLE_KEYBOARD_SENSITIVITY_INFO_0_NO NULL
#define DICE_PADDLE_JOYSTICK_SENSITIVITY_LABEL_NO NULL
#define DICE_PADDLE_JOYSTICK_SENSITIVITY_LABEL_CAT_NO NULL
#define DICE_PADDLE_JOYSTICK_SENSITIVITY_INFO_0_NO NULL
#define DICE_RETROMOUSE_PADDLE_SENSITIVITY_LABEL_NO NULL
#define DICE_RETROMOUSE_PADDLE_SENSITIVITY_LABEL_CAT_NO NULL
#define DICE_RETROMOUSE_PADDLE_SENSITIVITY_INFO_0_NO NULL
#define DICE_WHEEL_KEYJOY_SENSITIVITY_LABEL_NO NULL
#define DICE_WHEEL_KEYJOY_SENSITIVITY_LABEL_CAT_NO NULL
#define DICE_WHEEL_KEYJOY_SENSITIVITY_INFO_0_NO NULL
#define DICE_THROTTLE_KEYJOY_SENSITIVITY_LABEL_NO NULL
#define DICE_THROTTLE_KEYJOY_SENSITIVITY_LABEL_CAT_NO NULL
#define DICE_THROTTLE_KEYJOY_SENSITIVITY_INFO_0_NO NULL
#define DICE_RETROMOUSE_PADDLE0_LABEL_NO NULL
#define DICE_RETROMOUSE_PADDLE0_LABEL_CAT_NO NULL
#define DICE_RETROMOUSE_PADDLE0_INFO_0_NO NULL
#define DICE_RETROMOUSE_PADDLE1_LABEL_NO NULL
#define DICE_RETROMOUSE_PADDLE1_LABEL_CAT_NO NULL
#define DICE_RETROMOUSE_PADDLE1_INFO_0_NO NULL
#define DICE_RETROMOUSE_PADDLE2_LABEL_NO NULL
#define DICE_RETROMOUSE_PADDLE2_LABEL_CAT_NO NULL
#define DICE_RETROMOUSE_PADDLE2_INFO_0_NO NULL
#define DICE_RETROMOUSE_PADDLE3_LABEL_NO NULL
#define DICE_RETROMOUSE_PADDLE3_LABEL_CAT_NO NULL
#define DICE_RETROMOUSE_PADDLE3_INFO_0_NO NULL
#define DICE_RETROMOUSE_PADDLE0_X_LABEL_NO NULL
#define DICE_RETROMOUSE_PADDLE0_X_LABEL_CAT_NO NULL
#define DICE_RETROMOUSE_PADDLE0_X_INFO_0_NO NULL
#define OPTION_VAL_X_NO NULL
#define OPTION_VAL_Y_NO NULL
#define DICE_RETROMOUSE_PADDLE0_Y_LABEL_NO NULL
#define DICE_RETROMOUSE_PADDLE0_Y_LABEL_CAT_NO NULL
#define DICE_RETROMOUSE_PADDLE0_Y_INFO_0_NO NULL
#define DICE_RETROMOUSE_PADDLE1_X_LABEL_NO NULL
#define DICE_RETROMOUSE_PADDLE1_X_LABEL_CAT_NO NULL
#define DICE_RETROMOUSE_PADDLE1_X_INFO_0_NO NULL
#define DICE_RETROMOUSE_PADDLE1_Y_LABEL_NO NULL
#define DICE_RETROMOUSE_PADDLE1_Y_LABEL_CAT_NO NULL
#define DICE_RETROMOUSE_PADDLE1_Y_INFO_0_NO NULL
#define DICE_RETROMOUSE_PADDLE2_X_LABEL_NO NULL
#define DICE_RETROMOUSE_PADDLE2_X_LABEL_CAT_NO NULL
#define DICE_RETROMOUSE_PADDLE2_X_INFO_0_NO NULL
#define DICE_RETROMOUSE_PADDLE2_Y_LABEL_NO NULL
#define DICE_RETROMOUSE_PADDLE2_Y_LABEL_CAT_NO NULL
#define DICE_RETROMOUSE_PADDLE2_Y_INFO_0_NO NULL
#define DICE_RETROMOUSE_PADDLE3_X_LABEL_NO NULL
#define DICE_RETROMOUSE_PADDLE3_X_LABEL_CAT_NO NULL
#define DICE_RETROMOUSE_PADDLE3_X_INFO_0_NO NULL
#define DICE_RETROMOUSE_PADDLE3_Y_LABEL_NO NULL
#define DICE_RETROMOUSE_PADDLE3_Y_LABEL_CAT_NO NULL
#define DICE_RETROMOUSE_PADDLE3_Y_INFO_0_NO NULL
#define DICE_MANYMOUSE_PADDLE0_LABEL_NO NULL
#define DICE_MANYMOUSE_PADDLE0_INFO_0_NO NULL
#define DICE_MANYMOUSE_PADDLE0_X_LABEL_NO NULL
#define DICE_MANYMOUSE_PADDLE0_X_LABEL_CAT_NO NULL
#define OPTION_VAL_0X_NO NULL
#define OPTION_VAL_0Y_NO NULL
#define OPTION_VAL_1X_NO NULL
#define OPTION_VAL_1Y_NO NULL
#define OPTION_VAL_2X_NO NULL
#define OPTION_VAL_2Y_NO NULL
#define OPTION_VAL_3X_NO NULL
#define OPTION_VAL_3Y_NO NULL
#define DICE_MANYMOUSE_PADDLE0_Y_LABEL_NO NULL
#define DICE_MANYMOUSE_PADDLE0_Y_LABEL_CAT_NO NULL
#define DICE_MANYMOUSE_PADDLE1_LABEL_NO NULL
#define DICE_MANYMOUSE_PADDLE1_INFO_0_NO NULL
#define DICE_MANYMOUSE_PADDLE1_X_LABEL_NO NULL
#define DICE_MANYMOUSE_PADDLE1_X_LABEL_CAT_NO NULL
#define DICE_MANYMOUSE_PADDLE1_Y_LABEL_NO NULL
#define DICE_MANYMOUSE_PADDLE1_Y_LABEL_CAT_NO NULL
#define DICE_MANYMOUSE_PADDLE2_LABEL_NO NULL
#define DICE_MANYMOUSE_PADDLE2_INFO_0_NO NULL
#define DICE_MANYMOUSE_PADDLE2_X_LABEL_NO NULL
#define DICE_MANYMOUSE_PADDLE2_X_LABEL_CAT_NO NULL
#define DICE_MANYMOUSE_PADDLE2_Y_LABEL_NO NULL
#define DICE_MANYMOUSE_PADDLE2_Y_LABEL_CAT_NO NULL
#define DICE_MANYMOUSE_PADDLE3_LABEL_NO NULL
#define DICE_MANYMOUSE_PADDLE3_INFO_0_NO NULL
#define DICE_MANYMOUSE_PADDLE3_X_LABEL_NO NULL
#define DICE_MANYMOUSE_PADDLE3_X_LABEL_CAT_NO NULL
#define DICE_MANYMOUSE_PADDLE3_Y_LABEL_NO NULL
#define DICE_MANYMOUSE_PADDLE3_Y_LABEL_CAT_NO NULL
#define DICE_DIPSWITCH_1_LABEL_NO NULL
#define DICE_DIPSWITCH_1_LABEL_CAT_NO NULL
#define DICE_DIPSWITCH_1_INFO_0_NO NULL
#define OPTION_VAL_1_NO NULL
#define DICE_DIPSWITCH_2_LABEL_NO NULL
#define DICE_DIPSWITCH_2_LABEL_CAT_NO NULL
#define DICE_DIPSWITCH_2_INFO_0_NO NULL
#define DICE_DIPSWITCH_3_LABEL_NO NULL
#define DICE_DIPSWITCH_3_LABEL_CAT_NO NULL
#define DICE_DIPSWITCH_3_INFO_0_NO NULL
#define DICE_DIPSWITCH16_1_LABEL_NO NULL
#define DICE_DIPSWITCH16_1_LABEL_CAT_NO NULL
#define DICE_DIPSWITCH16_1_INFO_0_NO NULL
#define DICE_DIPSWITCH16_2_LABEL_NO NULL
#define DICE_DIPSWITCH16_2_LABEL_CAT_NO NULL
#define DICE_DIPSWITCH16_2_INFO_0_NO NULL

struct retro_core_option_v2_category option_cats_no[] = {
   {
      "input",
      CATEGORY_INPUT_LABEL_NO,
      CATEGORY_INPUT_INFO_0_NO
   },
   {
      "retromouse",
      CATEGORY_RETROMOUSE_LABEL_NO,
      CATEGORY_RETROMOUSE_INFO_0_NO
   },
#ifdef MANYMOUSE
   {
      "manymouse",
      CATEGORY_MANYMOUSE_LABEL_NO,
      CATEGORY_MANYMOUSE_INFO_0_NO
   },
#endif
   {
      "dipswitch",
      CATEGORY_DIPSWITCH_LABEL_NO,
      CATEGORY_DIPSWITCH_INFO_0_NO
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_no[] = {
   {
      "dice_use_mouse_pointer_for_paddle_1",
      DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_LABEL_NO,
      DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_LABEL_CAT_NO,
      DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_INFO_0_NO,
      NULL,
      "input",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_paddle_joystick_absolute",
      DICE_PADDLE_JOYSTICK_ABSOLUTE_LABEL_NO,
      DICE_PADDLE_JOYSTICK_ABSOLUTE_LABEL_CAT_NO,
      DICE_PADDLE_JOYSTICK_ABSOLUTE_INFO_0_NO,
      NULL,
      "input",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      // D-pad but not necessarily keyboard under libretro,
      // that name comes from the upstream code.
      "dice_paddle_keyboard_sensitivity",
      DICE_PADDLE_KEYBOARD_SENSITIVITY_LABEL_NO,
      DICE_PADDLE_KEYBOARD_SENSITIVITY_LABEL_CAT_NO,
      DICE_PADDLE_KEYBOARD_SENSITIVITY_INFO_0_NO,
      NULL,
      "input",
      {
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "250"
   },
   {
      "dice_paddle_joystick_sensitivity",
      DICE_PADDLE_JOYSTICK_SENSITIVITY_LABEL_NO,
      DICE_PADDLE_JOYSTICK_SENSITIVITY_LABEL_CAT_NO,
      DICE_PADDLE_JOYSTICK_SENSITIVITY_INFO_0_NO,
      NULL,
      "input",
      {
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "500"
   },
   {
      "dice_retromouse_paddle_sensitivity",
      DICE_RETROMOUSE_PADDLE_SENSITIVITY_LABEL_NO,
      DICE_RETROMOUSE_PADDLE_SENSITIVITY_LABEL_CAT_NO,
      DICE_RETROMOUSE_PADDLE_SENSITIVITY_INFO_0_NO,
      NULL,
      "input",
      {
         {"25", NULL},
         {"50", NULL},
         {"75", NULL},
         {"100", NULL},
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "125"
   },
   {
      "dice_wheel_keyjoy_sensitivity",
      DICE_WHEEL_KEYJOY_SENSITIVITY_LABEL_NO,
      DICE_WHEEL_KEYJOY_SENSITIVITY_LABEL_CAT_NO,
      DICE_WHEEL_KEYJOY_SENSITIVITY_INFO_0_NO,
      NULL,
      "input",
      {
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "500"
   },
   {
      "dice_throttle_keyjoy_sensitivity",
      DICE_THROTTLE_KEYJOY_SENSITIVITY_LABEL_NO,
      DICE_THROTTLE_KEYJOY_SENSITIVITY_LABEL_CAT_NO,
      DICE_THROTTLE_KEYJOY_SENSITIVITY_INFO_0_NO,
      NULL,
      "input",
      {
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "250"
   },

   {
      "dice_retromouse_paddle0",
      DICE_RETROMOUSE_PADDLE0_LABEL_NO,
      DICE_RETROMOUSE_PADDLE0_LABEL_CAT_NO,
      DICE_RETROMOUSE_PADDLE0_INFO_0_NO,
      NULL,
      "retromouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_retromouse_paddle1",
      DICE_RETROMOUSE_PADDLE1_LABEL_NO,
      DICE_RETROMOUSE_PADDLE1_LABEL_CAT_NO,
      DICE_RETROMOUSE_PADDLE1_INFO_0_NO,
      NULL,
      "retromouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_retromouse_paddle2",
      DICE_RETROMOUSE_PADDLE2_LABEL_NO,
      DICE_RETROMOUSE_PADDLE2_LABEL_CAT_NO,
      DICE_RETROMOUSE_PADDLE2_INFO_0_NO,
      NULL,
      "retromouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_retromouse_paddle3",
      DICE_RETROMOUSE_PADDLE3_LABEL_NO,
      DICE_RETROMOUSE_PADDLE3_LABEL_CAT_NO,
      DICE_RETROMOUSE_PADDLE3_INFO_0_NO,
      NULL,
      "retromouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_retromouse_paddle0_x",
      DICE_RETROMOUSE_PADDLE0_X_LABEL_NO,
      DICE_RETROMOUSE_PADDLE0_X_LABEL_CAT_NO,
      DICE_RETROMOUSE_PADDLE0_X_INFO_0_NO,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_NO},
         {"y", OPTION_VAL_Y_NO},
         {NULL, NULL},
      },
      "x"
   },
   {
      "dice_retromouse_paddle0_y",
      DICE_RETROMOUSE_PADDLE0_Y_LABEL_NO,
      DICE_RETROMOUSE_PADDLE0_Y_LABEL_CAT_NO,
      DICE_RETROMOUSE_PADDLE0_Y_INFO_0_NO,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_NO},
         {"y", OPTION_VAL_Y_NO},
         {NULL, NULL},
      },
      "y"
   },
   {
      "dice_retromouse_paddle1_x",
      DICE_RETROMOUSE_PADDLE1_X_LABEL_NO,
      DICE_RETROMOUSE_PADDLE1_X_LABEL_CAT_NO,
      DICE_RETROMOUSE_PADDLE1_X_INFO_0_NO,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_NO},
         {"y", OPTION_VAL_Y_NO},
         {NULL, NULL},
      },
      "x"
   },
   {
      "dice_retromouse_paddle1_y",
      DICE_RETROMOUSE_PADDLE1_Y_LABEL_NO,
      DICE_RETROMOUSE_PADDLE1_Y_LABEL_CAT_NO,
      DICE_RETROMOUSE_PADDLE1_Y_INFO_0_NO,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_NO},
         {"y", OPTION_VAL_Y_NO},
         {NULL, NULL},
      },
      "y"
   },
   {
      "dice_retromouse_paddle2_x",
      DICE_RETROMOUSE_PADDLE2_X_LABEL_NO,
      DICE_RETROMOUSE_PADDLE2_X_LABEL_CAT_NO,
      DICE_RETROMOUSE_PADDLE2_X_INFO_0_NO,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_NO},
         {"y", OPTION_VAL_Y_NO},
         {NULL, NULL},
      },
      "x"
   },
   {
      "dice_retromouse_paddle2_y",
      DICE_RETROMOUSE_PADDLE2_Y_LABEL_NO,
      DICE_RETROMOUSE_PADDLE2_Y_LABEL_CAT_NO,
      DICE_RETROMOUSE_PADDLE2_Y_INFO_0_NO,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_NO},
         {"y", OPTION_VAL_Y_NO},
         {NULL, NULL},
      },
      "y"
   },
   {
      "dice_retromouse_paddle3_x",
      DICE_RETROMOUSE_PADDLE3_X_LABEL_NO,
      DICE_RETROMOUSE_PADDLE3_X_LABEL_CAT_NO,
      DICE_RETROMOUSE_PADDLE3_X_INFO_0_NO,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_NO},
         {"y", OPTION_VAL_Y_NO},
         {NULL, NULL},
      },
      "x"
   },
   {
      "dice_retromouse_paddle3_y",
      DICE_RETROMOUSE_PADDLE3_Y_LABEL_NO,
      DICE_RETROMOUSE_PADDLE3_Y_LABEL_CAT_NO,
      DICE_RETROMOUSE_PADDLE3_Y_INFO_0_NO,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_NO},
         {"y", OPTION_VAL_Y_NO},
         {NULL, NULL},
      },
      "y"
   },

#ifdef MANYMOUSE
   {
      "dice_manymouse_paddle0",
      DICE_MANYMOUSE_PADDLE0_LABEL_NO,
      DICE_RETROMOUSE_PADDLE0_LABEL_CAT_NO,
      DICE_MANYMOUSE_PADDLE0_INFO_0_NO,
      NULL,
      "manymouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_manymouse_paddle0_x",
      DICE_MANYMOUSE_PADDLE0_X_LABEL_NO,
      DICE_MANYMOUSE_PADDLE0_X_LABEL_CAT_NO,
      DICE_RETROMOUSE_PADDLE0_X_INFO_0_NO,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_NO},
         {"0y", OPTION_VAL_0Y_NO},
         {"1x", OPTION_VAL_1X_NO},
         {"1y", OPTION_VAL_1Y_NO},
         {"2x", OPTION_VAL_2X_NO},
         {"2y", OPTION_VAL_2Y_NO},
         {"3x", OPTION_VAL_3X_NO},
         {"3y", OPTION_VAL_3Y_NO},
         {NULL, NULL},
      },
      "0x"
   },
   {
      "dice_manymouse_paddle0_y",
      DICE_MANYMOUSE_PADDLE0_Y_LABEL_NO,
      DICE_MANYMOUSE_PADDLE0_Y_LABEL_CAT_NO,
      DICE_RETROMOUSE_PADDLE0_Y_INFO_0_NO,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_NO},
         {"0y", OPTION_VAL_0Y_NO},
         {"1x", OPTION_VAL_1X_NO},
         {"1y", OPTION_VAL_1Y_NO},
         {"2x", OPTION_VAL_2X_NO},
         {"2y", OPTION_VAL_2Y_NO},
         {"3x", OPTION_VAL_3X_NO},
         {"3y", OPTION_VAL_3Y_NO},
         {NULL, NULL},
      },
      "0y"
   },
   {
      "dice_manymouse_paddle1",
      DICE_MANYMOUSE_PADDLE1_LABEL_NO,
      DICE_RETROMOUSE_PADDLE1_LABEL_CAT_NO,
      DICE_MANYMOUSE_PADDLE1_INFO_0_NO,
      NULL,
      "manymouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_manymouse_paddle1_x",
      DICE_MANYMOUSE_PADDLE1_X_LABEL_NO,
      DICE_MANYMOUSE_PADDLE1_X_LABEL_CAT_NO,
      DICE_RETROMOUSE_PADDLE1_X_INFO_0_NO,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_NO},
         {"0y", OPTION_VAL_0Y_NO},
         {"1x", OPTION_VAL_1X_NO},
         {"1y", OPTION_VAL_1Y_NO},
         {"2x", OPTION_VAL_2X_NO},
         {"2y", OPTION_VAL_2Y_NO},
         {"3x", OPTION_VAL_3X_NO},
         {"3y", OPTION_VAL_3Y_NO},
         {NULL, NULL},
      },
      "1x"
   },
   {
      "dice_manymouse_paddle1_y",
      DICE_MANYMOUSE_PADDLE1_Y_LABEL_NO,
      DICE_MANYMOUSE_PADDLE1_Y_LABEL_CAT_NO,
      DICE_RETROMOUSE_PADDLE1_Y_INFO_0_NO,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_NO},
         {"0y", OPTION_VAL_0Y_NO},
         {"1x", OPTION_VAL_1X_NO},
         {"1y", OPTION_VAL_1Y_NO},
         {"2x", OPTION_VAL_2X_NO},
         {"2y", OPTION_VAL_2Y_NO},
         {"3x", OPTION_VAL_3X_NO},
         {"3y", OPTION_VAL_3Y_NO},
         {NULL, NULL},
      },
      "1y"
   },
   {
      "dice_manymouse_paddle2",
      DICE_MANYMOUSE_PADDLE2_LABEL_NO,
      DICE_RETROMOUSE_PADDLE2_LABEL_CAT_NO,
      DICE_MANYMOUSE_PADDLE2_INFO_0_NO,
      NULL,
      "manymouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_manymouse_paddle2_x",
      DICE_MANYMOUSE_PADDLE2_X_LABEL_NO,
      DICE_MANYMOUSE_PADDLE2_X_LABEL_CAT_NO,
      DICE_RETROMOUSE_PADDLE2_X_INFO_0_NO,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_NO},
         {"0y", OPTION_VAL_0Y_NO},
         {"1x", OPTION_VAL_1X_NO},
         {"1y", OPTION_VAL_1Y_NO},
         {"2x", OPTION_VAL_2X_NO},
         {"2y", OPTION_VAL_2Y_NO},
         {"3x", OPTION_VAL_3X_NO},
         {"3y", OPTION_VAL_3Y_NO},
         {NULL, NULL},
      },
      "2x"
   },
   {
      "dice_manymouse_paddle2_y",
      DICE_MANYMOUSE_PADDLE2_Y_LABEL_NO,
      DICE_MANYMOUSE_PADDLE2_Y_LABEL_CAT_NO,
      DICE_RETROMOUSE_PADDLE2_Y_INFO_0_NO,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_NO},
         {"0y", OPTION_VAL_0Y_NO},
         {"1x", OPTION_VAL_1X_NO},
         {"1y", OPTION_VAL_1Y_NO},
         {"2x", OPTION_VAL_2X_NO},
         {"2y", OPTION_VAL_2Y_NO},
         {"3x", OPTION_VAL_3X_NO},
         {"3y", OPTION_VAL_3Y_NO},
         {NULL, NULL},
      },
      "2y"
   },
   {
      "dice_manymouse_paddle3",
      DICE_MANYMOUSE_PADDLE3_LABEL_NO,
      DICE_RETROMOUSE_PADDLE3_LABEL_CAT_NO,
      DICE_MANYMOUSE_PADDLE3_INFO_0_NO,
      NULL,
      "manymouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_manymouse_paddle3_x",
      DICE_MANYMOUSE_PADDLE3_X_LABEL_NO,
      DICE_MANYMOUSE_PADDLE3_X_LABEL_CAT_NO,
      DICE_RETROMOUSE_PADDLE3_X_INFO_0_NO,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_NO},
         {"0y", OPTION_VAL_0Y_NO},
         {"1x", OPTION_VAL_1X_NO},
         {"1y", OPTION_VAL_1Y_NO},
         {"2x", OPTION_VAL_2X_NO},
         {"2y", OPTION_VAL_2Y_NO},
         {"3x", OPTION_VAL_3X_NO},
         {"3y", OPTION_VAL_3Y_NO},
         {NULL, NULL},
      },
      "3x"
   },
   {
      "dice_manymouse_paddle3_y",
      DICE_MANYMOUSE_PADDLE3_Y_LABEL_NO,
      DICE_MANYMOUSE_PADDLE3_Y_LABEL_CAT_NO,
      DICE_RETROMOUSE_PADDLE3_Y_INFO_0_NO,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_NO},
         {"0y", OPTION_VAL_0Y_NO},
         {"1x", OPTION_VAL_1X_NO},
         {"1y", OPTION_VAL_1Y_NO},
         {"2x", OPTION_VAL_2X_NO},
         {"2y", OPTION_VAL_2Y_NO},
         {"3x", OPTION_VAL_3X_NO},
         {"3y", OPTION_VAL_3Y_NO},
         {NULL, NULL},
      },
      "3y"
   },
#endif

   {
      "dice_dipswitch_1",
      DICE_DIPSWITCH_1_LABEL_NO,
      DICE_DIPSWITCH_1_LABEL_CAT_NO,
      DICE_DIPSWITCH_1_INFO_0_NO,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_NO},
         {"0", NULL},
         {"1", NULL},
         {NULL, NULL},
      },
      "-1"
   },
   {
      "dice_dipswitch_2",
      DICE_DIPSWITCH_2_LABEL_NO,
      DICE_DIPSWITCH_2_LABEL_CAT_NO,
      DICE_DIPSWITCH_2_INFO_0_NO,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_NO},
         {"0", NULL},
         {"1", NULL},
         {NULL, NULL},
      },
      "-1"
   },
   {
      "dice_dipswitch_3",
      DICE_DIPSWITCH_3_LABEL_NO,
      DICE_DIPSWITCH_3_LABEL_CAT_NO,
      DICE_DIPSWITCH_3_INFO_0_NO,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_NO},
         {"0", NULL},
         {"1", NULL},
         {NULL, NULL},
      },
      "-1"
   },
   {
      "dice_dipswitch16_1",
      DICE_DIPSWITCH16_1_LABEL_NO,
      DICE_DIPSWITCH16_1_LABEL_CAT_NO,
      DICE_DIPSWITCH16_1_INFO_0_NO,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_NO},
         {"0", NULL},
         {"1", NULL},
         {"2", NULL},
         {"3", NULL},
         {"4", NULL},
         {"5", NULL},
         {"6", NULL},
         {"7", NULL},
         {"8", NULL},
         {"9", NULL},
         {"10", NULL},
         {"11", NULL},
         {"12", NULL},
         {"13", NULL},
         {"14", NULL},
         {"15", NULL},
         {NULL, NULL},
      },
      "-1"
   },
   {
      "dice_dipswitch16_2",
      DICE_DIPSWITCH16_2_LABEL_NO,
      DICE_DIPSWITCH16_2_LABEL_CAT_NO,
      DICE_DIPSWITCH16_2_INFO_0_NO,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_NO},
         {"0", NULL},
         {"1", NULL},
         {"2", NULL},
         {"3", NULL},
         {"4", NULL},
         {"5", NULL},
         {"6", NULL},
         {"7", NULL},
         {"8", NULL},
         {"9", NULL},
         {"10", NULL},
         {"11", NULL},
         {"12", NULL},
         {"13", NULL},
         {"14", NULL},
         {"15", NULL},
         {NULL, NULL},
      },
      "-1"
   },

   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_no = {
   option_cats_no,
   option_defs_no
};

/* RETRO_LANGUAGE_OR */

#define CATEGORY_INPUT_LABEL_OR NULL
#define CATEGORY_INPUT_INFO_0_OR NULL
#define CATEGORY_RETROMOUSE_LABEL_OR NULL
#define CATEGORY_RETROMOUSE_INFO_0_OR NULL
#define CATEGORY_MANYMOUSE_LABEL_OR NULL
#define CATEGORY_MANYMOUSE_INFO_0_OR NULL
#define CATEGORY_DIPSWITCH_LABEL_OR NULL
#define CATEGORY_DIPSWITCH_INFO_0_OR NULL
#define DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_LABEL_OR NULL
#define DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_LABEL_CAT_OR NULL
#define DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_INFO_0_OR NULL
#define DICE_PADDLE_JOYSTICK_ABSOLUTE_LABEL_OR NULL
#define DICE_PADDLE_JOYSTICK_ABSOLUTE_LABEL_CAT_OR NULL
#define DICE_PADDLE_JOYSTICK_ABSOLUTE_INFO_0_OR NULL
#define DICE_PADDLE_KEYBOARD_SENSITIVITY_LABEL_OR NULL
#define DICE_PADDLE_KEYBOARD_SENSITIVITY_LABEL_CAT_OR NULL
#define DICE_PADDLE_KEYBOARD_SENSITIVITY_INFO_0_OR NULL
#define DICE_PADDLE_JOYSTICK_SENSITIVITY_LABEL_OR NULL
#define DICE_PADDLE_JOYSTICK_SENSITIVITY_LABEL_CAT_OR NULL
#define DICE_PADDLE_JOYSTICK_SENSITIVITY_INFO_0_OR NULL
#define DICE_RETROMOUSE_PADDLE_SENSITIVITY_LABEL_OR NULL
#define DICE_RETROMOUSE_PADDLE_SENSITIVITY_LABEL_CAT_OR NULL
#define DICE_RETROMOUSE_PADDLE_SENSITIVITY_INFO_0_OR NULL
#define DICE_WHEEL_KEYJOY_SENSITIVITY_LABEL_OR NULL
#define DICE_WHEEL_KEYJOY_SENSITIVITY_LABEL_CAT_OR NULL
#define DICE_WHEEL_KEYJOY_SENSITIVITY_INFO_0_OR NULL
#define DICE_THROTTLE_KEYJOY_SENSITIVITY_LABEL_OR NULL
#define DICE_THROTTLE_KEYJOY_SENSITIVITY_LABEL_CAT_OR NULL
#define DICE_THROTTLE_KEYJOY_SENSITIVITY_INFO_0_OR NULL
#define DICE_RETROMOUSE_PADDLE0_LABEL_OR NULL
#define DICE_RETROMOUSE_PADDLE0_LABEL_CAT_OR NULL
#define DICE_RETROMOUSE_PADDLE0_INFO_0_OR NULL
#define DICE_RETROMOUSE_PADDLE1_LABEL_OR NULL
#define DICE_RETROMOUSE_PADDLE1_LABEL_CAT_OR NULL
#define DICE_RETROMOUSE_PADDLE1_INFO_0_OR NULL
#define DICE_RETROMOUSE_PADDLE2_LABEL_OR NULL
#define DICE_RETROMOUSE_PADDLE2_LABEL_CAT_OR NULL
#define DICE_RETROMOUSE_PADDLE2_INFO_0_OR NULL
#define DICE_RETROMOUSE_PADDLE3_LABEL_OR NULL
#define DICE_RETROMOUSE_PADDLE3_LABEL_CAT_OR NULL
#define DICE_RETROMOUSE_PADDLE3_INFO_0_OR NULL
#define DICE_RETROMOUSE_PADDLE0_X_LABEL_OR NULL
#define DICE_RETROMOUSE_PADDLE0_X_LABEL_CAT_OR NULL
#define DICE_RETROMOUSE_PADDLE0_X_INFO_0_OR NULL
#define OPTION_VAL_X_OR NULL
#define OPTION_VAL_Y_OR NULL
#define DICE_RETROMOUSE_PADDLE0_Y_LABEL_OR NULL
#define DICE_RETROMOUSE_PADDLE0_Y_LABEL_CAT_OR NULL
#define DICE_RETROMOUSE_PADDLE0_Y_INFO_0_OR NULL
#define DICE_RETROMOUSE_PADDLE1_X_LABEL_OR NULL
#define DICE_RETROMOUSE_PADDLE1_X_LABEL_CAT_OR NULL
#define DICE_RETROMOUSE_PADDLE1_X_INFO_0_OR NULL
#define DICE_RETROMOUSE_PADDLE1_Y_LABEL_OR NULL
#define DICE_RETROMOUSE_PADDLE1_Y_LABEL_CAT_OR NULL
#define DICE_RETROMOUSE_PADDLE1_Y_INFO_0_OR NULL
#define DICE_RETROMOUSE_PADDLE2_X_LABEL_OR NULL
#define DICE_RETROMOUSE_PADDLE2_X_LABEL_CAT_OR NULL
#define DICE_RETROMOUSE_PADDLE2_X_INFO_0_OR NULL
#define DICE_RETROMOUSE_PADDLE2_Y_LABEL_OR NULL
#define DICE_RETROMOUSE_PADDLE2_Y_LABEL_CAT_OR NULL
#define DICE_RETROMOUSE_PADDLE2_Y_INFO_0_OR NULL
#define DICE_RETROMOUSE_PADDLE3_X_LABEL_OR NULL
#define DICE_RETROMOUSE_PADDLE3_X_LABEL_CAT_OR NULL
#define DICE_RETROMOUSE_PADDLE3_X_INFO_0_OR NULL
#define DICE_RETROMOUSE_PADDLE3_Y_LABEL_OR NULL
#define DICE_RETROMOUSE_PADDLE3_Y_LABEL_CAT_OR NULL
#define DICE_RETROMOUSE_PADDLE3_Y_INFO_0_OR NULL
#define DICE_MANYMOUSE_PADDLE0_LABEL_OR NULL
#define DICE_MANYMOUSE_PADDLE0_INFO_0_OR NULL
#define DICE_MANYMOUSE_PADDLE0_X_LABEL_OR NULL
#define DICE_MANYMOUSE_PADDLE0_X_LABEL_CAT_OR NULL
#define OPTION_VAL_0X_OR NULL
#define OPTION_VAL_0Y_OR NULL
#define OPTION_VAL_1X_OR NULL
#define OPTION_VAL_1Y_OR NULL
#define OPTION_VAL_2X_OR NULL
#define OPTION_VAL_2Y_OR NULL
#define OPTION_VAL_3X_OR NULL
#define OPTION_VAL_3Y_OR NULL
#define DICE_MANYMOUSE_PADDLE0_Y_LABEL_OR NULL
#define DICE_MANYMOUSE_PADDLE0_Y_LABEL_CAT_OR NULL
#define DICE_MANYMOUSE_PADDLE1_LABEL_OR NULL
#define DICE_MANYMOUSE_PADDLE1_INFO_0_OR NULL
#define DICE_MANYMOUSE_PADDLE1_X_LABEL_OR NULL
#define DICE_MANYMOUSE_PADDLE1_X_LABEL_CAT_OR NULL
#define DICE_MANYMOUSE_PADDLE1_Y_LABEL_OR NULL
#define DICE_MANYMOUSE_PADDLE1_Y_LABEL_CAT_OR NULL
#define DICE_MANYMOUSE_PADDLE2_LABEL_OR NULL
#define DICE_MANYMOUSE_PADDLE2_INFO_0_OR NULL
#define DICE_MANYMOUSE_PADDLE2_X_LABEL_OR NULL
#define DICE_MANYMOUSE_PADDLE2_X_LABEL_CAT_OR NULL
#define DICE_MANYMOUSE_PADDLE2_Y_LABEL_OR NULL
#define DICE_MANYMOUSE_PADDLE2_Y_LABEL_CAT_OR NULL
#define DICE_MANYMOUSE_PADDLE3_LABEL_OR NULL
#define DICE_MANYMOUSE_PADDLE3_INFO_0_OR NULL
#define DICE_MANYMOUSE_PADDLE3_X_LABEL_OR NULL
#define DICE_MANYMOUSE_PADDLE3_X_LABEL_CAT_OR NULL
#define DICE_MANYMOUSE_PADDLE3_Y_LABEL_OR NULL
#define DICE_MANYMOUSE_PADDLE3_Y_LABEL_CAT_OR NULL
#define DICE_DIPSWITCH_1_LABEL_OR NULL
#define DICE_DIPSWITCH_1_LABEL_CAT_OR NULL
#define DICE_DIPSWITCH_1_INFO_0_OR NULL
#define OPTION_VAL_1_OR NULL
#define DICE_DIPSWITCH_2_LABEL_OR NULL
#define DICE_DIPSWITCH_2_LABEL_CAT_OR NULL
#define DICE_DIPSWITCH_2_INFO_0_OR NULL
#define DICE_DIPSWITCH_3_LABEL_OR NULL
#define DICE_DIPSWITCH_3_LABEL_CAT_OR NULL
#define DICE_DIPSWITCH_3_INFO_0_OR NULL
#define DICE_DIPSWITCH16_1_LABEL_OR NULL
#define DICE_DIPSWITCH16_1_LABEL_CAT_OR NULL
#define DICE_DIPSWITCH16_1_INFO_0_OR NULL
#define DICE_DIPSWITCH16_2_LABEL_OR NULL
#define DICE_DIPSWITCH16_2_LABEL_CAT_OR NULL
#define DICE_DIPSWITCH16_2_INFO_0_OR NULL

struct retro_core_option_v2_category option_cats_or[] = {
   {
      "input",
      CATEGORY_INPUT_LABEL_OR,
      CATEGORY_INPUT_INFO_0_OR
   },
   {
      "retromouse",
      CATEGORY_RETROMOUSE_LABEL_OR,
      CATEGORY_RETROMOUSE_INFO_0_OR
   },
#ifdef MANYMOUSE
   {
      "manymouse",
      CATEGORY_MANYMOUSE_LABEL_OR,
      CATEGORY_MANYMOUSE_INFO_0_OR
   },
#endif
   {
      "dipswitch",
      CATEGORY_DIPSWITCH_LABEL_OR,
      CATEGORY_DIPSWITCH_INFO_0_OR
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_or[] = {
   {
      "dice_use_mouse_pointer_for_paddle_1",
      DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_LABEL_OR,
      DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_LABEL_CAT_OR,
      DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_INFO_0_OR,
      NULL,
      "input",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_paddle_joystick_absolute",
      DICE_PADDLE_JOYSTICK_ABSOLUTE_LABEL_OR,
      DICE_PADDLE_JOYSTICK_ABSOLUTE_LABEL_CAT_OR,
      DICE_PADDLE_JOYSTICK_ABSOLUTE_INFO_0_OR,
      NULL,
      "input",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      // D-pad but not necessarily keyboard under libretro,
      // that name comes from the upstream code.
      "dice_paddle_keyboard_sensitivity",
      DICE_PADDLE_KEYBOARD_SENSITIVITY_LABEL_OR,
      DICE_PADDLE_KEYBOARD_SENSITIVITY_LABEL_CAT_OR,
      DICE_PADDLE_KEYBOARD_SENSITIVITY_INFO_0_OR,
      NULL,
      "input",
      {
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "250"
   },
   {
      "dice_paddle_joystick_sensitivity",
      DICE_PADDLE_JOYSTICK_SENSITIVITY_LABEL_OR,
      DICE_PADDLE_JOYSTICK_SENSITIVITY_LABEL_CAT_OR,
      DICE_PADDLE_JOYSTICK_SENSITIVITY_INFO_0_OR,
      NULL,
      "input",
      {
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "500"
   },
   {
      "dice_retromouse_paddle_sensitivity",
      DICE_RETROMOUSE_PADDLE_SENSITIVITY_LABEL_OR,
      DICE_RETROMOUSE_PADDLE_SENSITIVITY_LABEL_CAT_OR,
      DICE_RETROMOUSE_PADDLE_SENSITIVITY_INFO_0_OR,
      NULL,
      "input",
      {
         {"25", NULL},
         {"50", NULL},
         {"75", NULL},
         {"100", NULL},
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "125"
   },
   {
      "dice_wheel_keyjoy_sensitivity",
      DICE_WHEEL_KEYJOY_SENSITIVITY_LABEL_OR,
      DICE_WHEEL_KEYJOY_SENSITIVITY_LABEL_CAT_OR,
      DICE_WHEEL_KEYJOY_SENSITIVITY_INFO_0_OR,
      NULL,
      "input",
      {
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "500"
   },
   {
      "dice_throttle_keyjoy_sensitivity",
      DICE_THROTTLE_KEYJOY_SENSITIVITY_LABEL_OR,
      DICE_THROTTLE_KEYJOY_SENSITIVITY_LABEL_CAT_OR,
      DICE_THROTTLE_KEYJOY_SENSITIVITY_INFO_0_OR,
      NULL,
      "input",
      {
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "250"
   },

   {
      "dice_retromouse_paddle0",
      DICE_RETROMOUSE_PADDLE0_LABEL_OR,
      DICE_RETROMOUSE_PADDLE0_LABEL_CAT_OR,
      DICE_RETROMOUSE_PADDLE0_INFO_0_OR,
      NULL,
      "retromouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_retromouse_paddle1",
      DICE_RETROMOUSE_PADDLE1_LABEL_OR,
      DICE_RETROMOUSE_PADDLE1_LABEL_CAT_OR,
      DICE_RETROMOUSE_PADDLE1_INFO_0_OR,
      NULL,
      "retromouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_retromouse_paddle2",
      DICE_RETROMOUSE_PADDLE2_LABEL_OR,
      DICE_RETROMOUSE_PADDLE2_LABEL_CAT_OR,
      DICE_RETROMOUSE_PADDLE2_INFO_0_OR,
      NULL,
      "retromouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_retromouse_paddle3",
      DICE_RETROMOUSE_PADDLE3_LABEL_OR,
      DICE_RETROMOUSE_PADDLE3_LABEL_CAT_OR,
      DICE_RETROMOUSE_PADDLE3_INFO_0_OR,
      NULL,
      "retromouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_retromouse_paddle0_x",
      DICE_RETROMOUSE_PADDLE0_X_LABEL_OR,
      DICE_RETROMOUSE_PADDLE0_X_LABEL_CAT_OR,
      DICE_RETROMOUSE_PADDLE0_X_INFO_0_OR,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_OR},
         {"y", OPTION_VAL_Y_OR},
         {NULL, NULL},
      },
      "x"
   },
   {
      "dice_retromouse_paddle0_y",
      DICE_RETROMOUSE_PADDLE0_Y_LABEL_OR,
      DICE_RETROMOUSE_PADDLE0_Y_LABEL_CAT_OR,
      DICE_RETROMOUSE_PADDLE0_Y_INFO_0_OR,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_OR},
         {"y", OPTION_VAL_Y_OR},
         {NULL, NULL},
      },
      "y"
   },
   {
      "dice_retromouse_paddle1_x",
      DICE_RETROMOUSE_PADDLE1_X_LABEL_OR,
      DICE_RETROMOUSE_PADDLE1_X_LABEL_CAT_OR,
      DICE_RETROMOUSE_PADDLE1_X_INFO_0_OR,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_OR},
         {"y", OPTION_VAL_Y_OR},
         {NULL, NULL},
      },
      "x"
   },
   {
      "dice_retromouse_paddle1_y",
      DICE_RETROMOUSE_PADDLE1_Y_LABEL_OR,
      DICE_RETROMOUSE_PADDLE1_Y_LABEL_CAT_OR,
      DICE_RETROMOUSE_PADDLE1_Y_INFO_0_OR,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_OR},
         {"y", OPTION_VAL_Y_OR},
         {NULL, NULL},
      },
      "y"
   },
   {
      "dice_retromouse_paddle2_x",
      DICE_RETROMOUSE_PADDLE2_X_LABEL_OR,
      DICE_RETROMOUSE_PADDLE2_X_LABEL_CAT_OR,
      DICE_RETROMOUSE_PADDLE2_X_INFO_0_OR,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_OR},
         {"y", OPTION_VAL_Y_OR},
         {NULL, NULL},
      },
      "x"
   },
   {
      "dice_retromouse_paddle2_y",
      DICE_RETROMOUSE_PADDLE2_Y_LABEL_OR,
      DICE_RETROMOUSE_PADDLE2_Y_LABEL_CAT_OR,
      DICE_RETROMOUSE_PADDLE2_Y_INFO_0_OR,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_OR},
         {"y", OPTION_VAL_Y_OR},
         {NULL, NULL},
      },
      "y"
   },
   {
      "dice_retromouse_paddle3_x",
      DICE_RETROMOUSE_PADDLE3_X_LABEL_OR,
      DICE_RETROMOUSE_PADDLE3_X_LABEL_CAT_OR,
      DICE_RETROMOUSE_PADDLE3_X_INFO_0_OR,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_OR},
         {"y", OPTION_VAL_Y_OR},
         {NULL, NULL},
      },
      "x"
   },
   {
      "dice_retromouse_paddle3_y",
      DICE_RETROMOUSE_PADDLE3_Y_LABEL_OR,
      DICE_RETROMOUSE_PADDLE3_Y_LABEL_CAT_OR,
      DICE_RETROMOUSE_PADDLE3_Y_INFO_0_OR,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_OR},
         {"y", OPTION_VAL_Y_OR},
         {NULL, NULL},
      },
      "y"
   },

#ifdef MANYMOUSE
   {
      "dice_manymouse_paddle0",
      DICE_MANYMOUSE_PADDLE0_LABEL_OR,
      DICE_RETROMOUSE_PADDLE0_LABEL_CAT_OR,
      DICE_MANYMOUSE_PADDLE0_INFO_0_OR,
      NULL,
      "manymouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_manymouse_paddle0_x",
      DICE_MANYMOUSE_PADDLE0_X_LABEL_OR,
      DICE_MANYMOUSE_PADDLE0_X_LABEL_CAT_OR,
      DICE_RETROMOUSE_PADDLE0_X_INFO_0_OR,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_OR},
         {"0y", OPTION_VAL_0Y_OR},
         {"1x", OPTION_VAL_1X_OR},
         {"1y", OPTION_VAL_1Y_OR},
         {"2x", OPTION_VAL_2X_OR},
         {"2y", OPTION_VAL_2Y_OR},
         {"3x", OPTION_VAL_3X_OR},
         {"3y", OPTION_VAL_3Y_OR},
         {NULL, NULL},
      },
      "0x"
   },
   {
      "dice_manymouse_paddle0_y",
      DICE_MANYMOUSE_PADDLE0_Y_LABEL_OR,
      DICE_MANYMOUSE_PADDLE0_Y_LABEL_CAT_OR,
      DICE_RETROMOUSE_PADDLE0_Y_INFO_0_OR,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_OR},
         {"0y", OPTION_VAL_0Y_OR},
         {"1x", OPTION_VAL_1X_OR},
         {"1y", OPTION_VAL_1Y_OR},
         {"2x", OPTION_VAL_2X_OR},
         {"2y", OPTION_VAL_2Y_OR},
         {"3x", OPTION_VAL_3X_OR},
         {"3y", OPTION_VAL_3Y_OR},
         {NULL, NULL},
      },
      "0y"
   },
   {
      "dice_manymouse_paddle1",
      DICE_MANYMOUSE_PADDLE1_LABEL_OR,
      DICE_RETROMOUSE_PADDLE1_LABEL_CAT_OR,
      DICE_MANYMOUSE_PADDLE1_INFO_0_OR,
      NULL,
      "manymouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_manymouse_paddle1_x",
      DICE_MANYMOUSE_PADDLE1_X_LABEL_OR,
      DICE_MANYMOUSE_PADDLE1_X_LABEL_CAT_OR,
      DICE_RETROMOUSE_PADDLE1_X_INFO_0_OR,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_OR},
         {"0y", OPTION_VAL_0Y_OR},
         {"1x", OPTION_VAL_1X_OR},
         {"1y", OPTION_VAL_1Y_OR},
         {"2x", OPTION_VAL_2X_OR},
         {"2y", OPTION_VAL_2Y_OR},
         {"3x", OPTION_VAL_3X_OR},
         {"3y", OPTION_VAL_3Y_OR},
         {NULL, NULL},
      },
      "1x"
   },
   {
      "dice_manymouse_paddle1_y",
      DICE_MANYMOUSE_PADDLE1_Y_LABEL_OR,
      DICE_MANYMOUSE_PADDLE1_Y_LABEL_CAT_OR,
      DICE_RETROMOUSE_PADDLE1_Y_INFO_0_OR,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_OR},
         {"0y", OPTION_VAL_0Y_OR},
         {"1x", OPTION_VAL_1X_OR},
         {"1y", OPTION_VAL_1Y_OR},
         {"2x", OPTION_VAL_2X_OR},
         {"2y", OPTION_VAL_2Y_OR},
         {"3x", OPTION_VAL_3X_OR},
         {"3y", OPTION_VAL_3Y_OR},
         {NULL, NULL},
      },
      "1y"
   },
   {
      "dice_manymouse_paddle2",
      DICE_MANYMOUSE_PADDLE2_LABEL_OR,
      DICE_RETROMOUSE_PADDLE2_LABEL_CAT_OR,
      DICE_MANYMOUSE_PADDLE2_INFO_0_OR,
      NULL,
      "manymouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_manymouse_paddle2_x",
      DICE_MANYMOUSE_PADDLE2_X_LABEL_OR,
      DICE_MANYMOUSE_PADDLE2_X_LABEL_CAT_OR,
      DICE_RETROMOUSE_PADDLE2_X_INFO_0_OR,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_OR},
         {"0y", OPTION_VAL_0Y_OR},
         {"1x", OPTION_VAL_1X_OR},
         {"1y", OPTION_VAL_1Y_OR},
         {"2x", OPTION_VAL_2X_OR},
         {"2y", OPTION_VAL_2Y_OR},
         {"3x", OPTION_VAL_3X_OR},
         {"3y", OPTION_VAL_3Y_OR},
         {NULL, NULL},
      },
      "2x"
   },
   {
      "dice_manymouse_paddle2_y",
      DICE_MANYMOUSE_PADDLE2_Y_LABEL_OR,
      DICE_MANYMOUSE_PADDLE2_Y_LABEL_CAT_OR,
      DICE_RETROMOUSE_PADDLE2_Y_INFO_0_OR,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_OR},
         {"0y", OPTION_VAL_0Y_OR},
         {"1x", OPTION_VAL_1X_OR},
         {"1y", OPTION_VAL_1Y_OR},
         {"2x", OPTION_VAL_2X_OR},
         {"2y", OPTION_VAL_2Y_OR},
         {"3x", OPTION_VAL_3X_OR},
         {"3y", OPTION_VAL_3Y_OR},
         {NULL, NULL},
      },
      "2y"
   },
   {
      "dice_manymouse_paddle3",
      DICE_MANYMOUSE_PADDLE3_LABEL_OR,
      DICE_RETROMOUSE_PADDLE3_LABEL_CAT_OR,
      DICE_MANYMOUSE_PADDLE3_INFO_0_OR,
      NULL,
      "manymouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_manymouse_paddle3_x",
      DICE_MANYMOUSE_PADDLE3_X_LABEL_OR,
      DICE_MANYMOUSE_PADDLE3_X_LABEL_CAT_OR,
      DICE_RETROMOUSE_PADDLE3_X_INFO_0_OR,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_OR},
         {"0y", OPTION_VAL_0Y_OR},
         {"1x", OPTION_VAL_1X_OR},
         {"1y", OPTION_VAL_1Y_OR},
         {"2x", OPTION_VAL_2X_OR},
         {"2y", OPTION_VAL_2Y_OR},
         {"3x", OPTION_VAL_3X_OR},
         {"3y", OPTION_VAL_3Y_OR},
         {NULL, NULL},
      },
      "3x"
   },
   {
      "dice_manymouse_paddle3_y",
      DICE_MANYMOUSE_PADDLE3_Y_LABEL_OR,
      DICE_MANYMOUSE_PADDLE3_Y_LABEL_CAT_OR,
      DICE_RETROMOUSE_PADDLE3_Y_INFO_0_OR,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_OR},
         {"0y", OPTION_VAL_0Y_OR},
         {"1x", OPTION_VAL_1X_OR},
         {"1y", OPTION_VAL_1Y_OR},
         {"2x", OPTION_VAL_2X_OR},
         {"2y", OPTION_VAL_2Y_OR},
         {"3x", OPTION_VAL_3X_OR},
         {"3y", OPTION_VAL_3Y_OR},
         {NULL, NULL},
      },
      "3y"
   },
#endif

   {
      "dice_dipswitch_1",
      DICE_DIPSWITCH_1_LABEL_OR,
      DICE_DIPSWITCH_1_LABEL_CAT_OR,
      DICE_DIPSWITCH_1_INFO_0_OR,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_OR},
         {"0", NULL},
         {"1", NULL},
         {NULL, NULL},
      },
      "-1"
   },
   {
      "dice_dipswitch_2",
      DICE_DIPSWITCH_2_LABEL_OR,
      DICE_DIPSWITCH_2_LABEL_CAT_OR,
      DICE_DIPSWITCH_2_INFO_0_OR,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_OR},
         {"0", NULL},
         {"1", NULL},
         {NULL, NULL},
      },
      "-1"
   },
   {
      "dice_dipswitch_3",
      DICE_DIPSWITCH_3_LABEL_OR,
      DICE_DIPSWITCH_3_LABEL_CAT_OR,
      DICE_DIPSWITCH_3_INFO_0_OR,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_OR},
         {"0", NULL},
         {"1", NULL},
         {NULL, NULL},
      },
      "-1"
   },
   {
      "dice_dipswitch16_1",
      DICE_DIPSWITCH16_1_LABEL_OR,
      DICE_DIPSWITCH16_1_LABEL_CAT_OR,
      DICE_DIPSWITCH16_1_INFO_0_OR,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_OR},
         {"0", NULL},
         {"1", NULL},
         {"2", NULL},
         {"3", NULL},
         {"4", NULL},
         {"5", NULL},
         {"6", NULL},
         {"7", NULL},
         {"8", NULL},
         {"9", NULL},
         {"10", NULL},
         {"11", NULL},
         {"12", NULL},
         {"13", NULL},
         {"14", NULL},
         {"15", NULL},
         {NULL, NULL},
      },
      "-1"
   },
   {
      "dice_dipswitch16_2",
      DICE_DIPSWITCH16_2_LABEL_OR,
      DICE_DIPSWITCH16_2_LABEL_CAT_OR,
      DICE_DIPSWITCH16_2_INFO_0_OR,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_OR},
         {"0", NULL},
         {"1", NULL},
         {"2", NULL},
         {"3", NULL},
         {"4", NULL},
         {"5", NULL},
         {"6", NULL},
         {"7", NULL},
         {"8", NULL},
         {"9", NULL},
         {"10", NULL},
         {"11", NULL},
         {"12", NULL},
         {"13", NULL},
         {"14", NULL},
         {"15", NULL},
         {NULL, NULL},
      },
      "-1"
   },

   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_or = {
   option_cats_or,
   option_defs_or
};

/* RETRO_LANGUAGE_PL */

#define CATEGORY_INPUT_LABEL_PL "Wejście"
#define CATEGORY_INPUT_INFO_0_PL "Skonfiguruj ustawienia wejściowe specyficzne dla rdzenia."
#define CATEGORY_RETROMOUSE_LABEL_PL NULL
#define CATEGORY_RETROMOUSE_INFO_0_PL "Skonfiguruj ustawienia wielu myszy libretro."
#define CATEGORY_MANYMOUSE_LABEL_PL NULL
#define CATEGORY_MANYMOUSE_INFO_0_PL "Skonfiguruj ustawienia wielu myszy ManyMouse."
#define CATEGORY_DIPSWITCH_LABEL_PL "Przełącznik DIP switch"
#define CATEGORY_DIPSWITCH_INFO_0_PL "Skonfiguruj przełącznik DIP switch i ustawienia potencjometru."
#define DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_LABEL_PL "Wejście > Użyj wskaźnika myszy dla 1 paletki"
#define DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_LABEL_CAT_PL "Użyj wskaźnika myszy dla 1 paletki"
#define DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_INFO_0_PL "Użyj systemowego wskaźnika myszy jako 1 kontroler paletkowy. Nie pozwala wybrać konkretnej myszki, jeśli masz ich kilka."
#define DICE_PADDLE_JOYSTICK_ABSOLUTE_LABEL_PL "Wejście > Joystick paletka używa ruchu bezwzględnego"
#define DICE_PADDLE_JOYSTICK_ABSOLUTE_LABEL_CAT_PL "Joystick paletka używa ruchu bezwzględnego"
#define DICE_PADDLE_JOYSTICK_ABSOLUTE_INFO_0_PL "Bezpośrednio zmapuj zakres ruchu joysticka do zakresu ruchu paletki, zamiast ruchów względnych."
#define DICE_PADDLE_KEYBOARD_SENSITIVITY_LABEL_PL "Wejście > Czułość paletki D-Pada"
#define DICE_PADDLE_KEYBOARD_SENSITIVITY_LABEL_CAT_PL "Czułość paletki D-Pada"
#define DICE_PADDLE_KEYBOARD_SENSITIVITY_INFO_0_PL "Czułość gdy D-Pad jest używany jako paletka."
#define DICE_PADDLE_JOYSTICK_SENSITIVITY_LABEL_PL "Wejście > Czułość paletki drążka analogowego"
#define DICE_PADDLE_JOYSTICK_SENSITIVITY_LABEL_CAT_PL "Czułość paletki drążka analogowego"
#define DICE_PADDLE_JOYSTICK_SENSITIVITY_INFO_0_PL "Czułość przy użyciu drążka analogowego jako paletki."
#define DICE_RETROMOUSE_PADDLE_SENSITIVITY_LABEL_PL "Wejście > Czułość paletki RetroMouse"
#define DICE_RETROMOUSE_PADDLE_SENSITIVITY_LABEL_CAT_PL "Częstotliwość paletki RetroMouse"
#define DICE_RETROMOUSE_PADDLE_SENSITIVITY_INFO_0_PL "Czułość przy użyciu RetroMouse jako paletki."
#define DICE_WHEEL_KEYJOY_SENSITIVITY_LABEL_PL "Wejście > Czułość kierownicy"
#define DICE_WHEEL_KEYJOY_SENSITIVITY_LABEL_CAT_PL "Czułość kierownicy"
#define DICE_WHEEL_KEYJOY_SENSITIVITY_INFO_0_PL "Czułość przy użyciu D-Pada lub drążka analogowego jako kierownicy."
#define DICE_THROTTLE_KEYJOY_SENSITIVITY_LABEL_PL "Wejście > Czułość przepustnicy"
#define DICE_THROTTLE_KEYJOY_SENSITIVITY_LABEL_CAT_PL "Czułość przepustnicy"
#define DICE_THROTTLE_KEYJOY_SENSITIVITY_INFO_0_PL "Czułość przy użyciu D-Pada lub drążka analogowego jako przepustnicy."
#define DICE_RETROMOUSE_PADDLE0_LABEL_PL "RetroMouse > Użyj myszy dla 1 paletki"
#define DICE_RETROMOUSE_PADDLE0_LABEL_CAT_PL "Użyj myszy dla 1 paletki"
#define DICE_RETROMOUSE_PADDLE0_INFO_0_PL "Użyj konkretnej myszy dla 1 paletki, wybranej przez indeks myszy Portu 1."
#define DICE_RETROMOUSE_PADDLE1_LABEL_PL "RetroMouse > Użyj myszy dla 2 paletki"
#define DICE_RETROMOUSE_PADDLE1_LABEL_CAT_PL "Użyj myszy dla 2 paletki"
#define DICE_RETROMOUSE_PADDLE1_INFO_0_PL "Użyj konkretnej myszy dla 2 paletki, wybranej przez indeks myszy Portu 2."
#define DICE_RETROMOUSE_PADDLE2_LABEL_PL "RetroMouse > Użyj myszy dla 3 paletki"
#define DICE_RETROMOUSE_PADDLE2_LABEL_CAT_PL "Użyj myszy dla 3 paletki"
#define DICE_RETROMOUSE_PADDLE2_INFO_0_PL "Użyj konkretnej myszy dla 3 paletki, wybranej przez indeks myszy Portu 3."
#define DICE_RETROMOUSE_PADDLE3_LABEL_PL "RetroMouse > Użyj myszy dla 4 paletki"
#define DICE_RETROMOUSE_PADDLE3_LABEL_CAT_PL "Użyj myszy dla 4 paletki"
#define DICE_RETROMOUSE_PADDLE3_INFO_0_PL "Użyj konkretnej myszy dla 4 paletki, wybranej przez indeks myszy Portu 4."
#define DICE_RETROMOUSE_PADDLE0_X_LABEL_PL "RetroMouse > Oś myszy dla 1 paletki poziomo"
#define DICE_RETROMOUSE_PADDLE0_X_LABEL_CAT_PL "Oś myszy dla 1 paletki poziomo"
#define DICE_RETROMOUSE_PADDLE0_X_INFO_0_PL "Oś myszy dla gracza 1, ruch w poziomie na ekranie."
#define OPTION_VAL_X_PL NULL
#define OPTION_VAL_Y_PL NULL
#define DICE_RETROMOUSE_PADDLE0_Y_LABEL_PL "RetroMouse > Oś myszy dla 1 paletki pionowo"
#define DICE_RETROMOUSE_PADDLE0_Y_LABEL_CAT_PL "Oś myszy dla 1 paletki pionowo"
#define DICE_RETROMOUSE_PADDLE0_Y_INFO_0_PL "Oś myszy dla gracza 1, ruch w pionie na ekranie."
#define DICE_RETROMOUSE_PADDLE1_X_LABEL_PL "RetroMouse > Oś myszy dla 2 paletki poziomo"
#define DICE_RETROMOUSE_PADDLE1_X_LABEL_CAT_PL "Oś myszy dla 2 paletki poziomo"
#define DICE_RETROMOUSE_PADDLE1_X_INFO_0_PL "Oś myszy dla gracza 2, ruch w poziomie na ekranie."
#define DICE_RETROMOUSE_PADDLE1_Y_LABEL_PL "RetroMouse > Oś myszy dla 2 paletki pionowo"
#define DICE_RETROMOUSE_PADDLE1_Y_LABEL_CAT_PL "Oś myszy dla 2 paletki pionowo"
#define DICE_RETROMOUSE_PADDLE1_Y_INFO_0_PL "Oś myszy dla gracza 2, ruch w pionie na ekranie."
#define DICE_RETROMOUSE_PADDLE2_X_LABEL_PL "RetroMouse > Oś myszy dla 3 paletki poziomo"
#define DICE_RETROMOUSE_PADDLE2_X_LABEL_CAT_PL "Oś myszy dla 3 paletki poziomo"
#define DICE_RETROMOUSE_PADDLE2_X_INFO_0_PL "Oś myszy dla gracza 3, ruch w poziomie na ekranie."
#define DICE_RETROMOUSE_PADDLE2_Y_LABEL_PL "RetroMouse > Oś myszy dla 3 paletki pionowo"
#define DICE_RETROMOUSE_PADDLE2_Y_LABEL_CAT_PL "Oś myszy dla 3 paletki pionowo"
#define DICE_RETROMOUSE_PADDLE2_Y_INFO_0_PL "Oś myszy dla gracza 3, ruch w pionie na ekranie."
#define DICE_RETROMOUSE_PADDLE3_X_LABEL_PL "RetroMouse > Oś myszy dla 4 paletki poziomo"
#define DICE_RETROMOUSE_PADDLE3_X_LABEL_CAT_PL "Oś myszy dla 4 paletki poziomo"
#define DICE_RETROMOUSE_PADDLE3_X_INFO_0_PL "Oś myszy dla gracza 4, ruch w poziomie na ekranie."
#define DICE_RETROMOUSE_PADDLE3_Y_LABEL_PL "RetroMouse > Oś myszy dla 4 paletki pionowo"
#define DICE_RETROMOUSE_PADDLE3_Y_LABEL_CAT_PL "Oś myszy dla 4 paletki pionowo"
#define DICE_RETROMOUSE_PADDLE3_Y_INFO_0_PL "Oś myszy dla gracza 4, ruch w pionie na ekranie."
#define DICE_MANYMOUSE_PADDLE0_LABEL_PL "ManyMouse > Użyj myszy dla 1 paletki"
#define DICE_MANYMOUSE_PADDLE0_INFO_0_PL "Użyj myszy dla 1 paletki."
#define DICE_MANYMOUSE_PADDLE0_X_LABEL_PL "ManyMouse > Myszo-paletka 1 x"
#define DICE_MANYMOUSE_PADDLE0_X_LABEL_CAT_PL "Myszo-Paletka 1 x"
#define OPTION_VAL_0X_PL NULL
#define OPTION_VAL_0Y_PL NULL
#define OPTION_VAL_1X_PL NULL
#define OPTION_VAL_1Y_PL NULL
#define OPTION_VAL_2X_PL NULL
#define OPTION_VAL_2Y_PL NULL
#define OPTION_VAL_3X_PL NULL
#define OPTION_VAL_3Y_PL NULL
#define DICE_MANYMOUSE_PADDLE0_Y_LABEL_PL "ManyMouse > Myszo-paletka 1 y"
#define DICE_MANYMOUSE_PADDLE0_Y_LABEL_CAT_PL "Myszo-Paletka 1 y"
#define DICE_MANYMOUSE_PADDLE1_LABEL_PL "ManyMouse > Użyj myszy dla 2 paletki"
#define DICE_MANYMOUSE_PADDLE1_INFO_0_PL "Użyj myszy dla 2 paletki."
#define DICE_MANYMOUSE_PADDLE1_X_LABEL_PL "ManyMouse > Myszo-paletka 2 x"
#define DICE_MANYMOUSE_PADDLE1_X_LABEL_CAT_PL "Myszo-Paletka 2 x"
#define DICE_MANYMOUSE_PADDLE1_Y_LABEL_PL "ManyMouse > Myszo-paletka 2 y"
#define DICE_MANYMOUSE_PADDLE1_Y_LABEL_CAT_PL "Myszo-Paletka 2 y"
#define DICE_MANYMOUSE_PADDLE2_LABEL_PL "ManyMouse > Użyj myszy dla 3 paletki"
#define DICE_MANYMOUSE_PADDLE2_INFO_0_PL "Użyj myszy dla 3 paletki."
#define DICE_MANYMOUSE_PADDLE2_X_LABEL_PL "ManyMouse > Myszo-paletka 3 x"
#define DICE_MANYMOUSE_PADDLE2_X_LABEL_CAT_PL "Myszo-Paletka 3 x"
#define DICE_MANYMOUSE_PADDLE2_Y_LABEL_PL "ManyMouse > Myszo-paletka 3 y"
#define DICE_MANYMOUSE_PADDLE2_Y_LABEL_CAT_PL "Myszo-Paletka 3 y"
#define DICE_MANYMOUSE_PADDLE3_LABEL_PL "ManyMouse > Użyj myszy dla 4 paletki"
#define DICE_MANYMOUSE_PADDLE3_INFO_0_PL "Użyj myszy dla 4 paletki."
#define DICE_MANYMOUSE_PADDLE3_X_LABEL_PL "ManyMouse > Myszo-paletka 4 x"
#define DICE_MANYMOUSE_PADDLE3_X_LABEL_CAT_PL "Myszo-Paletka 4 x"
#define DICE_MANYMOUSE_PADDLE3_Y_LABEL_PL "ManyMouse > Myszo-paletka 4 y"
#define DICE_MANYMOUSE_PADDLE3_Y_LABEL_CAT_PL "Myszo-Paletka 4 y"
#define DICE_DIPSWITCH_1_LABEL_PL "DIP Switche > DIP Switch 1"
#define DICE_DIPSWITCH_1_LABEL_CAT_PL NULL
#define DICE_DIPSWITCH_1_INFO_0_PL "Ustawienie dla 1 DIP switcha."
#define OPTION_VAL_1_PL "domyślne"
#define DICE_DIPSWITCH_2_LABEL_PL "DIP Switche > DIP Switch 2"
#define DICE_DIPSWITCH_2_LABEL_CAT_PL NULL
#define DICE_DIPSWITCH_2_INFO_0_PL "Ustawienie dla 2 DIP switcha."
#define DICE_DIPSWITCH_3_LABEL_PL "DIP Switche > DIP Switch 3"
#define DICE_DIPSWITCH_3_LABEL_CAT_PL NULL
#define DICE_DIPSWITCH_3_INFO_0_PL "Ustawienie dla 3 DIP switcha."
#define DICE_DIPSWITCH16_1_LABEL_PL "DIP Switche > DIP Switch Hex 1"
#define DICE_DIPSWITCH16_1_LABEL_CAT_PL NULL
#define DICE_DIPSWITCH16_1_INFO_0_PL "Ustawienie dla 16-pozycyjnego DIP switcha nr. 1."
#define DICE_DIPSWITCH16_2_LABEL_PL "DIP Switche > DIP Switch Hex 2"
#define DICE_DIPSWITCH16_2_LABEL_CAT_PL NULL
#define DICE_DIPSWITCH16_2_INFO_0_PL "Ustawienie dla 16-pozycyjnego DIP switcha nr. 2."

struct retro_core_option_v2_category option_cats_pl[] = {
   {
      "input",
      CATEGORY_INPUT_LABEL_PL,
      CATEGORY_INPUT_INFO_0_PL
   },
   {
      "retromouse",
      CATEGORY_RETROMOUSE_LABEL_PL,
      CATEGORY_RETROMOUSE_INFO_0_PL
   },
#ifdef MANYMOUSE
   {
      "manymouse",
      CATEGORY_MANYMOUSE_LABEL_PL,
      CATEGORY_MANYMOUSE_INFO_0_PL
   },
#endif
   {
      "dipswitch",
      CATEGORY_DIPSWITCH_LABEL_PL,
      CATEGORY_DIPSWITCH_INFO_0_PL
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_pl[] = {
   {
      "dice_use_mouse_pointer_for_paddle_1",
      DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_LABEL_PL,
      DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_LABEL_CAT_PL,
      DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_INFO_0_PL,
      NULL,
      "input",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_paddle_joystick_absolute",
      DICE_PADDLE_JOYSTICK_ABSOLUTE_LABEL_PL,
      DICE_PADDLE_JOYSTICK_ABSOLUTE_LABEL_CAT_PL,
      DICE_PADDLE_JOYSTICK_ABSOLUTE_INFO_0_PL,
      NULL,
      "input",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      // D-pad but not necessarily keyboard under libretro,
      // that name comes from the upstream code.
      "dice_paddle_keyboard_sensitivity",
      DICE_PADDLE_KEYBOARD_SENSITIVITY_LABEL_PL,
      DICE_PADDLE_KEYBOARD_SENSITIVITY_LABEL_CAT_PL,
      DICE_PADDLE_KEYBOARD_SENSITIVITY_INFO_0_PL,
      NULL,
      "input",
      {
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "250"
   },
   {
      "dice_paddle_joystick_sensitivity",
      DICE_PADDLE_JOYSTICK_SENSITIVITY_LABEL_PL,
      DICE_PADDLE_JOYSTICK_SENSITIVITY_LABEL_CAT_PL,
      DICE_PADDLE_JOYSTICK_SENSITIVITY_INFO_0_PL,
      NULL,
      "input",
      {
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "500"
   },
   {
      "dice_retromouse_paddle_sensitivity",
      DICE_RETROMOUSE_PADDLE_SENSITIVITY_LABEL_PL,
      DICE_RETROMOUSE_PADDLE_SENSITIVITY_LABEL_CAT_PL,
      DICE_RETROMOUSE_PADDLE_SENSITIVITY_INFO_0_PL,
      NULL,
      "input",
      {
         {"25", NULL},
         {"50", NULL},
         {"75", NULL},
         {"100", NULL},
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "125"
   },
   {
      "dice_wheel_keyjoy_sensitivity",
      DICE_WHEEL_KEYJOY_SENSITIVITY_LABEL_PL,
      DICE_WHEEL_KEYJOY_SENSITIVITY_LABEL_CAT_PL,
      DICE_WHEEL_KEYJOY_SENSITIVITY_INFO_0_PL,
      NULL,
      "input",
      {
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "500"
   },
   {
      "dice_throttle_keyjoy_sensitivity",
      DICE_THROTTLE_KEYJOY_SENSITIVITY_LABEL_PL,
      DICE_THROTTLE_KEYJOY_SENSITIVITY_LABEL_CAT_PL,
      DICE_THROTTLE_KEYJOY_SENSITIVITY_INFO_0_PL,
      NULL,
      "input",
      {
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "250"
   },

   {
      "dice_retromouse_paddle0",
      DICE_RETROMOUSE_PADDLE0_LABEL_PL,
      DICE_RETROMOUSE_PADDLE0_LABEL_CAT_PL,
      DICE_RETROMOUSE_PADDLE0_INFO_0_PL,
      NULL,
      "retromouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_retromouse_paddle1",
      DICE_RETROMOUSE_PADDLE1_LABEL_PL,
      DICE_RETROMOUSE_PADDLE1_LABEL_CAT_PL,
      DICE_RETROMOUSE_PADDLE1_INFO_0_PL,
      NULL,
      "retromouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_retromouse_paddle2",
      DICE_RETROMOUSE_PADDLE2_LABEL_PL,
      DICE_RETROMOUSE_PADDLE2_LABEL_CAT_PL,
      DICE_RETROMOUSE_PADDLE2_INFO_0_PL,
      NULL,
      "retromouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_retromouse_paddle3",
      DICE_RETROMOUSE_PADDLE3_LABEL_PL,
      DICE_RETROMOUSE_PADDLE3_LABEL_CAT_PL,
      DICE_RETROMOUSE_PADDLE3_INFO_0_PL,
      NULL,
      "retromouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_retromouse_paddle0_x",
      DICE_RETROMOUSE_PADDLE0_X_LABEL_PL,
      DICE_RETROMOUSE_PADDLE0_X_LABEL_CAT_PL,
      DICE_RETROMOUSE_PADDLE0_X_INFO_0_PL,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_PL},
         {"y", OPTION_VAL_Y_PL},
         {NULL, NULL},
      },
      "x"
   },
   {
      "dice_retromouse_paddle0_y",
      DICE_RETROMOUSE_PADDLE0_Y_LABEL_PL,
      DICE_RETROMOUSE_PADDLE0_Y_LABEL_CAT_PL,
      DICE_RETROMOUSE_PADDLE0_Y_INFO_0_PL,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_PL},
         {"y", OPTION_VAL_Y_PL},
         {NULL, NULL},
      },
      "y"
   },
   {
      "dice_retromouse_paddle1_x",
      DICE_RETROMOUSE_PADDLE1_X_LABEL_PL,
      DICE_RETROMOUSE_PADDLE1_X_LABEL_CAT_PL,
      DICE_RETROMOUSE_PADDLE1_X_INFO_0_PL,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_PL},
         {"y", OPTION_VAL_Y_PL},
         {NULL, NULL},
      },
      "x"
   },
   {
      "dice_retromouse_paddle1_y",
      DICE_RETROMOUSE_PADDLE1_Y_LABEL_PL,
      DICE_RETROMOUSE_PADDLE1_Y_LABEL_CAT_PL,
      DICE_RETROMOUSE_PADDLE1_Y_INFO_0_PL,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_PL},
         {"y", OPTION_VAL_Y_PL},
         {NULL, NULL},
      },
      "y"
   },
   {
      "dice_retromouse_paddle2_x",
      DICE_RETROMOUSE_PADDLE2_X_LABEL_PL,
      DICE_RETROMOUSE_PADDLE2_X_LABEL_CAT_PL,
      DICE_RETROMOUSE_PADDLE2_X_INFO_0_PL,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_PL},
         {"y", OPTION_VAL_Y_PL},
         {NULL, NULL},
      },
      "x"
   },
   {
      "dice_retromouse_paddle2_y",
      DICE_RETROMOUSE_PADDLE2_Y_LABEL_PL,
      DICE_RETROMOUSE_PADDLE2_Y_LABEL_CAT_PL,
      DICE_RETROMOUSE_PADDLE2_Y_INFO_0_PL,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_PL},
         {"y", OPTION_VAL_Y_PL},
         {NULL, NULL},
      },
      "y"
   },
   {
      "dice_retromouse_paddle3_x",
      DICE_RETROMOUSE_PADDLE3_X_LABEL_PL,
      DICE_RETROMOUSE_PADDLE3_X_LABEL_CAT_PL,
      DICE_RETROMOUSE_PADDLE3_X_INFO_0_PL,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_PL},
         {"y", OPTION_VAL_Y_PL},
         {NULL, NULL},
      },
      "x"
   },
   {
      "dice_retromouse_paddle3_y",
      DICE_RETROMOUSE_PADDLE3_Y_LABEL_PL,
      DICE_RETROMOUSE_PADDLE3_Y_LABEL_CAT_PL,
      DICE_RETROMOUSE_PADDLE3_Y_INFO_0_PL,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_PL},
         {"y", OPTION_VAL_Y_PL},
         {NULL, NULL},
      },
      "y"
   },

#ifdef MANYMOUSE
   {
      "dice_manymouse_paddle0",
      DICE_MANYMOUSE_PADDLE0_LABEL_PL,
      DICE_RETROMOUSE_PADDLE0_LABEL_CAT_PL,
      DICE_MANYMOUSE_PADDLE0_INFO_0_PL,
      NULL,
      "manymouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_manymouse_paddle0_x",
      DICE_MANYMOUSE_PADDLE0_X_LABEL_PL,
      DICE_MANYMOUSE_PADDLE0_X_LABEL_CAT_PL,
      DICE_RETROMOUSE_PADDLE0_X_INFO_0_PL,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_PL},
         {"0y", OPTION_VAL_0Y_PL},
         {"1x", OPTION_VAL_1X_PL},
         {"1y", OPTION_VAL_1Y_PL},
         {"2x", OPTION_VAL_2X_PL},
         {"2y", OPTION_VAL_2Y_PL},
         {"3x", OPTION_VAL_3X_PL},
         {"3y", OPTION_VAL_3Y_PL},
         {NULL, NULL},
      },
      "0x"
   },
   {
      "dice_manymouse_paddle0_y",
      DICE_MANYMOUSE_PADDLE0_Y_LABEL_PL,
      DICE_MANYMOUSE_PADDLE0_Y_LABEL_CAT_PL,
      DICE_RETROMOUSE_PADDLE0_Y_INFO_0_PL,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_PL},
         {"0y", OPTION_VAL_0Y_PL},
         {"1x", OPTION_VAL_1X_PL},
         {"1y", OPTION_VAL_1Y_PL},
         {"2x", OPTION_VAL_2X_PL},
         {"2y", OPTION_VAL_2Y_PL},
         {"3x", OPTION_VAL_3X_PL},
         {"3y", OPTION_VAL_3Y_PL},
         {NULL, NULL},
      },
      "0y"
   },
   {
      "dice_manymouse_paddle1",
      DICE_MANYMOUSE_PADDLE1_LABEL_PL,
      DICE_RETROMOUSE_PADDLE1_LABEL_CAT_PL,
      DICE_MANYMOUSE_PADDLE1_INFO_0_PL,
      NULL,
      "manymouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_manymouse_paddle1_x",
      DICE_MANYMOUSE_PADDLE1_X_LABEL_PL,
      DICE_MANYMOUSE_PADDLE1_X_LABEL_CAT_PL,
      DICE_RETROMOUSE_PADDLE1_X_INFO_0_PL,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_PL},
         {"0y", OPTION_VAL_0Y_PL},
         {"1x", OPTION_VAL_1X_PL},
         {"1y", OPTION_VAL_1Y_PL},
         {"2x", OPTION_VAL_2X_PL},
         {"2y", OPTION_VAL_2Y_PL},
         {"3x", OPTION_VAL_3X_PL},
         {"3y", OPTION_VAL_3Y_PL},
         {NULL, NULL},
      },
      "1x"
   },
   {
      "dice_manymouse_paddle1_y",
      DICE_MANYMOUSE_PADDLE1_Y_LABEL_PL,
      DICE_MANYMOUSE_PADDLE1_Y_LABEL_CAT_PL,
      DICE_RETROMOUSE_PADDLE1_Y_INFO_0_PL,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_PL},
         {"0y", OPTION_VAL_0Y_PL},
         {"1x", OPTION_VAL_1X_PL},
         {"1y", OPTION_VAL_1Y_PL},
         {"2x", OPTION_VAL_2X_PL},
         {"2y", OPTION_VAL_2Y_PL},
         {"3x", OPTION_VAL_3X_PL},
         {"3y", OPTION_VAL_3Y_PL},
         {NULL, NULL},
      },
      "1y"
   },
   {
      "dice_manymouse_paddle2",
      DICE_MANYMOUSE_PADDLE2_LABEL_PL,
      DICE_RETROMOUSE_PADDLE2_LABEL_CAT_PL,
      DICE_MANYMOUSE_PADDLE2_INFO_0_PL,
      NULL,
      "manymouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_manymouse_paddle2_x",
      DICE_MANYMOUSE_PADDLE2_X_LABEL_PL,
      DICE_MANYMOUSE_PADDLE2_X_LABEL_CAT_PL,
      DICE_RETROMOUSE_PADDLE2_X_INFO_0_PL,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_PL},
         {"0y", OPTION_VAL_0Y_PL},
         {"1x", OPTION_VAL_1X_PL},
         {"1y", OPTION_VAL_1Y_PL},
         {"2x", OPTION_VAL_2X_PL},
         {"2y", OPTION_VAL_2Y_PL},
         {"3x", OPTION_VAL_3X_PL},
         {"3y", OPTION_VAL_3Y_PL},
         {NULL, NULL},
      },
      "2x"
   },
   {
      "dice_manymouse_paddle2_y",
      DICE_MANYMOUSE_PADDLE2_Y_LABEL_PL,
      DICE_MANYMOUSE_PADDLE2_Y_LABEL_CAT_PL,
      DICE_RETROMOUSE_PADDLE2_Y_INFO_0_PL,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_PL},
         {"0y", OPTION_VAL_0Y_PL},
         {"1x", OPTION_VAL_1X_PL},
         {"1y", OPTION_VAL_1Y_PL},
         {"2x", OPTION_VAL_2X_PL},
         {"2y", OPTION_VAL_2Y_PL},
         {"3x", OPTION_VAL_3X_PL},
         {"3y", OPTION_VAL_3Y_PL},
         {NULL, NULL},
      },
      "2y"
   },
   {
      "dice_manymouse_paddle3",
      DICE_MANYMOUSE_PADDLE3_LABEL_PL,
      DICE_RETROMOUSE_PADDLE3_LABEL_CAT_PL,
      DICE_MANYMOUSE_PADDLE3_INFO_0_PL,
      NULL,
      "manymouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_manymouse_paddle3_x",
      DICE_MANYMOUSE_PADDLE3_X_LABEL_PL,
      DICE_MANYMOUSE_PADDLE3_X_LABEL_CAT_PL,
      DICE_RETROMOUSE_PADDLE3_X_INFO_0_PL,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_PL},
         {"0y", OPTION_VAL_0Y_PL},
         {"1x", OPTION_VAL_1X_PL},
         {"1y", OPTION_VAL_1Y_PL},
         {"2x", OPTION_VAL_2X_PL},
         {"2y", OPTION_VAL_2Y_PL},
         {"3x", OPTION_VAL_3X_PL},
         {"3y", OPTION_VAL_3Y_PL},
         {NULL, NULL},
      },
      "3x"
   },
   {
      "dice_manymouse_paddle3_y",
      DICE_MANYMOUSE_PADDLE3_Y_LABEL_PL,
      DICE_MANYMOUSE_PADDLE3_Y_LABEL_CAT_PL,
      DICE_RETROMOUSE_PADDLE3_Y_INFO_0_PL,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_PL},
         {"0y", OPTION_VAL_0Y_PL},
         {"1x", OPTION_VAL_1X_PL},
         {"1y", OPTION_VAL_1Y_PL},
         {"2x", OPTION_VAL_2X_PL},
         {"2y", OPTION_VAL_2Y_PL},
         {"3x", OPTION_VAL_3X_PL},
         {"3y", OPTION_VAL_3Y_PL},
         {NULL, NULL},
      },
      "3y"
   },
#endif

   {
      "dice_dipswitch_1",
      DICE_DIPSWITCH_1_LABEL_PL,
      DICE_DIPSWITCH_1_LABEL_CAT_PL,
      DICE_DIPSWITCH_1_INFO_0_PL,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_PL},
         {"0", NULL},
         {"1", NULL},
         {NULL, NULL},
      },
      "-1"
   },
   {
      "dice_dipswitch_2",
      DICE_DIPSWITCH_2_LABEL_PL,
      DICE_DIPSWITCH_2_LABEL_CAT_PL,
      DICE_DIPSWITCH_2_INFO_0_PL,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_PL},
         {"0", NULL},
         {"1", NULL},
         {NULL, NULL},
      },
      "-1"
   },
   {
      "dice_dipswitch_3",
      DICE_DIPSWITCH_3_LABEL_PL,
      DICE_DIPSWITCH_3_LABEL_CAT_PL,
      DICE_DIPSWITCH_3_INFO_0_PL,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_PL},
         {"0", NULL},
         {"1", NULL},
         {NULL, NULL},
      },
      "-1"
   },
   {
      "dice_dipswitch16_1",
      DICE_DIPSWITCH16_1_LABEL_PL,
      DICE_DIPSWITCH16_1_LABEL_CAT_PL,
      DICE_DIPSWITCH16_1_INFO_0_PL,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_PL},
         {"0", NULL},
         {"1", NULL},
         {"2", NULL},
         {"3", NULL},
         {"4", NULL},
         {"5", NULL},
         {"6", NULL},
         {"7", NULL},
         {"8", NULL},
         {"9", NULL},
         {"10", NULL},
         {"11", NULL},
         {"12", NULL},
         {"13", NULL},
         {"14", NULL},
         {"15", NULL},
         {NULL, NULL},
      },
      "-1"
   },
   {
      "dice_dipswitch16_2",
      DICE_DIPSWITCH16_2_LABEL_PL,
      DICE_DIPSWITCH16_2_LABEL_CAT_PL,
      DICE_DIPSWITCH16_2_INFO_0_PL,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_PL},
         {"0", NULL},
         {"1", NULL},
         {"2", NULL},
         {"3", NULL},
         {"4", NULL},
         {"5", NULL},
         {"6", NULL},
         {"7", NULL},
         {"8", NULL},
         {"9", NULL},
         {"10", NULL},
         {"11", NULL},
         {"12", NULL},
         {"13", NULL},
         {"14", NULL},
         {"15", NULL},
         {NULL, NULL},
      },
      "-1"
   },

   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_pl = {
   option_cats_pl,
   option_defs_pl
};

/* RETRO_LANGUAGE_PT_BR */

#define CATEGORY_INPUT_LABEL_PT_BR "Entrada"
#define CATEGORY_INPUT_INFO_0_PT_BR "Altera as configurações de entrada específicas do núcleo."
#define CATEGORY_RETROMOUSE_LABEL_PT_BR NULL
#define CATEGORY_RETROMOUSE_INFO_0_PT_BR "Altera as configurações dos múltiplos mouses do libretro."
#define CATEGORY_MANYMOUSE_LABEL_PT_BR NULL
#define CATEGORY_MANYMOUSE_INFO_0_PT_BR "Altera as configurações dos múltiplos mouses do ManyMouse."
#define CATEGORY_DIPSWITCH_LABEL_PT_BR "Chave DIP"
#define CATEGORY_DIPSWITCH_INFO_0_PT_BR "Altera as configurações das chaves DIP e dos potenciômetros."
#define DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_LABEL_PT_BR "Entrada > Usar Ponteiro do Mouse para o Paddle 1"
#define DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_LABEL_CAT_PT_BR "Usar Ponteiro do Mouse para o Paddle 1"
#define DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_INFO_0_PT_BR "Usa o ponteiro do mouse do sistema como o controle paddle 1. Não permite escolher um mouse específico se você tiver vários."
#define DICE_PADDLE_JOYSTICK_ABSOLUTE_LABEL_PT_BR "Entrada > Joystick do Paddle Usa Movimento Absoluto"
#define DICE_PADDLE_JOYSTICK_ABSOLUTE_LABEL_CAT_PT_BR "Joystick do Paddle Usa Movimento Absoluto"
#define DICE_PADDLE_JOYSTICK_ABSOLUTE_INFO_0_PT_BR "Mapeia diretamente o alcance de movimento do joystick para o alcance do paddle, em vez de usar movimentos relativos."
#define DICE_PADDLE_KEYBOARD_SENSITIVITY_LABEL_PT_BR "Entrada > Sensibilidade do D-pad do Paddle"
#define DICE_PADDLE_KEYBOARD_SENSITIVITY_LABEL_CAT_PT_BR "Sensibilidade do D-pad do Paddle"
#define DICE_PADDLE_KEYBOARD_SENSITIVITY_INFO_0_PT_BR "Sensibilidade ao usar o direcional D-pad para um paddle."
#define DICE_PADDLE_JOYSTICK_SENSITIVITY_LABEL_PT_BR "Entrada > Sensibilidade do Analógico do Paddle"
#define DICE_PADDLE_JOYSTICK_SENSITIVITY_LABEL_CAT_PT_BR "Sensibilidade do Analógico do Paddle"
#define DICE_PADDLE_JOYSTICK_SENSITIVITY_INFO_0_PT_BR "Sensibilidade ao usar o direcional analógico para um paddle."
#define DICE_RETROMOUSE_PADDLE_SENSITIVITY_LABEL_PT_BR "Entrada > Sensibilidade do RetroMouse do Paddle"
#define DICE_RETROMOUSE_PADDLE_SENSITIVITY_LABEL_CAT_PT_BR "Sensibilidade do RetroMouse do Paddle"
#define DICE_RETROMOUSE_PADDLE_SENSITIVITY_INFO_0_PT_BR "Sensibilidade ao usar o RetroMouse com um paddle."
#define DICE_WHEEL_KEYJOY_SENSITIVITY_LABEL_PT_BR "Entrada > Sensibilidade do Volante"
#define DICE_WHEEL_KEYJOY_SENSITIVITY_LABEL_CAT_PT_BR "Sensibilidade do Volante"
#define DICE_WHEEL_KEYJOY_SENSITIVITY_INFO_0_PT_BR "Sensibilidade ao usar o direcional D-pad ou analógico para um volante."
#define DICE_THROTTLE_KEYJOY_SENSITIVITY_LABEL_PT_BR "Entrada > Sensibilidade do Acelerador"
#define DICE_THROTTLE_KEYJOY_SENSITIVITY_LABEL_CAT_PT_BR "Sensibilidade do Acelerador"
#define DICE_THROTTLE_KEYJOY_SENSITIVITY_INFO_0_PT_BR "Sensibilidade ao usar o direcional D-pad ou analógico para um acelerador."
#define DICE_RETROMOUSE_PADDLE0_LABEL_PT_BR "RetroMouse > Usar Mouse para o Paddle 1"
#define DICE_RETROMOUSE_PADDLE0_LABEL_CAT_PT_BR "Usar Mouse para o Paddle 1"
#define DICE_RETROMOUSE_PADDLE0_INFO_0_PT_BR "Usa um mouse específico para o Paddle 1, escolhido pelo Índice de Mouse da Porta 1."
#define DICE_RETROMOUSE_PADDLE1_LABEL_PT_BR "RetroMouse > Usar Mouse para o Paddle 2"
#define DICE_RETROMOUSE_PADDLE1_LABEL_CAT_PT_BR "Usar Mouse para o Paddle 2"
#define DICE_RETROMOUSE_PADDLE1_INFO_0_PT_BR "Usa um mouse específico para o Paddle 2, escolhido pelo Índice de Mouse da Porta 2."
#define DICE_RETROMOUSE_PADDLE2_LABEL_PT_BR "RetroMouse > Usar Mouse para o Paddle 3"
#define DICE_RETROMOUSE_PADDLE2_LABEL_CAT_PT_BR "Usar Mouse para o Paddle 3"
#define DICE_RETROMOUSE_PADDLE2_INFO_0_PT_BR "Usa um mouse específico para o Paddle 3, escolhido pelo Índice de Mouse da Porta 3."
#define DICE_RETROMOUSE_PADDLE3_LABEL_PT_BR "RetroMouse > Usar Mouse para o Paddle 4"
#define DICE_RETROMOUSE_PADDLE3_LABEL_CAT_PT_BR "Usar Mouse para o Paddle 4"
#define DICE_RETROMOUSE_PADDLE3_INFO_0_PT_BR "Usa um mouse específico para o Paddle 4, escolhido pelo Índice de Mouse da Porta 4."
#define DICE_RETROMOUSE_PADDLE0_X_LABEL_PT_BR "RetroMouse > Eixo do Mouse para Paddle 1 Horizontal"
#define DICE_RETROMOUSE_PADDLE0_X_LABEL_CAT_PT_BR "Eixo do Mouse para Paddle 1 Horizontal"
#define DICE_RETROMOUSE_PADDLE0_X_INFO_0_PT_BR "Eixo do mouse para o jogador 1, movimento horizontal da tela."
#define OPTION_VAL_X_PT_BR NULL
#define OPTION_VAL_Y_PT_BR NULL
#define DICE_RETROMOUSE_PADDLE0_Y_LABEL_PT_BR "RetroMouse > Eixo do Mouse para Paddle 1 Vertical"
#define DICE_RETROMOUSE_PADDLE0_Y_LABEL_CAT_PT_BR "Eixo do Mouse para Paddle 1 Vertical"
#define DICE_RETROMOUSE_PADDLE0_Y_INFO_0_PT_BR "Eixo do mouse para o jogador 1, movimento vertical da tela."
#define DICE_RETROMOUSE_PADDLE1_X_LABEL_PT_BR "RetroMouse > Eixo do Mouse para Paddle 2 Horizontal"
#define DICE_RETROMOUSE_PADDLE1_X_LABEL_CAT_PT_BR "Eixo do Mouse para Paddle 2 Horizontal"
#define DICE_RETROMOUSE_PADDLE1_X_INFO_0_PT_BR "Eixo do mouse para o jogador 2, movimento horizontal da tela."
#define DICE_RETROMOUSE_PADDLE1_Y_LABEL_PT_BR "RetroMouse > Eixo do Mouse para Paddle 2 Vertical"
#define DICE_RETROMOUSE_PADDLE1_Y_LABEL_CAT_PT_BR "Eixo do Mouse para Paddle 2 Vertical"
#define DICE_RETROMOUSE_PADDLE1_Y_INFO_0_PT_BR "Eixo do mouse para o jogador 2, movimento vertical da tela."
#define DICE_RETROMOUSE_PADDLE2_X_LABEL_PT_BR "RetroMouse > Eixo do Mouse para Paddle 3 Horizontal"
#define DICE_RETROMOUSE_PADDLE2_X_LABEL_CAT_PT_BR "Eixo do Mouse para Paddle 3 Horizontal"
#define DICE_RETROMOUSE_PADDLE2_X_INFO_0_PT_BR "Eixo do mouse para o jogador 3, movimento horizontal da tela."
#define DICE_RETROMOUSE_PADDLE2_Y_LABEL_PT_BR "RetroMouse > Eixo do Mouse para Paddle 3 Vertical"
#define DICE_RETROMOUSE_PADDLE2_Y_LABEL_CAT_PT_BR "Eixo do Mouse para Paddle 3 Vertical"
#define DICE_RETROMOUSE_PADDLE2_Y_INFO_0_PT_BR "Eixo do mouse para o jogador 3, movimento vertical da tela."
#define DICE_RETROMOUSE_PADDLE3_X_LABEL_PT_BR "RetroMouse > Eixo do Mouse para Paddle 4 Horizontal"
#define DICE_RETROMOUSE_PADDLE3_X_LABEL_CAT_PT_BR "Eixo do Mouse para Paddle 4 Horizontal"
#define DICE_RETROMOUSE_PADDLE3_X_INFO_0_PT_BR "Eixo do mouse para o jogador 4, movimento horizontal da tela."
#define DICE_RETROMOUSE_PADDLE3_Y_LABEL_PT_BR "RetroMouse > Eixo do Mouse para Paddle 4 Vertical"
#define DICE_RETROMOUSE_PADDLE3_Y_LABEL_CAT_PT_BR "Eixo do Mouse para Paddle 4 Vertical"
#define DICE_RETROMOUSE_PADDLE3_Y_INFO_0_PT_BR "Eixo do mouse para o jogador 4, movimento vertical da tela."
#define DICE_MANYMOUSE_PADDLE0_LABEL_PT_BR "ManyMouse > Usar Mouse para o Paddle 1"
#define DICE_MANYMOUSE_PADDLE0_INFO_0_PT_BR "Usa um mouse para o Paddle 1."
#define DICE_MANYMOUSE_PADDLE0_X_LABEL_PT_BR "ManyMouse > Paddle do Mouse 1 x"
#define DICE_MANYMOUSE_PADDLE0_X_LABEL_CAT_PT_BR "Paddle do Mouse 1 x"
#define OPTION_VAL_0X_PT_BR NULL
#define OPTION_VAL_0Y_PT_BR NULL
#define OPTION_VAL_1X_PT_BR NULL
#define OPTION_VAL_1Y_PT_BR NULL
#define OPTION_VAL_2X_PT_BR NULL
#define OPTION_VAL_2Y_PT_BR NULL
#define OPTION_VAL_3X_PT_BR NULL
#define OPTION_VAL_3Y_PT_BR NULL
#define DICE_MANYMOUSE_PADDLE0_Y_LABEL_PT_BR "ManyMouse > Paddle do Mouse 1 y"
#define DICE_MANYMOUSE_PADDLE0_Y_LABEL_CAT_PT_BR "Paddle do Mouse 1 y"
#define DICE_MANYMOUSE_PADDLE1_LABEL_PT_BR "ManyMouse > Usar Mouse para o Paddle 2"
#define DICE_MANYMOUSE_PADDLE1_INFO_0_PT_BR "Usa um mouse para o Paddle 2."
#define DICE_MANYMOUSE_PADDLE1_X_LABEL_PT_BR "ManyMouse > Paddle do Mouse 2 x"
#define DICE_MANYMOUSE_PADDLE1_X_LABEL_CAT_PT_BR "Paddle do Mouse 2 x"
#define DICE_MANYMOUSE_PADDLE1_Y_LABEL_PT_BR "ManyMouse > Paddle do Mouse 2 y"
#define DICE_MANYMOUSE_PADDLE1_Y_LABEL_CAT_PT_BR "Paddle do Mouse 2 y"
#define DICE_MANYMOUSE_PADDLE2_LABEL_PT_BR "ManyMouse > Usar Mouse para o Paddle 3"
#define DICE_MANYMOUSE_PADDLE2_INFO_0_PT_BR "Usa um mouse para o Paddle 3."
#define DICE_MANYMOUSE_PADDLE2_X_LABEL_PT_BR "ManyMouse > Paddle do Mouse 3 x"
#define DICE_MANYMOUSE_PADDLE2_X_LABEL_CAT_PT_BR "Paddle do Mouse 3 x"
#define DICE_MANYMOUSE_PADDLE2_Y_LABEL_PT_BR "ManyMouse > Paddle do Mouse 3 y"
#define DICE_MANYMOUSE_PADDLE2_Y_LABEL_CAT_PT_BR "Paddle do Mouse 3 y"
#define DICE_MANYMOUSE_PADDLE3_LABEL_PT_BR "ManyMouse > Usar Mouse para o Paddle 4"
#define DICE_MANYMOUSE_PADDLE3_INFO_0_PT_BR "Usa um mouse para o Paddle 4."
#define DICE_MANYMOUSE_PADDLE3_X_LABEL_PT_BR "ManyMouse > Paddle do Mouse 4 x"
#define DICE_MANYMOUSE_PADDLE3_X_LABEL_CAT_PT_BR "Paddle do Mouse 4 x"
#define DICE_MANYMOUSE_PADDLE3_Y_LABEL_PT_BR "ManyMouse > Paddle do Mouse 4 y"
#define DICE_MANYMOUSE_PADDLE3_Y_LABEL_CAT_PT_BR "RetroMouse > Eixo do Mouse para Paddle 1 Horizontal"
#define DICE_DIPSWITCH_1_LABEL_PT_BR "Chave DIP > Chave DIP 1"
#define DICE_DIPSWITCH_1_LABEL_CAT_PT_BR "Chave DIP 1"
#define DICE_DIPSWITCH_1_INFO_0_PT_BR "Configuração para a chave DIP 1."
#define OPTION_VAL_1_PT_BR "padrão"
#define DICE_DIPSWITCH_2_LABEL_PT_BR "Chave DIP > Chave DIP 2"
#define DICE_DIPSWITCH_2_LABEL_CAT_PT_BR "Chave DIP 2"
#define DICE_DIPSWITCH_2_INFO_0_PT_BR "Configuração para a chave DIP 2."
#define DICE_DIPSWITCH_3_LABEL_PT_BR "Chave DIP > Chave DIP 3"
#define DICE_DIPSWITCH_3_LABEL_CAT_PT_BR "Chave DIP 3"
#define DICE_DIPSWITCH_3_INFO_0_PT_BR "Configuração para a chave DIP 3."
#define DICE_DIPSWITCH16_1_LABEL_PT_BR "Chave DIP > Chave DIP Hex 1"
#define DICE_DIPSWITCH16_1_LABEL_CAT_PT_BR "Chave DIP Hex 1"
#define DICE_DIPSWITCH16_1_INFO_0_PT_BR "Configuração para a chave DIP de 16 posições número 1."
#define DICE_DIPSWITCH16_2_LABEL_PT_BR "Chave DIP > Chave DIP Hex 2"
#define DICE_DIPSWITCH16_2_LABEL_CAT_PT_BR "Chave DIP Hex 2"
#define DICE_DIPSWITCH16_2_INFO_0_PT_BR "Configuração para a chave DIP de 16 posições número 2."

struct retro_core_option_v2_category option_cats_pt_br[] = {
   {
      "input",
      CATEGORY_INPUT_LABEL_PT_BR,
      CATEGORY_INPUT_INFO_0_PT_BR
   },
   {
      "retromouse",
      CATEGORY_RETROMOUSE_LABEL_PT_BR,
      CATEGORY_RETROMOUSE_INFO_0_PT_BR
   },
#ifdef MANYMOUSE
   {
      "manymouse",
      CATEGORY_MANYMOUSE_LABEL_PT_BR,
      CATEGORY_MANYMOUSE_INFO_0_PT_BR
   },
#endif
   {
      "dipswitch",
      CATEGORY_DIPSWITCH_LABEL_PT_BR,
      CATEGORY_DIPSWITCH_INFO_0_PT_BR
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_pt_br[] = {
   {
      "dice_use_mouse_pointer_for_paddle_1",
      DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_LABEL_PT_BR,
      DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_LABEL_CAT_PT_BR,
      DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_INFO_0_PT_BR,
      NULL,
      "input",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_paddle_joystick_absolute",
      DICE_PADDLE_JOYSTICK_ABSOLUTE_LABEL_PT_BR,
      DICE_PADDLE_JOYSTICK_ABSOLUTE_LABEL_CAT_PT_BR,
      DICE_PADDLE_JOYSTICK_ABSOLUTE_INFO_0_PT_BR,
      NULL,
      "input",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      // D-pad but not necessarily keyboard under libretro,
      // that name comes from the upstream code.
      "dice_paddle_keyboard_sensitivity",
      DICE_PADDLE_KEYBOARD_SENSITIVITY_LABEL_PT_BR,
      DICE_PADDLE_KEYBOARD_SENSITIVITY_LABEL_CAT_PT_BR,
      DICE_PADDLE_KEYBOARD_SENSITIVITY_INFO_0_PT_BR,
      NULL,
      "input",
      {
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "250"
   },
   {
      "dice_paddle_joystick_sensitivity",
      DICE_PADDLE_JOYSTICK_SENSITIVITY_LABEL_PT_BR,
      DICE_PADDLE_JOYSTICK_SENSITIVITY_LABEL_CAT_PT_BR,
      DICE_PADDLE_JOYSTICK_SENSITIVITY_INFO_0_PT_BR,
      NULL,
      "input",
      {
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "500"
   },
   {
      "dice_retromouse_paddle_sensitivity",
      DICE_RETROMOUSE_PADDLE_SENSITIVITY_LABEL_PT_BR,
      DICE_RETROMOUSE_PADDLE_SENSITIVITY_LABEL_CAT_PT_BR,
      DICE_RETROMOUSE_PADDLE_SENSITIVITY_INFO_0_PT_BR,
      NULL,
      "input",
      {
         {"25", NULL},
         {"50", NULL},
         {"75", NULL},
         {"100", NULL},
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "125"
   },
   {
      "dice_wheel_keyjoy_sensitivity",
      DICE_WHEEL_KEYJOY_SENSITIVITY_LABEL_PT_BR,
      DICE_WHEEL_KEYJOY_SENSITIVITY_LABEL_CAT_PT_BR,
      DICE_WHEEL_KEYJOY_SENSITIVITY_INFO_0_PT_BR,
      NULL,
      "input",
      {
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "500"
   },
   {
      "dice_throttle_keyjoy_sensitivity",
      DICE_THROTTLE_KEYJOY_SENSITIVITY_LABEL_PT_BR,
      DICE_THROTTLE_KEYJOY_SENSITIVITY_LABEL_CAT_PT_BR,
      DICE_THROTTLE_KEYJOY_SENSITIVITY_INFO_0_PT_BR,
      NULL,
      "input",
      {
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "250"
   },

   {
      "dice_retromouse_paddle0",
      DICE_RETROMOUSE_PADDLE0_LABEL_PT_BR,
      DICE_RETROMOUSE_PADDLE0_LABEL_CAT_PT_BR,
      DICE_RETROMOUSE_PADDLE0_INFO_0_PT_BR,
      NULL,
      "retromouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_retromouse_paddle1",
      DICE_RETROMOUSE_PADDLE1_LABEL_PT_BR,
      DICE_RETROMOUSE_PADDLE1_LABEL_CAT_PT_BR,
      DICE_RETROMOUSE_PADDLE1_INFO_0_PT_BR,
      NULL,
      "retromouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_retromouse_paddle2",
      DICE_RETROMOUSE_PADDLE2_LABEL_PT_BR,
      DICE_RETROMOUSE_PADDLE2_LABEL_CAT_PT_BR,
      DICE_RETROMOUSE_PADDLE2_INFO_0_PT_BR,
      NULL,
      "retromouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_retromouse_paddle3",
      DICE_RETROMOUSE_PADDLE3_LABEL_PT_BR,
      DICE_RETROMOUSE_PADDLE3_LABEL_CAT_PT_BR,
      DICE_RETROMOUSE_PADDLE3_INFO_0_PT_BR,
      NULL,
      "retromouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_retromouse_paddle0_x",
      DICE_RETROMOUSE_PADDLE0_X_LABEL_PT_BR,
      DICE_RETROMOUSE_PADDLE0_X_LABEL_CAT_PT_BR,
      DICE_RETROMOUSE_PADDLE0_X_INFO_0_PT_BR,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_PT_BR},
         {"y", OPTION_VAL_Y_PT_BR},
         {NULL, NULL},
      },
      "x"
   },
   {
      "dice_retromouse_paddle0_y",
      DICE_RETROMOUSE_PADDLE0_Y_LABEL_PT_BR,
      DICE_RETROMOUSE_PADDLE0_Y_LABEL_CAT_PT_BR,
      DICE_RETROMOUSE_PADDLE0_Y_INFO_0_PT_BR,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_PT_BR},
         {"y", OPTION_VAL_Y_PT_BR},
         {NULL, NULL},
      },
      "y"
   },
   {
      "dice_retromouse_paddle1_x",
      DICE_RETROMOUSE_PADDLE1_X_LABEL_PT_BR,
      DICE_RETROMOUSE_PADDLE1_X_LABEL_CAT_PT_BR,
      DICE_RETROMOUSE_PADDLE1_X_INFO_0_PT_BR,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_PT_BR},
         {"y", OPTION_VAL_Y_PT_BR},
         {NULL, NULL},
      },
      "x"
   },
   {
      "dice_retromouse_paddle1_y",
      DICE_RETROMOUSE_PADDLE1_Y_LABEL_PT_BR,
      DICE_RETROMOUSE_PADDLE1_Y_LABEL_CAT_PT_BR,
      DICE_RETROMOUSE_PADDLE1_Y_INFO_0_PT_BR,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_PT_BR},
         {"y", OPTION_VAL_Y_PT_BR},
         {NULL, NULL},
      },
      "y"
   },
   {
      "dice_retromouse_paddle2_x",
      DICE_RETROMOUSE_PADDLE2_X_LABEL_PT_BR,
      DICE_RETROMOUSE_PADDLE2_X_LABEL_CAT_PT_BR,
      DICE_RETROMOUSE_PADDLE2_X_INFO_0_PT_BR,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_PT_BR},
         {"y", OPTION_VAL_Y_PT_BR},
         {NULL, NULL},
      },
      "x"
   },
   {
      "dice_retromouse_paddle2_y",
      DICE_RETROMOUSE_PADDLE2_Y_LABEL_PT_BR,
      DICE_RETROMOUSE_PADDLE2_Y_LABEL_CAT_PT_BR,
      DICE_RETROMOUSE_PADDLE2_Y_INFO_0_PT_BR,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_PT_BR},
         {"y", OPTION_VAL_Y_PT_BR},
         {NULL, NULL},
      },
      "y"
   },
   {
      "dice_retromouse_paddle3_x",
      DICE_RETROMOUSE_PADDLE3_X_LABEL_PT_BR,
      DICE_RETROMOUSE_PADDLE3_X_LABEL_CAT_PT_BR,
      DICE_RETROMOUSE_PADDLE3_X_INFO_0_PT_BR,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_PT_BR},
         {"y", OPTION_VAL_Y_PT_BR},
         {NULL, NULL},
      },
      "x"
   },
   {
      "dice_retromouse_paddle3_y",
      DICE_RETROMOUSE_PADDLE3_Y_LABEL_PT_BR,
      DICE_RETROMOUSE_PADDLE3_Y_LABEL_CAT_PT_BR,
      DICE_RETROMOUSE_PADDLE3_Y_INFO_0_PT_BR,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_PT_BR},
         {"y", OPTION_VAL_Y_PT_BR},
         {NULL, NULL},
      },
      "y"
   },

#ifdef MANYMOUSE
   {
      "dice_manymouse_paddle0",
      DICE_MANYMOUSE_PADDLE0_LABEL_PT_BR,
      DICE_RETROMOUSE_PADDLE0_LABEL_CAT_PT_BR,
      DICE_MANYMOUSE_PADDLE0_INFO_0_PT_BR,
      NULL,
      "manymouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_manymouse_paddle0_x",
      DICE_MANYMOUSE_PADDLE0_X_LABEL_PT_BR,
      DICE_MANYMOUSE_PADDLE0_X_LABEL_CAT_PT_BR,
      DICE_RETROMOUSE_PADDLE0_X_INFO_0_PT_BR,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_PT_BR},
         {"0y", OPTION_VAL_0Y_PT_BR},
         {"1x", OPTION_VAL_1X_PT_BR},
         {"1y", OPTION_VAL_1Y_PT_BR},
         {"2x", OPTION_VAL_2X_PT_BR},
         {"2y", OPTION_VAL_2Y_PT_BR},
         {"3x", OPTION_VAL_3X_PT_BR},
         {"3y", OPTION_VAL_3Y_PT_BR},
         {NULL, NULL},
      },
      "0x"
   },
   {
      "dice_manymouse_paddle0_y",
      DICE_MANYMOUSE_PADDLE0_Y_LABEL_PT_BR,
      DICE_MANYMOUSE_PADDLE0_Y_LABEL_CAT_PT_BR,
      DICE_RETROMOUSE_PADDLE0_Y_INFO_0_PT_BR,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_PT_BR},
         {"0y", OPTION_VAL_0Y_PT_BR},
         {"1x", OPTION_VAL_1X_PT_BR},
         {"1y", OPTION_VAL_1Y_PT_BR},
         {"2x", OPTION_VAL_2X_PT_BR},
         {"2y", OPTION_VAL_2Y_PT_BR},
         {"3x", OPTION_VAL_3X_PT_BR},
         {"3y", OPTION_VAL_3Y_PT_BR},
         {NULL, NULL},
      },
      "0y"
   },
   {
      "dice_manymouse_paddle1",
      DICE_MANYMOUSE_PADDLE1_LABEL_PT_BR,
      DICE_RETROMOUSE_PADDLE1_LABEL_CAT_PT_BR,
      DICE_MANYMOUSE_PADDLE1_INFO_0_PT_BR,
      NULL,
      "manymouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_manymouse_paddle1_x",
      DICE_MANYMOUSE_PADDLE1_X_LABEL_PT_BR,
      DICE_MANYMOUSE_PADDLE1_X_LABEL_CAT_PT_BR,
      DICE_RETROMOUSE_PADDLE1_X_INFO_0_PT_BR,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_PT_BR},
         {"0y", OPTION_VAL_0Y_PT_BR},
         {"1x", OPTION_VAL_1X_PT_BR},
         {"1y", OPTION_VAL_1Y_PT_BR},
         {"2x", OPTION_VAL_2X_PT_BR},
         {"2y", OPTION_VAL_2Y_PT_BR},
         {"3x", OPTION_VAL_3X_PT_BR},
         {"3y", OPTION_VAL_3Y_PT_BR},
         {NULL, NULL},
      },
      "1x"
   },
   {
      "dice_manymouse_paddle1_y",
      DICE_MANYMOUSE_PADDLE1_Y_LABEL_PT_BR,
      DICE_MANYMOUSE_PADDLE1_Y_LABEL_CAT_PT_BR,
      DICE_RETROMOUSE_PADDLE1_Y_INFO_0_PT_BR,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_PT_BR},
         {"0y", OPTION_VAL_0Y_PT_BR},
         {"1x", OPTION_VAL_1X_PT_BR},
         {"1y", OPTION_VAL_1Y_PT_BR},
         {"2x", OPTION_VAL_2X_PT_BR},
         {"2y", OPTION_VAL_2Y_PT_BR},
         {"3x", OPTION_VAL_3X_PT_BR},
         {"3y", OPTION_VAL_3Y_PT_BR},
         {NULL, NULL},
      },
      "1y"
   },
   {
      "dice_manymouse_paddle2",
      DICE_MANYMOUSE_PADDLE2_LABEL_PT_BR,
      DICE_RETROMOUSE_PADDLE2_LABEL_CAT_PT_BR,
      DICE_MANYMOUSE_PADDLE2_INFO_0_PT_BR,
      NULL,
      "manymouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_manymouse_paddle2_x",
      DICE_MANYMOUSE_PADDLE2_X_LABEL_PT_BR,
      DICE_MANYMOUSE_PADDLE2_X_LABEL_CAT_PT_BR,
      DICE_RETROMOUSE_PADDLE2_X_INFO_0_PT_BR,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_PT_BR},
         {"0y", OPTION_VAL_0Y_PT_BR},
         {"1x", OPTION_VAL_1X_PT_BR},
         {"1y", OPTION_VAL_1Y_PT_BR},
         {"2x", OPTION_VAL_2X_PT_BR},
         {"2y", OPTION_VAL_2Y_PT_BR},
         {"3x", OPTION_VAL_3X_PT_BR},
         {"3y", OPTION_VAL_3Y_PT_BR},
         {NULL, NULL},
      },
      "2x"
   },
   {
      "dice_manymouse_paddle2_y",
      DICE_MANYMOUSE_PADDLE2_Y_LABEL_PT_BR,
      DICE_MANYMOUSE_PADDLE2_Y_LABEL_CAT_PT_BR,
      DICE_RETROMOUSE_PADDLE2_Y_INFO_0_PT_BR,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_PT_BR},
         {"0y", OPTION_VAL_0Y_PT_BR},
         {"1x", OPTION_VAL_1X_PT_BR},
         {"1y", OPTION_VAL_1Y_PT_BR},
         {"2x", OPTION_VAL_2X_PT_BR},
         {"2y", OPTION_VAL_2Y_PT_BR},
         {"3x", OPTION_VAL_3X_PT_BR},
         {"3y", OPTION_VAL_3Y_PT_BR},
         {NULL, NULL},
      },
      "2y"
   },
   {
      "dice_manymouse_paddle3",
      DICE_MANYMOUSE_PADDLE3_LABEL_PT_BR,
      DICE_RETROMOUSE_PADDLE3_LABEL_CAT_PT_BR,
      DICE_MANYMOUSE_PADDLE3_INFO_0_PT_BR,
      NULL,
      "manymouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_manymouse_paddle3_x",
      DICE_MANYMOUSE_PADDLE3_X_LABEL_PT_BR,
      DICE_MANYMOUSE_PADDLE3_X_LABEL_CAT_PT_BR,
      DICE_RETROMOUSE_PADDLE3_X_INFO_0_PT_BR,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_PT_BR},
         {"0y", OPTION_VAL_0Y_PT_BR},
         {"1x", OPTION_VAL_1X_PT_BR},
         {"1y", OPTION_VAL_1Y_PT_BR},
         {"2x", OPTION_VAL_2X_PT_BR},
         {"2y", OPTION_VAL_2Y_PT_BR},
         {"3x", OPTION_VAL_3X_PT_BR},
         {"3y", OPTION_VAL_3Y_PT_BR},
         {NULL, NULL},
      },
      "3x"
   },
   {
      "dice_manymouse_paddle3_y",
      DICE_MANYMOUSE_PADDLE3_Y_LABEL_PT_BR,
      DICE_MANYMOUSE_PADDLE3_Y_LABEL_CAT_PT_BR,
      DICE_RETROMOUSE_PADDLE3_Y_INFO_0_PT_BR,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_PT_BR},
         {"0y", OPTION_VAL_0Y_PT_BR},
         {"1x", OPTION_VAL_1X_PT_BR},
         {"1y", OPTION_VAL_1Y_PT_BR},
         {"2x", OPTION_VAL_2X_PT_BR},
         {"2y", OPTION_VAL_2Y_PT_BR},
         {"3x", OPTION_VAL_3X_PT_BR},
         {"3y", OPTION_VAL_3Y_PT_BR},
         {NULL, NULL},
      },
      "3y"
   },
#endif

   {
      "dice_dipswitch_1",
      DICE_DIPSWITCH_1_LABEL_PT_BR,
      DICE_DIPSWITCH_1_LABEL_CAT_PT_BR,
      DICE_DIPSWITCH_1_INFO_0_PT_BR,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_PT_BR},
         {"0", NULL},
         {"1", NULL},
         {NULL, NULL},
      },
      "-1"
   },
   {
      "dice_dipswitch_2",
      DICE_DIPSWITCH_2_LABEL_PT_BR,
      DICE_DIPSWITCH_2_LABEL_CAT_PT_BR,
      DICE_DIPSWITCH_2_INFO_0_PT_BR,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_PT_BR},
         {"0", NULL},
         {"1", NULL},
         {NULL, NULL},
      },
      "-1"
   },
   {
      "dice_dipswitch_3",
      DICE_DIPSWITCH_3_LABEL_PT_BR,
      DICE_DIPSWITCH_3_LABEL_CAT_PT_BR,
      DICE_DIPSWITCH_3_INFO_0_PT_BR,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_PT_BR},
         {"0", NULL},
         {"1", NULL},
         {NULL, NULL},
      },
      "-1"
   },
   {
      "dice_dipswitch16_1",
      DICE_DIPSWITCH16_1_LABEL_PT_BR,
      DICE_DIPSWITCH16_1_LABEL_CAT_PT_BR,
      DICE_DIPSWITCH16_1_INFO_0_PT_BR,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_PT_BR},
         {"0", NULL},
         {"1", NULL},
         {"2", NULL},
         {"3", NULL},
         {"4", NULL},
         {"5", NULL},
         {"6", NULL},
         {"7", NULL},
         {"8", NULL},
         {"9", NULL},
         {"10", NULL},
         {"11", NULL},
         {"12", NULL},
         {"13", NULL},
         {"14", NULL},
         {"15", NULL},
         {NULL, NULL},
      },
      "-1"
   },
   {
      "dice_dipswitch16_2",
      DICE_DIPSWITCH16_2_LABEL_PT_BR,
      DICE_DIPSWITCH16_2_LABEL_CAT_PT_BR,
      DICE_DIPSWITCH16_2_INFO_0_PT_BR,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_PT_BR},
         {"0", NULL},
         {"1", NULL},
         {"2", NULL},
         {"3", NULL},
         {"4", NULL},
         {"5", NULL},
         {"6", NULL},
         {"7", NULL},
         {"8", NULL},
         {"9", NULL},
         {"10", NULL},
         {"11", NULL},
         {"12", NULL},
         {"13", NULL},
         {"14", NULL},
         {"15", NULL},
         {NULL, NULL},
      },
      "-1"
   },

   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_pt_br = {
   option_cats_pt_br,
   option_defs_pt_br
};

/* RETRO_LANGUAGE_PT_PT */

#define CATEGORY_INPUT_LABEL_PT_PT "Entrada"
#define CATEGORY_INPUT_INFO_0_PT_PT NULL
#define CATEGORY_RETROMOUSE_LABEL_PT_PT NULL
#define CATEGORY_RETROMOUSE_INFO_0_PT_PT NULL
#define CATEGORY_MANYMOUSE_LABEL_PT_PT NULL
#define CATEGORY_MANYMOUSE_INFO_0_PT_PT NULL
#define CATEGORY_DIPSWITCH_LABEL_PT_PT NULL
#define CATEGORY_DIPSWITCH_INFO_0_PT_PT NULL
#define DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_LABEL_PT_PT NULL
#define DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_LABEL_CAT_PT_PT NULL
#define DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_INFO_0_PT_PT NULL
#define DICE_PADDLE_JOYSTICK_ABSOLUTE_LABEL_PT_PT NULL
#define DICE_PADDLE_JOYSTICK_ABSOLUTE_LABEL_CAT_PT_PT NULL
#define DICE_PADDLE_JOYSTICK_ABSOLUTE_INFO_0_PT_PT NULL
#define DICE_PADDLE_KEYBOARD_SENSITIVITY_LABEL_PT_PT NULL
#define DICE_PADDLE_KEYBOARD_SENSITIVITY_LABEL_CAT_PT_PT NULL
#define DICE_PADDLE_KEYBOARD_SENSITIVITY_INFO_0_PT_PT NULL
#define DICE_PADDLE_JOYSTICK_SENSITIVITY_LABEL_PT_PT NULL
#define DICE_PADDLE_JOYSTICK_SENSITIVITY_LABEL_CAT_PT_PT NULL
#define DICE_PADDLE_JOYSTICK_SENSITIVITY_INFO_0_PT_PT NULL
#define DICE_RETROMOUSE_PADDLE_SENSITIVITY_LABEL_PT_PT NULL
#define DICE_RETROMOUSE_PADDLE_SENSITIVITY_LABEL_CAT_PT_PT NULL
#define DICE_RETROMOUSE_PADDLE_SENSITIVITY_INFO_0_PT_PT NULL
#define DICE_WHEEL_KEYJOY_SENSITIVITY_LABEL_PT_PT NULL
#define DICE_WHEEL_KEYJOY_SENSITIVITY_LABEL_CAT_PT_PT NULL
#define DICE_WHEEL_KEYJOY_SENSITIVITY_INFO_0_PT_PT NULL
#define DICE_THROTTLE_KEYJOY_SENSITIVITY_LABEL_PT_PT NULL
#define DICE_THROTTLE_KEYJOY_SENSITIVITY_LABEL_CAT_PT_PT NULL
#define DICE_THROTTLE_KEYJOY_SENSITIVITY_INFO_0_PT_PT NULL
#define DICE_RETROMOUSE_PADDLE0_LABEL_PT_PT NULL
#define DICE_RETROMOUSE_PADDLE0_LABEL_CAT_PT_PT NULL
#define DICE_RETROMOUSE_PADDLE0_INFO_0_PT_PT NULL
#define DICE_RETROMOUSE_PADDLE1_LABEL_PT_PT NULL
#define DICE_RETROMOUSE_PADDLE1_LABEL_CAT_PT_PT NULL
#define DICE_RETROMOUSE_PADDLE1_INFO_0_PT_PT NULL
#define DICE_RETROMOUSE_PADDLE2_LABEL_PT_PT NULL
#define DICE_RETROMOUSE_PADDLE2_LABEL_CAT_PT_PT NULL
#define DICE_RETROMOUSE_PADDLE2_INFO_0_PT_PT NULL
#define DICE_RETROMOUSE_PADDLE3_LABEL_PT_PT NULL
#define DICE_RETROMOUSE_PADDLE3_LABEL_CAT_PT_PT NULL
#define DICE_RETROMOUSE_PADDLE3_INFO_0_PT_PT NULL
#define DICE_RETROMOUSE_PADDLE0_X_LABEL_PT_PT NULL
#define DICE_RETROMOUSE_PADDLE0_X_LABEL_CAT_PT_PT NULL
#define DICE_RETROMOUSE_PADDLE0_X_INFO_0_PT_PT NULL
#define OPTION_VAL_X_PT_PT NULL
#define OPTION_VAL_Y_PT_PT NULL
#define DICE_RETROMOUSE_PADDLE0_Y_LABEL_PT_PT NULL
#define DICE_RETROMOUSE_PADDLE0_Y_LABEL_CAT_PT_PT NULL
#define DICE_RETROMOUSE_PADDLE0_Y_INFO_0_PT_PT NULL
#define DICE_RETROMOUSE_PADDLE1_X_LABEL_PT_PT NULL
#define DICE_RETROMOUSE_PADDLE1_X_LABEL_CAT_PT_PT NULL
#define DICE_RETROMOUSE_PADDLE1_X_INFO_0_PT_PT NULL
#define DICE_RETROMOUSE_PADDLE1_Y_LABEL_PT_PT NULL
#define DICE_RETROMOUSE_PADDLE1_Y_LABEL_CAT_PT_PT NULL
#define DICE_RETROMOUSE_PADDLE1_Y_INFO_0_PT_PT NULL
#define DICE_RETROMOUSE_PADDLE2_X_LABEL_PT_PT NULL
#define DICE_RETROMOUSE_PADDLE2_X_LABEL_CAT_PT_PT NULL
#define DICE_RETROMOUSE_PADDLE2_X_INFO_0_PT_PT NULL
#define DICE_RETROMOUSE_PADDLE2_Y_LABEL_PT_PT NULL
#define DICE_RETROMOUSE_PADDLE2_Y_LABEL_CAT_PT_PT NULL
#define DICE_RETROMOUSE_PADDLE2_Y_INFO_0_PT_PT NULL
#define DICE_RETROMOUSE_PADDLE3_X_LABEL_PT_PT NULL
#define DICE_RETROMOUSE_PADDLE3_X_LABEL_CAT_PT_PT NULL
#define DICE_RETROMOUSE_PADDLE3_X_INFO_0_PT_PT NULL
#define DICE_RETROMOUSE_PADDLE3_Y_LABEL_PT_PT NULL
#define DICE_RETROMOUSE_PADDLE3_Y_LABEL_CAT_PT_PT NULL
#define DICE_RETROMOUSE_PADDLE3_Y_INFO_0_PT_PT NULL
#define DICE_MANYMOUSE_PADDLE0_LABEL_PT_PT NULL
#define DICE_MANYMOUSE_PADDLE0_INFO_0_PT_PT NULL
#define DICE_MANYMOUSE_PADDLE0_X_LABEL_PT_PT NULL
#define DICE_MANYMOUSE_PADDLE0_X_LABEL_CAT_PT_PT NULL
#define OPTION_VAL_0X_PT_PT NULL
#define OPTION_VAL_0Y_PT_PT NULL
#define OPTION_VAL_1X_PT_PT NULL
#define OPTION_VAL_1Y_PT_PT NULL
#define OPTION_VAL_2X_PT_PT NULL
#define OPTION_VAL_2Y_PT_PT NULL
#define OPTION_VAL_3X_PT_PT NULL
#define OPTION_VAL_3Y_PT_PT NULL
#define DICE_MANYMOUSE_PADDLE0_Y_LABEL_PT_PT NULL
#define DICE_MANYMOUSE_PADDLE0_Y_LABEL_CAT_PT_PT NULL
#define DICE_MANYMOUSE_PADDLE1_LABEL_PT_PT NULL
#define DICE_MANYMOUSE_PADDLE1_INFO_0_PT_PT NULL
#define DICE_MANYMOUSE_PADDLE1_X_LABEL_PT_PT NULL
#define DICE_MANYMOUSE_PADDLE1_X_LABEL_CAT_PT_PT NULL
#define DICE_MANYMOUSE_PADDLE1_Y_LABEL_PT_PT NULL
#define DICE_MANYMOUSE_PADDLE1_Y_LABEL_CAT_PT_PT NULL
#define DICE_MANYMOUSE_PADDLE2_LABEL_PT_PT NULL
#define DICE_MANYMOUSE_PADDLE2_INFO_0_PT_PT NULL
#define DICE_MANYMOUSE_PADDLE2_X_LABEL_PT_PT NULL
#define DICE_MANYMOUSE_PADDLE2_X_LABEL_CAT_PT_PT NULL
#define DICE_MANYMOUSE_PADDLE2_Y_LABEL_PT_PT NULL
#define DICE_MANYMOUSE_PADDLE2_Y_LABEL_CAT_PT_PT NULL
#define DICE_MANYMOUSE_PADDLE3_LABEL_PT_PT NULL
#define DICE_MANYMOUSE_PADDLE3_INFO_0_PT_PT NULL
#define DICE_MANYMOUSE_PADDLE3_X_LABEL_PT_PT NULL
#define DICE_MANYMOUSE_PADDLE3_X_LABEL_CAT_PT_PT NULL
#define DICE_MANYMOUSE_PADDLE3_Y_LABEL_PT_PT NULL
#define DICE_MANYMOUSE_PADDLE3_Y_LABEL_CAT_PT_PT NULL
#define DICE_DIPSWITCH_1_LABEL_PT_PT NULL
#define DICE_DIPSWITCH_1_LABEL_CAT_PT_PT NULL
#define DICE_DIPSWITCH_1_INFO_0_PT_PT NULL
#define OPTION_VAL_1_PT_PT NULL
#define DICE_DIPSWITCH_2_LABEL_PT_PT NULL
#define DICE_DIPSWITCH_2_LABEL_CAT_PT_PT NULL
#define DICE_DIPSWITCH_2_INFO_0_PT_PT NULL
#define DICE_DIPSWITCH_3_LABEL_PT_PT NULL
#define DICE_DIPSWITCH_3_LABEL_CAT_PT_PT NULL
#define DICE_DIPSWITCH_3_INFO_0_PT_PT NULL
#define DICE_DIPSWITCH16_1_LABEL_PT_PT NULL
#define DICE_DIPSWITCH16_1_LABEL_CAT_PT_PT NULL
#define DICE_DIPSWITCH16_1_INFO_0_PT_PT NULL
#define DICE_DIPSWITCH16_2_LABEL_PT_PT NULL
#define DICE_DIPSWITCH16_2_LABEL_CAT_PT_PT NULL
#define DICE_DIPSWITCH16_2_INFO_0_PT_PT NULL

struct retro_core_option_v2_category option_cats_pt_pt[] = {
   {
      "input",
      CATEGORY_INPUT_LABEL_PT_PT,
      CATEGORY_INPUT_INFO_0_PT_PT
   },
   {
      "retromouse",
      CATEGORY_RETROMOUSE_LABEL_PT_PT,
      CATEGORY_RETROMOUSE_INFO_0_PT_PT
   },
#ifdef MANYMOUSE
   {
      "manymouse",
      CATEGORY_MANYMOUSE_LABEL_PT_PT,
      CATEGORY_MANYMOUSE_INFO_0_PT_PT
   },
#endif
   {
      "dipswitch",
      CATEGORY_DIPSWITCH_LABEL_PT_PT,
      CATEGORY_DIPSWITCH_INFO_0_PT_PT
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_pt_pt[] = {
   {
      "dice_use_mouse_pointer_for_paddle_1",
      DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_LABEL_PT_PT,
      DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_LABEL_CAT_PT_PT,
      DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_INFO_0_PT_PT,
      NULL,
      "input",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_paddle_joystick_absolute",
      DICE_PADDLE_JOYSTICK_ABSOLUTE_LABEL_PT_PT,
      DICE_PADDLE_JOYSTICK_ABSOLUTE_LABEL_CAT_PT_PT,
      DICE_PADDLE_JOYSTICK_ABSOLUTE_INFO_0_PT_PT,
      NULL,
      "input",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      // D-pad but not necessarily keyboard under libretro,
      // that name comes from the upstream code.
      "dice_paddle_keyboard_sensitivity",
      DICE_PADDLE_KEYBOARD_SENSITIVITY_LABEL_PT_PT,
      DICE_PADDLE_KEYBOARD_SENSITIVITY_LABEL_CAT_PT_PT,
      DICE_PADDLE_KEYBOARD_SENSITIVITY_INFO_0_PT_PT,
      NULL,
      "input",
      {
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "250"
   },
   {
      "dice_paddle_joystick_sensitivity",
      DICE_PADDLE_JOYSTICK_SENSITIVITY_LABEL_PT_PT,
      DICE_PADDLE_JOYSTICK_SENSITIVITY_LABEL_CAT_PT_PT,
      DICE_PADDLE_JOYSTICK_SENSITIVITY_INFO_0_PT_PT,
      NULL,
      "input",
      {
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "500"
   },
   {
      "dice_retromouse_paddle_sensitivity",
      DICE_RETROMOUSE_PADDLE_SENSITIVITY_LABEL_PT_PT,
      DICE_RETROMOUSE_PADDLE_SENSITIVITY_LABEL_CAT_PT_PT,
      DICE_RETROMOUSE_PADDLE_SENSITIVITY_INFO_0_PT_PT,
      NULL,
      "input",
      {
         {"25", NULL},
         {"50", NULL},
         {"75", NULL},
         {"100", NULL},
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "125"
   },
   {
      "dice_wheel_keyjoy_sensitivity",
      DICE_WHEEL_KEYJOY_SENSITIVITY_LABEL_PT_PT,
      DICE_WHEEL_KEYJOY_SENSITIVITY_LABEL_CAT_PT_PT,
      DICE_WHEEL_KEYJOY_SENSITIVITY_INFO_0_PT_PT,
      NULL,
      "input",
      {
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "500"
   },
   {
      "dice_throttle_keyjoy_sensitivity",
      DICE_THROTTLE_KEYJOY_SENSITIVITY_LABEL_PT_PT,
      DICE_THROTTLE_KEYJOY_SENSITIVITY_LABEL_CAT_PT_PT,
      DICE_THROTTLE_KEYJOY_SENSITIVITY_INFO_0_PT_PT,
      NULL,
      "input",
      {
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "250"
   },

   {
      "dice_retromouse_paddle0",
      DICE_RETROMOUSE_PADDLE0_LABEL_PT_PT,
      DICE_RETROMOUSE_PADDLE0_LABEL_CAT_PT_PT,
      DICE_RETROMOUSE_PADDLE0_INFO_0_PT_PT,
      NULL,
      "retromouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_retromouse_paddle1",
      DICE_RETROMOUSE_PADDLE1_LABEL_PT_PT,
      DICE_RETROMOUSE_PADDLE1_LABEL_CAT_PT_PT,
      DICE_RETROMOUSE_PADDLE1_INFO_0_PT_PT,
      NULL,
      "retromouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_retromouse_paddle2",
      DICE_RETROMOUSE_PADDLE2_LABEL_PT_PT,
      DICE_RETROMOUSE_PADDLE2_LABEL_CAT_PT_PT,
      DICE_RETROMOUSE_PADDLE2_INFO_0_PT_PT,
      NULL,
      "retromouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_retromouse_paddle3",
      DICE_RETROMOUSE_PADDLE3_LABEL_PT_PT,
      DICE_RETROMOUSE_PADDLE3_LABEL_CAT_PT_PT,
      DICE_RETROMOUSE_PADDLE3_INFO_0_PT_PT,
      NULL,
      "retromouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_retromouse_paddle0_x",
      DICE_RETROMOUSE_PADDLE0_X_LABEL_PT_PT,
      DICE_RETROMOUSE_PADDLE0_X_LABEL_CAT_PT_PT,
      DICE_RETROMOUSE_PADDLE0_X_INFO_0_PT_PT,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_PT_PT},
         {"y", OPTION_VAL_Y_PT_PT},
         {NULL, NULL},
      },
      "x"
   },
   {
      "dice_retromouse_paddle0_y",
      DICE_RETROMOUSE_PADDLE0_Y_LABEL_PT_PT,
      DICE_RETROMOUSE_PADDLE0_Y_LABEL_CAT_PT_PT,
      DICE_RETROMOUSE_PADDLE0_Y_INFO_0_PT_PT,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_PT_PT},
         {"y", OPTION_VAL_Y_PT_PT},
         {NULL, NULL},
      },
      "y"
   },
   {
      "dice_retromouse_paddle1_x",
      DICE_RETROMOUSE_PADDLE1_X_LABEL_PT_PT,
      DICE_RETROMOUSE_PADDLE1_X_LABEL_CAT_PT_PT,
      DICE_RETROMOUSE_PADDLE1_X_INFO_0_PT_PT,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_PT_PT},
         {"y", OPTION_VAL_Y_PT_PT},
         {NULL, NULL},
      },
      "x"
   },
   {
      "dice_retromouse_paddle1_y",
      DICE_RETROMOUSE_PADDLE1_Y_LABEL_PT_PT,
      DICE_RETROMOUSE_PADDLE1_Y_LABEL_CAT_PT_PT,
      DICE_RETROMOUSE_PADDLE1_Y_INFO_0_PT_PT,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_PT_PT},
         {"y", OPTION_VAL_Y_PT_PT},
         {NULL, NULL},
      },
      "y"
   },
   {
      "dice_retromouse_paddle2_x",
      DICE_RETROMOUSE_PADDLE2_X_LABEL_PT_PT,
      DICE_RETROMOUSE_PADDLE2_X_LABEL_CAT_PT_PT,
      DICE_RETROMOUSE_PADDLE2_X_INFO_0_PT_PT,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_PT_PT},
         {"y", OPTION_VAL_Y_PT_PT},
         {NULL, NULL},
      },
      "x"
   },
   {
      "dice_retromouse_paddle2_y",
      DICE_RETROMOUSE_PADDLE2_Y_LABEL_PT_PT,
      DICE_RETROMOUSE_PADDLE2_Y_LABEL_CAT_PT_PT,
      DICE_RETROMOUSE_PADDLE2_Y_INFO_0_PT_PT,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_PT_PT},
         {"y", OPTION_VAL_Y_PT_PT},
         {NULL, NULL},
      },
      "y"
   },
   {
      "dice_retromouse_paddle3_x",
      DICE_RETROMOUSE_PADDLE3_X_LABEL_PT_PT,
      DICE_RETROMOUSE_PADDLE3_X_LABEL_CAT_PT_PT,
      DICE_RETROMOUSE_PADDLE3_X_INFO_0_PT_PT,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_PT_PT},
         {"y", OPTION_VAL_Y_PT_PT},
         {NULL, NULL},
      },
      "x"
   },
   {
      "dice_retromouse_paddle3_y",
      DICE_RETROMOUSE_PADDLE3_Y_LABEL_PT_PT,
      DICE_RETROMOUSE_PADDLE3_Y_LABEL_CAT_PT_PT,
      DICE_RETROMOUSE_PADDLE3_Y_INFO_0_PT_PT,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_PT_PT},
         {"y", OPTION_VAL_Y_PT_PT},
         {NULL, NULL},
      },
      "y"
   },

#ifdef MANYMOUSE
   {
      "dice_manymouse_paddle0",
      DICE_MANYMOUSE_PADDLE0_LABEL_PT_PT,
      DICE_RETROMOUSE_PADDLE0_LABEL_CAT_PT_PT,
      DICE_MANYMOUSE_PADDLE0_INFO_0_PT_PT,
      NULL,
      "manymouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_manymouse_paddle0_x",
      DICE_MANYMOUSE_PADDLE0_X_LABEL_PT_PT,
      DICE_MANYMOUSE_PADDLE0_X_LABEL_CAT_PT_PT,
      DICE_RETROMOUSE_PADDLE0_X_INFO_0_PT_PT,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_PT_PT},
         {"0y", OPTION_VAL_0Y_PT_PT},
         {"1x", OPTION_VAL_1X_PT_PT},
         {"1y", OPTION_VAL_1Y_PT_PT},
         {"2x", OPTION_VAL_2X_PT_PT},
         {"2y", OPTION_VAL_2Y_PT_PT},
         {"3x", OPTION_VAL_3X_PT_PT},
         {"3y", OPTION_VAL_3Y_PT_PT},
         {NULL, NULL},
      },
      "0x"
   },
   {
      "dice_manymouse_paddle0_y",
      DICE_MANYMOUSE_PADDLE0_Y_LABEL_PT_PT,
      DICE_MANYMOUSE_PADDLE0_Y_LABEL_CAT_PT_PT,
      DICE_RETROMOUSE_PADDLE0_Y_INFO_0_PT_PT,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_PT_PT},
         {"0y", OPTION_VAL_0Y_PT_PT},
         {"1x", OPTION_VAL_1X_PT_PT},
         {"1y", OPTION_VAL_1Y_PT_PT},
         {"2x", OPTION_VAL_2X_PT_PT},
         {"2y", OPTION_VAL_2Y_PT_PT},
         {"3x", OPTION_VAL_3X_PT_PT},
         {"3y", OPTION_VAL_3Y_PT_PT},
         {NULL, NULL},
      },
      "0y"
   },
   {
      "dice_manymouse_paddle1",
      DICE_MANYMOUSE_PADDLE1_LABEL_PT_PT,
      DICE_RETROMOUSE_PADDLE1_LABEL_CAT_PT_PT,
      DICE_MANYMOUSE_PADDLE1_INFO_0_PT_PT,
      NULL,
      "manymouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_manymouse_paddle1_x",
      DICE_MANYMOUSE_PADDLE1_X_LABEL_PT_PT,
      DICE_MANYMOUSE_PADDLE1_X_LABEL_CAT_PT_PT,
      DICE_RETROMOUSE_PADDLE1_X_INFO_0_PT_PT,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_PT_PT},
         {"0y", OPTION_VAL_0Y_PT_PT},
         {"1x", OPTION_VAL_1X_PT_PT},
         {"1y", OPTION_VAL_1Y_PT_PT},
         {"2x", OPTION_VAL_2X_PT_PT},
         {"2y", OPTION_VAL_2Y_PT_PT},
         {"3x", OPTION_VAL_3X_PT_PT},
         {"3y", OPTION_VAL_3Y_PT_PT},
         {NULL, NULL},
      },
      "1x"
   },
   {
      "dice_manymouse_paddle1_y",
      DICE_MANYMOUSE_PADDLE1_Y_LABEL_PT_PT,
      DICE_MANYMOUSE_PADDLE1_Y_LABEL_CAT_PT_PT,
      DICE_RETROMOUSE_PADDLE1_Y_INFO_0_PT_PT,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_PT_PT},
         {"0y", OPTION_VAL_0Y_PT_PT},
         {"1x", OPTION_VAL_1X_PT_PT},
         {"1y", OPTION_VAL_1Y_PT_PT},
         {"2x", OPTION_VAL_2X_PT_PT},
         {"2y", OPTION_VAL_2Y_PT_PT},
         {"3x", OPTION_VAL_3X_PT_PT},
         {"3y", OPTION_VAL_3Y_PT_PT},
         {NULL, NULL},
      },
      "1y"
   },
   {
      "dice_manymouse_paddle2",
      DICE_MANYMOUSE_PADDLE2_LABEL_PT_PT,
      DICE_RETROMOUSE_PADDLE2_LABEL_CAT_PT_PT,
      DICE_MANYMOUSE_PADDLE2_INFO_0_PT_PT,
      NULL,
      "manymouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_manymouse_paddle2_x",
      DICE_MANYMOUSE_PADDLE2_X_LABEL_PT_PT,
      DICE_MANYMOUSE_PADDLE2_X_LABEL_CAT_PT_PT,
      DICE_RETROMOUSE_PADDLE2_X_INFO_0_PT_PT,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_PT_PT},
         {"0y", OPTION_VAL_0Y_PT_PT},
         {"1x", OPTION_VAL_1X_PT_PT},
         {"1y", OPTION_VAL_1Y_PT_PT},
         {"2x", OPTION_VAL_2X_PT_PT},
         {"2y", OPTION_VAL_2Y_PT_PT},
         {"3x", OPTION_VAL_3X_PT_PT},
         {"3y", OPTION_VAL_3Y_PT_PT},
         {NULL, NULL},
      },
      "2x"
   },
   {
      "dice_manymouse_paddle2_y",
      DICE_MANYMOUSE_PADDLE2_Y_LABEL_PT_PT,
      DICE_MANYMOUSE_PADDLE2_Y_LABEL_CAT_PT_PT,
      DICE_RETROMOUSE_PADDLE2_Y_INFO_0_PT_PT,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_PT_PT},
         {"0y", OPTION_VAL_0Y_PT_PT},
         {"1x", OPTION_VAL_1X_PT_PT},
         {"1y", OPTION_VAL_1Y_PT_PT},
         {"2x", OPTION_VAL_2X_PT_PT},
         {"2y", OPTION_VAL_2Y_PT_PT},
         {"3x", OPTION_VAL_3X_PT_PT},
         {"3y", OPTION_VAL_3Y_PT_PT},
         {NULL, NULL},
      },
      "2y"
   },
   {
      "dice_manymouse_paddle3",
      DICE_MANYMOUSE_PADDLE3_LABEL_PT_PT,
      DICE_RETROMOUSE_PADDLE3_LABEL_CAT_PT_PT,
      DICE_MANYMOUSE_PADDLE3_INFO_0_PT_PT,
      NULL,
      "manymouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_manymouse_paddle3_x",
      DICE_MANYMOUSE_PADDLE3_X_LABEL_PT_PT,
      DICE_MANYMOUSE_PADDLE3_X_LABEL_CAT_PT_PT,
      DICE_RETROMOUSE_PADDLE3_X_INFO_0_PT_PT,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_PT_PT},
         {"0y", OPTION_VAL_0Y_PT_PT},
         {"1x", OPTION_VAL_1X_PT_PT},
         {"1y", OPTION_VAL_1Y_PT_PT},
         {"2x", OPTION_VAL_2X_PT_PT},
         {"2y", OPTION_VAL_2Y_PT_PT},
         {"3x", OPTION_VAL_3X_PT_PT},
         {"3y", OPTION_VAL_3Y_PT_PT},
         {NULL, NULL},
      },
      "3x"
   },
   {
      "dice_manymouse_paddle3_y",
      DICE_MANYMOUSE_PADDLE3_Y_LABEL_PT_PT,
      DICE_MANYMOUSE_PADDLE3_Y_LABEL_CAT_PT_PT,
      DICE_RETROMOUSE_PADDLE3_Y_INFO_0_PT_PT,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_PT_PT},
         {"0y", OPTION_VAL_0Y_PT_PT},
         {"1x", OPTION_VAL_1X_PT_PT},
         {"1y", OPTION_VAL_1Y_PT_PT},
         {"2x", OPTION_VAL_2X_PT_PT},
         {"2y", OPTION_VAL_2Y_PT_PT},
         {"3x", OPTION_VAL_3X_PT_PT},
         {"3y", OPTION_VAL_3Y_PT_PT},
         {NULL, NULL},
      },
      "3y"
   },
#endif

   {
      "dice_dipswitch_1",
      DICE_DIPSWITCH_1_LABEL_PT_PT,
      DICE_DIPSWITCH_1_LABEL_CAT_PT_PT,
      DICE_DIPSWITCH_1_INFO_0_PT_PT,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_PT_PT},
         {"0", NULL},
         {"1", NULL},
         {NULL, NULL},
      },
      "-1"
   },
   {
      "dice_dipswitch_2",
      DICE_DIPSWITCH_2_LABEL_PT_PT,
      DICE_DIPSWITCH_2_LABEL_CAT_PT_PT,
      DICE_DIPSWITCH_2_INFO_0_PT_PT,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_PT_PT},
         {"0", NULL},
         {"1", NULL},
         {NULL, NULL},
      },
      "-1"
   },
   {
      "dice_dipswitch_3",
      DICE_DIPSWITCH_3_LABEL_PT_PT,
      DICE_DIPSWITCH_3_LABEL_CAT_PT_PT,
      DICE_DIPSWITCH_3_INFO_0_PT_PT,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_PT_PT},
         {"0", NULL},
         {"1", NULL},
         {NULL, NULL},
      },
      "-1"
   },
   {
      "dice_dipswitch16_1",
      DICE_DIPSWITCH16_1_LABEL_PT_PT,
      DICE_DIPSWITCH16_1_LABEL_CAT_PT_PT,
      DICE_DIPSWITCH16_1_INFO_0_PT_PT,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_PT_PT},
         {"0", NULL},
         {"1", NULL},
         {"2", NULL},
         {"3", NULL},
         {"4", NULL},
         {"5", NULL},
         {"6", NULL},
         {"7", NULL},
         {"8", NULL},
         {"9", NULL},
         {"10", NULL},
         {"11", NULL},
         {"12", NULL},
         {"13", NULL},
         {"14", NULL},
         {"15", NULL},
         {NULL, NULL},
      },
      "-1"
   },
   {
      "dice_dipswitch16_2",
      DICE_DIPSWITCH16_2_LABEL_PT_PT,
      DICE_DIPSWITCH16_2_LABEL_CAT_PT_PT,
      DICE_DIPSWITCH16_2_INFO_0_PT_PT,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_PT_PT},
         {"0", NULL},
         {"1", NULL},
         {"2", NULL},
         {"3", NULL},
         {"4", NULL},
         {"5", NULL},
         {"6", NULL},
         {"7", NULL},
         {"8", NULL},
         {"9", NULL},
         {"10", NULL},
         {"11", NULL},
         {"12", NULL},
         {"13", NULL},
         {"14", NULL},
         {"15", NULL},
         {NULL, NULL},
      },
      "-1"
   },

   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_pt_pt = {
   option_cats_pt_pt,
   option_defs_pt_pt
};

/* RETRO_LANGUAGE_RU */

#define CATEGORY_INPUT_LABEL_RU "Управление"
#define CATEGORY_INPUT_INFO_0_RU "Настройки ввода для ядра."
#define CATEGORY_RETROMOUSE_LABEL_RU NULL
#define CATEGORY_RETROMOUSE_INFO_0_RU "Настройки libretro для нескольких мышек."
#define CATEGORY_MANYMOUSE_LABEL_RU NULL
#define CATEGORY_MANYMOUSE_INFO_0_RU "Настройки ManyMouse для ввода с нескольких мышек."
#define CATEGORY_DIPSWITCH_LABEL_RU "DIP-переключатель"
#define CATEGORY_DIPSWITCH_INFO_0_RU "Настройки DIP-переключателей и потенциометров."
#define DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_LABEL_RU "Ввод > Исп. указатель мыши для ракетки 1"
#define DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_LABEL_CAT_RU "Исп. указатель мыши для ракетки 1"
#define DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_INFO_0_RU "Использовать системный указатель мыши для управления ракеткой 1. Если подключено несколько мышек, то выбрать определённую нельзя."
#define DICE_PADDLE_JOYSTICK_ABSOLUTE_LABEL_RU "Ввод > Исп. абсолютное движение джойстика для ракетки"
#define DICE_PADDLE_JOYSTICK_ABSOLUTE_LABEL_CAT_RU "Исп. абсолютное движение джойстика для ракетки"
#define DICE_PADDLE_JOYSTICK_ABSOLUTE_INFO_0_RU "Привязать диапазон джойстика к диапазону ракетки напрямую вместо относительного движения."
#define DICE_PADDLE_KEYBOARD_SENSITIVITY_LABEL_RU "Ввод > Чувствительность D-Pad для ракетки"
#define DICE_PADDLE_KEYBOARD_SENSITIVITY_LABEL_CAT_RU "Чувствительность D-Pad для ракетки"
#define DICE_PADDLE_KEYBOARD_SENSITIVITY_INFO_0_RU "Чувствительность при использовании D-Pad для ракетки."
#define DICE_PADDLE_JOYSTICK_SENSITIVITY_LABEL_RU "Ввод > Чувствительность аналог. стика для ракетки"
#define DICE_PADDLE_JOYSTICK_SENSITIVITY_LABEL_CAT_RU "Чувствительность аналог. стика для ракетки"
#define DICE_PADDLE_JOYSTICK_SENSITIVITY_INFO_0_RU "Чувствительность при использовании аналог. стика для ракетки."
#define DICE_RETROMOUSE_PADDLE_SENSITIVITY_LABEL_RU "Ввод > Чувствительность RetroMouse для ракетки"
#define DICE_RETROMOUSE_PADDLE_SENSITIVITY_LABEL_CAT_RU "Чувствительность RetroMouse для ракетки"
#define DICE_RETROMOUSE_PADDLE_SENSITIVITY_INFO_0_RU "Чувствительность при использовании RetroMouse для ракетки."
#define DICE_WHEEL_KEYJOY_SENSITIVITY_LABEL_RU "Ввод > Чувствительность руля"
#define DICE_WHEEL_KEYJOY_SENSITIVITY_LABEL_CAT_RU "Чувствительность руля"
#define DICE_WHEEL_KEYJOY_SENSITIVITY_INFO_0_RU "Чувствительность при использовании d-pad или аналог. стика для руля."
#define DICE_THROTTLE_KEYJOY_SENSITIVITY_LABEL_RU NULL
#define DICE_THROTTLE_KEYJOY_SENSITIVITY_LABEL_CAT_RU NULL
#define DICE_THROTTLE_KEYJOY_SENSITIVITY_INFO_0_RU NULL
#define DICE_RETROMOUSE_PADDLE0_LABEL_RU NULL
#define DICE_RETROMOUSE_PADDLE0_LABEL_CAT_RU NULL
#define DICE_RETROMOUSE_PADDLE0_INFO_0_RU NULL
#define DICE_RETROMOUSE_PADDLE1_LABEL_RU NULL
#define DICE_RETROMOUSE_PADDLE1_LABEL_CAT_RU NULL
#define DICE_RETROMOUSE_PADDLE1_INFO_0_RU NULL
#define DICE_RETROMOUSE_PADDLE2_LABEL_RU NULL
#define DICE_RETROMOUSE_PADDLE2_LABEL_CAT_RU NULL
#define DICE_RETROMOUSE_PADDLE2_INFO_0_RU NULL
#define DICE_RETROMOUSE_PADDLE3_LABEL_RU NULL
#define DICE_RETROMOUSE_PADDLE3_LABEL_CAT_RU NULL
#define DICE_RETROMOUSE_PADDLE3_INFO_0_RU NULL
#define DICE_RETROMOUSE_PADDLE0_X_LABEL_RU NULL
#define DICE_RETROMOUSE_PADDLE0_X_LABEL_CAT_RU NULL
#define DICE_RETROMOUSE_PADDLE0_X_INFO_0_RU NULL
#define OPTION_VAL_X_RU NULL
#define OPTION_VAL_Y_RU NULL
#define DICE_RETROMOUSE_PADDLE0_Y_LABEL_RU NULL
#define DICE_RETROMOUSE_PADDLE0_Y_LABEL_CAT_RU NULL
#define DICE_RETROMOUSE_PADDLE0_Y_INFO_0_RU NULL
#define DICE_RETROMOUSE_PADDLE1_X_LABEL_RU NULL
#define DICE_RETROMOUSE_PADDLE1_X_LABEL_CAT_RU NULL
#define DICE_RETROMOUSE_PADDLE1_X_INFO_0_RU NULL
#define DICE_RETROMOUSE_PADDLE1_Y_LABEL_RU NULL
#define DICE_RETROMOUSE_PADDLE1_Y_LABEL_CAT_RU NULL
#define DICE_RETROMOUSE_PADDLE1_Y_INFO_0_RU NULL
#define DICE_RETROMOUSE_PADDLE2_X_LABEL_RU NULL
#define DICE_RETROMOUSE_PADDLE2_X_LABEL_CAT_RU NULL
#define DICE_RETROMOUSE_PADDLE2_X_INFO_0_RU NULL
#define DICE_RETROMOUSE_PADDLE2_Y_LABEL_RU NULL
#define DICE_RETROMOUSE_PADDLE2_Y_LABEL_CAT_RU NULL
#define DICE_RETROMOUSE_PADDLE2_Y_INFO_0_RU NULL
#define DICE_RETROMOUSE_PADDLE3_X_LABEL_RU NULL
#define DICE_RETROMOUSE_PADDLE3_X_LABEL_CAT_RU NULL
#define DICE_RETROMOUSE_PADDLE3_X_INFO_0_RU NULL
#define DICE_RETROMOUSE_PADDLE3_Y_LABEL_RU NULL
#define DICE_RETROMOUSE_PADDLE3_Y_LABEL_CAT_RU NULL
#define DICE_RETROMOUSE_PADDLE3_Y_INFO_0_RU NULL
#define DICE_MANYMOUSE_PADDLE0_LABEL_RU NULL
#define DICE_MANYMOUSE_PADDLE0_INFO_0_RU NULL
#define DICE_MANYMOUSE_PADDLE0_X_LABEL_RU NULL
#define DICE_MANYMOUSE_PADDLE0_X_LABEL_CAT_RU NULL
#define OPTION_VAL_0X_RU NULL
#define OPTION_VAL_0Y_RU NULL
#define OPTION_VAL_1X_RU NULL
#define OPTION_VAL_1Y_RU NULL
#define OPTION_VAL_2X_RU NULL
#define OPTION_VAL_2Y_RU NULL
#define OPTION_VAL_3X_RU NULL
#define OPTION_VAL_3Y_RU NULL
#define DICE_MANYMOUSE_PADDLE0_Y_LABEL_RU NULL
#define DICE_MANYMOUSE_PADDLE0_Y_LABEL_CAT_RU NULL
#define DICE_MANYMOUSE_PADDLE1_LABEL_RU NULL
#define DICE_MANYMOUSE_PADDLE1_INFO_0_RU NULL
#define DICE_MANYMOUSE_PADDLE1_X_LABEL_RU NULL
#define DICE_MANYMOUSE_PADDLE1_X_LABEL_CAT_RU NULL
#define DICE_MANYMOUSE_PADDLE1_Y_LABEL_RU NULL
#define DICE_MANYMOUSE_PADDLE1_Y_LABEL_CAT_RU NULL
#define DICE_MANYMOUSE_PADDLE2_LABEL_RU NULL
#define DICE_MANYMOUSE_PADDLE2_INFO_0_RU NULL
#define DICE_MANYMOUSE_PADDLE2_X_LABEL_RU NULL
#define DICE_MANYMOUSE_PADDLE2_X_LABEL_CAT_RU NULL
#define DICE_MANYMOUSE_PADDLE2_Y_LABEL_RU NULL
#define DICE_MANYMOUSE_PADDLE2_Y_LABEL_CAT_RU NULL
#define DICE_MANYMOUSE_PADDLE3_LABEL_RU NULL
#define DICE_MANYMOUSE_PADDLE3_INFO_0_RU NULL
#define DICE_MANYMOUSE_PADDLE3_X_LABEL_RU NULL
#define DICE_MANYMOUSE_PADDLE3_X_LABEL_CAT_RU NULL
#define DICE_MANYMOUSE_PADDLE3_Y_LABEL_RU NULL
#define DICE_MANYMOUSE_PADDLE3_Y_LABEL_CAT_RU NULL
#define DICE_DIPSWITCH_1_LABEL_RU NULL
#define DICE_DIPSWITCH_1_LABEL_CAT_RU NULL
#define DICE_DIPSWITCH_1_INFO_0_RU NULL
#define OPTION_VAL_1_RU "по умолчанию"
#define DICE_DIPSWITCH_2_LABEL_RU NULL
#define DICE_DIPSWITCH_2_LABEL_CAT_RU NULL
#define DICE_DIPSWITCH_2_INFO_0_RU NULL
#define DICE_DIPSWITCH_3_LABEL_RU NULL
#define DICE_DIPSWITCH_3_LABEL_CAT_RU NULL
#define DICE_DIPSWITCH_3_INFO_0_RU NULL
#define DICE_DIPSWITCH16_1_LABEL_RU NULL
#define DICE_DIPSWITCH16_1_LABEL_CAT_RU NULL
#define DICE_DIPSWITCH16_1_INFO_0_RU NULL
#define DICE_DIPSWITCH16_2_LABEL_RU NULL
#define DICE_DIPSWITCH16_2_LABEL_CAT_RU NULL
#define DICE_DIPSWITCH16_2_INFO_0_RU NULL

struct retro_core_option_v2_category option_cats_ru[] = {
   {
      "input",
      CATEGORY_INPUT_LABEL_RU,
      CATEGORY_INPUT_INFO_0_RU
   },
   {
      "retromouse",
      CATEGORY_RETROMOUSE_LABEL_RU,
      CATEGORY_RETROMOUSE_INFO_0_RU
   },
#ifdef MANYMOUSE
   {
      "manymouse",
      CATEGORY_MANYMOUSE_LABEL_RU,
      CATEGORY_MANYMOUSE_INFO_0_RU
   },
#endif
   {
      "dipswitch",
      CATEGORY_DIPSWITCH_LABEL_RU,
      CATEGORY_DIPSWITCH_INFO_0_RU
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_ru[] = {
   {
      "dice_use_mouse_pointer_for_paddle_1",
      DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_LABEL_RU,
      DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_LABEL_CAT_RU,
      DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_INFO_0_RU,
      NULL,
      "input",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_paddle_joystick_absolute",
      DICE_PADDLE_JOYSTICK_ABSOLUTE_LABEL_RU,
      DICE_PADDLE_JOYSTICK_ABSOLUTE_LABEL_CAT_RU,
      DICE_PADDLE_JOYSTICK_ABSOLUTE_INFO_0_RU,
      NULL,
      "input",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      // D-pad but not necessarily keyboard under libretro,
      // that name comes from the upstream code.
      "dice_paddle_keyboard_sensitivity",
      DICE_PADDLE_KEYBOARD_SENSITIVITY_LABEL_RU,
      DICE_PADDLE_KEYBOARD_SENSITIVITY_LABEL_CAT_RU,
      DICE_PADDLE_KEYBOARD_SENSITIVITY_INFO_0_RU,
      NULL,
      "input",
      {
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "250"
   },
   {
      "dice_paddle_joystick_sensitivity",
      DICE_PADDLE_JOYSTICK_SENSITIVITY_LABEL_RU,
      DICE_PADDLE_JOYSTICK_SENSITIVITY_LABEL_CAT_RU,
      DICE_PADDLE_JOYSTICK_SENSITIVITY_INFO_0_RU,
      NULL,
      "input",
      {
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "500"
   },
   {
      "dice_retromouse_paddle_sensitivity",
      DICE_RETROMOUSE_PADDLE_SENSITIVITY_LABEL_RU,
      DICE_RETROMOUSE_PADDLE_SENSITIVITY_LABEL_CAT_RU,
      DICE_RETROMOUSE_PADDLE_SENSITIVITY_INFO_0_RU,
      NULL,
      "input",
      {
         {"25", NULL},
         {"50", NULL},
         {"75", NULL},
         {"100", NULL},
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "125"
   },
   {
      "dice_wheel_keyjoy_sensitivity",
      DICE_WHEEL_KEYJOY_SENSITIVITY_LABEL_RU,
      DICE_WHEEL_KEYJOY_SENSITIVITY_LABEL_CAT_RU,
      DICE_WHEEL_KEYJOY_SENSITIVITY_INFO_0_RU,
      NULL,
      "input",
      {
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "500"
   },
   {
      "dice_throttle_keyjoy_sensitivity",
      DICE_THROTTLE_KEYJOY_SENSITIVITY_LABEL_RU,
      DICE_THROTTLE_KEYJOY_SENSITIVITY_LABEL_CAT_RU,
      DICE_THROTTLE_KEYJOY_SENSITIVITY_INFO_0_RU,
      NULL,
      "input",
      {
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "250"
   },

   {
      "dice_retromouse_paddle0",
      DICE_RETROMOUSE_PADDLE0_LABEL_RU,
      DICE_RETROMOUSE_PADDLE0_LABEL_CAT_RU,
      DICE_RETROMOUSE_PADDLE0_INFO_0_RU,
      NULL,
      "retromouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_retromouse_paddle1",
      DICE_RETROMOUSE_PADDLE1_LABEL_RU,
      DICE_RETROMOUSE_PADDLE1_LABEL_CAT_RU,
      DICE_RETROMOUSE_PADDLE1_INFO_0_RU,
      NULL,
      "retromouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_retromouse_paddle2",
      DICE_RETROMOUSE_PADDLE2_LABEL_RU,
      DICE_RETROMOUSE_PADDLE2_LABEL_CAT_RU,
      DICE_RETROMOUSE_PADDLE2_INFO_0_RU,
      NULL,
      "retromouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_retromouse_paddle3",
      DICE_RETROMOUSE_PADDLE3_LABEL_RU,
      DICE_RETROMOUSE_PADDLE3_LABEL_CAT_RU,
      DICE_RETROMOUSE_PADDLE3_INFO_0_RU,
      NULL,
      "retromouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_retromouse_paddle0_x",
      DICE_RETROMOUSE_PADDLE0_X_LABEL_RU,
      DICE_RETROMOUSE_PADDLE0_X_LABEL_CAT_RU,
      DICE_RETROMOUSE_PADDLE0_X_INFO_0_RU,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_RU},
         {"y", OPTION_VAL_Y_RU},
         {NULL, NULL},
      },
      "x"
   },
   {
      "dice_retromouse_paddle0_y",
      DICE_RETROMOUSE_PADDLE0_Y_LABEL_RU,
      DICE_RETROMOUSE_PADDLE0_Y_LABEL_CAT_RU,
      DICE_RETROMOUSE_PADDLE0_Y_INFO_0_RU,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_RU},
         {"y", OPTION_VAL_Y_RU},
         {NULL, NULL},
      },
      "y"
   },
   {
      "dice_retromouse_paddle1_x",
      DICE_RETROMOUSE_PADDLE1_X_LABEL_RU,
      DICE_RETROMOUSE_PADDLE1_X_LABEL_CAT_RU,
      DICE_RETROMOUSE_PADDLE1_X_INFO_0_RU,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_RU},
         {"y", OPTION_VAL_Y_RU},
         {NULL, NULL},
      },
      "x"
   },
   {
      "dice_retromouse_paddle1_y",
      DICE_RETROMOUSE_PADDLE1_Y_LABEL_RU,
      DICE_RETROMOUSE_PADDLE1_Y_LABEL_CAT_RU,
      DICE_RETROMOUSE_PADDLE1_Y_INFO_0_RU,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_RU},
         {"y", OPTION_VAL_Y_RU},
         {NULL, NULL},
      },
      "y"
   },
   {
      "dice_retromouse_paddle2_x",
      DICE_RETROMOUSE_PADDLE2_X_LABEL_RU,
      DICE_RETROMOUSE_PADDLE2_X_LABEL_CAT_RU,
      DICE_RETROMOUSE_PADDLE2_X_INFO_0_RU,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_RU},
         {"y", OPTION_VAL_Y_RU},
         {NULL, NULL},
      },
      "x"
   },
   {
      "dice_retromouse_paddle2_y",
      DICE_RETROMOUSE_PADDLE2_Y_LABEL_RU,
      DICE_RETROMOUSE_PADDLE2_Y_LABEL_CAT_RU,
      DICE_RETROMOUSE_PADDLE2_Y_INFO_0_RU,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_RU},
         {"y", OPTION_VAL_Y_RU},
         {NULL, NULL},
      },
      "y"
   },
   {
      "dice_retromouse_paddle3_x",
      DICE_RETROMOUSE_PADDLE3_X_LABEL_RU,
      DICE_RETROMOUSE_PADDLE3_X_LABEL_CAT_RU,
      DICE_RETROMOUSE_PADDLE3_X_INFO_0_RU,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_RU},
         {"y", OPTION_VAL_Y_RU},
         {NULL, NULL},
      },
      "x"
   },
   {
      "dice_retromouse_paddle3_y",
      DICE_RETROMOUSE_PADDLE3_Y_LABEL_RU,
      DICE_RETROMOUSE_PADDLE3_Y_LABEL_CAT_RU,
      DICE_RETROMOUSE_PADDLE3_Y_INFO_0_RU,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_RU},
         {"y", OPTION_VAL_Y_RU},
         {NULL, NULL},
      },
      "y"
   },

#ifdef MANYMOUSE
   {
      "dice_manymouse_paddle0",
      DICE_MANYMOUSE_PADDLE0_LABEL_RU,
      DICE_RETROMOUSE_PADDLE0_LABEL_CAT_RU,
      DICE_MANYMOUSE_PADDLE0_INFO_0_RU,
      NULL,
      "manymouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_manymouse_paddle0_x",
      DICE_MANYMOUSE_PADDLE0_X_LABEL_RU,
      DICE_MANYMOUSE_PADDLE0_X_LABEL_CAT_RU,
      DICE_RETROMOUSE_PADDLE0_X_INFO_0_RU,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_RU},
         {"0y", OPTION_VAL_0Y_RU},
         {"1x", OPTION_VAL_1X_RU},
         {"1y", OPTION_VAL_1Y_RU},
         {"2x", OPTION_VAL_2X_RU},
         {"2y", OPTION_VAL_2Y_RU},
         {"3x", OPTION_VAL_3X_RU},
         {"3y", OPTION_VAL_3Y_RU},
         {NULL, NULL},
      },
      "0x"
   },
   {
      "dice_manymouse_paddle0_y",
      DICE_MANYMOUSE_PADDLE0_Y_LABEL_RU,
      DICE_MANYMOUSE_PADDLE0_Y_LABEL_CAT_RU,
      DICE_RETROMOUSE_PADDLE0_Y_INFO_0_RU,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_RU},
         {"0y", OPTION_VAL_0Y_RU},
         {"1x", OPTION_VAL_1X_RU},
         {"1y", OPTION_VAL_1Y_RU},
         {"2x", OPTION_VAL_2X_RU},
         {"2y", OPTION_VAL_2Y_RU},
         {"3x", OPTION_VAL_3X_RU},
         {"3y", OPTION_VAL_3Y_RU},
         {NULL, NULL},
      },
      "0y"
   },
   {
      "dice_manymouse_paddle1",
      DICE_MANYMOUSE_PADDLE1_LABEL_RU,
      DICE_RETROMOUSE_PADDLE1_LABEL_CAT_RU,
      DICE_MANYMOUSE_PADDLE1_INFO_0_RU,
      NULL,
      "manymouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_manymouse_paddle1_x",
      DICE_MANYMOUSE_PADDLE1_X_LABEL_RU,
      DICE_MANYMOUSE_PADDLE1_X_LABEL_CAT_RU,
      DICE_RETROMOUSE_PADDLE1_X_INFO_0_RU,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_RU},
         {"0y", OPTION_VAL_0Y_RU},
         {"1x", OPTION_VAL_1X_RU},
         {"1y", OPTION_VAL_1Y_RU},
         {"2x", OPTION_VAL_2X_RU},
         {"2y", OPTION_VAL_2Y_RU},
         {"3x", OPTION_VAL_3X_RU},
         {"3y", OPTION_VAL_3Y_RU},
         {NULL, NULL},
      },
      "1x"
   },
   {
      "dice_manymouse_paddle1_y",
      DICE_MANYMOUSE_PADDLE1_Y_LABEL_RU,
      DICE_MANYMOUSE_PADDLE1_Y_LABEL_CAT_RU,
      DICE_RETROMOUSE_PADDLE1_Y_INFO_0_RU,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_RU},
         {"0y", OPTION_VAL_0Y_RU},
         {"1x", OPTION_VAL_1X_RU},
         {"1y", OPTION_VAL_1Y_RU},
         {"2x", OPTION_VAL_2X_RU},
         {"2y", OPTION_VAL_2Y_RU},
         {"3x", OPTION_VAL_3X_RU},
         {"3y", OPTION_VAL_3Y_RU},
         {NULL, NULL},
      },
      "1y"
   },
   {
      "dice_manymouse_paddle2",
      DICE_MANYMOUSE_PADDLE2_LABEL_RU,
      DICE_RETROMOUSE_PADDLE2_LABEL_CAT_RU,
      DICE_MANYMOUSE_PADDLE2_INFO_0_RU,
      NULL,
      "manymouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_manymouse_paddle2_x",
      DICE_MANYMOUSE_PADDLE2_X_LABEL_RU,
      DICE_MANYMOUSE_PADDLE2_X_LABEL_CAT_RU,
      DICE_RETROMOUSE_PADDLE2_X_INFO_0_RU,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_RU},
         {"0y", OPTION_VAL_0Y_RU},
         {"1x", OPTION_VAL_1X_RU},
         {"1y", OPTION_VAL_1Y_RU},
         {"2x", OPTION_VAL_2X_RU},
         {"2y", OPTION_VAL_2Y_RU},
         {"3x", OPTION_VAL_3X_RU},
         {"3y", OPTION_VAL_3Y_RU},
         {NULL, NULL},
      },
      "2x"
   },
   {
      "dice_manymouse_paddle2_y",
      DICE_MANYMOUSE_PADDLE2_Y_LABEL_RU,
      DICE_MANYMOUSE_PADDLE2_Y_LABEL_CAT_RU,
      DICE_RETROMOUSE_PADDLE2_Y_INFO_0_RU,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_RU},
         {"0y", OPTION_VAL_0Y_RU},
         {"1x", OPTION_VAL_1X_RU},
         {"1y", OPTION_VAL_1Y_RU},
         {"2x", OPTION_VAL_2X_RU},
         {"2y", OPTION_VAL_2Y_RU},
         {"3x", OPTION_VAL_3X_RU},
         {"3y", OPTION_VAL_3Y_RU},
         {NULL, NULL},
      },
      "2y"
   },
   {
      "dice_manymouse_paddle3",
      DICE_MANYMOUSE_PADDLE3_LABEL_RU,
      DICE_RETROMOUSE_PADDLE3_LABEL_CAT_RU,
      DICE_MANYMOUSE_PADDLE3_INFO_0_RU,
      NULL,
      "manymouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_manymouse_paddle3_x",
      DICE_MANYMOUSE_PADDLE3_X_LABEL_RU,
      DICE_MANYMOUSE_PADDLE3_X_LABEL_CAT_RU,
      DICE_RETROMOUSE_PADDLE3_X_INFO_0_RU,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_RU},
         {"0y", OPTION_VAL_0Y_RU},
         {"1x", OPTION_VAL_1X_RU},
         {"1y", OPTION_VAL_1Y_RU},
         {"2x", OPTION_VAL_2X_RU},
         {"2y", OPTION_VAL_2Y_RU},
         {"3x", OPTION_VAL_3X_RU},
         {"3y", OPTION_VAL_3Y_RU},
         {NULL, NULL},
      },
      "3x"
   },
   {
      "dice_manymouse_paddle3_y",
      DICE_MANYMOUSE_PADDLE3_Y_LABEL_RU,
      DICE_MANYMOUSE_PADDLE3_Y_LABEL_CAT_RU,
      DICE_RETROMOUSE_PADDLE3_Y_INFO_0_RU,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_RU},
         {"0y", OPTION_VAL_0Y_RU},
         {"1x", OPTION_VAL_1X_RU},
         {"1y", OPTION_VAL_1Y_RU},
         {"2x", OPTION_VAL_2X_RU},
         {"2y", OPTION_VAL_2Y_RU},
         {"3x", OPTION_VAL_3X_RU},
         {"3y", OPTION_VAL_3Y_RU},
         {NULL, NULL},
      },
      "3y"
   },
#endif

   {
      "dice_dipswitch_1",
      DICE_DIPSWITCH_1_LABEL_RU,
      DICE_DIPSWITCH_1_LABEL_CAT_RU,
      DICE_DIPSWITCH_1_INFO_0_RU,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_RU},
         {"0", NULL},
         {"1", NULL},
         {NULL, NULL},
      },
      "-1"
   },
   {
      "dice_dipswitch_2",
      DICE_DIPSWITCH_2_LABEL_RU,
      DICE_DIPSWITCH_2_LABEL_CAT_RU,
      DICE_DIPSWITCH_2_INFO_0_RU,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_RU},
         {"0", NULL},
         {"1", NULL},
         {NULL, NULL},
      },
      "-1"
   },
   {
      "dice_dipswitch_3",
      DICE_DIPSWITCH_3_LABEL_RU,
      DICE_DIPSWITCH_3_LABEL_CAT_RU,
      DICE_DIPSWITCH_3_INFO_0_RU,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_RU},
         {"0", NULL},
         {"1", NULL},
         {NULL, NULL},
      },
      "-1"
   },
   {
      "dice_dipswitch16_1",
      DICE_DIPSWITCH16_1_LABEL_RU,
      DICE_DIPSWITCH16_1_LABEL_CAT_RU,
      DICE_DIPSWITCH16_1_INFO_0_RU,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_RU},
         {"0", NULL},
         {"1", NULL},
         {"2", NULL},
         {"3", NULL},
         {"4", NULL},
         {"5", NULL},
         {"6", NULL},
         {"7", NULL},
         {"8", NULL},
         {"9", NULL},
         {"10", NULL},
         {"11", NULL},
         {"12", NULL},
         {"13", NULL},
         {"14", NULL},
         {"15", NULL},
         {NULL, NULL},
      },
      "-1"
   },
   {
      "dice_dipswitch16_2",
      DICE_DIPSWITCH16_2_LABEL_RU,
      DICE_DIPSWITCH16_2_LABEL_CAT_RU,
      DICE_DIPSWITCH16_2_INFO_0_RU,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_RU},
         {"0", NULL},
         {"1", NULL},
         {"2", NULL},
         {"3", NULL},
         {"4", NULL},
         {"5", NULL},
         {"6", NULL},
         {"7", NULL},
         {"8", NULL},
         {"9", NULL},
         {"10", NULL},
         {"11", NULL},
         {"12", NULL},
         {"13", NULL},
         {"14", NULL},
         {"15", NULL},
         {NULL, NULL},
      },
      "-1"
   },

   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_ru = {
   option_cats_ru,
   option_defs_ru
};

/* RETRO_LANGUAGE_SK */

#define CATEGORY_INPUT_LABEL_SK "Vstup"
#define CATEGORY_INPUT_INFO_0_SK "Nakonfigurujte nastavenie vstupu špecifické pre jadro."
#define CATEGORY_RETROMOUSE_LABEL_SK NULL
#define CATEGORY_RETROMOUSE_INFO_0_SK "Nakonfigurujte nastavenia libretro pre viaceré myši."
#define CATEGORY_MANYMOUSE_LABEL_SK NULL
#define CATEGORY_MANYMOUSE_INFO_0_SK "Nakonfigurujte nastavenia ManyMouse pre viaceré myši."
#define CATEGORY_DIPSWITCH_LABEL_SK "DIP prepínač"
#define CATEGORY_DIPSWITCH_INFO_0_SK "Nakonfigurujte nastavenia DIP prepínačov a potenciometra."
#define DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_LABEL_SK "Vstup > Použiť kurzor myši pre paddle 1"
#define DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_LABEL_CAT_SK "Použiť kurzor myši pre paddle 1"
#define DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_INFO_0_SK "Použije systémový kurzor myši ako paddle ovládač 1. Neumožňuje vybrať konkrétnu myš, ak máte viaceré."
#define DICE_PADDLE_JOYSTICK_ABSOLUTE_LABEL_SK "Vstup > Paddle joystick používa absolútny pohyb"
#define DICE_PADDLE_JOYSTICK_ABSOLUTE_LABEL_CAT_SK "Paddle joystick používa absolútny pohyb"
#define DICE_PADDLE_JOYSTICK_ABSOLUTE_INFO_0_SK "Priamo mapuje rozsah pohybu joysticku na rozsah paddle, namiesto relatívnych pohybov."
#define DICE_PADDLE_KEYBOARD_SENSITIVITY_LABEL_SK "Vstup > Citlivosť D-pad pre paddle"
#define DICE_PADDLE_KEYBOARD_SENSITIVITY_LABEL_CAT_SK "Citlivosť D-pad pre paddle"
#define DICE_PADDLE_KEYBOARD_SENSITIVITY_INFO_0_SK "Citlivosť pri použití D-pad pre paddle."
#define DICE_PADDLE_JOYSTICK_SENSITIVITY_LABEL_SK "Vstup > Citlivosť analógovej páčky pre paddle"
#define DICE_PADDLE_JOYSTICK_SENSITIVITY_LABEL_CAT_SK "Citlivosť analógovej páčky pre paddle"
#define DICE_PADDLE_JOYSTICK_SENSITIVITY_INFO_0_SK "Citlivosť pri použití analógovej páčky pre paddle."
#define DICE_RETROMOUSE_PADDLE_SENSITIVITY_LABEL_SK "Vstup > Citlivosť RetroMouse pre paddle"
#define DICE_RETROMOUSE_PADDLE_SENSITIVITY_LABEL_CAT_SK "Citlivosť RetroMouse pre paddle"
#define DICE_RETROMOUSE_PADDLE_SENSITIVITY_INFO_0_SK "Citlivosť pri použití RetroMouse pre paddle."
#define DICE_WHEEL_KEYJOY_SENSITIVITY_LABEL_SK "Vstup > Citlivosť volantu"
#define DICE_WHEEL_KEYJOY_SENSITIVITY_LABEL_CAT_SK "Citlivosť volantu"
#define DICE_WHEEL_KEYJOY_SENSITIVITY_INFO_0_SK "Citlivosť pri použití D-pad alebo analógovej páčky pre volant."
#define DICE_THROTTLE_KEYJOY_SENSITIVITY_LABEL_SK "Vstup > Citlivosť plynu"
#define DICE_THROTTLE_KEYJOY_SENSITIVITY_LABEL_CAT_SK "Citlivosť plynu"
#define DICE_THROTTLE_KEYJOY_SENSITIVITY_INFO_0_SK "Citlivosť pri použití D-pad alebo analógovej páčky pre plyn."
#define DICE_RETROMOUSE_PADDLE0_LABEL_SK "RetroMouse > Použiť myš pre paddle 1"
#define DICE_RETROMOUSE_PADDLE0_LABEL_CAT_SK "Použiť myš pre paddle 1"
#define DICE_RETROMOUSE_PADDLE0_INFO_0_SK "Použiť konkrétnu myš pre paddle 1, vybranú podľa Mouse Index portu 1."
#define DICE_RETROMOUSE_PADDLE1_LABEL_SK "RetroMouse > Použiť myš pre paddle 2"
#define DICE_RETROMOUSE_PADDLE1_LABEL_CAT_SK "Použiť myš pre paddle 2"
#define DICE_RETROMOUSE_PADDLE1_INFO_0_SK "Použiť konkrétnu myš pre paddle 2, vybranú podľa Mouse Index portu 2."
#define DICE_RETROMOUSE_PADDLE2_LABEL_SK "RetroMouse > Použiť myš pre paddle 3"
#define DICE_RETROMOUSE_PADDLE2_LABEL_CAT_SK "Použiť myš pre paddle 3"
#define DICE_RETROMOUSE_PADDLE2_INFO_0_SK "Použiť konkrétnu myš pre paddle 3, vybranú podľa Mouse Index portu 3."
#define DICE_RETROMOUSE_PADDLE3_LABEL_SK "RetroMouse > Použiť myš pre paddle 4"
#define DICE_RETROMOUSE_PADDLE3_LABEL_CAT_SK "Použiť myš pre paddle 4"
#define DICE_RETROMOUSE_PADDLE3_INFO_0_SK "Použiť konkrétnu myš pre paddle 4, vybranú podľa Mouse Index portu 4."
#define DICE_RETROMOUSE_PADDLE0_X_LABEL_SK "RetroMouse > Os myši pre paddle 1 horizontálne"
#define DICE_RETROMOUSE_PADDLE0_X_LABEL_CAT_SK "Os myši pre paddle 1 horizontálne"
#define DICE_RETROMOUSE_PADDLE0_X_INFO_0_SK "Os myši pre hráča 1, horizontálny pohyb obrazovky."
#define OPTION_VAL_X_SK NULL
#define OPTION_VAL_Y_SK NULL
#define DICE_RETROMOUSE_PADDLE0_Y_LABEL_SK "RetroMouse > Os myši pre paddle 1 vertikálne"
#define DICE_RETROMOUSE_PADDLE0_Y_LABEL_CAT_SK "Os myši pre paddle 1 vertikálne"
#define DICE_RETROMOUSE_PADDLE0_Y_INFO_0_SK "Os myši pre hráča 1, vertikálny pohyb obrazovky."
#define DICE_RETROMOUSE_PADDLE1_X_LABEL_SK "RetroMouse > Os myši pre paddle 2 horizontálne"
#define DICE_RETROMOUSE_PADDLE1_X_LABEL_CAT_SK "Os myši pre paddle 2 horizontálne"
#define DICE_RETROMOUSE_PADDLE1_X_INFO_0_SK "Os myši pre hráča 2, horizontálny pohyb obrazovky."
#define DICE_RETROMOUSE_PADDLE1_Y_LABEL_SK "RetroMouse > Os myši pre paddle 2 vertikálne"
#define DICE_RETROMOUSE_PADDLE1_Y_LABEL_CAT_SK "Os myši pre paddle 2 vertikálne"
#define DICE_RETROMOUSE_PADDLE1_Y_INFO_0_SK "Os myši pre hráča 2, vertikálny pohyb obrazovky."
#define DICE_RETROMOUSE_PADDLE2_X_LABEL_SK "RetroMouse > Os myši pre paddle 3 horizontálne"
#define DICE_RETROMOUSE_PADDLE2_X_LABEL_CAT_SK "Os myši pre paddle 3 horizontálne"
#define DICE_RETROMOUSE_PADDLE2_X_INFO_0_SK "Os myši pre hráča 3, horizontálny pohyb obrazovky."
#define DICE_RETROMOUSE_PADDLE2_Y_LABEL_SK "RetroMouse > Os myši pre paddle 3 vertikálne"
#define DICE_RETROMOUSE_PADDLE2_Y_LABEL_CAT_SK "Os myši pre paddle 3 vertikálne"
#define DICE_RETROMOUSE_PADDLE2_Y_INFO_0_SK "Os myši pre hráča 3, vertikálny pohyb obrazovky."
#define DICE_RETROMOUSE_PADDLE3_X_LABEL_SK "RetroMouse > Os myši pre paddle 4 horizontálne"
#define DICE_RETROMOUSE_PADDLE3_X_LABEL_CAT_SK "Os myši pre paddle 4 horizontálne"
#define DICE_RETROMOUSE_PADDLE3_X_INFO_0_SK "Os myši pre hráča 4, horizontálny pohyb obrazovky."
#define DICE_RETROMOUSE_PADDLE3_Y_LABEL_SK "RetroMouse > Os myši pre paddle 4 vertikálne"
#define DICE_RETROMOUSE_PADDLE3_Y_LABEL_CAT_SK "Os myši pre paddle 4 vertikálne"
#define DICE_RETROMOUSE_PADDLE3_Y_INFO_0_SK "Os myši pre hráča 4, vertikálny pohyb obrazovky."
#define DICE_MANYMOUSE_PADDLE0_LABEL_SK "ManyMouse > Použiť myš pre paddle 1"
#define DICE_MANYMOUSE_PADDLE0_INFO_0_SK "Použiť myš pre paddle 1."
#define DICE_MANYMOUSE_PADDLE0_X_LABEL_SK "ManyMouse > Myš-paddle 1 x"
#define DICE_MANYMOUSE_PADDLE0_X_LABEL_CAT_SK "Myš-pádlo 1 x"
#define OPTION_VAL_0X_SK NULL
#define OPTION_VAL_0Y_SK NULL
#define OPTION_VAL_1X_SK NULL
#define OPTION_VAL_1Y_SK NULL
#define OPTION_VAL_2X_SK NULL
#define OPTION_VAL_2Y_SK NULL
#define OPTION_VAL_3X_SK NULL
#define OPTION_VAL_3Y_SK NULL
#define DICE_MANYMOUSE_PADDLE0_Y_LABEL_SK "ManyMouse > Myš-paddle 1 y"
#define DICE_MANYMOUSE_PADDLE0_Y_LABEL_CAT_SK "Myš-pádlo 1 y"
#define DICE_MANYMOUSE_PADDLE1_LABEL_SK "ManyMouse > Použiť myš pre paddle 2"
#define DICE_MANYMOUSE_PADDLE1_INFO_0_SK "Použiť myš pre paddle 2."
#define DICE_MANYMOUSE_PADDLE1_X_LABEL_SK "ManyMouse > Myš-paddle 2 x"
#define DICE_MANYMOUSE_PADDLE1_X_LABEL_CAT_SK "Myš-pádlo 2 x"
#define DICE_MANYMOUSE_PADDLE1_Y_LABEL_SK "ManyMouse > Myš-paddle 2 y"
#define DICE_MANYMOUSE_PADDLE1_Y_LABEL_CAT_SK "Myš-pádlo 2 y"
#define DICE_MANYMOUSE_PADDLE2_LABEL_SK "ManyMouse > Použiť myš pre paddle 3"
#define DICE_MANYMOUSE_PADDLE2_INFO_0_SK "Použiť myš pre paddle 3."
#define DICE_MANYMOUSE_PADDLE2_X_LABEL_SK "ManyMouse > Myš-paddle 3 x"
#define DICE_MANYMOUSE_PADDLE2_X_LABEL_CAT_SK "Myš-pádlo 3 x"
#define DICE_MANYMOUSE_PADDLE2_Y_LABEL_SK "ManyMouse > Myš-paddle 3 y"
#define DICE_MANYMOUSE_PADDLE2_Y_LABEL_CAT_SK "Myš-pádlo 3 y"
#define DICE_MANYMOUSE_PADDLE3_LABEL_SK "ManyMouse > Použiť myš pre paddle 4"
#define DICE_MANYMOUSE_PADDLE3_INFO_0_SK "Použiť myš pre paddle 4."
#define DICE_MANYMOUSE_PADDLE3_X_LABEL_SK "ManyMouse > Myš-paddle 4 x"
#define DICE_MANYMOUSE_PADDLE3_X_LABEL_CAT_SK "Myš-pádlo 4 x"
#define DICE_MANYMOUSE_PADDLE3_Y_LABEL_SK "ManyMouse > Myš-paddle 4 y"
#define DICE_MANYMOUSE_PADDLE3_Y_LABEL_CAT_SK "Myš-pádlo 4 y"
#define DICE_DIPSWITCH_1_LABEL_SK "DIP prepínač > DIP prepínač 1"
#define DICE_DIPSWITCH_1_LABEL_CAT_SK "DIP prepínač 1"
#define DICE_DIPSWITCH_1_INFO_0_SK "Nastavenie pre DIP prepínač 1."
#define OPTION_VAL_1_SK "predvolené"
#define DICE_DIPSWITCH_2_LABEL_SK "DIP prepínač > DIP prepínač 2"
#define DICE_DIPSWITCH_2_LABEL_CAT_SK "DIP prepínač 2"
#define DICE_DIPSWITCH_2_INFO_0_SK "Nastavenie pre DIP prepínač 2."
#define DICE_DIPSWITCH_3_LABEL_SK "DIP prepínač > DIP prepínač 3"
#define DICE_DIPSWITCH_3_LABEL_CAT_SK "DIP prepínač 3"
#define DICE_DIPSWITCH_3_INFO_0_SK "Nastavenie pre DIP prepínač 3."
#define DICE_DIPSWITCH16_1_LABEL_SK "DIP prepínač > DIP prepínač Hex 1"
#define DICE_DIPSWITCH16_1_LABEL_CAT_SK "DIP prepínač Hex 1"
#define DICE_DIPSWITCH16_1_INFO_0_SK "Nastavenie pre 16-polohový DIP prepínač číslo 1."
#define DICE_DIPSWITCH16_2_LABEL_SK "DIP prepínač > DIP prepínač Hex 2"
#define DICE_DIPSWITCH16_2_LABEL_CAT_SK "DIP prepínač Hex 2"
#define DICE_DIPSWITCH16_2_INFO_0_SK "Nastavenie pre 16-polohový DIP prepínač číslo 2."

struct retro_core_option_v2_category option_cats_sk[] = {
   {
      "input",
      CATEGORY_INPUT_LABEL_SK,
      CATEGORY_INPUT_INFO_0_SK
   },
   {
      "retromouse",
      CATEGORY_RETROMOUSE_LABEL_SK,
      CATEGORY_RETROMOUSE_INFO_0_SK
   },
#ifdef MANYMOUSE
   {
      "manymouse",
      CATEGORY_MANYMOUSE_LABEL_SK,
      CATEGORY_MANYMOUSE_INFO_0_SK
   },
#endif
   {
      "dipswitch",
      CATEGORY_DIPSWITCH_LABEL_SK,
      CATEGORY_DIPSWITCH_INFO_0_SK
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_sk[] = {
   {
      "dice_use_mouse_pointer_for_paddle_1",
      DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_LABEL_SK,
      DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_LABEL_CAT_SK,
      DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_INFO_0_SK,
      NULL,
      "input",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_paddle_joystick_absolute",
      DICE_PADDLE_JOYSTICK_ABSOLUTE_LABEL_SK,
      DICE_PADDLE_JOYSTICK_ABSOLUTE_LABEL_CAT_SK,
      DICE_PADDLE_JOYSTICK_ABSOLUTE_INFO_0_SK,
      NULL,
      "input",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      // D-pad but not necessarily keyboard under libretro,
      // that name comes from the upstream code.
      "dice_paddle_keyboard_sensitivity",
      DICE_PADDLE_KEYBOARD_SENSITIVITY_LABEL_SK,
      DICE_PADDLE_KEYBOARD_SENSITIVITY_LABEL_CAT_SK,
      DICE_PADDLE_KEYBOARD_SENSITIVITY_INFO_0_SK,
      NULL,
      "input",
      {
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "250"
   },
   {
      "dice_paddle_joystick_sensitivity",
      DICE_PADDLE_JOYSTICK_SENSITIVITY_LABEL_SK,
      DICE_PADDLE_JOYSTICK_SENSITIVITY_LABEL_CAT_SK,
      DICE_PADDLE_JOYSTICK_SENSITIVITY_INFO_0_SK,
      NULL,
      "input",
      {
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "500"
   },
   {
      "dice_retromouse_paddle_sensitivity",
      DICE_RETROMOUSE_PADDLE_SENSITIVITY_LABEL_SK,
      DICE_RETROMOUSE_PADDLE_SENSITIVITY_LABEL_CAT_SK,
      DICE_RETROMOUSE_PADDLE_SENSITIVITY_INFO_0_SK,
      NULL,
      "input",
      {
         {"25", NULL},
         {"50", NULL},
         {"75", NULL},
         {"100", NULL},
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "125"
   },
   {
      "dice_wheel_keyjoy_sensitivity",
      DICE_WHEEL_KEYJOY_SENSITIVITY_LABEL_SK,
      DICE_WHEEL_KEYJOY_SENSITIVITY_LABEL_CAT_SK,
      DICE_WHEEL_KEYJOY_SENSITIVITY_INFO_0_SK,
      NULL,
      "input",
      {
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "500"
   },
   {
      "dice_throttle_keyjoy_sensitivity",
      DICE_THROTTLE_KEYJOY_SENSITIVITY_LABEL_SK,
      DICE_THROTTLE_KEYJOY_SENSITIVITY_LABEL_CAT_SK,
      DICE_THROTTLE_KEYJOY_SENSITIVITY_INFO_0_SK,
      NULL,
      "input",
      {
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "250"
   },

   {
      "dice_retromouse_paddle0",
      DICE_RETROMOUSE_PADDLE0_LABEL_SK,
      DICE_RETROMOUSE_PADDLE0_LABEL_CAT_SK,
      DICE_RETROMOUSE_PADDLE0_INFO_0_SK,
      NULL,
      "retromouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_retromouse_paddle1",
      DICE_RETROMOUSE_PADDLE1_LABEL_SK,
      DICE_RETROMOUSE_PADDLE1_LABEL_CAT_SK,
      DICE_RETROMOUSE_PADDLE1_INFO_0_SK,
      NULL,
      "retromouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_retromouse_paddle2",
      DICE_RETROMOUSE_PADDLE2_LABEL_SK,
      DICE_RETROMOUSE_PADDLE2_LABEL_CAT_SK,
      DICE_RETROMOUSE_PADDLE2_INFO_0_SK,
      NULL,
      "retromouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_retromouse_paddle3",
      DICE_RETROMOUSE_PADDLE3_LABEL_SK,
      DICE_RETROMOUSE_PADDLE3_LABEL_CAT_SK,
      DICE_RETROMOUSE_PADDLE3_INFO_0_SK,
      NULL,
      "retromouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_retromouse_paddle0_x",
      DICE_RETROMOUSE_PADDLE0_X_LABEL_SK,
      DICE_RETROMOUSE_PADDLE0_X_LABEL_CAT_SK,
      DICE_RETROMOUSE_PADDLE0_X_INFO_0_SK,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_SK},
         {"y", OPTION_VAL_Y_SK},
         {NULL, NULL},
      },
      "x"
   },
   {
      "dice_retromouse_paddle0_y",
      DICE_RETROMOUSE_PADDLE0_Y_LABEL_SK,
      DICE_RETROMOUSE_PADDLE0_Y_LABEL_CAT_SK,
      DICE_RETROMOUSE_PADDLE0_Y_INFO_0_SK,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_SK},
         {"y", OPTION_VAL_Y_SK},
         {NULL, NULL},
      },
      "y"
   },
   {
      "dice_retromouse_paddle1_x",
      DICE_RETROMOUSE_PADDLE1_X_LABEL_SK,
      DICE_RETROMOUSE_PADDLE1_X_LABEL_CAT_SK,
      DICE_RETROMOUSE_PADDLE1_X_INFO_0_SK,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_SK},
         {"y", OPTION_VAL_Y_SK},
         {NULL, NULL},
      },
      "x"
   },
   {
      "dice_retromouse_paddle1_y",
      DICE_RETROMOUSE_PADDLE1_Y_LABEL_SK,
      DICE_RETROMOUSE_PADDLE1_Y_LABEL_CAT_SK,
      DICE_RETROMOUSE_PADDLE1_Y_INFO_0_SK,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_SK},
         {"y", OPTION_VAL_Y_SK},
         {NULL, NULL},
      },
      "y"
   },
   {
      "dice_retromouse_paddle2_x",
      DICE_RETROMOUSE_PADDLE2_X_LABEL_SK,
      DICE_RETROMOUSE_PADDLE2_X_LABEL_CAT_SK,
      DICE_RETROMOUSE_PADDLE2_X_INFO_0_SK,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_SK},
         {"y", OPTION_VAL_Y_SK},
         {NULL, NULL},
      },
      "x"
   },
   {
      "dice_retromouse_paddle2_y",
      DICE_RETROMOUSE_PADDLE2_Y_LABEL_SK,
      DICE_RETROMOUSE_PADDLE2_Y_LABEL_CAT_SK,
      DICE_RETROMOUSE_PADDLE2_Y_INFO_0_SK,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_SK},
         {"y", OPTION_VAL_Y_SK},
         {NULL, NULL},
      },
      "y"
   },
   {
      "dice_retromouse_paddle3_x",
      DICE_RETROMOUSE_PADDLE3_X_LABEL_SK,
      DICE_RETROMOUSE_PADDLE3_X_LABEL_CAT_SK,
      DICE_RETROMOUSE_PADDLE3_X_INFO_0_SK,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_SK},
         {"y", OPTION_VAL_Y_SK},
         {NULL, NULL},
      },
      "x"
   },
   {
      "dice_retromouse_paddle3_y",
      DICE_RETROMOUSE_PADDLE3_Y_LABEL_SK,
      DICE_RETROMOUSE_PADDLE3_Y_LABEL_CAT_SK,
      DICE_RETROMOUSE_PADDLE3_Y_INFO_0_SK,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_SK},
         {"y", OPTION_VAL_Y_SK},
         {NULL, NULL},
      },
      "y"
   },

#ifdef MANYMOUSE
   {
      "dice_manymouse_paddle0",
      DICE_MANYMOUSE_PADDLE0_LABEL_SK,
      DICE_RETROMOUSE_PADDLE0_LABEL_CAT_SK,
      DICE_MANYMOUSE_PADDLE0_INFO_0_SK,
      NULL,
      "manymouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_manymouse_paddle0_x",
      DICE_MANYMOUSE_PADDLE0_X_LABEL_SK,
      DICE_MANYMOUSE_PADDLE0_X_LABEL_CAT_SK,
      DICE_RETROMOUSE_PADDLE0_X_INFO_0_SK,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_SK},
         {"0y", OPTION_VAL_0Y_SK},
         {"1x", OPTION_VAL_1X_SK},
         {"1y", OPTION_VAL_1Y_SK},
         {"2x", OPTION_VAL_2X_SK},
         {"2y", OPTION_VAL_2Y_SK},
         {"3x", OPTION_VAL_3X_SK},
         {"3y", OPTION_VAL_3Y_SK},
         {NULL, NULL},
      },
      "0x"
   },
   {
      "dice_manymouse_paddle0_y",
      DICE_MANYMOUSE_PADDLE0_Y_LABEL_SK,
      DICE_MANYMOUSE_PADDLE0_Y_LABEL_CAT_SK,
      DICE_RETROMOUSE_PADDLE0_Y_INFO_0_SK,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_SK},
         {"0y", OPTION_VAL_0Y_SK},
         {"1x", OPTION_VAL_1X_SK},
         {"1y", OPTION_VAL_1Y_SK},
         {"2x", OPTION_VAL_2X_SK},
         {"2y", OPTION_VAL_2Y_SK},
         {"3x", OPTION_VAL_3X_SK},
         {"3y", OPTION_VAL_3Y_SK},
         {NULL, NULL},
      },
      "0y"
   },
   {
      "dice_manymouse_paddle1",
      DICE_MANYMOUSE_PADDLE1_LABEL_SK,
      DICE_RETROMOUSE_PADDLE1_LABEL_CAT_SK,
      DICE_MANYMOUSE_PADDLE1_INFO_0_SK,
      NULL,
      "manymouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_manymouse_paddle1_x",
      DICE_MANYMOUSE_PADDLE1_X_LABEL_SK,
      DICE_MANYMOUSE_PADDLE1_X_LABEL_CAT_SK,
      DICE_RETROMOUSE_PADDLE1_X_INFO_0_SK,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_SK},
         {"0y", OPTION_VAL_0Y_SK},
         {"1x", OPTION_VAL_1X_SK},
         {"1y", OPTION_VAL_1Y_SK},
         {"2x", OPTION_VAL_2X_SK},
         {"2y", OPTION_VAL_2Y_SK},
         {"3x", OPTION_VAL_3X_SK},
         {"3y", OPTION_VAL_3Y_SK},
         {NULL, NULL},
      },
      "1x"
   },
   {
      "dice_manymouse_paddle1_y",
      DICE_MANYMOUSE_PADDLE1_Y_LABEL_SK,
      DICE_MANYMOUSE_PADDLE1_Y_LABEL_CAT_SK,
      DICE_RETROMOUSE_PADDLE1_Y_INFO_0_SK,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_SK},
         {"0y", OPTION_VAL_0Y_SK},
         {"1x", OPTION_VAL_1X_SK},
         {"1y", OPTION_VAL_1Y_SK},
         {"2x", OPTION_VAL_2X_SK},
         {"2y", OPTION_VAL_2Y_SK},
         {"3x", OPTION_VAL_3X_SK},
         {"3y", OPTION_VAL_3Y_SK},
         {NULL, NULL},
      },
      "1y"
   },
   {
      "dice_manymouse_paddle2",
      DICE_MANYMOUSE_PADDLE2_LABEL_SK,
      DICE_RETROMOUSE_PADDLE2_LABEL_CAT_SK,
      DICE_MANYMOUSE_PADDLE2_INFO_0_SK,
      NULL,
      "manymouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_manymouse_paddle2_x",
      DICE_MANYMOUSE_PADDLE2_X_LABEL_SK,
      DICE_MANYMOUSE_PADDLE2_X_LABEL_CAT_SK,
      DICE_RETROMOUSE_PADDLE2_X_INFO_0_SK,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_SK},
         {"0y", OPTION_VAL_0Y_SK},
         {"1x", OPTION_VAL_1X_SK},
         {"1y", OPTION_VAL_1Y_SK},
         {"2x", OPTION_VAL_2X_SK},
         {"2y", OPTION_VAL_2Y_SK},
         {"3x", OPTION_VAL_3X_SK},
         {"3y", OPTION_VAL_3Y_SK},
         {NULL, NULL},
      },
      "2x"
   },
   {
      "dice_manymouse_paddle2_y",
      DICE_MANYMOUSE_PADDLE2_Y_LABEL_SK,
      DICE_MANYMOUSE_PADDLE2_Y_LABEL_CAT_SK,
      DICE_RETROMOUSE_PADDLE2_Y_INFO_0_SK,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_SK},
         {"0y", OPTION_VAL_0Y_SK},
         {"1x", OPTION_VAL_1X_SK},
         {"1y", OPTION_VAL_1Y_SK},
         {"2x", OPTION_VAL_2X_SK},
         {"2y", OPTION_VAL_2Y_SK},
         {"3x", OPTION_VAL_3X_SK},
         {"3y", OPTION_VAL_3Y_SK},
         {NULL, NULL},
      },
      "2y"
   },
   {
      "dice_manymouse_paddle3",
      DICE_MANYMOUSE_PADDLE3_LABEL_SK,
      DICE_RETROMOUSE_PADDLE3_LABEL_CAT_SK,
      DICE_MANYMOUSE_PADDLE3_INFO_0_SK,
      NULL,
      "manymouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_manymouse_paddle3_x",
      DICE_MANYMOUSE_PADDLE3_X_LABEL_SK,
      DICE_MANYMOUSE_PADDLE3_X_LABEL_CAT_SK,
      DICE_RETROMOUSE_PADDLE3_X_INFO_0_SK,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_SK},
         {"0y", OPTION_VAL_0Y_SK},
         {"1x", OPTION_VAL_1X_SK},
         {"1y", OPTION_VAL_1Y_SK},
         {"2x", OPTION_VAL_2X_SK},
         {"2y", OPTION_VAL_2Y_SK},
         {"3x", OPTION_VAL_3X_SK},
         {"3y", OPTION_VAL_3Y_SK},
         {NULL, NULL},
      },
      "3x"
   },
   {
      "dice_manymouse_paddle3_y",
      DICE_MANYMOUSE_PADDLE3_Y_LABEL_SK,
      DICE_MANYMOUSE_PADDLE3_Y_LABEL_CAT_SK,
      DICE_RETROMOUSE_PADDLE3_Y_INFO_0_SK,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_SK},
         {"0y", OPTION_VAL_0Y_SK},
         {"1x", OPTION_VAL_1X_SK},
         {"1y", OPTION_VAL_1Y_SK},
         {"2x", OPTION_VAL_2X_SK},
         {"2y", OPTION_VAL_2Y_SK},
         {"3x", OPTION_VAL_3X_SK},
         {"3y", OPTION_VAL_3Y_SK},
         {NULL, NULL},
      },
      "3y"
   },
#endif

   {
      "dice_dipswitch_1",
      DICE_DIPSWITCH_1_LABEL_SK,
      DICE_DIPSWITCH_1_LABEL_CAT_SK,
      DICE_DIPSWITCH_1_INFO_0_SK,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_SK},
         {"0", NULL},
         {"1", NULL},
         {NULL, NULL},
      },
      "-1"
   },
   {
      "dice_dipswitch_2",
      DICE_DIPSWITCH_2_LABEL_SK,
      DICE_DIPSWITCH_2_LABEL_CAT_SK,
      DICE_DIPSWITCH_2_INFO_0_SK,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_SK},
         {"0", NULL},
         {"1", NULL},
         {NULL, NULL},
      },
      "-1"
   },
   {
      "dice_dipswitch_3",
      DICE_DIPSWITCH_3_LABEL_SK,
      DICE_DIPSWITCH_3_LABEL_CAT_SK,
      DICE_DIPSWITCH_3_INFO_0_SK,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_SK},
         {"0", NULL},
         {"1", NULL},
         {NULL, NULL},
      },
      "-1"
   },
   {
      "dice_dipswitch16_1",
      DICE_DIPSWITCH16_1_LABEL_SK,
      DICE_DIPSWITCH16_1_LABEL_CAT_SK,
      DICE_DIPSWITCH16_1_INFO_0_SK,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_SK},
         {"0", NULL},
         {"1", NULL},
         {"2", NULL},
         {"3", NULL},
         {"4", NULL},
         {"5", NULL},
         {"6", NULL},
         {"7", NULL},
         {"8", NULL},
         {"9", NULL},
         {"10", NULL},
         {"11", NULL},
         {"12", NULL},
         {"13", NULL},
         {"14", NULL},
         {"15", NULL},
         {NULL, NULL},
      },
      "-1"
   },
   {
      "dice_dipswitch16_2",
      DICE_DIPSWITCH16_2_LABEL_SK,
      DICE_DIPSWITCH16_2_LABEL_CAT_SK,
      DICE_DIPSWITCH16_2_INFO_0_SK,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_SK},
         {"0", NULL},
         {"1", NULL},
         {"2", NULL},
         {"3", NULL},
         {"4", NULL},
         {"5", NULL},
         {"6", NULL},
         {"7", NULL},
         {"8", NULL},
         {"9", NULL},
         {"10", NULL},
         {"11", NULL},
         {"12", NULL},
         {"13", NULL},
         {"14", NULL},
         {"15", NULL},
         {NULL, NULL},
      },
      "-1"
   },

   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_sk = {
   option_cats_sk,
   option_defs_sk
};

/* RETRO_LANGUAGE_SR */

#define CATEGORY_INPUT_LABEL_SR "Ulaz"
#define CATEGORY_INPUT_INFO_0_SR NULL
#define CATEGORY_RETROMOUSE_LABEL_SR NULL
#define CATEGORY_RETROMOUSE_INFO_0_SR NULL
#define CATEGORY_MANYMOUSE_LABEL_SR NULL
#define CATEGORY_MANYMOUSE_INFO_0_SR NULL
#define CATEGORY_DIPSWITCH_LABEL_SR NULL
#define CATEGORY_DIPSWITCH_INFO_0_SR NULL
#define DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_LABEL_SR NULL
#define DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_LABEL_CAT_SR NULL
#define DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_INFO_0_SR NULL
#define DICE_PADDLE_JOYSTICK_ABSOLUTE_LABEL_SR NULL
#define DICE_PADDLE_JOYSTICK_ABSOLUTE_LABEL_CAT_SR NULL
#define DICE_PADDLE_JOYSTICK_ABSOLUTE_INFO_0_SR NULL
#define DICE_PADDLE_KEYBOARD_SENSITIVITY_LABEL_SR NULL
#define DICE_PADDLE_KEYBOARD_SENSITIVITY_LABEL_CAT_SR NULL
#define DICE_PADDLE_KEYBOARD_SENSITIVITY_INFO_0_SR NULL
#define DICE_PADDLE_JOYSTICK_SENSITIVITY_LABEL_SR NULL
#define DICE_PADDLE_JOYSTICK_SENSITIVITY_LABEL_CAT_SR NULL
#define DICE_PADDLE_JOYSTICK_SENSITIVITY_INFO_0_SR NULL
#define DICE_RETROMOUSE_PADDLE_SENSITIVITY_LABEL_SR NULL
#define DICE_RETROMOUSE_PADDLE_SENSITIVITY_LABEL_CAT_SR NULL
#define DICE_RETROMOUSE_PADDLE_SENSITIVITY_INFO_0_SR NULL
#define DICE_WHEEL_KEYJOY_SENSITIVITY_LABEL_SR NULL
#define DICE_WHEEL_KEYJOY_SENSITIVITY_LABEL_CAT_SR NULL
#define DICE_WHEEL_KEYJOY_SENSITIVITY_INFO_0_SR NULL
#define DICE_THROTTLE_KEYJOY_SENSITIVITY_LABEL_SR NULL
#define DICE_THROTTLE_KEYJOY_SENSITIVITY_LABEL_CAT_SR NULL
#define DICE_THROTTLE_KEYJOY_SENSITIVITY_INFO_0_SR NULL
#define DICE_RETROMOUSE_PADDLE0_LABEL_SR NULL
#define DICE_RETROMOUSE_PADDLE0_LABEL_CAT_SR NULL
#define DICE_RETROMOUSE_PADDLE0_INFO_0_SR NULL
#define DICE_RETROMOUSE_PADDLE1_LABEL_SR NULL
#define DICE_RETROMOUSE_PADDLE1_LABEL_CAT_SR NULL
#define DICE_RETROMOUSE_PADDLE1_INFO_0_SR NULL
#define DICE_RETROMOUSE_PADDLE2_LABEL_SR NULL
#define DICE_RETROMOUSE_PADDLE2_LABEL_CAT_SR NULL
#define DICE_RETROMOUSE_PADDLE2_INFO_0_SR NULL
#define DICE_RETROMOUSE_PADDLE3_LABEL_SR NULL
#define DICE_RETROMOUSE_PADDLE3_LABEL_CAT_SR NULL
#define DICE_RETROMOUSE_PADDLE3_INFO_0_SR NULL
#define DICE_RETROMOUSE_PADDLE0_X_LABEL_SR NULL
#define DICE_RETROMOUSE_PADDLE0_X_LABEL_CAT_SR NULL
#define DICE_RETROMOUSE_PADDLE0_X_INFO_0_SR NULL
#define OPTION_VAL_X_SR NULL
#define OPTION_VAL_Y_SR NULL
#define DICE_RETROMOUSE_PADDLE0_Y_LABEL_SR NULL
#define DICE_RETROMOUSE_PADDLE0_Y_LABEL_CAT_SR NULL
#define DICE_RETROMOUSE_PADDLE0_Y_INFO_0_SR NULL
#define DICE_RETROMOUSE_PADDLE1_X_LABEL_SR NULL
#define DICE_RETROMOUSE_PADDLE1_X_LABEL_CAT_SR NULL
#define DICE_RETROMOUSE_PADDLE1_X_INFO_0_SR NULL
#define DICE_RETROMOUSE_PADDLE1_Y_LABEL_SR NULL
#define DICE_RETROMOUSE_PADDLE1_Y_LABEL_CAT_SR NULL
#define DICE_RETROMOUSE_PADDLE1_Y_INFO_0_SR NULL
#define DICE_RETROMOUSE_PADDLE2_X_LABEL_SR NULL
#define DICE_RETROMOUSE_PADDLE2_X_LABEL_CAT_SR NULL
#define DICE_RETROMOUSE_PADDLE2_X_INFO_0_SR NULL
#define DICE_RETROMOUSE_PADDLE2_Y_LABEL_SR NULL
#define DICE_RETROMOUSE_PADDLE2_Y_LABEL_CAT_SR NULL
#define DICE_RETROMOUSE_PADDLE2_Y_INFO_0_SR NULL
#define DICE_RETROMOUSE_PADDLE3_X_LABEL_SR NULL
#define DICE_RETROMOUSE_PADDLE3_X_LABEL_CAT_SR NULL
#define DICE_RETROMOUSE_PADDLE3_X_INFO_0_SR NULL
#define DICE_RETROMOUSE_PADDLE3_Y_LABEL_SR NULL
#define DICE_RETROMOUSE_PADDLE3_Y_LABEL_CAT_SR NULL
#define DICE_RETROMOUSE_PADDLE3_Y_INFO_0_SR NULL
#define DICE_MANYMOUSE_PADDLE0_LABEL_SR NULL
#define DICE_MANYMOUSE_PADDLE0_INFO_0_SR NULL
#define DICE_MANYMOUSE_PADDLE0_X_LABEL_SR NULL
#define DICE_MANYMOUSE_PADDLE0_X_LABEL_CAT_SR NULL
#define OPTION_VAL_0X_SR NULL
#define OPTION_VAL_0Y_SR NULL
#define OPTION_VAL_1X_SR NULL
#define OPTION_VAL_1Y_SR NULL
#define OPTION_VAL_2X_SR NULL
#define OPTION_VAL_2Y_SR NULL
#define OPTION_VAL_3X_SR NULL
#define OPTION_VAL_3Y_SR NULL
#define DICE_MANYMOUSE_PADDLE0_Y_LABEL_SR NULL
#define DICE_MANYMOUSE_PADDLE0_Y_LABEL_CAT_SR NULL
#define DICE_MANYMOUSE_PADDLE1_LABEL_SR NULL
#define DICE_MANYMOUSE_PADDLE1_INFO_0_SR NULL
#define DICE_MANYMOUSE_PADDLE1_X_LABEL_SR NULL
#define DICE_MANYMOUSE_PADDLE1_X_LABEL_CAT_SR NULL
#define DICE_MANYMOUSE_PADDLE1_Y_LABEL_SR NULL
#define DICE_MANYMOUSE_PADDLE1_Y_LABEL_CAT_SR NULL
#define DICE_MANYMOUSE_PADDLE2_LABEL_SR NULL
#define DICE_MANYMOUSE_PADDLE2_INFO_0_SR NULL
#define DICE_MANYMOUSE_PADDLE2_X_LABEL_SR NULL
#define DICE_MANYMOUSE_PADDLE2_X_LABEL_CAT_SR NULL
#define DICE_MANYMOUSE_PADDLE2_Y_LABEL_SR NULL
#define DICE_MANYMOUSE_PADDLE2_Y_LABEL_CAT_SR NULL
#define DICE_MANYMOUSE_PADDLE3_LABEL_SR NULL
#define DICE_MANYMOUSE_PADDLE3_INFO_0_SR NULL
#define DICE_MANYMOUSE_PADDLE3_X_LABEL_SR NULL
#define DICE_MANYMOUSE_PADDLE3_X_LABEL_CAT_SR NULL
#define DICE_MANYMOUSE_PADDLE3_Y_LABEL_SR NULL
#define DICE_MANYMOUSE_PADDLE3_Y_LABEL_CAT_SR NULL
#define DICE_DIPSWITCH_1_LABEL_SR NULL
#define DICE_DIPSWITCH_1_LABEL_CAT_SR NULL
#define DICE_DIPSWITCH_1_INFO_0_SR NULL
#define OPTION_VAL_1_SR NULL
#define DICE_DIPSWITCH_2_LABEL_SR NULL
#define DICE_DIPSWITCH_2_LABEL_CAT_SR NULL
#define DICE_DIPSWITCH_2_INFO_0_SR NULL
#define DICE_DIPSWITCH_3_LABEL_SR NULL
#define DICE_DIPSWITCH_3_LABEL_CAT_SR NULL
#define DICE_DIPSWITCH_3_INFO_0_SR NULL
#define DICE_DIPSWITCH16_1_LABEL_SR NULL
#define DICE_DIPSWITCH16_1_LABEL_CAT_SR NULL
#define DICE_DIPSWITCH16_1_INFO_0_SR NULL
#define DICE_DIPSWITCH16_2_LABEL_SR NULL
#define DICE_DIPSWITCH16_2_LABEL_CAT_SR NULL
#define DICE_DIPSWITCH16_2_INFO_0_SR NULL

struct retro_core_option_v2_category option_cats_sr[] = {
   {
      "input",
      CATEGORY_INPUT_LABEL_SR,
      CATEGORY_INPUT_INFO_0_SR
   },
   {
      "retromouse",
      CATEGORY_RETROMOUSE_LABEL_SR,
      CATEGORY_RETROMOUSE_INFO_0_SR
   },
#ifdef MANYMOUSE
   {
      "manymouse",
      CATEGORY_MANYMOUSE_LABEL_SR,
      CATEGORY_MANYMOUSE_INFO_0_SR
   },
#endif
   {
      "dipswitch",
      CATEGORY_DIPSWITCH_LABEL_SR,
      CATEGORY_DIPSWITCH_INFO_0_SR
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_sr[] = {
   {
      "dice_use_mouse_pointer_for_paddle_1",
      DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_LABEL_SR,
      DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_LABEL_CAT_SR,
      DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_INFO_0_SR,
      NULL,
      "input",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_paddle_joystick_absolute",
      DICE_PADDLE_JOYSTICK_ABSOLUTE_LABEL_SR,
      DICE_PADDLE_JOYSTICK_ABSOLUTE_LABEL_CAT_SR,
      DICE_PADDLE_JOYSTICK_ABSOLUTE_INFO_0_SR,
      NULL,
      "input",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      // D-pad but not necessarily keyboard under libretro,
      // that name comes from the upstream code.
      "dice_paddle_keyboard_sensitivity",
      DICE_PADDLE_KEYBOARD_SENSITIVITY_LABEL_SR,
      DICE_PADDLE_KEYBOARD_SENSITIVITY_LABEL_CAT_SR,
      DICE_PADDLE_KEYBOARD_SENSITIVITY_INFO_0_SR,
      NULL,
      "input",
      {
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "250"
   },
   {
      "dice_paddle_joystick_sensitivity",
      DICE_PADDLE_JOYSTICK_SENSITIVITY_LABEL_SR,
      DICE_PADDLE_JOYSTICK_SENSITIVITY_LABEL_CAT_SR,
      DICE_PADDLE_JOYSTICK_SENSITIVITY_INFO_0_SR,
      NULL,
      "input",
      {
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "500"
   },
   {
      "dice_retromouse_paddle_sensitivity",
      DICE_RETROMOUSE_PADDLE_SENSITIVITY_LABEL_SR,
      DICE_RETROMOUSE_PADDLE_SENSITIVITY_LABEL_CAT_SR,
      DICE_RETROMOUSE_PADDLE_SENSITIVITY_INFO_0_SR,
      NULL,
      "input",
      {
         {"25", NULL},
         {"50", NULL},
         {"75", NULL},
         {"100", NULL},
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "125"
   },
   {
      "dice_wheel_keyjoy_sensitivity",
      DICE_WHEEL_KEYJOY_SENSITIVITY_LABEL_SR,
      DICE_WHEEL_KEYJOY_SENSITIVITY_LABEL_CAT_SR,
      DICE_WHEEL_KEYJOY_SENSITIVITY_INFO_0_SR,
      NULL,
      "input",
      {
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "500"
   },
   {
      "dice_throttle_keyjoy_sensitivity",
      DICE_THROTTLE_KEYJOY_SENSITIVITY_LABEL_SR,
      DICE_THROTTLE_KEYJOY_SENSITIVITY_LABEL_CAT_SR,
      DICE_THROTTLE_KEYJOY_SENSITIVITY_INFO_0_SR,
      NULL,
      "input",
      {
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "250"
   },

   {
      "dice_retromouse_paddle0",
      DICE_RETROMOUSE_PADDLE0_LABEL_SR,
      DICE_RETROMOUSE_PADDLE0_LABEL_CAT_SR,
      DICE_RETROMOUSE_PADDLE0_INFO_0_SR,
      NULL,
      "retromouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_retromouse_paddle1",
      DICE_RETROMOUSE_PADDLE1_LABEL_SR,
      DICE_RETROMOUSE_PADDLE1_LABEL_CAT_SR,
      DICE_RETROMOUSE_PADDLE1_INFO_0_SR,
      NULL,
      "retromouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_retromouse_paddle2",
      DICE_RETROMOUSE_PADDLE2_LABEL_SR,
      DICE_RETROMOUSE_PADDLE2_LABEL_CAT_SR,
      DICE_RETROMOUSE_PADDLE2_INFO_0_SR,
      NULL,
      "retromouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_retromouse_paddle3",
      DICE_RETROMOUSE_PADDLE3_LABEL_SR,
      DICE_RETROMOUSE_PADDLE3_LABEL_CAT_SR,
      DICE_RETROMOUSE_PADDLE3_INFO_0_SR,
      NULL,
      "retromouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_retromouse_paddle0_x",
      DICE_RETROMOUSE_PADDLE0_X_LABEL_SR,
      DICE_RETROMOUSE_PADDLE0_X_LABEL_CAT_SR,
      DICE_RETROMOUSE_PADDLE0_X_INFO_0_SR,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_SR},
         {"y", OPTION_VAL_Y_SR},
         {NULL, NULL},
      },
      "x"
   },
   {
      "dice_retromouse_paddle0_y",
      DICE_RETROMOUSE_PADDLE0_Y_LABEL_SR,
      DICE_RETROMOUSE_PADDLE0_Y_LABEL_CAT_SR,
      DICE_RETROMOUSE_PADDLE0_Y_INFO_0_SR,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_SR},
         {"y", OPTION_VAL_Y_SR},
         {NULL, NULL},
      },
      "y"
   },
   {
      "dice_retromouse_paddle1_x",
      DICE_RETROMOUSE_PADDLE1_X_LABEL_SR,
      DICE_RETROMOUSE_PADDLE1_X_LABEL_CAT_SR,
      DICE_RETROMOUSE_PADDLE1_X_INFO_0_SR,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_SR},
         {"y", OPTION_VAL_Y_SR},
         {NULL, NULL},
      },
      "x"
   },
   {
      "dice_retromouse_paddle1_y",
      DICE_RETROMOUSE_PADDLE1_Y_LABEL_SR,
      DICE_RETROMOUSE_PADDLE1_Y_LABEL_CAT_SR,
      DICE_RETROMOUSE_PADDLE1_Y_INFO_0_SR,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_SR},
         {"y", OPTION_VAL_Y_SR},
         {NULL, NULL},
      },
      "y"
   },
   {
      "dice_retromouse_paddle2_x",
      DICE_RETROMOUSE_PADDLE2_X_LABEL_SR,
      DICE_RETROMOUSE_PADDLE2_X_LABEL_CAT_SR,
      DICE_RETROMOUSE_PADDLE2_X_INFO_0_SR,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_SR},
         {"y", OPTION_VAL_Y_SR},
         {NULL, NULL},
      },
      "x"
   },
   {
      "dice_retromouse_paddle2_y",
      DICE_RETROMOUSE_PADDLE2_Y_LABEL_SR,
      DICE_RETROMOUSE_PADDLE2_Y_LABEL_CAT_SR,
      DICE_RETROMOUSE_PADDLE2_Y_INFO_0_SR,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_SR},
         {"y", OPTION_VAL_Y_SR},
         {NULL, NULL},
      },
      "y"
   },
   {
      "dice_retromouse_paddle3_x",
      DICE_RETROMOUSE_PADDLE3_X_LABEL_SR,
      DICE_RETROMOUSE_PADDLE3_X_LABEL_CAT_SR,
      DICE_RETROMOUSE_PADDLE3_X_INFO_0_SR,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_SR},
         {"y", OPTION_VAL_Y_SR},
         {NULL, NULL},
      },
      "x"
   },
   {
      "dice_retromouse_paddle3_y",
      DICE_RETROMOUSE_PADDLE3_Y_LABEL_SR,
      DICE_RETROMOUSE_PADDLE3_Y_LABEL_CAT_SR,
      DICE_RETROMOUSE_PADDLE3_Y_INFO_0_SR,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_SR},
         {"y", OPTION_VAL_Y_SR},
         {NULL, NULL},
      },
      "y"
   },

#ifdef MANYMOUSE
   {
      "dice_manymouse_paddle0",
      DICE_MANYMOUSE_PADDLE0_LABEL_SR,
      DICE_RETROMOUSE_PADDLE0_LABEL_CAT_SR,
      DICE_MANYMOUSE_PADDLE0_INFO_0_SR,
      NULL,
      "manymouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_manymouse_paddle0_x",
      DICE_MANYMOUSE_PADDLE0_X_LABEL_SR,
      DICE_MANYMOUSE_PADDLE0_X_LABEL_CAT_SR,
      DICE_RETROMOUSE_PADDLE0_X_INFO_0_SR,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_SR},
         {"0y", OPTION_VAL_0Y_SR},
         {"1x", OPTION_VAL_1X_SR},
         {"1y", OPTION_VAL_1Y_SR},
         {"2x", OPTION_VAL_2X_SR},
         {"2y", OPTION_VAL_2Y_SR},
         {"3x", OPTION_VAL_3X_SR},
         {"3y", OPTION_VAL_3Y_SR},
         {NULL, NULL},
      },
      "0x"
   },
   {
      "dice_manymouse_paddle0_y",
      DICE_MANYMOUSE_PADDLE0_Y_LABEL_SR,
      DICE_MANYMOUSE_PADDLE0_Y_LABEL_CAT_SR,
      DICE_RETROMOUSE_PADDLE0_Y_INFO_0_SR,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_SR},
         {"0y", OPTION_VAL_0Y_SR},
         {"1x", OPTION_VAL_1X_SR},
         {"1y", OPTION_VAL_1Y_SR},
         {"2x", OPTION_VAL_2X_SR},
         {"2y", OPTION_VAL_2Y_SR},
         {"3x", OPTION_VAL_3X_SR},
         {"3y", OPTION_VAL_3Y_SR},
         {NULL, NULL},
      },
      "0y"
   },
   {
      "dice_manymouse_paddle1",
      DICE_MANYMOUSE_PADDLE1_LABEL_SR,
      DICE_RETROMOUSE_PADDLE1_LABEL_CAT_SR,
      DICE_MANYMOUSE_PADDLE1_INFO_0_SR,
      NULL,
      "manymouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_manymouse_paddle1_x",
      DICE_MANYMOUSE_PADDLE1_X_LABEL_SR,
      DICE_MANYMOUSE_PADDLE1_X_LABEL_CAT_SR,
      DICE_RETROMOUSE_PADDLE1_X_INFO_0_SR,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_SR},
         {"0y", OPTION_VAL_0Y_SR},
         {"1x", OPTION_VAL_1X_SR},
         {"1y", OPTION_VAL_1Y_SR},
         {"2x", OPTION_VAL_2X_SR},
         {"2y", OPTION_VAL_2Y_SR},
         {"3x", OPTION_VAL_3X_SR},
         {"3y", OPTION_VAL_3Y_SR},
         {NULL, NULL},
      },
      "1x"
   },
   {
      "dice_manymouse_paddle1_y",
      DICE_MANYMOUSE_PADDLE1_Y_LABEL_SR,
      DICE_MANYMOUSE_PADDLE1_Y_LABEL_CAT_SR,
      DICE_RETROMOUSE_PADDLE1_Y_INFO_0_SR,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_SR},
         {"0y", OPTION_VAL_0Y_SR},
         {"1x", OPTION_VAL_1X_SR},
         {"1y", OPTION_VAL_1Y_SR},
         {"2x", OPTION_VAL_2X_SR},
         {"2y", OPTION_VAL_2Y_SR},
         {"3x", OPTION_VAL_3X_SR},
         {"3y", OPTION_VAL_3Y_SR},
         {NULL, NULL},
      },
      "1y"
   },
   {
      "dice_manymouse_paddle2",
      DICE_MANYMOUSE_PADDLE2_LABEL_SR,
      DICE_RETROMOUSE_PADDLE2_LABEL_CAT_SR,
      DICE_MANYMOUSE_PADDLE2_INFO_0_SR,
      NULL,
      "manymouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_manymouse_paddle2_x",
      DICE_MANYMOUSE_PADDLE2_X_LABEL_SR,
      DICE_MANYMOUSE_PADDLE2_X_LABEL_CAT_SR,
      DICE_RETROMOUSE_PADDLE2_X_INFO_0_SR,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_SR},
         {"0y", OPTION_VAL_0Y_SR},
         {"1x", OPTION_VAL_1X_SR},
         {"1y", OPTION_VAL_1Y_SR},
         {"2x", OPTION_VAL_2X_SR},
         {"2y", OPTION_VAL_2Y_SR},
         {"3x", OPTION_VAL_3X_SR},
         {"3y", OPTION_VAL_3Y_SR},
         {NULL, NULL},
      },
      "2x"
   },
   {
      "dice_manymouse_paddle2_y",
      DICE_MANYMOUSE_PADDLE2_Y_LABEL_SR,
      DICE_MANYMOUSE_PADDLE2_Y_LABEL_CAT_SR,
      DICE_RETROMOUSE_PADDLE2_Y_INFO_0_SR,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_SR},
         {"0y", OPTION_VAL_0Y_SR},
         {"1x", OPTION_VAL_1X_SR},
         {"1y", OPTION_VAL_1Y_SR},
         {"2x", OPTION_VAL_2X_SR},
         {"2y", OPTION_VAL_2Y_SR},
         {"3x", OPTION_VAL_3X_SR},
         {"3y", OPTION_VAL_3Y_SR},
         {NULL, NULL},
      },
      "2y"
   },
   {
      "dice_manymouse_paddle3",
      DICE_MANYMOUSE_PADDLE3_LABEL_SR,
      DICE_RETROMOUSE_PADDLE3_LABEL_CAT_SR,
      DICE_MANYMOUSE_PADDLE3_INFO_0_SR,
      NULL,
      "manymouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_manymouse_paddle3_x",
      DICE_MANYMOUSE_PADDLE3_X_LABEL_SR,
      DICE_MANYMOUSE_PADDLE3_X_LABEL_CAT_SR,
      DICE_RETROMOUSE_PADDLE3_X_INFO_0_SR,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_SR},
         {"0y", OPTION_VAL_0Y_SR},
         {"1x", OPTION_VAL_1X_SR},
         {"1y", OPTION_VAL_1Y_SR},
         {"2x", OPTION_VAL_2X_SR},
         {"2y", OPTION_VAL_2Y_SR},
         {"3x", OPTION_VAL_3X_SR},
         {"3y", OPTION_VAL_3Y_SR},
         {NULL, NULL},
      },
      "3x"
   },
   {
      "dice_manymouse_paddle3_y",
      DICE_MANYMOUSE_PADDLE3_Y_LABEL_SR,
      DICE_MANYMOUSE_PADDLE3_Y_LABEL_CAT_SR,
      DICE_RETROMOUSE_PADDLE3_Y_INFO_0_SR,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_SR},
         {"0y", OPTION_VAL_0Y_SR},
         {"1x", OPTION_VAL_1X_SR},
         {"1y", OPTION_VAL_1Y_SR},
         {"2x", OPTION_VAL_2X_SR},
         {"2y", OPTION_VAL_2Y_SR},
         {"3x", OPTION_VAL_3X_SR},
         {"3y", OPTION_VAL_3Y_SR},
         {NULL, NULL},
      },
      "3y"
   },
#endif

   {
      "dice_dipswitch_1",
      DICE_DIPSWITCH_1_LABEL_SR,
      DICE_DIPSWITCH_1_LABEL_CAT_SR,
      DICE_DIPSWITCH_1_INFO_0_SR,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_SR},
         {"0", NULL},
         {"1", NULL},
         {NULL, NULL},
      },
      "-1"
   },
   {
      "dice_dipswitch_2",
      DICE_DIPSWITCH_2_LABEL_SR,
      DICE_DIPSWITCH_2_LABEL_CAT_SR,
      DICE_DIPSWITCH_2_INFO_0_SR,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_SR},
         {"0", NULL},
         {"1", NULL},
         {NULL, NULL},
      },
      "-1"
   },
   {
      "dice_dipswitch_3",
      DICE_DIPSWITCH_3_LABEL_SR,
      DICE_DIPSWITCH_3_LABEL_CAT_SR,
      DICE_DIPSWITCH_3_INFO_0_SR,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_SR},
         {"0", NULL},
         {"1", NULL},
         {NULL, NULL},
      },
      "-1"
   },
   {
      "dice_dipswitch16_1",
      DICE_DIPSWITCH16_1_LABEL_SR,
      DICE_DIPSWITCH16_1_LABEL_CAT_SR,
      DICE_DIPSWITCH16_1_INFO_0_SR,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_SR},
         {"0", NULL},
         {"1", NULL},
         {"2", NULL},
         {"3", NULL},
         {"4", NULL},
         {"5", NULL},
         {"6", NULL},
         {"7", NULL},
         {"8", NULL},
         {"9", NULL},
         {"10", NULL},
         {"11", NULL},
         {"12", NULL},
         {"13", NULL},
         {"14", NULL},
         {"15", NULL},
         {NULL, NULL},
      },
      "-1"
   },
   {
      "dice_dipswitch16_2",
      DICE_DIPSWITCH16_2_LABEL_SR,
      DICE_DIPSWITCH16_2_LABEL_CAT_SR,
      DICE_DIPSWITCH16_2_INFO_0_SR,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_SR},
         {"0", NULL},
         {"1", NULL},
         {"2", NULL},
         {"3", NULL},
         {"4", NULL},
         {"5", NULL},
         {"6", NULL},
         {"7", NULL},
         {"8", NULL},
         {"9", NULL},
         {"10", NULL},
         {"11", NULL},
         {"12", NULL},
         {"13", NULL},
         {"14", NULL},
         {"15", NULL},
         {NULL, NULL},
      },
      "-1"
   },

   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_sr = {
   option_cats_sr,
   option_defs_sr
};

/* RETRO_LANGUAGE_SV */

#define CATEGORY_INPUT_LABEL_SV "Inmatning"
#define CATEGORY_INPUT_INFO_0_SV "Konfigurera kärmspecifika inmatningsinställningar."
#define CATEGORY_RETROMOUSE_LABEL_SV NULL
#define CATEGORY_RETROMOUSE_INFO_0_SV "Konfigurera libretro-inställningar för flera möss."
#define CATEGORY_MANYMOUSE_LABEL_SV NULL
#define CATEGORY_MANYMOUSE_INFO_0_SV "Konfigurera ManyMouse, inställningar för flera möss."
#define CATEGORY_DIPSWITCH_LABEL_SV "DIP-brytare"
#define CATEGORY_DIPSWITCH_INFO_0_SV "Konfigurera inställningar för DIP-brytare och potentiometer."
#define DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_LABEL_SV "Inmatning > Använd muspekare för Paddel 1"
#define DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_LABEL_CAT_SV "Använd muspekare för Paddel 1"
#define DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_INFO_0_SV "Använd systemmuspekaren som paddelkontroll 1.  Låter dig inte välja en specifik mus om du har flera."
#define DICE_PADDLE_JOYSTICK_ABSOLUTE_LABEL_SV "Inmatning > Paddelstyrspak använder absolut rörelse"
#define DICE_PADDLE_JOYSTICK_ABSOLUTE_LABEL_CAT_SV "Paddelstyrspak använder absolut rörelse"
#define DICE_PADDLE_JOYSTICK_ABSOLUTE_INFO_0_SV "Direktmappning av styrspaksrörelsens omfång till paddelns omfång, istället för relativa rörelser."
#define DICE_PADDLE_KEYBOARD_SENSITIVITY_LABEL_SV "Inmatning > Paddelkänslighet för riktningsknappar"
#define DICE_PADDLE_KEYBOARD_SENSITIVITY_LABEL_CAT_SV "Paddelkänslighet för riktningsknappar"
#define DICE_PADDLE_KEYBOARD_SENSITIVITY_INFO_0_SV "Känslighet när riktningsknappar används som en paddel."
#define DICE_PADDLE_JOYSTICK_SENSITIVITY_LABEL_SV "Inmatning > Paddelkänslighet för analog spak"
#define DICE_PADDLE_JOYSTICK_SENSITIVITY_LABEL_CAT_SV "Paddelkänslighet för analog spak"
#define DICE_PADDLE_JOYSTICK_SENSITIVITY_INFO_0_SV "Känslighet när analog spak används som en paddel."
#define DICE_RETROMOUSE_PADDLE_SENSITIVITY_LABEL_SV "Inmatning > Paddelkänslighet för RetroMouse"
#define DICE_RETROMOUSE_PADDLE_SENSITIVITY_LABEL_CAT_SV "Paddelkänslighet för RetroMouse"
#define DICE_RETROMOUSE_PADDLE_SENSITIVITY_INFO_0_SV "Känslighet när du använder RetroMouse för en paddel."
#define DICE_WHEEL_KEYJOY_SENSITIVITY_LABEL_SV "Inmatning > Rattkänslighet"
#define DICE_WHEEL_KEYJOY_SENSITIVITY_LABEL_CAT_SV "Rattkänslighet"
#define DICE_WHEEL_KEYJOY_SENSITIVITY_INFO_0_SV "Känslighet när riktningsknappar eller analog spak används som ratt."
#define DICE_THROTTLE_KEYJOY_SENSITIVITY_LABEL_SV "Inmatning > Känslighet för gaspedal"
#define DICE_THROTTLE_KEYJOY_SENSITIVITY_LABEL_CAT_SV "Känslighet för gaspedal"
#define DICE_THROTTLE_KEYJOY_SENSITIVITY_INFO_0_SV "Känslighet när riktningsknappar eller analog spak används som gaspedal."
#define DICE_RETROMOUSE_PADDLE0_LABEL_SV "RetroMouse > Använd mus för Paddel 1"
#define DICE_RETROMOUSE_PADDLE0_LABEL_CAT_SV "Använd mus för Paddel 1"
#define DICE_RETROMOUSE_PADDLE0_INFO_0_SV "Använd en specifik mus för Paddel 1, vald av musindex för Port 1."
#define DICE_RETROMOUSE_PADDLE1_LABEL_SV "RetroMouse > Använd mus för Paddel 2"
#define DICE_RETROMOUSE_PADDLE1_LABEL_CAT_SV "Använd mus för Paddel 2"
#define DICE_RETROMOUSE_PADDLE1_INFO_0_SV "Använd en specifik mus för Paddel 2, vald av musindex för Port 2."
#define DICE_RETROMOUSE_PADDLE2_LABEL_SV "RetroMouse > Använd mus för Paddel 3"
#define DICE_RETROMOUSE_PADDLE2_LABEL_CAT_SV "Använd mus för Paddel 3"
#define DICE_RETROMOUSE_PADDLE2_INFO_0_SV "Använd en specifik mus för Paddel 3, vald av musindex för Port 3."
#define DICE_RETROMOUSE_PADDLE3_LABEL_SV "RetroMouse > Använd mus för Paddel 4"
#define DICE_RETROMOUSE_PADDLE3_LABEL_CAT_SV "Använd mus för Paddel 4"
#define DICE_RETROMOUSE_PADDLE3_INFO_0_SV "Använd en specifik mus för Paddel 4, vald av musindex för Port 4."
#define DICE_RETROMOUSE_PADDLE0_X_LABEL_SV "RetroMouse > Musaxel för paddel 1 horisontell"
#define DICE_RETROMOUSE_PADDLE0_X_LABEL_CAT_SV "Musaxel för paddel 1 horisontell"
#define DICE_RETROMOUSE_PADDLE0_X_INFO_0_SV "Musaxel för spelare 1, horisontell skärmrörelse."
#define OPTION_VAL_X_SV NULL
#define OPTION_VAL_Y_SV NULL
#define DICE_RETROMOUSE_PADDLE0_Y_LABEL_SV "RetroMouse > Musaxel för paddel 1 vertikal"
#define DICE_RETROMOUSE_PADDLE0_Y_LABEL_CAT_SV "Musaxel för paddel 1 vertikal"
#define DICE_RETROMOUSE_PADDLE0_Y_INFO_0_SV "Musaxel för spelare 1, vertikal skärmrörelse."
#define DICE_RETROMOUSE_PADDLE1_X_LABEL_SV "RetroMouse > Musaxel för paddel 2 horisontell"
#define DICE_RETROMOUSE_PADDLE1_X_LABEL_CAT_SV "Musaxel för paddel 2 horisontell"
#define DICE_RETROMOUSE_PADDLE1_X_INFO_0_SV "Musaxel för spelare 2, horisontell skärmrörelse."
#define DICE_RETROMOUSE_PADDLE1_Y_LABEL_SV "RetroMouse > Musaxel för paddel 2 vertikal"
#define DICE_RETROMOUSE_PADDLE1_Y_LABEL_CAT_SV "Musaxel för paddel 2 vertikal"
#define DICE_RETROMOUSE_PADDLE1_Y_INFO_0_SV "Musaxel för spelare 2, vertikal skärmrörelse."
#define DICE_RETROMOUSE_PADDLE2_X_LABEL_SV "RetroMouse > Musaxel för paddel 3 horisontell"
#define DICE_RETROMOUSE_PADDLE2_X_LABEL_CAT_SV "Musaxel för paddel 3 horisontell"
#define DICE_RETROMOUSE_PADDLE2_X_INFO_0_SV "Musaxel för spelare 3, horisontell skärmrörelse."
#define DICE_RETROMOUSE_PADDLE2_Y_LABEL_SV "RetroMouse > Musaxel för paddel 3 vertikal"
#define DICE_RETROMOUSE_PADDLE2_Y_LABEL_CAT_SV "Musaxel för paddel 3 vertikal"
#define DICE_RETROMOUSE_PADDLE2_Y_INFO_0_SV "Musaxel för spelare 3, vertikal skärmrörelse."
#define DICE_RETROMOUSE_PADDLE3_X_LABEL_SV "RetroMouse > Musaxel för paddel 4 horisontell"
#define DICE_RETROMOUSE_PADDLE3_X_LABEL_CAT_SV "Musaxel för paddel 4 horisontell"
#define DICE_RETROMOUSE_PADDLE3_X_INFO_0_SV "Musaxel för spelare 4, horisontell skärmrörelse."
#define DICE_RETROMOUSE_PADDLE3_Y_LABEL_SV "RetroMouse > Musaxel för paddel 4 vertikal"
#define DICE_RETROMOUSE_PADDLE3_Y_LABEL_CAT_SV "Musaxel för paddel 4 vertikal"
#define DICE_RETROMOUSE_PADDLE3_Y_INFO_0_SV "Musaxel för spelare 4, vertikal skärmrörelse."
#define DICE_MANYMOUSE_PADDLE0_LABEL_SV "ManyMouse > Använd mus för paddel 1"
#define DICE_MANYMOUSE_PADDLE0_INFO_0_SV "Använd en mus som Paddel 1."
#define DICE_MANYMOUSE_PADDLE0_X_LABEL_SV "ManyMouse > Muspaddel 1 x"
#define DICE_MANYMOUSE_PADDLE0_X_LABEL_CAT_SV "Muspaddel 1 x"
#define OPTION_VAL_0X_SV NULL
#define OPTION_VAL_0Y_SV NULL
#define OPTION_VAL_1X_SV NULL
#define OPTION_VAL_1Y_SV NULL
#define OPTION_VAL_2X_SV NULL
#define OPTION_VAL_2Y_SV NULL
#define OPTION_VAL_3X_SV NULL
#define OPTION_VAL_3Y_SV NULL
#define DICE_MANYMOUSE_PADDLE0_Y_LABEL_SV "ManyMouse > Muspaddel 1 y"
#define DICE_MANYMOUSE_PADDLE0_Y_LABEL_CAT_SV "Muspaddel 1 y"
#define DICE_MANYMOUSE_PADDLE1_LABEL_SV "ManyMouse > Använd mus för paddel 2"
#define DICE_MANYMOUSE_PADDLE1_INFO_0_SV "Använd en mus som Paddel 2."
#define DICE_MANYMOUSE_PADDLE1_X_LABEL_SV "ManyMouse > Muspaddel 2 x"
#define DICE_MANYMOUSE_PADDLE1_X_LABEL_CAT_SV "Muspaddel 2 x"
#define DICE_MANYMOUSE_PADDLE1_Y_LABEL_SV "ManyMouse > Muspaddel 2 y"
#define DICE_MANYMOUSE_PADDLE1_Y_LABEL_CAT_SV "Muspaddel 2 y"
#define DICE_MANYMOUSE_PADDLE2_LABEL_SV "ManyMouse > Använd mus för paddel 3"
#define DICE_MANYMOUSE_PADDLE2_INFO_0_SV "Använd en mus som Paddel 3."
#define DICE_MANYMOUSE_PADDLE2_X_LABEL_SV "ManyMouse > Muspaddel 3 x"
#define DICE_MANYMOUSE_PADDLE2_X_LABEL_CAT_SV "Muspaddel 3 x"
#define DICE_MANYMOUSE_PADDLE2_Y_LABEL_SV "ManyMouse > Muspaddel 3 y"
#define DICE_MANYMOUSE_PADDLE2_Y_LABEL_CAT_SV "Muspaddel 3 y"
#define DICE_MANYMOUSE_PADDLE3_LABEL_SV "ManyMouse > Använd mus för paddel 4"
#define DICE_MANYMOUSE_PADDLE3_INFO_0_SV "Använd en mus som Paddel 4."
#define DICE_MANYMOUSE_PADDLE3_X_LABEL_SV "ManyMouse > Muspaddel 4 x"
#define DICE_MANYMOUSE_PADDLE3_X_LABEL_CAT_SV "Muspaddel 4 x"
#define DICE_MANYMOUSE_PADDLE3_Y_LABEL_SV "ManyMouse > Muspaddel 4 y"
#define DICE_MANYMOUSE_PADDLE3_Y_LABEL_CAT_SV "Muspaddel 4 y"
#define DICE_DIPSWITCH_1_LABEL_SV "DIP-brytare > DIP-brytare 1"
#define DICE_DIPSWITCH_1_LABEL_CAT_SV "DIP-brytare 1"
#define DICE_DIPSWITCH_1_INFO_0_SV "Inställning för DIP-brytare 1."
#define OPTION_VAL_1_SV "standard"
#define DICE_DIPSWITCH_2_LABEL_SV "DIP-brytare > DIP-brytare 2"
#define DICE_DIPSWITCH_2_LABEL_CAT_SV "DIP-brytare 2"
#define DICE_DIPSWITCH_2_INFO_0_SV "Inställning för DIP-brytare 2."
#define DICE_DIPSWITCH_3_LABEL_SV "DIP-brytare > DIP-brytare 3"
#define DICE_DIPSWITCH_3_LABEL_CAT_SV "DIP-brytare 3"
#define DICE_DIPSWITCH_3_INFO_0_SV "Inställning för DIP-brytare 3."
#define DICE_DIPSWITCH16_1_LABEL_SV "DIP-brytare > DIP-brytare hex 1"
#define DICE_DIPSWITCH16_1_LABEL_CAT_SV "DIP-brytare hex 1"
#define DICE_DIPSWITCH16_1_INFO_0_SV "Inställning för 16-positions DIP-brytare nummer 1."
#define DICE_DIPSWITCH16_2_LABEL_SV "DIP-brytare > DIP-brytare hex 2"
#define DICE_DIPSWITCH16_2_LABEL_CAT_SV "DIP-brytare hex 2"
#define DICE_DIPSWITCH16_2_INFO_0_SV "Inställning för 16-positions DIP-brytare nummer 2."

struct retro_core_option_v2_category option_cats_sv[] = {
   {
      "input",
      CATEGORY_INPUT_LABEL_SV,
      CATEGORY_INPUT_INFO_0_SV
   },
   {
      "retromouse",
      CATEGORY_RETROMOUSE_LABEL_SV,
      CATEGORY_RETROMOUSE_INFO_0_SV
   },
#ifdef MANYMOUSE
   {
      "manymouse",
      CATEGORY_MANYMOUSE_LABEL_SV,
      CATEGORY_MANYMOUSE_INFO_0_SV
   },
#endif
   {
      "dipswitch",
      CATEGORY_DIPSWITCH_LABEL_SV,
      CATEGORY_DIPSWITCH_INFO_0_SV
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_sv[] = {
   {
      "dice_use_mouse_pointer_for_paddle_1",
      DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_LABEL_SV,
      DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_LABEL_CAT_SV,
      DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_INFO_0_SV,
      NULL,
      "input",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_paddle_joystick_absolute",
      DICE_PADDLE_JOYSTICK_ABSOLUTE_LABEL_SV,
      DICE_PADDLE_JOYSTICK_ABSOLUTE_LABEL_CAT_SV,
      DICE_PADDLE_JOYSTICK_ABSOLUTE_INFO_0_SV,
      NULL,
      "input",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      // D-pad but not necessarily keyboard under libretro,
      // that name comes from the upstream code.
      "dice_paddle_keyboard_sensitivity",
      DICE_PADDLE_KEYBOARD_SENSITIVITY_LABEL_SV,
      DICE_PADDLE_KEYBOARD_SENSITIVITY_LABEL_CAT_SV,
      DICE_PADDLE_KEYBOARD_SENSITIVITY_INFO_0_SV,
      NULL,
      "input",
      {
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "250"
   },
   {
      "dice_paddle_joystick_sensitivity",
      DICE_PADDLE_JOYSTICK_SENSITIVITY_LABEL_SV,
      DICE_PADDLE_JOYSTICK_SENSITIVITY_LABEL_CAT_SV,
      DICE_PADDLE_JOYSTICK_SENSITIVITY_INFO_0_SV,
      NULL,
      "input",
      {
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "500"
   },
   {
      "dice_retromouse_paddle_sensitivity",
      DICE_RETROMOUSE_PADDLE_SENSITIVITY_LABEL_SV,
      DICE_RETROMOUSE_PADDLE_SENSITIVITY_LABEL_CAT_SV,
      DICE_RETROMOUSE_PADDLE_SENSITIVITY_INFO_0_SV,
      NULL,
      "input",
      {
         {"25", NULL},
         {"50", NULL},
         {"75", NULL},
         {"100", NULL},
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "125"
   },
   {
      "dice_wheel_keyjoy_sensitivity",
      DICE_WHEEL_KEYJOY_SENSITIVITY_LABEL_SV,
      DICE_WHEEL_KEYJOY_SENSITIVITY_LABEL_CAT_SV,
      DICE_WHEEL_KEYJOY_SENSITIVITY_INFO_0_SV,
      NULL,
      "input",
      {
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "500"
   },
   {
      "dice_throttle_keyjoy_sensitivity",
      DICE_THROTTLE_KEYJOY_SENSITIVITY_LABEL_SV,
      DICE_THROTTLE_KEYJOY_SENSITIVITY_LABEL_CAT_SV,
      DICE_THROTTLE_KEYJOY_SENSITIVITY_INFO_0_SV,
      NULL,
      "input",
      {
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "250"
   },

   {
      "dice_retromouse_paddle0",
      DICE_RETROMOUSE_PADDLE0_LABEL_SV,
      DICE_RETROMOUSE_PADDLE0_LABEL_CAT_SV,
      DICE_RETROMOUSE_PADDLE0_INFO_0_SV,
      NULL,
      "retromouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_retromouse_paddle1",
      DICE_RETROMOUSE_PADDLE1_LABEL_SV,
      DICE_RETROMOUSE_PADDLE1_LABEL_CAT_SV,
      DICE_RETROMOUSE_PADDLE1_INFO_0_SV,
      NULL,
      "retromouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_retromouse_paddle2",
      DICE_RETROMOUSE_PADDLE2_LABEL_SV,
      DICE_RETROMOUSE_PADDLE2_LABEL_CAT_SV,
      DICE_RETROMOUSE_PADDLE2_INFO_0_SV,
      NULL,
      "retromouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_retromouse_paddle3",
      DICE_RETROMOUSE_PADDLE3_LABEL_SV,
      DICE_RETROMOUSE_PADDLE3_LABEL_CAT_SV,
      DICE_RETROMOUSE_PADDLE3_INFO_0_SV,
      NULL,
      "retromouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_retromouse_paddle0_x",
      DICE_RETROMOUSE_PADDLE0_X_LABEL_SV,
      DICE_RETROMOUSE_PADDLE0_X_LABEL_CAT_SV,
      DICE_RETROMOUSE_PADDLE0_X_INFO_0_SV,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_SV},
         {"y", OPTION_VAL_Y_SV},
         {NULL, NULL},
      },
      "x"
   },
   {
      "dice_retromouse_paddle0_y",
      DICE_RETROMOUSE_PADDLE0_Y_LABEL_SV,
      DICE_RETROMOUSE_PADDLE0_Y_LABEL_CAT_SV,
      DICE_RETROMOUSE_PADDLE0_Y_INFO_0_SV,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_SV},
         {"y", OPTION_VAL_Y_SV},
         {NULL, NULL},
      },
      "y"
   },
   {
      "dice_retromouse_paddle1_x",
      DICE_RETROMOUSE_PADDLE1_X_LABEL_SV,
      DICE_RETROMOUSE_PADDLE1_X_LABEL_CAT_SV,
      DICE_RETROMOUSE_PADDLE1_X_INFO_0_SV,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_SV},
         {"y", OPTION_VAL_Y_SV},
         {NULL, NULL},
      },
      "x"
   },
   {
      "dice_retromouse_paddle1_y",
      DICE_RETROMOUSE_PADDLE1_Y_LABEL_SV,
      DICE_RETROMOUSE_PADDLE1_Y_LABEL_CAT_SV,
      DICE_RETROMOUSE_PADDLE1_Y_INFO_0_SV,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_SV},
         {"y", OPTION_VAL_Y_SV},
         {NULL, NULL},
      },
      "y"
   },
   {
      "dice_retromouse_paddle2_x",
      DICE_RETROMOUSE_PADDLE2_X_LABEL_SV,
      DICE_RETROMOUSE_PADDLE2_X_LABEL_CAT_SV,
      DICE_RETROMOUSE_PADDLE2_X_INFO_0_SV,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_SV},
         {"y", OPTION_VAL_Y_SV},
         {NULL, NULL},
      },
      "x"
   },
   {
      "dice_retromouse_paddle2_y",
      DICE_RETROMOUSE_PADDLE2_Y_LABEL_SV,
      DICE_RETROMOUSE_PADDLE2_Y_LABEL_CAT_SV,
      DICE_RETROMOUSE_PADDLE2_Y_INFO_0_SV,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_SV},
         {"y", OPTION_VAL_Y_SV},
         {NULL, NULL},
      },
      "y"
   },
   {
      "dice_retromouse_paddle3_x",
      DICE_RETROMOUSE_PADDLE3_X_LABEL_SV,
      DICE_RETROMOUSE_PADDLE3_X_LABEL_CAT_SV,
      DICE_RETROMOUSE_PADDLE3_X_INFO_0_SV,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_SV},
         {"y", OPTION_VAL_Y_SV},
         {NULL, NULL},
      },
      "x"
   },
   {
      "dice_retromouse_paddle3_y",
      DICE_RETROMOUSE_PADDLE3_Y_LABEL_SV,
      DICE_RETROMOUSE_PADDLE3_Y_LABEL_CAT_SV,
      DICE_RETROMOUSE_PADDLE3_Y_INFO_0_SV,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_SV},
         {"y", OPTION_VAL_Y_SV},
         {NULL, NULL},
      },
      "y"
   },

#ifdef MANYMOUSE
   {
      "dice_manymouse_paddle0",
      DICE_MANYMOUSE_PADDLE0_LABEL_SV,
      DICE_RETROMOUSE_PADDLE0_LABEL_CAT_SV,
      DICE_MANYMOUSE_PADDLE0_INFO_0_SV,
      NULL,
      "manymouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_manymouse_paddle0_x",
      DICE_MANYMOUSE_PADDLE0_X_LABEL_SV,
      DICE_MANYMOUSE_PADDLE0_X_LABEL_CAT_SV,
      DICE_RETROMOUSE_PADDLE0_X_INFO_0_SV,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_SV},
         {"0y", OPTION_VAL_0Y_SV},
         {"1x", OPTION_VAL_1X_SV},
         {"1y", OPTION_VAL_1Y_SV},
         {"2x", OPTION_VAL_2X_SV},
         {"2y", OPTION_VAL_2Y_SV},
         {"3x", OPTION_VAL_3X_SV},
         {"3y", OPTION_VAL_3Y_SV},
         {NULL, NULL},
      },
      "0x"
   },
   {
      "dice_manymouse_paddle0_y",
      DICE_MANYMOUSE_PADDLE0_Y_LABEL_SV,
      DICE_MANYMOUSE_PADDLE0_Y_LABEL_CAT_SV,
      DICE_RETROMOUSE_PADDLE0_Y_INFO_0_SV,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_SV},
         {"0y", OPTION_VAL_0Y_SV},
         {"1x", OPTION_VAL_1X_SV},
         {"1y", OPTION_VAL_1Y_SV},
         {"2x", OPTION_VAL_2X_SV},
         {"2y", OPTION_VAL_2Y_SV},
         {"3x", OPTION_VAL_3X_SV},
         {"3y", OPTION_VAL_3Y_SV},
         {NULL, NULL},
      },
      "0y"
   },
   {
      "dice_manymouse_paddle1",
      DICE_MANYMOUSE_PADDLE1_LABEL_SV,
      DICE_RETROMOUSE_PADDLE1_LABEL_CAT_SV,
      DICE_MANYMOUSE_PADDLE1_INFO_0_SV,
      NULL,
      "manymouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_manymouse_paddle1_x",
      DICE_MANYMOUSE_PADDLE1_X_LABEL_SV,
      DICE_MANYMOUSE_PADDLE1_X_LABEL_CAT_SV,
      DICE_RETROMOUSE_PADDLE1_X_INFO_0_SV,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_SV},
         {"0y", OPTION_VAL_0Y_SV},
         {"1x", OPTION_VAL_1X_SV},
         {"1y", OPTION_VAL_1Y_SV},
         {"2x", OPTION_VAL_2X_SV},
         {"2y", OPTION_VAL_2Y_SV},
         {"3x", OPTION_VAL_3X_SV},
         {"3y", OPTION_VAL_3Y_SV},
         {NULL, NULL},
      },
      "1x"
   },
   {
      "dice_manymouse_paddle1_y",
      DICE_MANYMOUSE_PADDLE1_Y_LABEL_SV,
      DICE_MANYMOUSE_PADDLE1_Y_LABEL_CAT_SV,
      DICE_RETROMOUSE_PADDLE1_Y_INFO_0_SV,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_SV},
         {"0y", OPTION_VAL_0Y_SV},
         {"1x", OPTION_VAL_1X_SV},
         {"1y", OPTION_VAL_1Y_SV},
         {"2x", OPTION_VAL_2X_SV},
         {"2y", OPTION_VAL_2Y_SV},
         {"3x", OPTION_VAL_3X_SV},
         {"3y", OPTION_VAL_3Y_SV},
         {NULL, NULL},
      },
      "1y"
   },
   {
      "dice_manymouse_paddle2",
      DICE_MANYMOUSE_PADDLE2_LABEL_SV,
      DICE_RETROMOUSE_PADDLE2_LABEL_CAT_SV,
      DICE_MANYMOUSE_PADDLE2_INFO_0_SV,
      NULL,
      "manymouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_manymouse_paddle2_x",
      DICE_MANYMOUSE_PADDLE2_X_LABEL_SV,
      DICE_MANYMOUSE_PADDLE2_X_LABEL_CAT_SV,
      DICE_RETROMOUSE_PADDLE2_X_INFO_0_SV,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_SV},
         {"0y", OPTION_VAL_0Y_SV},
         {"1x", OPTION_VAL_1X_SV},
         {"1y", OPTION_VAL_1Y_SV},
         {"2x", OPTION_VAL_2X_SV},
         {"2y", OPTION_VAL_2Y_SV},
         {"3x", OPTION_VAL_3X_SV},
         {"3y", OPTION_VAL_3Y_SV},
         {NULL, NULL},
      },
      "2x"
   },
   {
      "dice_manymouse_paddle2_y",
      DICE_MANYMOUSE_PADDLE2_Y_LABEL_SV,
      DICE_MANYMOUSE_PADDLE2_Y_LABEL_CAT_SV,
      DICE_RETROMOUSE_PADDLE2_Y_INFO_0_SV,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_SV},
         {"0y", OPTION_VAL_0Y_SV},
         {"1x", OPTION_VAL_1X_SV},
         {"1y", OPTION_VAL_1Y_SV},
         {"2x", OPTION_VAL_2X_SV},
         {"2y", OPTION_VAL_2Y_SV},
         {"3x", OPTION_VAL_3X_SV},
         {"3y", OPTION_VAL_3Y_SV},
         {NULL, NULL},
      },
      "2y"
   },
   {
      "dice_manymouse_paddle3",
      DICE_MANYMOUSE_PADDLE3_LABEL_SV,
      DICE_RETROMOUSE_PADDLE3_LABEL_CAT_SV,
      DICE_MANYMOUSE_PADDLE3_INFO_0_SV,
      NULL,
      "manymouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_manymouse_paddle3_x",
      DICE_MANYMOUSE_PADDLE3_X_LABEL_SV,
      DICE_MANYMOUSE_PADDLE3_X_LABEL_CAT_SV,
      DICE_RETROMOUSE_PADDLE3_X_INFO_0_SV,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_SV},
         {"0y", OPTION_VAL_0Y_SV},
         {"1x", OPTION_VAL_1X_SV},
         {"1y", OPTION_VAL_1Y_SV},
         {"2x", OPTION_VAL_2X_SV},
         {"2y", OPTION_VAL_2Y_SV},
         {"3x", OPTION_VAL_3X_SV},
         {"3y", OPTION_VAL_3Y_SV},
         {NULL, NULL},
      },
      "3x"
   },
   {
      "dice_manymouse_paddle3_y",
      DICE_MANYMOUSE_PADDLE3_Y_LABEL_SV,
      DICE_MANYMOUSE_PADDLE3_Y_LABEL_CAT_SV,
      DICE_RETROMOUSE_PADDLE3_Y_INFO_0_SV,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_SV},
         {"0y", OPTION_VAL_0Y_SV},
         {"1x", OPTION_VAL_1X_SV},
         {"1y", OPTION_VAL_1Y_SV},
         {"2x", OPTION_VAL_2X_SV},
         {"2y", OPTION_VAL_2Y_SV},
         {"3x", OPTION_VAL_3X_SV},
         {"3y", OPTION_VAL_3Y_SV},
         {NULL, NULL},
      },
      "3y"
   },
#endif

   {
      "dice_dipswitch_1",
      DICE_DIPSWITCH_1_LABEL_SV,
      DICE_DIPSWITCH_1_LABEL_CAT_SV,
      DICE_DIPSWITCH_1_INFO_0_SV,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_SV},
         {"0", NULL},
         {"1", NULL},
         {NULL, NULL},
      },
      "-1"
   },
   {
      "dice_dipswitch_2",
      DICE_DIPSWITCH_2_LABEL_SV,
      DICE_DIPSWITCH_2_LABEL_CAT_SV,
      DICE_DIPSWITCH_2_INFO_0_SV,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_SV},
         {"0", NULL},
         {"1", NULL},
         {NULL, NULL},
      },
      "-1"
   },
   {
      "dice_dipswitch_3",
      DICE_DIPSWITCH_3_LABEL_SV,
      DICE_DIPSWITCH_3_LABEL_CAT_SV,
      DICE_DIPSWITCH_3_INFO_0_SV,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_SV},
         {"0", NULL},
         {"1", NULL},
         {NULL, NULL},
      },
      "-1"
   },
   {
      "dice_dipswitch16_1",
      DICE_DIPSWITCH16_1_LABEL_SV,
      DICE_DIPSWITCH16_1_LABEL_CAT_SV,
      DICE_DIPSWITCH16_1_INFO_0_SV,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_SV},
         {"0", NULL},
         {"1", NULL},
         {"2", NULL},
         {"3", NULL},
         {"4", NULL},
         {"5", NULL},
         {"6", NULL},
         {"7", NULL},
         {"8", NULL},
         {"9", NULL},
         {"10", NULL},
         {"11", NULL},
         {"12", NULL},
         {"13", NULL},
         {"14", NULL},
         {"15", NULL},
         {NULL, NULL},
      },
      "-1"
   },
   {
      "dice_dipswitch16_2",
      DICE_DIPSWITCH16_2_LABEL_SV,
      DICE_DIPSWITCH16_2_LABEL_CAT_SV,
      DICE_DIPSWITCH16_2_INFO_0_SV,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_SV},
         {"0", NULL},
         {"1", NULL},
         {"2", NULL},
         {"3", NULL},
         {"4", NULL},
         {"5", NULL},
         {"6", NULL},
         {"7", NULL},
         {"8", NULL},
         {"9", NULL},
         {"10", NULL},
         {"11", NULL},
         {"12", NULL},
         {"13", NULL},
         {"14", NULL},
         {"15", NULL},
         {NULL, NULL},
      },
      "-1"
   },

   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_sv = {
   option_cats_sv,
   option_defs_sv
};

/* RETRO_LANGUAGE_TH */

#define CATEGORY_INPUT_LABEL_TH "การควบคุม"
#define CATEGORY_INPUT_INFO_0_TH "กำหนดค่าการตั้งค่าอินพุตเฉพาะ core"
#define CATEGORY_RETROMOUSE_LABEL_TH NULL
#define CATEGORY_RETROMOUSE_INFO_0_TH "กำหนดค่าการตั้งค่าเมาส์หลายตัวของ libretro"
#define CATEGORY_MANYMOUSE_LABEL_TH NULL
#define CATEGORY_MANYMOUSE_INFO_0_TH "กำหนดค่าการตั้งค่าเมาส์หลายตัวของ ManyMouse"
#define CATEGORY_DIPSWITCH_LABEL_TH "สวิตช์ DIP"
#define CATEGORY_DIPSWITCH_INFO_0_TH "กำหนดค่าการตั้งค่า DIP switch และโพเทนชิโอมิเตอร์"
#define DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_LABEL_TH "อินพุต > ใช้ตัวชี้เมาส์สำหรับ Paddle 1"
#define DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_LABEL_CAT_TH "ใช้ตัวชี้เมาส์สำหรับ Paddle 1"
#define DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_INFO_0_TH "ใช้ตัวชี้เมาส์ของระบบเป็นคอนโทรลเลอร์ Paddle 1 ตัวเลือกนี้จะไม่ให้คุณเลือกเมาส์เฉพาะเจาะจงได้หากคุณมีเมาส์หลายตัว"
#define DICE_PADDLE_JOYSTICK_ABSOLUTE_LABEL_TH "อินพุต > จอยสติ๊ก Paddle ใช้การเคลื่อนที่แบบสัมบูรณ์"
#define DICE_PADDLE_JOYSTICK_ABSOLUTE_LABEL_CAT_TH "ปุ่มควบคุมแบบPaddleใช้การเคลื่อนที่แบบสัมบูรณ์"
#define DICE_PADDLE_JOYSTICK_ABSOLUTE_INFO_0_TH "จับคู่ช่วงการเคลื่อนที่ของจอยสติ๊กกับช่วงของPaddleโดยตรง แทนที่จะเป็นการเคลื่อนที่แบบสัมพัทธ์"
#define DICE_PADDLE_KEYBOARD_SENSITIVITY_LABEL_TH "อินพุต > ความไวของปุ่มทิศทางแบบPaddle"
#define DICE_PADDLE_KEYBOARD_SENSITIVITY_LABEL_CAT_TH "ความไวของปุ่มทิศทางแบบPaddle"
#define DICE_PADDLE_KEYBOARD_SENSITIVITY_INFO_0_TH "ความไวเมื่อใช้ปุ่มทิศทางกับPaddle"
#define DICE_PADDLE_JOYSTICK_SENSITIVITY_LABEL_TH "อินพุต > ความไวของอนาล็อกสติ๊กสำหรับPaddle"
#define DICE_PADDLE_JOYSTICK_SENSITIVITY_LABEL_CAT_TH "ความไวของอนาล็อกสติ๊กสำหรับPaddle"
#define DICE_PADDLE_JOYSTICK_SENSITIVITY_INFO_0_TH "ความไวเมื่อใช้อนาล็อกสติ๊กกับPaddle"
#define DICE_RETROMOUSE_PADDLE_SENSITIVITY_LABEL_TH "อินพุต > ความไวของ RetroMouse สำหรับPaddle"
#define DICE_RETROMOUSE_PADDLE_SENSITIVITY_LABEL_CAT_TH "ความไวของ RetroMouse สำหรับPaddle"
#define DICE_RETROMOUSE_PADDLE_SENSITIVITY_INFO_0_TH "ความไวเมื่อใช้ RetroMouse กับPaddle"
#define DICE_WHEEL_KEYJOY_SENSITIVITY_LABEL_TH "อินพุต > ความไวแกนหมุน"
#define DICE_WHEEL_KEYJOY_SENSITIVITY_LABEL_CAT_TH "ความไวแกนหมุน"
#define DICE_WHEEL_KEYJOY_SENSITIVITY_INFO_0_TH "ความไวเมื่อใช้ D-pad หรืออนาล็อกสติ๊กสำหรับแกนหมุน"
#define DICE_THROTTLE_KEYJOY_SENSITIVITY_LABEL_TH "อินพุต > ความไวคันเร่ง"
#define DICE_THROTTLE_KEYJOY_SENSITIVITY_LABEL_CAT_TH "ความไวปุ่มคันเร่ง"
#define DICE_THROTTLE_KEYJOY_SENSITIVITY_INFO_0_TH "ความไวเมื่อใช้ D-pad หรืออนาล็อกสติ๊กสำหรับคันเร่ง"
#define DICE_RETROMOUSE_PADDLE0_LABEL_TH "RetroMouse > ใช้เมาส์สำหรับ Paddle 1"
#define DICE_RETROMOUSE_PADDLE0_LABEL_CAT_TH "ใช้เมาส์สำหรับ Paddle 1"
#define DICE_RETROMOUSE_PADDLE0_INFO_0_TH "ใช้เมาส์เฉพาะสำหรับ Paddle 1 ซึ่งเลือกโดยหมายเลขเมาส์ของพอร์ต 1"
#define DICE_RETROMOUSE_PADDLE1_LABEL_TH "RetroMouse > ใช้เมาส์สำหรับ Paddle 2"
#define DICE_RETROMOUSE_PADDLE1_LABEL_CAT_TH "ใช้เมาส์สำหรับ Paddle 2"
#define DICE_RETROMOUSE_PADDLE1_INFO_0_TH "ใช้เมาส์เฉพาะสำหรับ Paddle 2 ซึ่งเลือกโดยหมายเลขเมาส์ของพอร์ต 2"
#define DICE_RETROMOUSE_PADDLE2_LABEL_TH "RetroMouse > ใช้เมาส์สำหรับ Paddle 3"
#define DICE_RETROMOUSE_PADDLE2_LABEL_CAT_TH "ใช้เมาส์สำหรับ Paddle 3"
#define DICE_RETROMOUSE_PADDLE2_INFO_0_TH "ใช้เมาส์เฉพาะสำหรับ Paddle 3 ซึ่งเลือกโดยหมายเลขเมาส์ของพอร์ต 3"
#define DICE_RETROMOUSE_PADDLE3_LABEL_TH "RetroMouse > ใช้เมาส์สำหรับ Paddle 4"
#define DICE_RETROMOUSE_PADDLE3_LABEL_CAT_TH "ใช้เมาส์สำหรับ Paddle 4"
#define DICE_RETROMOUSE_PADDLE3_INFO_0_TH "ใช้เมาส์เฉพาะสำหรับ Paddle 4 ซึ่งเลือกโดยหมายเลขเมาส์ของพอร์ต 4"
#define DICE_RETROMOUSE_PADDLE0_X_LABEL_TH "RetroMouse > แกนเมาส์สำหรับ Paddle 1 แนวนอน"
#define DICE_RETROMOUSE_PADDLE0_X_LABEL_CAT_TH "แกนเมาส์สำหรับ Paddle 1 แนวนอน"
#define DICE_RETROMOUSE_PADDLE0_X_INFO_0_TH "แกนเมาส์สำหรับผู้เล่น 1 การเคลื่อนที่หน้าจอแนวนอน"
#define OPTION_VAL_X_TH NULL
#define OPTION_VAL_Y_TH NULL
#define DICE_RETROMOUSE_PADDLE0_Y_LABEL_TH "RetroMouse > แกนเมาส์สำหรับ Paddle 1 แนวตั้ง"
#define DICE_RETROMOUSE_PADDLE0_Y_LABEL_CAT_TH "แกนเมาส์สำหรับ Paddle 1 แนวตั้ง"
#define DICE_RETROMOUSE_PADDLE0_Y_INFO_0_TH "แกนเมาส์สำหรับผู้เล่น 1 การเคลื่อนที่หน้าจอแนวตั้ง"
#define DICE_RETROMOUSE_PADDLE1_X_LABEL_TH "RetroMouse > แกนเมาส์สำหรับ Paddle 2 แนวนอน"
#define DICE_RETROMOUSE_PADDLE1_X_LABEL_CAT_TH "แกนเมาส์สำหรับ Paddle 2 แนวนอน"
#define DICE_RETROMOUSE_PADDLE1_X_INFO_0_TH "แกนเมาส์สำหรับผู้เล่น 2 การเคลื่อนที่หน้าจอแนวนอน"
#define DICE_RETROMOUSE_PADDLE1_Y_LABEL_TH "RetroMouse > แกนเมาส์สำหรับ Paddle 2 แนวตั้ง"
#define DICE_RETROMOUSE_PADDLE1_Y_LABEL_CAT_TH "แกนเมาส์สำหรับ Paddle 2 แนวตั้ง"
#define DICE_RETROMOUSE_PADDLE1_Y_INFO_0_TH "แกนเมาส์สำหรับผู้เล่น 2 การเคลื่อนที่หน้าจอแนวตั้ง"
#define DICE_RETROMOUSE_PADDLE2_X_LABEL_TH "RetroMouse > แกนเมาส์สำหรับ Paddle 3 แนวนอน"
#define DICE_RETROMOUSE_PADDLE2_X_LABEL_CAT_TH "แกนเมาส์สำหรับ Paddle 3 แนวนอน"
#define DICE_RETROMOUSE_PADDLE2_X_INFO_0_TH "แกนเมาส์สำหรับผู้เล่น 3 การเคลื่อนที่หน้าจอแนวนอน"
#define DICE_RETROMOUSE_PADDLE2_Y_LABEL_TH "RetroMouse > แกนเมาส์สำหรับ Paddle 3 แนวตั้ง"
#define DICE_RETROMOUSE_PADDLE2_Y_LABEL_CAT_TH "แกนเมาส์สำหรับ Paddle 3 แนวตั้ง"
#define DICE_RETROMOUSE_PADDLE2_Y_INFO_0_TH "แกนเมาส์สำหรับผู้เล่น 3 การเคลื่อนที่หน้าจอแนวตั้ง"
#define DICE_RETROMOUSE_PADDLE3_X_LABEL_TH "RetroMouse > แกนเมาส์สำหรับ Paddle 4 แนวนอน"
#define DICE_RETROMOUSE_PADDLE3_X_LABEL_CAT_TH "แกนเมาส์สำหรับ Paddle 4 แนวนอน"
#define DICE_RETROMOUSE_PADDLE3_X_INFO_0_TH "แกนเมาส์สำหรับผู้เล่น 4 การเคลื่อนที่หน้าจอแนวนอน"
#define DICE_RETROMOUSE_PADDLE3_Y_LABEL_TH "RetroMouse > แกนเมาส์สำหรับ Paddle 4 แนวตั้ง"
#define DICE_RETROMOUSE_PADDLE3_Y_LABEL_CAT_TH "แกนเมาส์สำหรับ Paddle 4 แนวตั้ง"
#define DICE_RETROMOUSE_PADDLE3_Y_INFO_0_TH "แกนเมาส์สำหรับผู้เล่น 4 การเคลื่อนที่หน้าจอแนวตั้ง"
#define DICE_MANYMOUSE_PADDLE0_LABEL_TH "ManyMouse > ใช้เมาส์สำหรับ Paddle 1"
#define DICE_MANYMOUSE_PADDLE0_INFO_0_TH "ใช้เมาส์สำหรับ Paddle 1"
#define DICE_MANYMOUSE_PADDLE0_X_LABEL_TH NULL
#define DICE_MANYMOUSE_PADDLE0_X_LABEL_CAT_TH NULL
#define OPTION_VAL_0X_TH NULL
#define OPTION_VAL_0Y_TH NULL
#define OPTION_VAL_1X_TH NULL
#define OPTION_VAL_1Y_TH NULL
#define OPTION_VAL_2X_TH NULL
#define OPTION_VAL_2Y_TH NULL
#define OPTION_VAL_3X_TH NULL
#define OPTION_VAL_3Y_TH NULL
#define DICE_MANYMOUSE_PADDLE0_Y_LABEL_TH NULL
#define DICE_MANYMOUSE_PADDLE0_Y_LABEL_CAT_TH NULL
#define DICE_MANYMOUSE_PADDLE1_LABEL_TH "ManyMouse > ใช้เมาส์สำหรับ Paddle 2"
#define DICE_MANYMOUSE_PADDLE1_INFO_0_TH "ใช้เมาส์สำหรับ Paddle 2"
#define DICE_MANYMOUSE_PADDLE1_X_LABEL_TH NULL
#define DICE_MANYMOUSE_PADDLE1_X_LABEL_CAT_TH NULL
#define DICE_MANYMOUSE_PADDLE1_Y_LABEL_TH NULL
#define DICE_MANYMOUSE_PADDLE1_Y_LABEL_CAT_TH NULL
#define DICE_MANYMOUSE_PADDLE2_LABEL_TH "ManyMouse > ใช้เมาส์สำหรับ Paddle 3"
#define DICE_MANYMOUSE_PADDLE2_INFO_0_TH "ใช้เมาส์สำหรับ Paddle 3"
#define DICE_MANYMOUSE_PADDLE2_X_LABEL_TH NULL
#define DICE_MANYMOUSE_PADDLE2_X_LABEL_CAT_TH NULL
#define DICE_MANYMOUSE_PADDLE2_Y_LABEL_TH NULL
#define DICE_MANYMOUSE_PADDLE2_Y_LABEL_CAT_TH NULL
#define DICE_MANYMOUSE_PADDLE3_LABEL_TH "ManyMouse > ใช้เมาส์สำหรับ Paddle 4"
#define DICE_MANYMOUSE_PADDLE3_INFO_0_TH "ใช้เมาส์สำหรับ Paddle 4"
#define DICE_MANYMOUSE_PADDLE3_X_LABEL_TH NULL
#define DICE_MANYMOUSE_PADDLE3_X_LABEL_CAT_TH NULL
#define DICE_MANYMOUSE_PADDLE3_Y_LABEL_TH NULL
#define DICE_MANYMOUSE_PADDLE3_Y_LABEL_CAT_TH NULL
#define DICE_DIPSWITCH_1_LABEL_TH NULL
#define DICE_DIPSWITCH_1_LABEL_CAT_TH NULL
#define DICE_DIPSWITCH_1_INFO_0_TH "การตั้งค่าสำหรับสวิตช์ DIP 1"
#define OPTION_VAL_1_TH "ค่าเริ่มต้น"
#define DICE_DIPSWITCH_2_LABEL_TH NULL
#define DICE_DIPSWITCH_2_LABEL_CAT_TH NULL
#define DICE_DIPSWITCH_2_INFO_0_TH "การตั้งค่าสำหรับสวิตช์ DIP 2"
#define DICE_DIPSWITCH_3_LABEL_TH NULL
#define DICE_DIPSWITCH_3_LABEL_CAT_TH NULL
#define DICE_DIPSWITCH_3_INFO_0_TH "การตั้งค่าสำหรับสวิตช์ DIP 3"
#define DICE_DIPSWITCH16_1_LABEL_TH NULL
#define DICE_DIPSWITCH16_1_LABEL_CAT_TH NULL
#define DICE_DIPSWITCH16_1_INFO_0_TH "การตั้งค่าสำหรับสวิตช์ DIP 16 ตำแหน่ง หมายเลข 1"
#define DICE_DIPSWITCH16_2_LABEL_TH NULL
#define DICE_DIPSWITCH16_2_LABEL_CAT_TH NULL
#define DICE_DIPSWITCH16_2_INFO_0_TH "การตั้งค่าสำหรับสวิตช์ DIP 16 ตำแหน่ง หมายเลข 2"

struct retro_core_option_v2_category option_cats_th[] = {
   {
      "input",
      CATEGORY_INPUT_LABEL_TH,
      CATEGORY_INPUT_INFO_0_TH
   },
   {
      "retromouse",
      CATEGORY_RETROMOUSE_LABEL_TH,
      CATEGORY_RETROMOUSE_INFO_0_TH
   },
#ifdef MANYMOUSE
   {
      "manymouse",
      CATEGORY_MANYMOUSE_LABEL_TH,
      CATEGORY_MANYMOUSE_INFO_0_TH
   },
#endif
   {
      "dipswitch",
      CATEGORY_DIPSWITCH_LABEL_TH,
      CATEGORY_DIPSWITCH_INFO_0_TH
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_th[] = {
   {
      "dice_use_mouse_pointer_for_paddle_1",
      DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_LABEL_TH,
      DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_LABEL_CAT_TH,
      DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_INFO_0_TH,
      NULL,
      "input",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_paddle_joystick_absolute",
      DICE_PADDLE_JOYSTICK_ABSOLUTE_LABEL_TH,
      DICE_PADDLE_JOYSTICK_ABSOLUTE_LABEL_CAT_TH,
      DICE_PADDLE_JOYSTICK_ABSOLUTE_INFO_0_TH,
      NULL,
      "input",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      // D-pad but not necessarily keyboard under libretro,
      // that name comes from the upstream code.
      "dice_paddle_keyboard_sensitivity",
      DICE_PADDLE_KEYBOARD_SENSITIVITY_LABEL_TH,
      DICE_PADDLE_KEYBOARD_SENSITIVITY_LABEL_CAT_TH,
      DICE_PADDLE_KEYBOARD_SENSITIVITY_INFO_0_TH,
      NULL,
      "input",
      {
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "250"
   },
   {
      "dice_paddle_joystick_sensitivity",
      DICE_PADDLE_JOYSTICK_SENSITIVITY_LABEL_TH,
      DICE_PADDLE_JOYSTICK_SENSITIVITY_LABEL_CAT_TH,
      DICE_PADDLE_JOYSTICK_SENSITIVITY_INFO_0_TH,
      NULL,
      "input",
      {
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "500"
   },
   {
      "dice_retromouse_paddle_sensitivity",
      DICE_RETROMOUSE_PADDLE_SENSITIVITY_LABEL_TH,
      DICE_RETROMOUSE_PADDLE_SENSITIVITY_LABEL_CAT_TH,
      DICE_RETROMOUSE_PADDLE_SENSITIVITY_INFO_0_TH,
      NULL,
      "input",
      {
         {"25", NULL},
         {"50", NULL},
         {"75", NULL},
         {"100", NULL},
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "125"
   },
   {
      "dice_wheel_keyjoy_sensitivity",
      DICE_WHEEL_KEYJOY_SENSITIVITY_LABEL_TH,
      DICE_WHEEL_KEYJOY_SENSITIVITY_LABEL_CAT_TH,
      DICE_WHEEL_KEYJOY_SENSITIVITY_INFO_0_TH,
      NULL,
      "input",
      {
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "500"
   },
   {
      "dice_throttle_keyjoy_sensitivity",
      DICE_THROTTLE_KEYJOY_SENSITIVITY_LABEL_TH,
      DICE_THROTTLE_KEYJOY_SENSITIVITY_LABEL_CAT_TH,
      DICE_THROTTLE_KEYJOY_SENSITIVITY_INFO_0_TH,
      NULL,
      "input",
      {
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "250"
   },

   {
      "dice_retromouse_paddle0",
      DICE_RETROMOUSE_PADDLE0_LABEL_TH,
      DICE_RETROMOUSE_PADDLE0_LABEL_CAT_TH,
      DICE_RETROMOUSE_PADDLE0_INFO_0_TH,
      NULL,
      "retromouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_retromouse_paddle1",
      DICE_RETROMOUSE_PADDLE1_LABEL_TH,
      DICE_RETROMOUSE_PADDLE1_LABEL_CAT_TH,
      DICE_RETROMOUSE_PADDLE1_INFO_0_TH,
      NULL,
      "retromouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_retromouse_paddle2",
      DICE_RETROMOUSE_PADDLE2_LABEL_TH,
      DICE_RETROMOUSE_PADDLE2_LABEL_CAT_TH,
      DICE_RETROMOUSE_PADDLE2_INFO_0_TH,
      NULL,
      "retromouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_retromouse_paddle3",
      DICE_RETROMOUSE_PADDLE3_LABEL_TH,
      DICE_RETROMOUSE_PADDLE3_LABEL_CAT_TH,
      DICE_RETROMOUSE_PADDLE3_INFO_0_TH,
      NULL,
      "retromouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_retromouse_paddle0_x",
      DICE_RETROMOUSE_PADDLE0_X_LABEL_TH,
      DICE_RETROMOUSE_PADDLE0_X_LABEL_CAT_TH,
      DICE_RETROMOUSE_PADDLE0_X_INFO_0_TH,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_TH},
         {"y", OPTION_VAL_Y_TH},
         {NULL, NULL},
      },
      "x"
   },
   {
      "dice_retromouse_paddle0_y",
      DICE_RETROMOUSE_PADDLE0_Y_LABEL_TH,
      DICE_RETROMOUSE_PADDLE0_Y_LABEL_CAT_TH,
      DICE_RETROMOUSE_PADDLE0_Y_INFO_0_TH,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_TH},
         {"y", OPTION_VAL_Y_TH},
         {NULL, NULL},
      },
      "y"
   },
   {
      "dice_retromouse_paddle1_x",
      DICE_RETROMOUSE_PADDLE1_X_LABEL_TH,
      DICE_RETROMOUSE_PADDLE1_X_LABEL_CAT_TH,
      DICE_RETROMOUSE_PADDLE1_X_INFO_0_TH,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_TH},
         {"y", OPTION_VAL_Y_TH},
         {NULL, NULL},
      },
      "x"
   },
   {
      "dice_retromouse_paddle1_y",
      DICE_RETROMOUSE_PADDLE1_Y_LABEL_TH,
      DICE_RETROMOUSE_PADDLE1_Y_LABEL_CAT_TH,
      DICE_RETROMOUSE_PADDLE1_Y_INFO_0_TH,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_TH},
         {"y", OPTION_VAL_Y_TH},
         {NULL, NULL},
      },
      "y"
   },
   {
      "dice_retromouse_paddle2_x",
      DICE_RETROMOUSE_PADDLE2_X_LABEL_TH,
      DICE_RETROMOUSE_PADDLE2_X_LABEL_CAT_TH,
      DICE_RETROMOUSE_PADDLE2_X_INFO_0_TH,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_TH},
         {"y", OPTION_VAL_Y_TH},
         {NULL, NULL},
      },
      "x"
   },
   {
      "dice_retromouse_paddle2_y",
      DICE_RETROMOUSE_PADDLE2_Y_LABEL_TH,
      DICE_RETROMOUSE_PADDLE2_Y_LABEL_CAT_TH,
      DICE_RETROMOUSE_PADDLE2_Y_INFO_0_TH,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_TH},
         {"y", OPTION_VAL_Y_TH},
         {NULL, NULL},
      },
      "y"
   },
   {
      "dice_retromouse_paddle3_x",
      DICE_RETROMOUSE_PADDLE3_X_LABEL_TH,
      DICE_RETROMOUSE_PADDLE3_X_LABEL_CAT_TH,
      DICE_RETROMOUSE_PADDLE3_X_INFO_0_TH,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_TH},
         {"y", OPTION_VAL_Y_TH},
         {NULL, NULL},
      },
      "x"
   },
   {
      "dice_retromouse_paddle3_y",
      DICE_RETROMOUSE_PADDLE3_Y_LABEL_TH,
      DICE_RETROMOUSE_PADDLE3_Y_LABEL_CAT_TH,
      DICE_RETROMOUSE_PADDLE3_Y_INFO_0_TH,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_TH},
         {"y", OPTION_VAL_Y_TH},
         {NULL, NULL},
      },
      "y"
   },

#ifdef MANYMOUSE
   {
      "dice_manymouse_paddle0",
      DICE_MANYMOUSE_PADDLE0_LABEL_TH,
      DICE_RETROMOUSE_PADDLE0_LABEL_CAT_TH,
      DICE_MANYMOUSE_PADDLE0_INFO_0_TH,
      NULL,
      "manymouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_manymouse_paddle0_x",
      DICE_MANYMOUSE_PADDLE0_X_LABEL_TH,
      DICE_MANYMOUSE_PADDLE0_X_LABEL_CAT_TH,
      DICE_RETROMOUSE_PADDLE0_X_INFO_0_TH,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_TH},
         {"0y", OPTION_VAL_0Y_TH},
         {"1x", OPTION_VAL_1X_TH},
         {"1y", OPTION_VAL_1Y_TH},
         {"2x", OPTION_VAL_2X_TH},
         {"2y", OPTION_VAL_2Y_TH},
         {"3x", OPTION_VAL_3X_TH},
         {"3y", OPTION_VAL_3Y_TH},
         {NULL, NULL},
      },
      "0x"
   },
   {
      "dice_manymouse_paddle0_y",
      DICE_MANYMOUSE_PADDLE0_Y_LABEL_TH,
      DICE_MANYMOUSE_PADDLE0_Y_LABEL_CAT_TH,
      DICE_RETROMOUSE_PADDLE0_Y_INFO_0_TH,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_TH},
         {"0y", OPTION_VAL_0Y_TH},
         {"1x", OPTION_VAL_1X_TH},
         {"1y", OPTION_VAL_1Y_TH},
         {"2x", OPTION_VAL_2X_TH},
         {"2y", OPTION_VAL_2Y_TH},
         {"3x", OPTION_VAL_3X_TH},
         {"3y", OPTION_VAL_3Y_TH},
         {NULL, NULL},
      },
      "0y"
   },
   {
      "dice_manymouse_paddle1",
      DICE_MANYMOUSE_PADDLE1_LABEL_TH,
      DICE_RETROMOUSE_PADDLE1_LABEL_CAT_TH,
      DICE_MANYMOUSE_PADDLE1_INFO_0_TH,
      NULL,
      "manymouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_manymouse_paddle1_x",
      DICE_MANYMOUSE_PADDLE1_X_LABEL_TH,
      DICE_MANYMOUSE_PADDLE1_X_LABEL_CAT_TH,
      DICE_RETROMOUSE_PADDLE1_X_INFO_0_TH,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_TH},
         {"0y", OPTION_VAL_0Y_TH},
         {"1x", OPTION_VAL_1X_TH},
         {"1y", OPTION_VAL_1Y_TH},
         {"2x", OPTION_VAL_2X_TH},
         {"2y", OPTION_VAL_2Y_TH},
         {"3x", OPTION_VAL_3X_TH},
         {"3y", OPTION_VAL_3Y_TH},
         {NULL, NULL},
      },
      "1x"
   },
   {
      "dice_manymouse_paddle1_y",
      DICE_MANYMOUSE_PADDLE1_Y_LABEL_TH,
      DICE_MANYMOUSE_PADDLE1_Y_LABEL_CAT_TH,
      DICE_RETROMOUSE_PADDLE1_Y_INFO_0_TH,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_TH},
         {"0y", OPTION_VAL_0Y_TH},
         {"1x", OPTION_VAL_1X_TH},
         {"1y", OPTION_VAL_1Y_TH},
         {"2x", OPTION_VAL_2X_TH},
         {"2y", OPTION_VAL_2Y_TH},
         {"3x", OPTION_VAL_3X_TH},
         {"3y", OPTION_VAL_3Y_TH},
         {NULL, NULL},
      },
      "1y"
   },
   {
      "dice_manymouse_paddle2",
      DICE_MANYMOUSE_PADDLE2_LABEL_TH,
      DICE_RETROMOUSE_PADDLE2_LABEL_CAT_TH,
      DICE_MANYMOUSE_PADDLE2_INFO_0_TH,
      NULL,
      "manymouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_manymouse_paddle2_x",
      DICE_MANYMOUSE_PADDLE2_X_LABEL_TH,
      DICE_MANYMOUSE_PADDLE2_X_LABEL_CAT_TH,
      DICE_RETROMOUSE_PADDLE2_X_INFO_0_TH,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_TH},
         {"0y", OPTION_VAL_0Y_TH},
         {"1x", OPTION_VAL_1X_TH},
         {"1y", OPTION_VAL_1Y_TH},
         {"2x", OPTION_VAL_2X_TH},
         {"2y", OPTION_VAL_2Y_TH},
         {"3x", OPTION_VAL_3X_TH},
         {"3y", OPTION_VAL_3Y_TH},
         {NULL, NULL},
      },
      "2x"
   },
   {
      "dice_manymouse_paddle2_y",
      DICE_MANYMOUSE_PADDLE2_Y_LABEL_TH,
      DICE_MANYMOUSE_PADDLE2_Y_LABEL_CAT_TH,
      DICE_RETROMOUSE_PADDLE2_Y_INFO_0_TH,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_TH},
         {"0y", OPTION_VAL_0Y_TH},
         {"1x", OPTION_VAL_1X_TH},
         {"1y", OPTION_VAL_1Y_TH},
         {"2x", OPTION_VAL_2X_TH},
         {"2y", OPTION_VAL_2Y_TH},
         {"3x", OPTION_VAL_3X_TH},
         {"3y", OPTION_VAL_3Y_TH},
         {NULL, NULL},
      },
      "2y"
   },
   {
      "dice_manymouse_paddle3",
      DICE_MANYMOUSE_PADDLE3_LABEL_TH,
      DICE_RETROMOUSE_PADDLE3_LABEL_CAT_TH,
      DICE_MANYMOUSE_PADDLE3_INFO_0_TH,
      NULL,
      "manymouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_manymouse_paddle3_x",
      DICE_MANYMOUSE_PADDLE3_X_LABEL_TH,
      DICE_MANYMOUSE_PADDLE3_X_LABEL_CAT_TH,
      DICE_RETROMOUSE_PADDLE3_X_INFO_0_TH,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_TH},
         {"0y", OPTION_VAL_0Y_TH},
         {"1x", OPTION_VAL_1X_TH},
         {"1y", OPTION_VAL_1Y_TH},
         {"2x", OPTION_VAL_2X_TH},
         {"2y", OPTION_VAL_2Y_TH},
         {"3x", OPTION_VAL_3X_TH},
         {"3y", OPTION_VAL_3Y_TH},
         {NULL, NULL},
      },
      "3x"
   },
   {
      "dice_manymouse_paddle3_y",
      DICE_MANYMOUSE_PADDLE3_Y_LABEL_TH,
      DICE_MANYMOUSE_PADDLE3_Y_LABEL_CAT_TH,
      DICE_RETROMOUSE_PADDLE3_Y_INFO_0_TH,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_TH},
         {"0y", OPTION_VAL_0Y_TH},
         {"1x", OPTION_VAL_1X_TH},
         {"1y", OPTION_VAL_1Y_TH},
         {"2x", OPTION_VAL_2X_TH},
         {"2y", OPTION_VAL_2Y_TH},
         {"3x", OPTION_VAL_3X_TH},
         {"3y", OPTION_VAL_3Y_TH},
         {NULL, NULL},
      },
      "3y"
   },
#endif

   {
      "dice_dipswitch_1",
      DICE_DIPSWITCH_1_LABEL_TH,
      DICE_DIPSWITCH_1_LABEL_CAT_TH,
      DICE_DIPSWITCH_1_INFO_0_TH,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_TH},
         {"0", NULL},
         {"1", NULL},
         {NULL, NULL},
      },
      "-1"
   },
   {
      "dice_dipswitch_2",
      DICE_DIPSWITCH_2_LABEL_TH,
      DICE_DIPSWITCH_2_LABEL_CAT_TH,
      DICE_DIPSWITCH_2_INFO_0_TH,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_TH},
         {"0", NULL},
         {"1", NULL},
         {NULL, NULL},
      },
      "-1"
   },
   {
      "dice_dipswitch_3",
      DICE_DIPSWITCH_3_LABEL_TH,
      DICE_DIPSWITCH_3_LABEL_CAT_TH,
      DICE_DIPSWITCH_3_INFO_0_TH,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_TH},
         {"0", NULL},
         {"1", NULL},
         {NULL, NULL},
      },
      "-1"
   },
   {
      "dice_dipswitch16_1",
      DICE_DIPSWITCH16_1_LABEL_TH,
      DICE_DIPSWITCH16_1_LABEL_CAT_TH,
      DICE_DIPSWITCH16_1_INFO_0_TH,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_TH},
         {"0", NULL},
         {"1", NULL},
         {"2", NULL},
         {"3", NULL},
         {"4", NULL},
         {"5", NULL},
         {"6", NULL},
         {"7", NULL},
         {"8", NULL},
         {"9", NULL},
         {"10", NULL},
         {"11", NULL},
         {"12", NULL},
         {"13", NULL},
         {"14", NULL},
         {"15", NULL},
         {NULL, NULL},
      },
      "-1"
   },
   {
      "dice_dipswitch16_2",
      DICE_DIPSWITCH16_2_LABEL_TH,
      DICE_DIPSWITCH16_2_LABEL_CAT_TH,
      DICE_DIPSWITCH16_2_INFO_0_TH,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_TH},
         {"0", NULL},
         {"1", NULL},
         {"2", NULL},
         {"3", NULL},
         {"4", NULL},
         {"5", NULL},
         {"6", NULL},
         {"7", NULL},
         {"8", NULL},
         {"9", NULL},
         {"10", NULL},
         {"11", NULL},
         {"12", NULL},
         {"13", NULL},
         {"14", NULL},
         {"15", NULL},
         {NULL, NULL},
      },
      "-1"
   },

   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_th = {
   option_cats_th,
   option_defs_th
};

/* RETRO_LANGUAGE_TR */

#define CATEGORY_INPUT_LABEL_TR "Giriş"
#define CATEGORY_INPUT_INFO_0_TR "Çekirdeğe özgü giriş ayarlarını yapılandırın."
#define CATEGORY_RETROMOUSE_LABEL_TR "RetroFare"
#define CATEGORY_RETROMOUSE_INFO_0_TR "Libretro çoklu fare ayarlarını yapılandırın."
#define CATEGORY_MANYMOUSE_LABEL_TR "ÇokluFare"
#define CATEGORY_MANYMOUSE_INFO_0_TR "ÇokluFare birden çok fare ayarlarını yapılandırın."
#define CATEGORY_DIPSWITCH_LABEL_TR "DIP Anahtarı"
#define CATEGORY_DIPSWITCH_INFO_0_TR "DIP anahtarı ve potansiyometre ayarlarını yapılandırın."
#define DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_LABEL_TR "Giriş > Pedal 1 İçin Fare İşaretçisini Kullan"
#define DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_LABEL_CAT_TR "Pedal 1 İçin Fare İşaretçisini Kullan"
#define DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_INFO_0_TR "Sistem fare işaretçisini pedal kontrolcüsü olarak kullan 1. Birden fazla fareniz varsa belirli bir fareyi seçmenize izin vermez."
#define DICE_PADDLE_JOYSTICK_ABSOLUTE_LABEL_TR "Giriş > Pedal Joystick Mutlak Hareketi Kullanır"
#define DICE_PADDLE_JOYSTICK_ABSOLUTE_LABEL_CAT_TR "Pedal Joystick Mutlak Hareketi Kullanır"
#define DICE_PADDLE_JOYSTICK_ABSOLUTE_INFO_0_TR "Joystick hareket aralığını, göreceli hareketler yerine doğrudan pedal aralığına eşleyin."
#define DICE_PADDLE_KEYBOARD_SENSITIVITY_LABEL_TR "Giriş > Pedal D-pad Hassasiyeti"
#define DICE_PADDLE_KEYBOARD_SENSITIVITY_LABEL_CAT_TR "Pedal D-pad Hassasiyeti"
#define DICE_PADDLE_KEYBOARD_SENSITIVITY_INFO_0_TR "Pedal için D-pad kullanıldığında hassasiyet."
#define DICE_PADDLE_JOYSTICK_SENSITIVITY_LABEL_TR "Giriş > Pedal Analog Çubuk Hassasiyeti"
#define DICE_PADDLE_JOYSTICK_SENSITIVITY_LABEL_CAT_TR "Pedal Analog Çubuk Hassasiyeti"
#define DICE_PADDLE_JOYSTICK_SENSITIVITY_INFO_0_TR "Pedal için analog çubuk kullanıldığında hassasiyet."
#define DICE_RETROMOUSE_PADDLE_SENSITIVITY_LABEL_TR "Giriş > Pedal RetroFare Hassasiyeti"
#define DICE_RETROMOUSE_PADDLE_SENSITIVITY_LABEL_CAT_TR "Pedal RetroFare Hassasiyeti"
#define DICE_RETROMOUSE_PADDLE_SENSITIVITY_INFO_0_TR "Pedal için RetroFare kullanıldığında hassasiyet."
#define DICE_WHEEL_KEYJOY_SENSITIVITY_LABEL_TR "Giriş > Direksiyon Hassasiyeti"
#define DICE_WHEEL_KEYJOY_SENSITIVITY_LABEL_CAT_TR "Direksiyon Hassasiyeti"
#define DICE_WHEEL_KEYJOY_SENSITIVITY_INFO_0_TR "Direksiyon yerine D-pad veya analog çubuk kullanıldığında hassasiyet."
#define DICE_THROTTLE_KEYJOY_SENSITIVITY_LABEL_TR "Giriş > Gaz Kelebeği Hassasiyeti"
#define DICE_THROTTLE_KEYJOY_SENSITIVITY_LABEL_CAT_TR "Gaz Kelebeği Hassasiyeti"
#define DICE_THROTTLE_KEYJOY_SENSITIVITY_INFO_0_TR "Gaz pedalı olarak D-pad veya analog çubuk kullanıldığında hassasiyet."
#define DICE_RETROMOUSE_PADDLE0_LABEL_TR "RetroFare > Pedal 1 İçin Fareyi Kullan"
#define DICE_RETROMOUSE_PADDLE0_LABEL_CAT_TR "Pedal 1 İçin Fareyi Kullan"
#define DICE_RETROMOUSE_PADDLE0_INFO_0_TR "Port 1 Fare Dizini tarafından seçilen Pedal 1 için özel bir fare kullanın."
#define DICE_RETROMOUSE_PADDLE1_LABEL_TR "RetroFare > Pedal 2 İçin Fareyi Kullan"
#define DICE_RETROMOUSE_PADDLE1_LABEL_CAT_TR "Pedal 2 İçin Fareyi Kullan"
#define DICE_RETROMOUSE_PADDLE1_INFO_0_TR "Port 2 Fare Dizini tarafından seçilen Pedal 2 için özel bir fare kullanın."
#define DICE_RETROMOUSE_PADDLE2_LABEL_TR "RetroFare > Pedal 3 İçin Fareyi Kullan"
#define DICE_RETROMOUSE_PADDLE2_LABEL_CAT_TR "Pedal 3 İçin Fareyi Kullan"
#define DICE_RETROMOUSE_PADDLE2_INFO_0_TR "Port 3 Fare Dizini tarafından seçilen Pedal 3 için özel bir fare kullanın."
#define DICE_RETROMOUSE_PADDLE3_LABEL_TR "RetroFare > Pedal 4 İçin Fareyi Kullan"
#define DICE_RETROMOUSE_PADDLE3_LABEL_CAT_TR "Pedal 4 İçin Fareyi Kullan"
#define DICE_RETROMOUSE_PADDLE3_INFO_0_TR "Port 4 Fare Dizini tarafından seçilen Pedal 4 için özel bir fare kullanın."
#define DICE_RETROMOUSE_PADDLE0_X_LABEL_TR "RetroFare > Pedal 1 İçin Yatay Fare Ekseni"
#define DICE_RETROMOUSE_PADDLE0_X_LABEL_CAT_TR "Pedal 1 İçin Yatay Fare Ekseni"
#define DICE_RETROMOUSE_PADDLE0_X_INFO_0_TR "1. oyuncu için fare ekseni, yatay ekran hareketi."
#define OPTION_VAL_X_TR NULL
#define OPTION_VAL_Y_TR NULL
#define DICE_RETROMOUSE_PADDLE0_Y_LABEL_TR "RetroFare > Pedal 1 İçin Dikey Fare Ekseni"
#define DICE_RETROMOUSE_PADDLE0_Y_LABEL_CAT_TR "Pedal 1 İçin Dikey Fare Ekseni"
#define DICE_RETROMOUSE_PADDLE0_Y_INFO_0_TR "1. oyuncu için fare ekseni, dikey ekran hareketi."
#define DICE_RETROMOUSE_PADDLE1_X_LABEL_TR "RetroFare > Pedal 2 İçin Yatay Fare Ekseni"
#define DICE_RETROMOUSE_PADDLE1_X_LABEL_CAT_TR "Pedal 2 İçin Yatay Fare Ekseni"
#define DICE_RETROMOUSE_PADDLE1_X_INFO_0_TR "2. oyuncu için fare ekseni, yatay ekran hareketi."
#define DICE_RETROMOUSE_PADDLE1_Y_LABEL_TR "RetroFare > Pedal 2 İçin Dikey Fare Ekseni"
#define DICE_RETROMOUSE_PADDLE1_Y_LABEL_CAT_TR "Pedal 2 İçin Dikey Fare Ekseni"
#define DICE_RETROMOUSE_PADDLE1_Y_INFO_0_TR "2. oyuncu için fare ekseni, dikey ekran hareketi."
#define DICE_RETROMOUSE_PADDLE2_X_LABEL_TR "RetroFare > Pedal 3 İçin Yatay Fare Ekseni"
#define DICE_RETROMOUSE_PADDLE2_X_LABEL_CAT_TR "Pedal 3 İçin Yatay Fare Ekseni"
#define DICE_RETROMOUSE_PADDLE2_X_INFO_0_TR "3. oyuncu için fare ekseni, yatay ekran hareketi."
#define DICE_RETROMOUSE_PADDLE2_Y_LABEL_TR "RetroFare > Pedal 3 İçin Dikey Fare Ekseni"
#define DICE_RETROMOUSE_PADDLE2_Y_LABEL_CAT_TR "Pedal 3 İçin Dikey Fare Ekseni"
#define DICE_RETROMOUSE_PADDLE2_Y_INFO_0_TR "3. oyuncu için fare ekseni, dikey ekran hareketi."
#define DICE_RETROMOUSE_PADDLE3_X_LABEL_TR "RetroFare > Pedal 4 İçin Yatay Fare Ekseni"
#define DICE_RETROMOUSE_PADDLE3_X_LABEL_CAT_TR "Pedal 4 İçin Yatay Fare Ekseni"
#define DICE_RETROMOUSE_PADDLE3_X_INFO_0_TR "4. oyuncu için fare ekseni, yatay ekran hareketi."
#define DICE_RETROMOUSE_PADDLE3_Y_LABEL_TR "RetroFare > Pedal 4 İçin Dikey Fare Ekseni"
#define DICE_RETROMOUSE_PADDLE3_Y_LABEL_CAT_TR "Pedal 4 İçin Dikey Fare Ekseni"
#define DICE_RETROMOUSE_PADDLE3_Y_INFO_0_TR "4. oyuncu için fare ekseni, dikey ekran hareketi."
#define DICE_MANYMOUSE_PADDLE0_LABEL_TR "ÇokluFare > Pedal 1 İçin Fareyi Kullan"
#define DICE_MANYMOUSE_PADDLE0_INFO_0_TR "Pedal 1 için fareyi kullanın."
#define DICE_MANYMOUSE_PADDLE0_X_LABEL_TR "ÇokluFare > Fare-Pedal 1 x"
#define DICE_MANYMOUSE_PADDLE0_X_LABEL_CAT_TR "Fare-Pedal 1 x"
#define OPTION_VAL_0X_TR NULL
#define OPTION_VAL_0Y_TR NULL
#define OPTION_VAL_1X_TR NULL
#define OPTION_VAL_1Y_TR NULL
#define OPTION_VAL_2X_TR NULL
#define OPTION_VAL_2Y_TR NULL
#define OPTION_VAL_3X_TR NULL
#define OPTION_VAL_3Y_TR NULL
#define DICE_MANYMOUSE_PADDLE0_Y_LABEL_TR "ÇokluFare > Fare-Pedal 1 y"
#define DICE_MANYMOUSE_PADDLE0_Y_LABEL_CAT_TR "Fare-Pedal 1 y"
#define DICE_MANYMOUSE_PADDLE1_LABEL_TR "ÇokluFare > Pedal 2 İçin Fareyi Kullan"
#define DICE_MANYMOUSE_PADDLE1_INFO_0_TR "Pedal 2 için fareyi kullanın."
#define DICE_MANYMOUSE_PADDLE1_X_LABEL_TR "ÇokluFare > Fare-Pedal 2 x"
#define DICE_MANYMOUSE_PADDLE1_X_LABEL_CAT_TR "Fare-Pedal 2 x"
#define DICE_MANYMOUSE_PADDLE1_Y_LABEL_TR "ÇokluFare > Fare-Pedal 2 y"
#define DICE_MANYMOUSE_PADDLE1_Y_LABEL_CAT_TR "Fare-Pedal 2 y"
#define DICE_MANYMOUSE_PADDLE2_LABEL_TR "ÇokluFare > Pedal 3 İçin Fareyi Kullan"
#define DICE_MANYMOUSE_PADDLE2_INFO_0_TR "Pedal 3 için fareyi kullanın."
#define DICE_MANYMOUSE_PADDLE2_X_LABEL_TR "ÇokluFare > Fare-Pedal 3 x"
#define DICE_MANYMOUSE_PADDLE2_X_LABEL_CAT_TR "Fare-Pedal 3 x"
#define DICE_MANYMOUSE_PADDLE2_Y_LABEL_TR "ÇokluFare > Fare-Pedal 3 y"
#define DICE_MANYMOUSE_PADDLE2_Y_LABEL_CAT_TR "Fare-Pedal 3 y"
#define DICE_MANYMOUSE_PADDLE3_LABEL_TR "ÇokluFare > Pedal 4 İçin Fareyi Kullan"
#define DICE_MANYMOUSE_PADDLE3_INFO_0_TR "Pedal 4 için fareyi kullanın."
#define DICE_MANYMOUSE_PADDLE3_X_LABEL_TR "ÇokluFare > Fare-Pedal 4 x"
#define DICE_MANYMOUSE_PADDLE3_X_LABEL_CAT_TR "Fare-Pedal 4 x"
#define DICE_MANYMOUSE_PADDLE3_Y_LABEL_TR "ÇokluFare > Fare-Pedal 4 y"
#define DICE_MANYMOUSE_PADDLE3_Y_LABEL_CAT_TR "Fare-Pedal 4 y"
#define DICE_DIPSWITCH_1_LABEL_TR "DIP Anahtarı > DIP Anahtarı 1"
#define DICE_DIPSWITCH_1_LABEL_CAT_TR "DIP Anahtarı 1"
#define DICE_DIPSWITCH_1_INFO_0_TR "DIP anahtarı 1 için ayar."
#define OPTION_VAL_1_TR "varsayılan"
#define DICE_DIPSWITCH_2_LABEL_TR "DIP Anahtarı > DIP Anahtarı 2"
#define DICE_DIPSWITCH_2_LABEL_CAT_TR "DIP Anahtarı 2"
#define DICE_DIPSWITCH_2_INFO_0_TR "DIP anahtarı 2 için ayar."
#define DICE_DIPSWITCH_3_LABEL_TR "DIP Anahtarı > DIP Anahtarı 3"
#define DICE_DIPSWITCH_3_LABEL_CAT_TR "DIP Anahtarı 3"
#define DICE_DIPSWITCH_3_INFO_0_TR "DIP anahtarı 3 için ayar."
#define DICE_DIPSWITCH16_1_LABEL_TR "DIP Anahtarı > DIP Anahtarı Hex 1"
#define DICE_DIPSWITCH16_1_LABEL_CAT_TR "DIP Anahtarı Hex 1"
#define DICE_DIPSWITCH16_1_INFO_0_TR "16 konumlu DIP anahtar numarası 1 için ayar."
#define DICE_DIPSWITCH16_2_LABEL_TR "DIP Anahtarı > DIP Anahtarı Hex 2"
#define DICE_DIPSWITCH16_2_LABEL_CAT_TR "DIP Anahtarı Hex 2"
#define DICE_DIPSWITCH16_2_INFO_0_TR "16 konumlu DIP anahtar numarası 2 için ayar."

struct retro_core_option_v2_category option_cats_tr[] = {
   {
      "input",
      CATEGORY_INPUT_LABEL_TR,
      CATEGORY_INPUT_INFO_0_TR
   },
   {
      "retromouse",
      CATEGORY_RETROMOUSE_LABEL_TR,
      CATEGORY_RETROMOUSE_INFO_0_TR
   },
#ifdef MANYMOUSE
   {
      "manymouse",
      CATEGORY_MANYMOUSE_LABEL_TR,
      CATEGORY_MANYMOUSE_INFO_0_TR
   },
#endif
   {
      "dipswitch",
      CATEGORY_DIPSWITCH_LABEL_TR,
      CATEGORY_DIPSWITCH_INFO_0_TR
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_tr[] = {
   {
      "dice_use_mouse_pointer_for_paddle_1",
      DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_LABEL_TR,
      DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_LABEL_CAT_TR,
      DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_INFO_0_TR,
      NULL,
      "input",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_paddle_joystick_absolute",
      DICE_PADDLE_JOYSTICK_ABSOLUTE_LABEL_TR,
      DICE_PADDLE_JOYSTICK_ABSOLUTE_LABEL_CAT_TR,
      DICE_PADDLE_JOYSTICK_ABSOLUTE_INFO_0_TR,
      NULL,
      "input",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      // D-pad but not necessarily keyboard under libretro,
      // that name comes from the upstream code.
      "dice_paddle_keyboard_sensitivity",
      DICE_PADDLE_KEYBOARD_SENSITIVITY_LABEL_TR,
      DICE_PADDLE_KEYBOARD_SENSITIVITY_LABEL_CAT_TR,
      DICE_PADDLE_KEYBOARD_SENSITIVITY_INFO_0_TR,
      NULL,
      "input",
      {
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "250"
   },
   {
      "dice_paddle_joystick_sensitivity",
      DICE_PADDLE_JOYSTICK_SENSITIVITY_LABEL_TR,
      DICE_PADDLE_JOYSTICK_SENSITIVITY_LABEL_CAT_TR,
      DICE_PADDLE_JOYSTICK_SENSITIVITY_INFO_0_TR,
      NULL,
      "input",
      {
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "500"
   },
   {
      "dice_retromouse_paddle_sensitivity",
      DICE_RETROMOUSE_PADDLE_SENSITIVITY_LABEL_TR,
      DICE_RETROMOUSE_PADDLE_SENSITIVITY_LABEL_CAT_TR,
      DICE_RETROMOUSE_PADDLE_SENSITIVITY_INFO_0_TR,
      NULL,
      "input",
      {
         {"25", NULL},
         {"50", NULL},
         {"75", NULL},
         {"100", NULL},
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "125"
   },
   {
      "dice_wheel_keyjoy_sensitivity",
      DICE_WHEEL_KEYJOY_SENSITIVITY_LABEL_TR,
      DICE_WHEEL_KEYJOY_SENSITIVITY_LABEL_CAT_TR,
      DICE_WHEEL_KEYJOY_SENSITIVITY_INFO_0_TR,
      NULL,
      "input",
      {
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "500"
   },
   {
      "dice_throttle_keyjoy_sensitivity",
      DICE_THROTTLE_KEYJOY_SENSITIVITY_LABEL_TR,
      DICE_THROTTLE_KEYJOY_SENSITIVITY_LABEL_CAT_TR,
      DICE_THROTTLE_KEYJOY_SENSITIVITY_INFO_0_TR,
      NULL,
      "input",
      {
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "250"
   },

   {
      "dice_retromouse_paddle0",
      DICE_RETROMOUSE_PADDLE0_LABEL_TR,
      DICE_RETROMOUSE_PADDLE0_LABEL_CAT_TR,
      DICE_RETROMOUSE_PADDLE0_INFO_0_TR,
      NULL,
      "retromouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_retromouse_paddle1",
      DICE_RETROMOUSE_PADDLE1_LABEL_TR,
      DICE_RETROMOUSE_PADDLE1_LABEL_CAT_TR,
      DICE_RETROMOUSE_PADDLE1_INFO_0_TR,
      NULL,
      "retromouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_retromouse_paddle2",
      DICE_RETROMOUSE_PADDLE2_LABEL_TR,
      DICE_RETROMOUSE_PADDLE2_LABEL_CAT_TR,
      DICE_RETROMOUSE_PADDLE2_INFO_0_TR,
      NULL,
      "retromouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_retromouse_paddle3",
      DICE_RETROMOUSE_PADDLE3_LABEL_TR,
      DICE_RETROMOUSE_PADDLE3_LABEL_CAT_TR,
      DICE_RETROMOUSE_PADDLE3_INFO_0_TR,
      NULL,
      "retromouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_retromouse_paddle0_x",
      DICE_RETROMOUSE_PADDLE0_X_LABEL_TR,
      DICE_RETROMOUSE_PADDLE0_X_LABEL_CAT_TR,
      DICE_RETROMOUSE_PADDLE0_X_INFO_0_TR,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_TR},
         {"y", OPTION_VAL_Y_TR},
         {NULL, NULL},
      },
      "x"
   },
   {
      "dice_retromouse_paddle0_y",
      DICE_RETROMOUSE_PADDLE0_Y_LABEL_TR,
      DICE_RETROMOUSE_PADDLE0_Y_LABEL_CAT_TR,
      DICE_RETROMOUSE_PADDLE0_Y_INFO_0_TR,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_TR},
         {"y", OPTION_VAL_Y_TR},
         {NULL, NULL},
      },
      "y"
   },
   {
      "dice_retromouse_paddle1_x",
      DICE_RETROMOUSE_PADDLE1_X_LABEL_TR,
      DICE_RETROMOUSE_PADDLE1_X_LABEL_CAT_TR,
      DICE_RETROMOUSE_PADDLE1_X_INFO_0_TR,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_TR},
         {"y", OPTION_VAL_Y_TR},
         {NULL, NULL},
      },
      "x"
   },
   {
      "dice_retromouse_paddle1_y",
      DICE_RETROMOUSE_PADDLE1_Y_LABEL_TR,
      DICE_RETROMOUSE_PADDLE1_Y_LABEL_CAT_TR,
      DICE_RETROMOUSE_PADDLE1_Y_INFO_0_TR,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_TR},
         {"y", OPTION_VAL_Y_TR},
         {NULL, NULL},
      },
      "y"
   },
   {
      "dice_retromouse_paddle2_x",
      DICE_RETROMOUSE_PADDLE2_X_LABEL_TR,
      DICE_RETROMOUSE_PADDLE2_X_LABEL_CAT_TR,
      DICE_RETROMOUSE_PADDLE2_X_INFO_0_TR,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_TR},
         {"y", OPTION_VAL_Y_TR},
         {NULL, NULL},
      },
      "x"
   },
   {
      "dice_retromouse_paddle2_y",
      DICE_RETROMOUSE_PADDLE2_Y_LABEL_TR,
      DICE_RETROMOUSE_PADDLE2_Y_LABEL_CAT_TR,
      DICE_RETROMOUSE_PADDLE2_Y_INFO_0_TR,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_TR},
         {"y", OPTION_VAL_Y_TR},
         {NULL, NULL},
      },
      "y"
   },
   {
      "dice_retromouse_paddle3_x",
      DICE_RETROMOUSE_PADDLE3_X_LABEL_TR,
      DICE_RETROMOUSE_PADDLE3_X_LABEL_CAT_TR,
      DICE_RETROMOUSE_PADDLE3_X_INFO_0_TR,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_TR},
         {"y", OPTION_VAL_Y_TR},
         {NULL, NULL},
      },
      "x"
   },
   {
      "dice_retromouse_paddle3_y",
      DICE_RETROMOUSE_PADDLE3_Y_LABEL_TR,
      DICE_RETROMOUSE_PADDLE3_Y_LABEL_CAT_TR,
      DICE_RETROMOUSE_PADDLE3_Y_INFO_0_TR,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_TR},
         {"y", OPTION_VAL_Y_TR},
         {NULL, NULL},
      },
      "y"
   },

#ifdef MANYMOUSE
   {
      "dice_manymouse_paddle0",
      DICE_MANYMOUSE_PADDLE0_LABEL_TR,
      DICE_RETROMOUSE_PADDLE0_LABEL_CAT_TR,
      DICE_MANYMOUSE_PADDLE0_INFO_0_TR,
      NULL,
      "manymouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_manymouse_paddle0_x",
      DICE_MANYMOUSE_PADDLE0_X_LABEL_TR,
      DICE_MANYMOUSE_PADDLE0_X_LABEL_CAT_TR,
      DICE_RETROMOUSE_PADDLE0_X_INFO_0_TR,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_TR},
         {"0y", OPTION_VAL_0Y_TR},
         {"1x", OPTION_VAL_1X_TR},
         {"1y", OPTION_VAL_1Y_TR},
         {"2x", OPTION_VAL_2X_TR},
         {"2y", OPTION_VAL_2Y_TR},
         {"3x", OPTION_VAL_3X_TR},
         {"3y", OPTION_VAL_3Y_TR},
         {NULL, NULL},
      },
      "0x"
   },
   {
      "dice_manymouse_paddle0_y",
      DICE_MANYMOUSE_PADDLE0_Y_LABEL_TR,
      DICE_MANYMOUSE_PADDLE0_Y_LABEL_CAT_TR,
      DICE_RETROMOUSE_PADDLE0_Y_INFO_0_TR,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_TR},
         {"0y", OPTION_VAL_0Y_TR},
         {"1x", OPTION_VAL_1X_TR},
         {"1y", OPTION_VAL_1Y_TR},
         {"2x", OPTION_VAL_2X_TR},
         {"2y", OPTION_VAL_2Y_TR},
         {"3x", OPTION_VAL_3X_TR},
         {"3y", OPTION_VAL_3Y_TR},
         {NULL, NULL},
      },
      "0y"
   },
   {
      "dice_manymouse_paddle1",
      DICE_MANYMOUSE_PADDLE1_LABEL_TR,
      DICE_RETROMOUSE_PADDLE1_LABEL_CAT_TR,
      DICE_MANYMOUSE_PADDLE1_INFO_0_TR,
      NULL,
      "manymouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_manymouse_paddle1_x",
      DICE_MANYMOUSE_PADDLE1_X_LABEL_TR,
      DICE_MANYMOUSE_PADDLE1_X_LABEL_CAT_TR,
      DICE_RETROMOUSE_PADDLE1_X_INFO_0_TR,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_TR},
         {"0y", OPTION_VAL_0Y_TR},
         {"1x", OPTION_VAL_1X_TR},
         {"1y", OPTION_VAL_1Y_TR},
         {"2x", OPTION_VAL_2X_TR},
         {"2y", OPTION_VAL_2Y_TR},
         {"3x", OPTION_VAL_3X_TR},
         {"3y", OPTION_VAL_3Y_TR},
         {NULL, NULL},
      },
      "1x"
   },
   {
      "dice_manymouse_paddle1_y",
      DICE_MANYMOUSE_PADDLE1_Y_LABEL_TR,
      DICE_MANYMOUSE_PADDLE1_Y_LABEL_CAT_TR,
      DICE_RETROMOUSE_PADDLE1_Y_INFO_0_TR,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_TR},
         {"0y", OPTION_VAL_0Y_TR},
         {"1x", OPTION_VAL_1X_TR},
         {"1y", OPTION_VAL_1Y_TR},
         {"2x", OPTION_VAL_2X_TR},
         {"2y", OPTION_VAL_2Y_TR},
         {"3x", OPTION_VAL_3X_TR},
         {"3y", OPTION_VAL_3Y_TR},
         {NULL, NULL},
      },
      "1y"
   },
   {
      "dice_manymouse_paddle2",
      DICE_MANYMOUSE_PADDLE2_LABEL_TR,
      DICE_RETROMOUSE_PADDLE2_LABEL_CAT_TR,
      DICE_MANYMOUSE_PADDLE2_INFO_0_TR,
      NULL,
      "manymouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_manymouse_paddle2_x",
      DICE_MANYMOUSE_PADDLE2_X_LABEL_TR,
      DICE_MANYMOUSE_PADDLE2_X_LABEL_CAT_TR,
      DICE_RETROMOUSE_PADDLE2_X_INFO_0_TR,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_TR},
         {"0y", OPTION_VAL_0Y_TR},
         {"1x", OPTION_VAL_1X_TR},
         {"1y", OPTION_VAL_1Y_TR},
         {"2x", OPTION_VAL_2X_TR},
         {"2y", OPTION_VAL_2Y_TR},
         {"3x", OPTION_VAL_3X_TR},
         {"3y", OPTION_VAL_3Y_TR},
         {NULL, NULL},
      },
      "2x"
   },
   {
      "dice_manymouse_paddle2_y",
      DICE_MANYMOUSE_PADDLE2_Y_LABEL_TR,
      DICE_MANYMOUSE_PADDLE2_Y_LABEL_CAT_TR,
      DICE_RETROMOUSE_PADDLE2_Y_INFO_0_TR,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_TR},
         {"0y", OPTION_VAL_0Y_TR},
         {"1x", OPTION_VAL_1X_TR},
         {"1y", OPTION_VAL_1Y_TR},
         {"2x", OPTION_VAL_2X_TR},
         {"2y", OPTION_VAL_2Y_TR},
         {"3x", OPTION_VAL_3X_TR},
         {"3y", OPTION_VAL_3Y_TR},
         {NULL, NULL},
      },
      "2y"
   },
   {
      "dice_manymouse_paddle3",
      DICE_MANYMOUSE_PADDLE3_LABEL_TR,
      DICE_RETROMOUSE_PADDLE3_LABEL_CAT_TR,
      DICE_MANYMOUSE_PADDLE3_INFO_0_TR,
      NULL,
      "manymouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_manymouse_paddle3_x",
      DICE_MANYMOUSE_PADDLE3_X_LABEL_TR,
      DICE_MANYMOUSE_PADDLE3_X_LABEL_CAT_TR,
      DICE_RETROMOUSE_PADDLE3_X_INFO_0_TR,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_TR},
         {"0y", OPTION_VAL_0Y_TR},
         {"1x", OPTION_VAL_1X_TR},
         {"1y", OPTION_VAL_1Y_TR},
         {"2x", OPTION_VAL_2X_TR},
         {"2y", OPTION_VAL_2Y_TR},
         {"3x", OPTION_VAL_3X_TR},
         {"3y", OPTION_VAL_3Y_TR},
         {NULL, NULL},
      },
      "3x"
   },
   {
      "dice_manymouse_paddle3_y",
      DICE_MANYMOUSE_PADDLE3_Y_LABEL_TR,
      DICE_MANYMOUSE_PADDLE3_Y_LABEL_CAT_TR,
      DICE_RETROMOUSE_PADDLE3_Y_INFO_0_TR,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_TR},
         {"0y", OPTION_VAL_0Y_TR},
         {"1x", OPTION_VAL_1X_TR},
         {"1y", OPTION_VAL_1Y_TR},
         {"2x", OPTION_VAL_2X_TR},
         {"2y", OPTION_VAL_2Y_TR},
         {"3x", OPTION_VAL_3X_TR},
         {"3y", OPTION_VAL_3Y_TR},
         {NULL, NULL},
      },
      "3y"
   },
#endif

   {
      "dice_dipswitch_1",
      DICE_DIPSWITCH_1_LABEL_TR,
      DICE_DIPSWITCH_1_LABEL_CAT_TR,
      DICE_DIPSWITCH_1_INFO_0_TR,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_TR},
         {"0", NULL},
         {"1", NULL},
         {NULL, NULL},
      },
      "-1"
   },
   {
      "dice_dipswitch_2",
      DICE_DIPSWITCH_2_LABEL_TR,
      DICE_DIPSWITCH_2_LABEL_CAT_TR,
      DICE_DIPSWITCH_2_INFO_0_TR,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_TR},
         {"0", NULL},
         {"1", NULL},
         {NULL, NULL},
      },
      "-1"
   },
   {
      "dice_dipswitch_3",
      DICE_DIPSWITCH_3_LABEL_TR,
      DICE_DIPSWITCH_3_LABEL_CAT_TR,
      DICE_DIPSWITCH_3_INFO_0_TR,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_TR},
         {"0", NULL},
         {"1", NULL},
         {NULL, NULL},
      },
      "-1"
   },
   {
      "dice_dipswitch16_1",
      DICE_DIPSWITCH16_1_LABEL_TR,
      DICE_DIPSWITCH16_1_LABEL_CAT_TR,
      DICE_DIPSWITCH16_1_INFO_0_TR,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_TR},
         {"0", NULL},
         {"1", NULL},
         {"2", NULL},
         {"3", NULL},
         {"4", NULL},
         {"5", NULL},
         {"6", NULL},
         {"7", NULL},
         {"8", NULL},
         {"9", NULL},
         {"10", NULL},
         {"11", NULL},
         {"12", NULL},
         {"13", NULL},
         {"14", NULL},
         {"15", NULL},
         {NULL, NULL},
      },
      "-1"
   },
   {
      "dice_dipswitch16_2",
      DICE_DIPSWITCH16_2_LABEL_TR,
      DICE_DIPSWITCH16_2_LABEL_CAT_TR,
      DICE_DIPSWITCH16_2_INFO_0_TR,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_TR},
         {"0", NULL},
         {"1", NULL},
         {"2", NULL},
         {"3", NULL},
         {"4", NULL},
         {"5", NULL},
         {"6", NULL},
         {"7", NULL},
         {"8", NULL},
         {"9", NULL},
         {"10", NULL},
         {"11", NULL},
         {"12", NULL},
         {"13", NULL},
         {"14", NULL},
         {"15", NULL},
         {NULL, NULL},
      },
      "-1"
   },

   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_tr = {
   option_cats_tr,
   option_defs_tr
};

/* RETRO_LANGUAGE_TT */

#define CATEGORY_INPUT_LABEL_TT NULL
#define CATEGORY_INPUT_INFO_0_TT NULL
#define CATEGORY_RETROMOUSE_LABEL_TT NULL
#define CATEGORY_RETROMOUSE_INFO_0_TT NULL
#define CATEGORY_MANYMOUSE_LABEL_TT NULL
#define CATEGORY_MANYMOUSE_INFO_0_TT NULL
#define CATEGORY_DIPSWITCH_LABEL_TT NULL
#define CATEGORY_DIPSWITCH_INFO_0_TT NULL
#define DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_LABEL_TT NULL
#define DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_LABEL_CAT_TT NULL
#define DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_INFO_0_TT NULL
#define DICE_PADDLE_JOYSTICK_ABSOLUTE_LABEL_TT NULL
#define DICE_PADDLE_JOYSTICK_ABSOLUTE_LABEL_CAT_TT NULL
#define DICE_PADDLE_JOYSTICK_ABSOLUTE_INFO_0_TT NULL
#define DICE_PADDLE_KEYBOARD_SENSITIVITY_LABEL_TT NULL
#define DICE_PADDLE_KEYBOARD_SENSITIVITY_LABEL_CAT_TT NULL
#define DICE_PADDLE_KEYBOARD_SENSITIVITY_INFO_0_TT NULL
#define DICE_PADDLE_JOYSTICK_SENSITIVITY_LABEL_TT NULL
#define DICE_PADDLE_JOYSTICK_SENSITIVITY_LABEL_CAT_TT NULL
#define DICE_PADDLE_JOYSTICK_SENSITIVITY_INFO_0_TT NULL
#define DICE_RETROMOUSE_PADDLE_SENSITIVITY_LABEL_TT NULL
#define DICE_RETROMOUSE_PADDLE_SENSITIVITY_LABEL_CAT_TT NULL
#define DICE_RETROMOUSE_PADDLE_SENSITIVITY_INFO_0_TT NULL
#define DICE_WHEEL_KEYJOY_SENSITIVITY_LABEL_TT NULL
#define DICE_WHEEL_KEYJOY_SENSITIVITY_LABEL_CAT_TT NULL
#define DICE_WHEEL_KEYJOY_SENSITIVITY_INFO_0_TT NULL
#define DICE_THROTTLE_KEYJOY_SENSITIVITY_LABEL_TT NULL
#define DICE_THROTTLE_KEYJOY_SENSITIVITY_LABEL_CAT_TT NULL
#define DICE_THROTTLE_KEYJOY_SENSITIVITY_INFO_0_TT NULL
#define DICE_RETROMOUSE_PADDLE0_LABEL_TT NULL
#define DICE_RETROMOUSE_PADDLE0_LABEL_CAT_TT NULL
#define DICE_RETROMOUSE_PADDLE0_INFO_0_TT NULL
#define DICE_RETROMOUSE_PADDLE1_LABEL_TT NULL
#define DICE_RETROMOUSE_PADDLE1_LABEL_CAT_TT NULL
#define DICE_RETROMOUSE_PADDLE1_INFO_0_TT NULL
#define DICE_RETROMOUSE_PADDLE2_LABEL_TT NULL
#define DICE_RETROMOUSE_PADDLE2_LABEL_CAT_TT NULL
#define DICE_RETROMOUSE_PADDLE2_INFO_0_TT NULL
#define DICE_RETROMOUSE_PADDLE3_LABEL_TT NULL
#define DICE_RETROMOUSE_PADDLE3_LABEL_CAT_TT NULL
#define DICE_RETROMOUSE_PADDLE3_INFO_0_TT NULL
#define DICE_RETROMOUSE_PADDLE0_X_LABEL_TT NULL
#define DICE_RETROMOUSE_PADDLE0_X_LABEL_CAT_TT NULL
#define DICE_RETROMOUSE_PADDLE0_X_INFO_0_TT NULL
#define OPTION_VAL_X_TT NULL
#define OPTION_VAL_Y_TT NULL
#define DICE_RETROMOUSE_PADDLE0_Y_LABEL_TT NULL
#define DICE_RETROMOUSE_PADDLE0_Y_LABEL_CAT_TT NULL
#define DICE_RETROMOUSE_PADDLE0_Y_INFO_0_TT NULL
#define DICE_RETROMOUSE_PADDLE1_X_LABEL_TT NULL
#define DICE_RETROMOUSE_PADDLE1_X_LABEL_CAT_TT NULL
#define DICE_RETROMOUSE_PADDLE1_X_INFO_0_TT NULL
#define DICE_RETROMOUSE_PADDLE1_Y_LABEL_TT NULL
#define DICE_RETROMOUSE_PADDLE1_Y_LABEL_CAT_TT NULL
#define DICE_RETROMOUSE_PADDLE1_Y_INFO_0_TT NULL
#define DICE_RETROMOUSE_PADDLE2_X_LABEL_TT NULL
#define DICE_RETROMOUSE_PADDLE2_X_LABEL_CAT_TT NULL
#define DICE_RETROMOUSE_PADDLE2_X_INFO_0_TT NULL
#define DICE_RETROMOUSE_PADDLE2_Y_LABEL_TT NULL
#define DICE_RETROMOUSE_PADDLE2_Y_LABEL_CAT_TT NULL
#define DICE_RETROMOUSE_PADDLE2_Y_INFO_0_TT NULL
#define DICE_RETROMOUSE_PADDLE3_X_LABEL_TT NULL
#define DICE_RETROMOUSE_PADDLE3_X_LABEL_CAT_TT NULL
#define DICE_RETROMOUSE_PADDLE3_X_INFO_0_TT NULL
#define DICE_RETROMOUSE_PADDLE3_Y_LABEL_TT NULL
#define DICE_RETROMOUSE_PADDLE3_Y_LABEL_CAT_TT NULL
#define DICE_RETROMOUSE_PADDLE3_Y_INFO_0_TT NULL
#define DICE_MANYMOUSE_PADDLE0_LABEL_TT NULL
#define DICE_MANYMOUSE_PADDLE0_INFO_0_TT NULL
#define DICE_MANYMOUSE_PADDLE0_X_LABEL_TT NULL
#define DICE_MANYMOUSE_PADDLE0_X_LABEL_CAT_TT NULL
#define OPTION_VAL_0X_TT NULL
#define OPTION_VAL_0Y_TT NULL
#define OPTION_VAL_1X_TT NULL
#define OPTION_VAL_1Y_TT NULL
#define OPTION_VAL_2X_TT NULL
#define OPTION_VAL_2Y_TT NULL
#define OPTION_VAL_3X_TT NULL
#define OPTION_VAL_3Y_TT NULL
#define DICE_MANYMOUSE_PADDLE0_Y_LABEL_TT NULL
#define DICE_MANYMOUSE_PADDLE0_Y_LABEL_CAT_TT NULL
#define DICE_MANYMOUSE_PADDLE1_LABEL_TT NULL
#define DICE_MANYMOUSE_PADDLE1_INFO_0_TT NULL
#define DICE_MANYMOUSE_PADDLE1_X_LABEL_TT NULL
#define DICE_MANYMOUSE_PADDLE1_X_LABEL_CAT_TT NULL
#define DICE_MANYMOUSE_PADDLE1_Y_LABEL_TT NULL
#define DICE_MANYMOUSE_PADDLE1_Y_LABEL_CAT_TT NULL
#define DICE_MANYMOUSE_PADDLE2_LABEL_TT NULL
#define DICE_MANYMOUSE_PADDLE2_INFO_0_TT NULL
#define DICE_MANYMOUSE_PADDLE2_X_LABEL_TT NULL
#define DICE_MANYMOUSE_PADDLE2_X_LABEL_CAT_TT NULL
#define DICE_MANYMOUSE_PADDLE2_Y_LABEL_TT NULL
#define DICE_MANYMOUSE_PADDLE2_Y_LABEL_CAT_TT NULL
#define DICE_MANYMOUSE_PADDLE3_LABEL_TT NULL
#define DICE_MANYMOUSE_PADDLE3_INFO_0_TT NULL
#define DICE_MANYMOUSE_PADDLE3_X_LABEL_TT NULL
#define DICE_MANYMOUSE_PADDLE3_X_LABEL_CAT_TT NULL
#define DICE_MANYMOUSE_PADDLE3_Y_LABEL_TT NULL
#define DICE_MANYMOUSE_PADDLE3_Y_LABEL_CAT_TT NULL
#define DICE_DIPSWITCH_1_LABEL_TT NULL
#define DICE_DIPSWITCH_1_LABEL_CAT_TT NULL
#define DICE_DIPSWITCH_1_INFO_0_TT NULL
#define OPTION_VAL_1_TT NULL
#define DICE_DIPSWITCH_2_LABEL_TT NULL
#define DICE_DIPSWITCH_2_LABEL_CAT_TT NULL
#define DICE_DIPSWITCH_2_INFO_0_TT NULL
#define DICE_DIPSWITCH_3_LABEL_TT NULL
#define DICE_DIPSWITCH_3_LABEL_CAT_TT NULL
#define DICE_DIPSWITCH_3_INFO_0_TT NULL
#define DICE_DIPSWITCH16_1_LABEL_TT NULL
#define DICE_DIPSWITCH16_1_LABEL_CAT_TT NULL
#define DICE_DIPSWITCH16_1_INFO_0_TT NULL
#define DICE_DIPSWITCH16_2_LABEL_TT NULL
#define DICE_DIPSWITCH16_2_LABEL_CAT_TT NULL
#define DICE_DIPSWITCH16_2_INFO_0_TT NULL

struct retro_core_option_v2_category option_cats_tt[] = {
   {
      "input",
      CATEGORY_INPUT_LABEL_TT,
      CATEGORY_INPUT_INFO_0_TT
   },
   {
      "retromouse",
      CATEGORY_RETROMOUSE_LABEL_TT,
      CATEGORY_RETROMOUSE_INFO_0_TT
   },
#ifdef MANYMOUSE
   {
      "manymouse",
      CATEGORY_MANYMOUSE_LABEL_TT,
      CATEGORY_MANYMOUSE_INFO_0_TT
   },
#endif
   {
      "dipswitch",
      CATEGORY_DIPSWITCH_LABEL_TT,
      CATEGORY_DIPSWITCH_INFO_0_TT
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_tt[] = {
   {
      "dice_use_mouse_pointer_for_paddle_1",
      DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_LABEL_TT,
      DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_LABEL_CAT_TT,
      DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_INFO_0_TT,
      NULL,
      "input",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_paddle_joystick_absolute",
      DICE_PADDLE_JOYSTICK_ABSOLUTE_LABEL_TT,
      DICE_PADDLE_JOYSTICK_ABSOLUTE_LABEL_CAT_TT,
      DICE_PADDLE_JOYSTICK_ABSOLUTE_INFO_0_TT,
      NULL,
      "input",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      // D-pad but not necessarily keyboard under libretro,
      // that name comes from the upstream code.
      "dice_paddle_keyboard_sensitivity",
      DICE_PADDLE_KEYBOARD_SENSITIVITY_LABEL_TT,
      DICE_PADDLE_KEYBOARD_SENSITIVITY_LABEL_CAT_TT,
      DICE_PADDLE_KEYBOARD_SENSITIVITY_INFO_0_TT,
      NULL,
      "input",
      {
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "250"
   },
   {
      "dice_paddle_joystick_sensitivity",
      DICE_PADDLE_JOYSTICK_SENSITIVITY_LABEL_TT,
      DICE_PADDLE_JOYSTICK_SENSITIVITY_LABEL_CAT_TT,
      DICE_PADDLE_JOYSTICK_SENSITIVITY_INFO_0_TT,
      NULL,
      "input",
      {
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "500"
   },
   {
      "dice_retromouse_paddle_sensitivity",
      DICE_RETROMOUSE_PADDLE_SENSITIVITY_LABEL_TT,
      DICE_RETROMOUSE_PADDLE_SENSITIVITY_LABEL_CAT_TT,
      DICE_RETROMOUSE_PADDLE_SENSITIVITY_INFO_0_TT,
      NULL,
      "input",
      {
         {"25", NULL},
         {"50", NULL},
         {"75", NULL},
         {"100", NULL},
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "125"
   },
   {
      "dice_wheel_keyjoy_sensitivity",
      DICE_WHEEL_KEYJOY_SENSITIVITY_LABEL_TT,
      DICE_WHEEL_KEYJOY_SENSITIVITY_LABEL_CAT_TT,
      DICE_WHEEL_KEYJOY_SENSITIVITY_INFO_0_TT,
      NULL,
      "input",
      {
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "500"
   },
   {
      "dice_throttle_keyjoy_sensitivity",
      DICE_THROTTLE_KEYJOY_SENSITIVITY_LABEL_TT,
      DICE_THROTTLE_KEYJOY_SENSITIVITY_LABEL_CAT_TT,
      DICE_THROTTLE_KEYJOY_SENSITIVITY_INFO_0_TT,
      NULL,
      "input",
      {
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "250"
   },

   {
      "dice_retromouse_paddle0",
      DICE_RETROMOUSE_PADDLE0_LABEL_TT,
      DICE_RETROMOUSE_PADDLE0_LABEL_CAT_TT,
      DICE_RETROMOUSE_PADDLE0_INFO_0_TT,
      NULL,
      "retromouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_retromouse_paddle1",
      DICE_RETROMOUSE_PADDLE1_LABEL_TT,
      DICE_RETROMOUSE_PADDLE1_LABEL_CAT_TT,
      DICE_RETROMOUSE_PADDLE1_INFO_0_TT,
      NULL,
      "retromouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_retromouse_paddle2",
      DICE_RETROMOUSE_PADDLE2_LABEL_TT,
      DICE_RETROMOUSE_PADDLE2_LABEL_CAT_TT,
      DICE_RETROMOUSE_PADDLE2_INFO_0_TT,
      NULL,
      "retromouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_retromouse_paddle3",
      DICE_RETROMOUSE_PADDLE3_LABEL_TT,
      DICE_RETROMOUSE_PADDLE3_LABEL_CAT_TT,
      DICE_RETROMOUSE_PADDLE3_INFO_0_TT,
      NULL,
      "retromouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_retromouse_paddle0_x",
      DICE_RETROMOUSE_PADDLE0_X_LABEL_TT,
      DICE_RETROMOUSE_PADDLE0_X_LABEL_CAT_TT,
      DICE_RETROMOUSE_PADDLE0_X_INFO_0_TT,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_TT},
         {"y", OPTION_VAL_Y_TT},
         {NULL, NULL},
      },
      "x"
   },
   {
      "dice_retromouse_paddle0_y",
      DICE_RETROMOUSE_PADDLE0_Y_LABEL_TT,
      DICE_RETROMOUSE_PADDLE0_Y_LABEL_CAT_TT,
      DICE_RETROMOUSE_PADDLE0_Y_INFO_0_TT,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_TT},
         {"y", OPTION_VAL_Y_TT},
         {NULL, NULL},
      },
      "y"
   },
   {
      "dice_retromouse_paddle1_x",
      DICE_RETROMOUSE_PADDLE1_X_LABEL_TT,
      DICE_RETROMOUSE_PADDLE1_X_LABEL_CAT_TT,
      DICE_RETROMOUSE_PADDLE1_X_INFO_0_TT,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_TT},
         {"y", OPTION_VAL_Y_TT},
         {NULL, NULL},
      },
      "x"
   },
   {
      "dice_retromouse_paddle1_y",
      DICE_RETROMOUSE_PADDLE1_Y_LABEL_TT,
      DICE_RETROMOUSE_PADDLE1_Y_LABEL_CAT_TT,
      DICE_RETROMOUSE_PADDLE1_Y_INFO_0_TT,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_TT},
         {"y", OPTION_VAL_Y_TT},
         {NULL, NULL},
      },
      "y"
   },
   {
      "dice_retromouse_paddle2_x",
      DICE_RETROMOUSE_PADDLE2_X_LABEL_TT,
      DICE_RETROMOUSE_PADDLE2_X_LABEL_CAT_TT,
      DICE_RETROMOUSE_PADDLE2_X_INFO_0_TT,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_TT},
         {"y", OPTION_VAL_Y_TT},
         {NULL, NULL},
      },
      "x"
   },
   {
      "dice_retromouse_paddle2_y",
      DICE_RETROMOUSE_PADDLE2_Y_LABEL_TT,
      DICE_RETROMOUSE_PADDLE2_Y_LABEL_CAT_TT,
      DICE_RETROMOUSE_PADDLE2_Y_INFO_0_TT,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_TT},
         {"y", OPTION_VAL_Y_TT},
         {NULL, NULL},
      },
      "y"
   },
   {
      "dice_retromouse_paddle3_x",
      DICE_RETROMOUSE_PADDLE3_X_LABEL_TT,
      DICE_RETROMOUSE_PADDLE3_X_LABEL_CAT_TT,
      DICE_RETROMOUSE_PADDLE3_X_INFO_0_TT,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_TT},
         {"y", OPTION_VAL_Y_TT},
         {NULL, NULL},
      },
      "x"
   },
   {
      "dice_retromouse_paddle3_y",
      DICE_RETROMOUSE_PADDLE3_Y_LABEL_TT,
      DICE_RETROMOUSE_PADDLE3_Y_LABEL_CAT_TT,
      DICE_RETROMOUSE_PADDLE3_Y_INFO_0_TT,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_TT},
         {"y", OPTION_VAL_Y_TT},
         {NULL, NULL},
      },
      "y"
   },

#ifdef MANYMOUSE
   {
      "dice_manymouse_paddle0",
      DICE_MANYMOUSE_PADDLE0_LABEL_TT,
      DICE_RETROMOUSE_PADDLE0_LABEL_CAT_TT,
      DICE_MANYMOUSE_PADDLE0_INFO_0_TT,
      NULL,
      "manymouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_manymouse_paddle0_x",
      DICE_MANYMOUSE_PADDLE0_X_LABEL_TT,
      DICE_MANYMOUSE_PADDLE0_X_LABEL_CAT_TT,
      DICE_RETROMOUSE_PADDLE0_X_INFO_0_TT,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_TT},
         {"0y", OPTION_VAL_0Y_TT},
         {"1x", OPTION_VAL_1X_TT},
         {"1y", OPTION_VAL_1Y_TT},
         {"2x", OPTION_VAL_2X_TT},
         {"2y", OPTION_VAL_2Y_TT},
         {"3x", OPTION_VAL_3X_TT},
         {"3y", OPTION_VAL_3Y_TT},
         {NULL, NULL},
      },
      "0x"
   },
   {
      "dice_manymouse_paddle0_y",
      DICE_MANYMOUSE_PADDLE0_Y_LABEL_TT,
      DICE_MANYMOUSE_PADDLE0_Y_LABEL_CAT_TT,
      DICE_RETROMOUSE_PADDLE0_Y_INFO_0_TT,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_TT},
         {"0y", OPTION_VAL_0Y_TT},
         {"1x", OPTION_VAL_1X_TT},
         {"1y", OPTION_VAL_1Y_TT},
         {"2x", OPTION_VAL_2X_TT},
         {"2y", OPTION_VAL_2Y_TT},
         {"3x", OPTION_VAL_3X_TT},
         {"3y", OPTION_VAL_3Y_TT},
         {NULL, NULL},
      },
      "0y"
   },
   {
      "dice_manymouse_paddle1",
      DICE_MANYMOUSE_PADDLE1_LABEL_TT,
      DICE_RETROMOUSE_PADDLE1_LABEL_CAT_TT,
      DICE_MANYMOUSE_PADDLE1_INFO_0_TT,
      NULL,
      "manymouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_manymouse_paddle1_x",
      DICE_MANYMOUSE_PADDLE1_X_LABEL_TT,
      DICE_MANYMOUSE_PADDLE1_X_LABEL_CAT_TT,
      DICE_RETROMOUSE_PADDLE1_X_INFO_0_TT,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_TT},
         {"0y", OPTION_VAL_0Y_TT},
         {"1x", OPTION_VAL_1X_TT},
         {"1y", OPTION_VAL_1Y_TT},
         {"2x", OPTION_VAL_2X_TT},
         {"2y", OPTION_VAL_2Y_TT},
         {"3x", OPTION_VAL_3X_TT},
         {"3y", OPTION_VAL_3Y_TT},
         {NULL, NULL},
      },
      "1x"
   },
   {
      "dice_manymouse_paddle1_y",
      DICE_MANYMOUSE_PADDLE1_Y_LABEL_TT,
      DICE_MANYMOUSE_PADDLE1_Y_LABEL_CAT_TT,
      DICE_RETROMOUSE_PADDLE1_Y_INFO_0_TT,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_TT},
         {"0y", OPTION_VAL_0Y_TT},
         {"1x", OPTION_VAL_1X_TT},
         {"1y", OPTION_VAL_1Y_TT},
         {"2x", OPTION_VAL_2X_TT},
         {"2y", OPTION_VAL_2Y_TT},
         {"3x", OPTION_VAL_3X_TT},
         {"3y", OPTION_VAL_3Y_TT},
         {NULL, NULL},
      },
      "1y"
   },
   {
      "dice_manymouse_paddle2",
      DICE_MANYMOUSE_PADDLE2_LABEL_TT,
      DICE_RETROMOUSE_PADDLE2_LABEL_CAT_TT,
      DICE_MANYMOUSE_PADDLE2_INFO_0_TT,
      NULL,
      "manymouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_manymouse_paddle2_x",
      DICE_MANYMOUSE_PADDLE2_X_LABEL_TT,
      DICE_MANYMOUSE_PADDLE2_X_LABEL_CAT_TT,
      DICE_RETROMOUSE_PADDLE2_X_INFO_0_TT,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_TT},
         {"0y", OPTION_VAL_0Y_TT},
         {"1x", OPTION_VAL_1X_TT},
         {"1y", OPTION_VAL_1Y_TT},
         {"2x", OPTION_VAL_2X_TT},
         {"2y", OPTION_VAL_2Y_TT},
         {"3x", OPTION_VAL_3X_TT},
         {"3y", OPTION_VAL_3Y_TT},
         {NULL, NULL},
      },
      "2x"
   },
   {
      "dice_manymouse_paddle2_y",
      DICE_MANYMOUSE_PADDLE2_Y_LABEL_TT,
      DICE_MANYMOUSE_PADDLE2_Y_LABEL_CAT_TT,
      DICE_RETROMOUSE_PADDLE2_Y_INFO_0_TT,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_TT},
         {"0y", OPTION_VAL_0Y_TT},
         {"1x", OPTION_VAL_1X_TT},
         {"1y", OPTION_VAL_1Y_TT},
         {"2x", OPTION_VAL_2X_TT},
         {"2y", OPTION_VAL_2Y_TT},
         {"3x", OPTION_VAL_3X_TT},
         {"3y", OPTION_VAL_3Y_TT},
         {NULL, NULL},
      },
      "2y"
   },
   {
      "dice_manymouse_paddle3",
      DICE_MANYMOUSE_PADDLE3_LABEL_TT,
      DICE_RETROMOUSE_PADDLE3_LABEL_CAT_TT,
      DICE_MANYMOUSE_PADDLE3_INFO_0_TT,
      NULL,
      "manymouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_manymouse_paddle3_x",
      DICE_MANYMOUSE_PADDLE3_X_LABEL_TT,
      DICE_MANYMOUSE_PADDLE3_X_LABEL_CAT_TT,
      DICE_RETROMOUSE_PADDLE3_X_INFO_0_TT,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_TT},
         {"0y", OPTION_VAL_0Y_TT},
         {"1x", OPTION_VAL_1X_TT},
         {"1y", OPTION_VAL_1Y_TT},
         {"2x", OPTION_VAL_2X_TT},
         {"2y", OPTION_VAL_2Y_TT},
         {"3x", OPTION_VAL_3X_TT},
         {"3y", OPTION_VAL_3Y_TT},
         {NULL, NULL},
      },
      "3x"
   },
   {
      "dice_manymouse_paddle3_y",
      DICE_MANYMOUSE_PADDLE3_Y_LABEL_TT,
      DICE_MANYMOUSE_PADDLE3_Y_LABEL_CAT_TT,
      DICE_RETROMOUSE_PADDLE3_Y_INFO_0_TT,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_TT},
         {"0y", OPTION_VAL_0Y_TT},
         {"1x", OPTION_VAL_1X_TT},
         {"1y", OPTION_VAL_1Y_TT},
         {"2x", OPTION_VAL_2X_TT},
         {"2y", OPTION_VAL_2Y_TT},
         {"3x", OPTION_VAL_3X_TT},
         {"3y", OPTION_VAL_3Y_TT},
         {NULL, NULL},
      },
      "3y"
   },
#endif

   {
      "dice_dipswitch_1",
      DICE_DIPSWITCH_1_LABEL_TT,
      DICE_DIPSWITCH_1_LABEL_CAT_TT,
      DICE_DIPSWITCH_1_INFO_0_TT,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_TT},
         {"0", NULL},
         {"1", NULL},
         {NULL, NULL},
      },
      "-1"
   },
   {
      "dice_dipswitch_2",
      DICE_DIPSWITCH_2_LABEL_TT,
      DICE_DIPSWITCH_2_LABEL_CAT_TT,
      DICE_DIPSWITCH_2_INFO_0_TT,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_TT},
         {"0", NULL},
         {"1", NULL},
         {NULL, NULL},
      },
      "-1"
   },
   {
      "dice_dipswitch_3",
      DICE_DIPSWITCH_3_LABEL_TT,
      DICE_DIPSWITCH_3_LABEL_CAT_TT,
      DICE_DIPSWITCH_3_INFO_0_TT,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_TT},
         {"0", NULL},
         {"1", NULL},
         {NULL, NULL},
      },
      "-1"
   },
   {
      "dice_dipswitch16_1",
      DICE_DIPSWITCH16_1_LABEL_TT,
      DICE_DIPSWITCH16_1_LABEL_CAT_TT,
      DICE_DIPSWITCH16_1_INFO_0_TT,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_TT},
         {"0", NULL},
         {"1", NULL},
         {"2", NULL},
         {"3", NULL},
         {"4", NULL},
         {"5", NULL},
         {"6", NULL},
         {"7", NULL},
         {"8", NULL},
         {"9", NULL},
         {"10", NULL},
         {"11", NULL},
         {"12", NULL},
         {"13", NULL},
         {"14", NULL},
         {"15", NULL},
         {NULL, NULL},
      },
      "-1"
   },
   {
      "dice_dipswitch16_2",
      DICE_DIPSWITCH16_2_LABEL_TT,
      DICE_DIPSWITCH16_2_LABEL_CAT_TT,
      DICE_DIPSWITCH16_2_INFO_0_TT,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_TT},
         {"0", NULL},
         {"1", NULL},
         {"2", NULL},
         {"3", NULL},
         {"4", NULL},
         {"5", NULL},
         {"6", NULL},
         {"7", NULL},
         {"8", NULL},
         {"9", NULL},
         {"10", NULL},
         {"11", NULL},
         {"12", NULL},
         {"13", NULL},
         {"14", NULL},
         {"15", NULL},
         {NULL, NULL},
      },
      "-1"
   },

   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_tt = {
   option_cats_tt,
   option_defs_tt
};

/* RETRO_LANGUAGE_UK */

#define CATEGORY_INPUT_LABEL_UK "Керування"
#define CATEGORY_INPUT_INFO_0_UK "Налаштування параметрів введення."
#define CATEGORY_RETROMOUSE_LABEL_UK "Ретромиша"
#define CATEGORY_RETROMOUSE_INFO_0_UK "Налаштування libretro параметрів декількох мишей."
#define CATEGORY_MANYMOUSE_LABEL_UK "Мани Миша"
#define CATEGORY_MANYMOUSE_INFO_0_UK "Налаштування параметрів декількох мишей."
#define CATEGORY_DIPSWITCH_LABEL_UK "Перемикач DIP"
#define CATEGORY_DIPSWITCH_INFO_0_UK "Налаштування DIP перемикача й потенціометра."
#define DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_LABEL_UK "Введіть > Використовуйте вказівник миші для Paddle 1"
#define DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_LABEL_CAT_UK "Використовуйте вказівник миші для Падла 1"
#define DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_INFO_0_UK "Використовувати системний курсор миші в якості контролера платформи 1. Не дає вибору конкретної миші, якщо у вас є серйозна позначка."
#define DICE_PADDLE_JOYSTICK_ABSOLUTE_LABEL_UK "Введення > Педл Джойстік використовує Абсолютний Рух"
#define DICE_PADDLE_JOYSTICK_ABSOLUTE_LABEL_CAT_UK "Ведмежий джойстик використовує Абсолютний рух"
#define DICE_PADDLE_JOYSTICK_ABSOLUTE_INFO_0_UK "Відразу рух джойстиків мапи діапазон для виштовхування, а не для відносних рухів."
#define DICE_PADDLE_KEYBOARD_SENSITIVITY_LABEL_UK "Введення > Чутливість D-pad Paddle"
#define DICE_PADDLE_KEYBOARD_SENSITIVITY_LABEL_CAT_UK "Чутливість D-pad Paddle"
#define DICE_PADDLE_KEYBOARD_SENSITIVITY_INFO_0_UK "Чутливість при використанні D-pad для весла."
#define DICE_PADDLE_JOYSTICK_SENSITIVITY_LABEL_UK "Введення > Аналогова стійка до Paddle"
#define DICE_PADDLE_JOYSTICK_SENSITIVITY_LABEL_CAT_UK "Чутливість аналогової стійки"
#define DICE_PADDLE_JOYSTICK_SENSITIVITY_INFO_0_UK "Чутливість при використанні аналогового паличка для весла."
#define DICE_RETROMOUSE_PADDLE_SENSITIVITY_LABEL_UK "Введення > Чутливість Ретромиші"
#define DICE_RETROMOUSE_PADDLE_SENSITIVITY_LABEL_CAT_UK "Чутливість ретромиша"
#define DICE_RETROMOUSE_PADDLE_SENSITIVITY_INFO_0_UK "Чутливість при використанні RetroMouse для весла."
#define DICE_WHEEL_KEYJOY_SENSITIVITY_LABEL_UK "Введення > Чутливість колеса"
#define DICE_WHEEL_KEYJOY_SENSITIVITY_LABEL_CAT_UK "Чутливість колеса"
#define DICE_WHEEL_KEYJOY_SENSITIVITY_INFO_0_UK "Чутливість при використанні D-панелі або аналогової палички для колеса."
#define DICE_THROTTLE_KEYJOY_SENSITIVITY_LABEL_UK "Введення > Дросель Чутливість"
#define DICE_THROTTLE_KEYJOY_SENSITIVITY_LABEL_CAT_UK "Дросельна чутливість"
#define DICE_THROTTLE_KEYJOY_SENSITIVITY_INFO_0_UK "Чутливість при використанні D-pad або аналогової палички для дроту."
#define DICE_RETROMOUSE_PADDLE0_LABEL_UK "RetroMouse > Використовувати мишу для пелюстки 1"
#define DICE_RETROMOUSE_PADDLE0_LABEL_CAT_UK "Використовувати миші для Падла 1"
#define DICE_RETROMOUSE_PADDLE0_INFO_0_UK "Використовувати особливу мишку для Падла 1, обрану за індексом миші Порт 1."
#define DICE_RETROMOUSE_PADDLE1_LABEL_UK "RetroMouse > Використовувати миші для платформи 2"
#define DICE_RETROMOUSE_PADDLE1_LABEL_CAT_UK "Використовувати миші для Падла 2"
#define DICE_RETROMOUSE_PADDLE1_INFO_0_UK "Використовувати особливу мишку для Paddle 2, обрано індексом миші Порт 2."
#define DICE_RETROMOUSE_PADDLE2_LABEL_UK "RetroMouse > Використовувати миші для платформи 3"
#define DICE_RETROMOUSE_PADDLE2_LABEL_CAT_UK "Використовувати миші для Падла 3"
#define DICE_RETROMOUSE_PADDLE2_INFO_0_UK "Використовувати особливу мишку для Paddle 3 обрано індексом миші Порт 3."
#define DICE_RETROMOUSE_PADDLE3_LABEL_UK "RetroMouse > Використовувати миші для платформи 4"
#define DICE_RETROMOUSE_PADDLE3_LABEL_CAT_UK "Використати миші для платформи 4"
#define DICE_RETROMOUSE_PADDLE3_INFO_0_UK "Використовувати особливу мишку для Paddle 4, обраний за індексом миші Порт 4."
#define DICE_RETROMOUSE_PADDLE0_X_LABEL_UK "Ретромиша > вісь миші для платформи 1 Горизонтальна"
#define DICE_RETROMOUSE_PADDLE0_X_LABEL_CAT_UK "Вісь миші для платформи 1 Горизонтальної"
#define DICE_RETROMOUSE_PADDLE0_X_INFO_0_UK "Вісь миші для гравця 1, горизонтальний екран."
#define OPTION_VAL_X_UK "х"
#define OPTION_VAL_Y_UK "р"
#define DICE_RETROMOUSE_PADDLE0_Y_LABEL_UK "Ретромиша > вісь миші для платформи 1 вертикального"
#define DICE_RETROMOUSE_PADDLE0_Y_LABEL_CAT_UK "Вісь миші для Падла 1 вертикальної"
#define DICE_RETROMOUSE_PADDLE0_Y_INFO_0_UK "Вісь миші для гравця 1, вертикальний рух."
#define DICE_RETROMOUSE_PADDLE1_X_LABEL_UK "Ретромиша > вісь миші для платформи 2 Горизонтальна"
#define DICE_RETROMOUSE_PADDLE1_X_LABEL_CAT_UK "Вісь миші для платформи 2 Горизонтальної"
#define DICE_RETROMOUSE_PADDLE1_X_INFO_0_UK "Вісь миші для переміщення гравця 2, горизонтальний екран."
#define DICE_RETROMOUSE_PADDLE1_Y_LABEL_UK "RetroMouse > вісь миші для платформи 2 вертикально"
#define DICE_RETROMOUSE_PADDLE1_Y_LABEL_CAT_UK "Вісь миші для платформи 2 вертикально"
#define DICE_RETROMOUSE_PADDLE1_Y_INFO_0_UK "Вісь миші для руху 2, вертикального екрану для гравця."
#define DICE_RETROMOUSE_PADDLE2_X_LABEL_UK "Ретромиша > вісь миші для платформи 3 Горизонтального"
#define DICE_RETROMOUSE_PADDLE2_X_LABEL_CAT_UK "Вісь миші для платформи 3 Горизонтальної"
#define DICE_RETROMOUSE_PADDLE2_X_INFO_0_UK "Вісь миші для руху 3 гравця, горизонтальний екран."
#define DICE_RETROMOUSE_PADDLE2_Y_LABEL_UK "Ретромиша > вісь миші для платформи 3 вертикальних"
#define DICE_RETROMOUSE_PADDLE2_Y_LABEL_CAT_UK "Вісь миші для Падла 3 вертикальної"
#define DICE_RETROMOUSE_PADDLE2_Y_INFO_0_UK "Вісь миші для руху 3 гравця, вертикальний екран."
#define DICE_RETROMOUSE_PADDLE3_X_LABEL_UK "Ретромиша > вісь миші для платформи 4 Горизонтальної"
#define DICE_RETROMOUSE_PADDLE3_X_LABEL_CAT_UK "Вісь миші для платформи 4 Горизонтальної"
#define DICE_RETROMOUSE_PADDLE3_X_INFO_0_UK "Вісь миші для руху 4, горизонтальний екран."
#define DICE_RETROMOUSE_PADDLE3_Y_LABEL_UK "RetroMouse > вісь миші для платформи 4 вертикальних"
#define DICE_RETROMOUSE_PADDLE3_Y_LABEL_CAT_UK "Вісь миші для платформи 4 вертикального"
#define DICE_RETROMOUSE_PADDLE3_Y_INFO_0_UK "Вісь миші для руху 4 гравця, вертикальний екран."
#define DICE_MANYMOUSE_PADDLE0_LABEL_UK "Багатомиша > Використання миші для Падла 1"
#define DICE_MANYMOUSE_PADDLE0_INFO_0_UK "Використовуйте мишку для Падла 1."
#define DICE_MANYMOUSE_PADDLE0_X_LABEL_UK "Манна Миша > Миша 1 x"
#define DICE_MANYMOUSE_PADDLE0_X_LABEL_CAT_UK "Весло для миші 1 x"
#define OPTION_VAL_0X_UK "0х"
#define OPTION_VAL_0Y_UK "0р"
#define OPTION_VAL_1X_UK NULL
#define OPTION_VAL_1Y_UK "1р"
#define OPTION_VAL_2X_UK NULL
#define OPTION_VAL_2Y_UK "2р"
#define OPTION_VAL_3X_UK NULL
#define OPTION_VAL_3Y_UK "3р"
#define DICE_MANYMOUSE_PADDLE0_Y_LABEL_UK "ManyMouse > Миша-лопатка 1 р"
#define DICE_MANYMOUSE_PADDLE0_Y_LABEL_CAT_UK "Весло для миші 1 р"
#define DICE_MANYMOUSE_PADDLE1_LABEL_UK "Багатомиша > Використання миші для Падла 2"
#define DICE_MANYMOUSE_PADDLE1_INFO_0_UK "Використовуйте мишку для Ведла 2."
#define DICE_MANYMOUSE_PADDLE1_X_LABEL_UK "Манна Миша > Миша 2 x"
#define DICE_MANYMOUSE_PADDLE1_X_LABEL_CAT_UK "Весло для миші 2 x"
#define DICE_MANYMOUSE_PADDLE1_Y_LABEL_UK "ManyMouse > Миша-лопатка 2 р"
#define DICE_MANYMOUSE_PADDLE1_Y_LABEL_CAT_UK "Весло для миші 2 р"
#define DICE_MANYMOUSE_PADDLE2_LABEL_UK "Багатомиша > Використовувати миші для Падла 3"
#define DICE_MANYMOUSE_PADDLE2_INFO_0_UK "Використовуйте мишку для Падла 3."
#define DICE_MANYMOUSE_PADDLE2_X_LABEL_UK "Манна Миша > Миша 3 x"
#define DICE_MANYMOUSE_PADDLE2_X_LABEL_CAT_UK "Весло для миші 3 x"
#define DICE_MANYMOUSE_PADDLE2_Y_LABEL_UK "ManyMouse > Миша-лопатка 3 р"
#define DICE_MANYMOUSE_PADDLE2_Y_LABEL_CAT_UK "Весло для миші 3 р"
#define DICE_MANYMOUSE_PADDLE3_LABEL_UK "Багатомиша > Використовувати миші для Падла 4"
#define DICE_MANYMOUSE_PADDLE3_INFO_0_UK "Скористайтеся мишею для платформи 4."
#define DICE_MANYMOUSE_PADDLE3_X_LABEL_UK "Манна Миша > Миша 4 x"
#define DICE_MANYMOUSE_PADDLE3_X_LABEL_CAT_UK "Весло для миші 4 x"
#define DICE_MANYMOUSE_PADDLE3_Y_LABEL_UK "ManyMouse > Миша-лопатка 4 р"
#define DICE_MANYMOUSE_PADDLE3_Y_LABEL_CAT_UK "Весло для миші 4 р"
#define DICE_DIPSWITCH_1_LABEL_UK "DIP перемикач > DIP перемикач 1"
#define DICE_DIPSWITCH_1_LABEL_CAT_UK "DIP перемикач 1"
#define DICE_DIPSWITCH_1_INFO_0_UK "Налаштування DIP перемикача 1."
#define OPTION_VAL_1_UK "за замовчуванням"
#define DICE_DIPSWITCH_2_LABEL_UK "DIP перемикач > DIP перемикач 2"
#define DICE_DIPSWITCH_2_LABEL_CAT_UK "Перемикач DIP 2"
#define DICE_DIPSWITCH_2_INFO_0_UK "Параметр для перемикача DIP 2."
#define DICE_DIPSWITCH_3_LABEL_UK "Перемикання DIP > DIP - перемикач 3"
#define DICE_DIPSWITCH_3_LABEL_CAT_UK "Перемикач DIP 3"
#define DICE_DIPSWITCH_3_INFO_0_UK "Параметр для перемикача DIP 3."
#define DICE_DIPSWITCH16_1_LABEL_UK NULL
#define DICE_DIPSWITCH16_1_LABEL_CAT_UK NULL
#define DICE_DIPSWITCH16_1_INFO_0_UK "Параметр 16-позиційного перемикання DIP 1."
#define DICE_DIPSWITCH16_2_LABEL_UK NULL
#define DICE_DIPSWITCH16_2_LABEL_CAT_UK NULL
#define DICE_DIPSWITCH16_2_INFO_0_UK "Параметр для 16-позиційного DIP перемикання номера 2."

struct retro_core_option_v2_category option_cats_uk[] = {
   {
      "input",
      CATEGORY_INPUT_LABEL_UK,
      CATEGORY_INPUT_INFO_0_UK
   },
   {
      "retromouse",
      CATEGORY_RETROMOUSE_LABEL_UK,
      CATEGORY_RETROMOUSE_INFO_0_UK
   },
#ifdef MANYMOUSE
   {
      "manymouse",
      CATEGORY_MANYMOUSE_LABEL_UK,
      CATEGORY_MANYMOUSE_INFO_0_UK
   },
#endif
   {
      "dipswitch",
      CATEGORY_DIPSWITCH_LABEL_UK,
      CATEGORY_DIPSWITCH_INFO_0_UK
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_uk[] = {
   {
      "dice_use_mouse_pointer_for_paddle_1",
      DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_LABEL_UK,
      DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_LABEL_CAT_UK,
      DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_INFO_0_UK,
      NULL,
      "input",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_paddle_joystick_absolute",
      DICE_PADDLE_JOYSTICK_ABSOLUTE_LABEL_UK,
      DICE_PADDLE_JOYSTICK_ABSOLUTE_LABEL_CAT_UK,
      DICE_PADDLE_JOYSTICK_ABSOLUTE_INFO_0_UK,
      NULL,
      "input",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      // D-pad but not necessarily keyboard under libretro,
      // that name comes from the upstream code.
      "dice_paddle_keyboard_sensitivity",
      DICE_PADDLE_KEYBOARD_SENSITIVITY_LABEL_UK,
      DICE_PADDLE_KEYBOARD_SENSITIVITY_LABEL_CAT_UK,
      DICE_PADDLE_KEYBOARD_SENSITIVITY_INFO_0_UK,
      NULL,
      "input",
      {
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "250"
   },
   {
      "dice_paddle_joystick_sensitivity",
      DICE_PADDLE_JOYSTICK_SENSITIVITY_LABEL_UK,
      DICE_PADDLE_JOYSTICK_SENSITIVITY_LABEL_CAT_UK,
      DICE_PADDLE_JOYSTICK_SENSITIVITY_INFO_0_UK,
      NULL,
      "input",
      {
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "500"
   },
   {
      "dice_retromouse_paddle_sensitivity",
      DICE_RETROMOUSE_PADDLE_SENSITIVITY_LABEL_UK,
      DICE_RETROMOUSE_PADDLE_SENSITIVITY_LABEL_CAT_UK,
      DICE_RETROMOUSE_PADDLE_SENSITIVITY_INFO_0_UK,
      NULL,
      "input",
      {
         {"25", NULL},
         {"50", NULL},
         {"75", NULL},
         {"100", NULL},
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "125"
   },
   {
      "dice_wheel_keyjoy_sensitivity",
      DICE_WHEEL_KEYJOY_SENSITIVITY_LABEL_UK,
      DICE_WHEEL_KEYJOY_SENSITIVITY_LABEL_CAT_UK,
      DICE_WHEEL_KEYJOY_SENSITIVITY_INFO_0_UK,
      NULL,
      "input",
      {
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "500"
   },
   {
      "dice_throttle_keyjoy_sensitivity",
      DICE_THROTTLE_KEYJOY_SENSITIVITY_LABEL_UK,
      DICE_THROTTLE_KEYJOY_SENSITIVITY_LABEL_CAT_UK,
      DICE_THROTTLE_KEYJOY_SENSITIVITY_INFO_0_UK,
      NULL,
      "input",
      {
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "250"
   },

   {
      "dice_retromouse_paddle0",
      DICE_RETROMOUSE_PADDLE0_LABEL_UK,
      DICE_RETROMOUSE_PADDLE0_LABEL_CAT_UK,
      DICE_RETROMOUSE_PADDLE0_INFO_0_UK,
      NULL,
      "retromouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_retromouse_paddle1",
      DICE_RETROMOUSE_PADDLE1_LABEL_UK,
      DICE_RETROMOUSE_PADDLE1_LABEL_CAT_UK,
      DICE_RETROMOUSE_PADDLE1_INFO_0_UK,
      NULL,
      "retromouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_retromouse_paddle2",
      DICE_RETROMOUSE_PADDLE2_LABEL_UK,
      DICE_RETROMOUSE_PADDLE2_LABEL_CAT_UK,
      DICE_RETROMOUSE_PADDLE2_INFO_0_UK,
      NULL,
      "retromouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_retromouse_paddle3",
      DICE_RETROMOUSE_PADDLE3_LABEL_UK,
      DICE_RETROMOUSE_PADDLE3_LABEL_CAT_UK,
      DICE_RETROMOUSE_PADDLE3_INFO_0_UK,
      NULL,
      "retromouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_retromouse_paddle0_x",
      DICE_RETROMOUSE_PADDLE0_X_LABEL_UK,
      DICE_RETROMOUSE_PADDLE0_X_LABEL_CAT_UK,
      DICE_RETROMOUSE_PADDLE0_X_INFO_0_UK,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_UK},
         {"y", OPTION_VAL_Y_UK},
         {NULL, NULL},
      },
      "x"
   },
   {
      "dice_retromouse_paddle0_y",
      DICE_RETROMOUSE_PADDLE0_Y_LABEL_UK,
      DICE_RETROMOUSE_PADDLE0_Y_LABEL_CAT_UK,
      DICE_RETROMOUSE_PADDLE0_Y_INFO_0_UK,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_UK},
         {"y", OPTION_VAL_Y_UK},
         {NULL, NULL},
      },
      "y"
   },
   {
      "dice_retromouse_paddle1_x",
      DICE_RETROMOUSE_PADDLE1_X_LABEL_UK,
      DICE_RETROMOUSE_PADDLE1_X_LABEL_CAT_UK,
      DICE_RETROMOUSE_PADDLE1_X_INFO_0_UK,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_UK},
         {"y", OPTION_VAL_Y_UK},
         {NULL, NULL},
      },
      "x"
   },
   {
      "dice_retromouse_paddle1_y",
      DICE_RETROMOUSE_PADDLE1_Y_LABEL_UK,
      DICE_RETROMOUSE_PADDLE1_Y_LABEL_CAT_UK,
      DICE_RETROMOUSE_PADDLE1_Y_INFO_0_UK,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_UK},
         {"y", OPTION_VAL_Y_UK},
         {NULL, NULL},
      },
      "y"
   },
   {
      "dice_retromouse_paddle2_x",
      DICE_RETROMOUSE_PADDLE2_X_LABEL_UK,
      DICE_RETROMOUSE_PADDLE2_X_LABEL_CAT_UK,
      DICE_RETROMOUSE_PADDLE2_X_INFO_0_UK,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_UK},
         {"y", OPTION_VAL_Y_UK},
         {NULL, NULL},
      },
      "x"
   },
   {
      "dice_retromouse_paddle2_y",
      DICE_RETROMOUSE_PADDLE2_Y_LABEL_UK,
      DICE_RETROMOUSE_PADDLE2_Y_LABEL_CAT_UK,
      DICE_RETROMOUSE_PADDLE2_Y_INFO_0_UK,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_UK},
         {"y", OPTION_VAL_Y_UK},
         {NULL, NULL},
      },
      "y"
   },
   {
      "dice_retromouse_paddle3_x",
      DICE_RETROMOUSE_PADDLE3_X_LABEL_UK,
      DICE_RETROMOUSE_PADDLE3_X_LABEL_CAT_UK,
      DICE_RETROMOUSE_PADDLE3_X_INFO_0_UK,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_UK},
         {"y", OPTION_VAL_Y_UK},
         {NULL, NULL},
      },
      "x"
   },
   {
      "dice_retromouse_paddle3_y",
      DICE_RETROMOUSE_PADDLE3_Y_LABEL_UK,
      DICE_RETROMOUSE_PADDLE3_Y_LABEL_CAT_UK,
      DICE_RETROMOUSE_PADDLE3_Y_INFO_0_UK,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_UK},
         {"y", OPTION_VAL_Y_UK},
         {NULL, NULL},
      },
      "y"
   },

#ifdef MANYMOUSE
   {
      "dice_manymouse_paddle0",
      DICE_MANYMOUSE_PADDLE0_LABEL_UK,
      DICE_RETROMOUSE_PADDLE0_LABEL_CAT_UK,
      DICE_MANYMOUSE_PADDLE0_INFO_0_UK,
      NULL,
      "manymouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_manymouse_paddle0_x",
      DICE_MANYMOUSE_PADDLE0_X_LABEL_UK,
      DICE_MANYMOUSE_PADDLE0_X_LABEL_CAT_UK,
      DICE_RETROMOUSE_PADDLE0_X_INFO_0_UK,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_UK},
         {"0y", OPTION_VAL_0Y_UK},
         {"1x", OPTION_VAL_1X_UK},
         {"1y", OPTION_VAL_1Y_UK},
         {"2x", OPTION_VAL_2X_UK},
         {"2y", OPTION_VAL_2Y_UK},
         {"3x", OPTION_VAL_3X_UK},
         {"3y", OPTION_VAL_3Y_UK},
         {NULL, NULL},
      },
      "0x"
   },
   {
      "dice_manymouse_paddle0_y",
      DICE_MANYMOUSE_PADDLE0_Y_LABEL_UK,
      DICE_MANYMOUSE_PADDLE0_Y_LABEL_CAT_UK,
      DICE_RETROMOUSE_PADDLE0_Y_INFO_0_UK,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_UK},
         {"0y", OPTION_VAL_0Y_UK},
         {"1x", OPTION_VAL_1X_UK},
         {"1y", OPTION_VAL_1Y_UK},
         {"2x", OPTION_VAL_2X_UK},
         {"2y", OPTION_VAL_2Y_UK},
         {"3x", OPTION_VAL_3X_UK},
         {"3y", OPTION_VAL_3Y_UK},
         {NULL, NULL},
      },
      "0y"
   },
   {
      "dice_manymouse_paddle1",
      DICE_MANYMOUSE_PADDLE1_LABEL_UK,
      DICE_RETROMOUSE_PADDLE1_LABEL_CAT_UK,
      DICE_MANYMOUSE_PADDLE1_INFO_0_UK,
      NULL,
      "manymouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_manymouse_paddle1_x",
      DICE_MANYMOUSE_PADDLE1_X_LABEL_UK,
      DICE_MANYMOUSE_PADDLE1_X_LABEL_CAT_UK,
      DICE_RETROMOUSE_PADDLE1_X_INFO_0_UK,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_UK},
         {"0y", OPTION_VAL_0Y_UK},
         {"1x", OPTION_VAL_1X_UK},
         {"1y", OPTION_VAL_1Y_UK},
         {"2x", OPTION_VAL_2X_UK},
         {"2y", OPTION_VAL_2Y_UK},
         {"3x", OPTION_VAL_3X_UK},
         {"3y", OPTION_VAL_3Y_UK},
         {NULL, NULL},
      },
      "1x"
   },
   {
      "dice_manymouse_paddle1_y",
      DICE_MANYMOUSE_PADDLE1_Y_LABEL_UK,
      DICE_MANYMOUSE_PADDLE1_Y_LABEL_CAT_UK,
      DICE_RETROMOUSE_PADDLE1_Y_INFO_0_UK,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_UK},
         {"0y", OPTION_VAL_0Y_UK},
         {"1x", OPTION_VAL_1X_UK},
         {"1y", OPTION_VAL_1Y_UK},
         {"2x", OPTION_VAL_2X_UK},
         {"2y", OPTION_VAL_2Y_UK},
         {"3x", OPTION_VAL_3X_UK},
         {"3y", OPTION_VAL_3Y_UK},
         {NULL, NULL},
      },
      "1y"
   },
   {
      "dice_manymouse_paddle2",
      DICE_MANYMOUSE_PADDLE2_LABEL_UK,
      DICE_RETROMOUSE_PADDLE2_LABEL_CAT_UK,
      DICE_MANYMOUSE_PADDLE2_INFO_0_UK,
      NULL,
      "manymouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_manymouse_paddle2_x",
      DICE_MANYMOUSE_PADDLE2_X_LABEL_UK,
      DICE_MANYMOUSE_PADDLE2_X_LABEL_CAT_UK,
      DICE_RETROMOUSE_PADDLE2_X_INFO_0_UK,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_UK},
         {"0y", OPTION_VAL_0Y_UK},
         {"1x", OPTION_VAL_1X_UK},
         {"1y", OPTION_VAL_1Y_UK},
         {"2x", OPTION_VAL_2X_UK},
         {"2y", OPTION_VAL_2Y_UK},
         {"3x", OPTION_VAL_3X_UK},
         {"3y", OPTION_VAL_3Y_UK},
         {NULL, NULL},
      },
      "2x"
   },
   {
      "dice_manymouse_paddle2_y",
      DICE_MANYMOUSE_PADDLE2_Y_LABEL_UK,
      DICE_MANYMOUSE_PADDLE2_Y_LABEL_CAT_UK,
      DICE_RETROMOUSE_PADDLE2_Y_INFO_0_UK,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_UK},
         {"0y", OPTION_VAL_0Y_UK},
         {"1x", OPTION_VAL_1X_UK},
         {"1y", OPTION_VAL_1Y_UK},
         {"2x", OPTION_VAL_2X_UK},
         {"2y", OPTION_VAL_2Y_UK},
         {"3x", OPTION_VAL_3X_UK},
         {"3y", OPTION_VAL_3Y_UK},
         {NULL, NULL},
      },
      "2y"
   },
   {
      "dice_manymouse_paddle3",
      DICE_MANYMOUSE_PADDLE3_LABEL_UK,
      DICE_RETROMOUSE_PADDLE3_LABEL_CAT_UK,
      DICE_MANYMOUSE_PADDLE3_INFO_0_UK,
      NULL,
      "manymouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_manymouse_paddle3_x",
      DICE_MANYMOUSE_PADDLE3_X_LABEL_UK,
      DICE_MANYMOUSE_PADDLE3_X_LABEL_CAT_UK,
      DICE_RETROMOUSE_PADDLE3_X_INFO_0_UK,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_UK},
         {"0y", OPTION_VAL_0Y_UK},
         {"1x", OPTION_VAL_1X_UK},
         {"1y", OPTION_VAL_1Y_UK},
         {"2x", OPTION_VAL_2X_UK},
         {"2y", OPTION_VAL_2Y_UK},
         {"3x", OPTION_VAL_3X_UK},
         {"3y", OPTION_VAL_3Y_UK},
         {NULL, NULL},
      },
      "3x"
   },
   {
      "dice_manymouse_paddle3_y",
      DICE_MANYMOUSE_PADDLE3_Y_LABEL_UK,
      DICE_MANYMOUSE_PADDLE3_Y_LABEL_CAT_UK,
      DICE_RETROMOUSE_PADDLE3_Y_INFO_0_UK,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_UK},
         {"0y", OPTION_VAL_0Y_UK},
         {"1x", OPTION_VAL_1X_UK},
         {"1y", OPTION_VAL_1Y_UK},
         {"2x", OPTION_VAL_2X_UK},
         {"2y", OPTION_VAL_2Y_UK},
         {"3x", OPTION_VAL_3X_UK},
         {"3y", OPTION_VAL_3Y_UK},
         {NULL, NULL},
      },
      "3y"
   },
#endif

   {
      "dice_dipswitch_1",
      DICE_DIPSWITCH_1_LABEL_UK,
      DICE_DIPSWITCH_1_LABEL_CAT_UK,
      DICE_DIPSWITCH_1_INFO_0_UK,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_UK},
         {"0", NULL},
         {"1", NULL},
         {NULL, NULL},
      },
      "-1"
   },
   {
      "dice_dipswitch_2",
      DICE_DIPSWITCH_2_LABEL_UK,
      DICE_DIPSWITCH_2_LABEL_CAT_UK,
      DICE_DIPSWITCH_2_INFO_0_UK,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_UK},
         {"0", NULL},
         {"1", NULL},
         {NULL, NULL},
      },
      "-1"
   },
   {
      "dice_dipswitch_3",
      DICE_DIPSWITCH_3_LABEL_UK,
      DICE_DIPSWITCH_3_LABEL_CAT_UK,
      DICE_DIPSWITCH_3_INFO_0_UK,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_UK},
         {"0", NULL},
         {"1", NULL},
         {NULL, NULL},
      },
      "-1"
   },
   {
      "dice_dipswitch16_1",
      DICE_DIPSWITCH16_1_LABEL_UK,
      DICE_DIPSWITCH16_1_LABEL_CAT_UK,
      DICE_DIPSWITCH16_1_INFO_0_UK,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_UK},
         {"0", NULL},
         {"1", NULL},
         {"2", NULL},
         {"3", NULL},
         {"4", NULL},
         {"5", NULL},
         {"6", NULL},
         {"7", NULL},
         {"8", NULL},
         {"9", NULL},
         {"10", NULL},
         {"11", NULL},
         {"12", NULL},
         {"13", NULL},
         {"14", NULL},
         {"15", NULL},
         {NULL, NULL},
      },
      "-1"
   },
   {
      "dice_dipswitch16_2",
      DICE_DIPSWITCH16_2_LABEL_UK,
      DICE_DIPSWITCH16_2_LABEL_CAT_UK,
      DICE_DIPSWITCH16_2_INFO_0_UK,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_UK},
         {"0", NULL},
         {"1", NULL},
         {"2", NULL},
         {"3", NULL},
         {"4", NULL},
         {"5", NULL},
         {"6", NULL},
         {"7", NULL},
         {"8", NULL},
         {"9", NULL},
         {"10", NULL},
         {"11", NULL},
         {"12", NULL},
         {"13", NULL},
         {"14", NULL},
         {"15", NULL},
         {NULL, NULL},
      },
      "-1"
   },

   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_uk = {
   option_cats_uk,
   option_defs_uk
};

/* RETRO_LANGUAGE_VAL */

#define CATEGORY_INPUT_LABEL_VAL "Entrada"
#define CATEGORY_INPUT_INFO_0_VAL NULL
#define CATEGORY_RETROMOUSE_LABEL_VAL NULL
#define CATEGORY_RETROMOUSE_INFO_0_VAL NULL
#define CATEGORY_MANYMOUSE_LABEL_VAL NULL
#define CATEGORY_MANYMOUSE_INFO_0_VAL NULL
#define CATEGORY_DIPSWITCH_LABEL_VAL NULL
#define CATEGORY_DIPSWITCH_INFO_0_VAL NULL
#define DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_LABEL_VAL NULL
#define DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_LABEL_CAT_VAL NULL
#define DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_INFO_0_VAL NULL
#define DICE_PADDLE_JOYSTICK_ABSOLUTE_LABEL_VAL NULL
#define DICE_PADDLE_JOYSTICK_ABSOLUTE_LABEL_CAT_VAL NULL
#define DICE_PADDLE_JOYSTICK_ABSOLUTE_INFO_0_VAL NULL
#define DICE_PADDLE_KEYBOARD_SENSITIVITY_LABEL_VAL NULL
#define DICE_PADDLE_KEYBOARD_SENSITIVITY_LABEL_CAT_VAL NULL
#define DICE_PADDLE_KEYBOARD_SENSITIVITY_INFO_0_VAL NULL
#define DICE_PADDLE_JOYSTICK_SENSITIVITY_LABEL_VAL NULL
#define DICE_PADDLE_JOYSTICK_SENSITIVITY_LABEL_CAT_VAL NULL
#define DICE_PADDLE_JOYSTICK_SENSITIVITY_INFO_0_VAL NULL
#define DICE_RETROMOUSE_PADDLE_SENSITIVITY_LABEL_VAL NULL
#define DICE_RETROMOUSE_PADDLE_SENSITIVITY_LABEL_CAT_VAL NULL
#define DICE_RETROMOUSE_PADDLE_SENSITIVITY_INFO_0_VAL NULL
#define DICE_WHEEL_KEYJOY_SENSITIVITY_LABEL_VAL NULL
#define DICE_WHEEL_KEYJOY_SENSITIVITY_LABEL_CAT_VAL NULL
#define DICE_WHEEL_KEYJOY_SENSITIVITY_INFO_0_VAL NULL
#define DICE_THROTTLE_KEYJOY_SENSITIVITY_LABEL_VAL NULL
#define DICE_THROTTLE_KEYJOY_SENSITIVITY_LABEL_CAT_VAL NULL
#define DICE_THROTTLE_KEYJOY_SENSITIVITY_INFO_0_VAL NULL
#define DICE_RETROMOUSE_PADDLE0_LABEL_VAL NULL
#define DICE_RETROMOUSE_PADDLE0_LABEL_CAT_VAL NULL
#define DICE_RETROMOUSE_PADDLE0_INFO_0_VAL NULL
#define DICE_RETROMOUSE_PADDLE1_LABEL_VAL NULL
#define DICE_RETROMOUSE_PADDLE1_LABEL_CAT_VAL NULL
#define DICE_RETROMOUSE_PADDLE1_INFO_0_VAL NULL
#define DICE_RETROMOUSE_PADDLE2_LABEL_VAL NULL
#define DICE_RETROMOUSE_PADDLE2_LABEL_CAT_VAL NULL
#define DICE_RETROMOUSE_PADDLE2_INFO_0_VAL NULL
#define DICE_RETROMOUSE_PADDLE3_LABEL_VAL NULL
#define DICE_RETROMOUSE_PADDLE3_LABEL_CAT_VAL NULL
#define DICE_RETROMOUSE_PADDLE3_INFO_0_VAL NULL
#define DICE_RETROMOUSE_PADDLE0_X_LABEL_VAL NULL
#define DICE_RETROMOUSE_PADDLE0_X_LABEL_CAT_VAL NULL
#define DICE_RETROMOUSE_PADDLE0_X_INFO_0_VAL NULL
#define OPTION_VAL_X_VAL NULL
#define OPTION_VAL_Y_VAL NULL
#define DICE_RETROMOUSE_PADDLE0_Y_LABEL_VAL NULL
#define DICE_RETROMOUSE_PADDLE0_Y_LABEL_CAT_VAL NULL
#define DICE_RETROMOUSE_PADDLE0_Y_INFO_0_VAL NULL
#define DICE_RETROMOUSE_PADDLE1_X_LABEL_VAL NULL
#define DICE_RETROMOUSE_PADDLE1_X_LABEL_CAT_VAL NULL
#define DICE_RETROMOUSE_PADDLE1_X_INFO_0_VAL NULL
#define DICE_RETROMOUSE_PADDLE1_Y_LABEL_VAL NULL
#define DICE_RETROMOUSE_PADDLE1_Y_LABEL_CAT_VAL NULL
#define DICE_RETROMOUSE_PADDLE1_Y_INFO_0_VAL NULL
#define DICE_RETROMOUSE_PADDLE2_X_LABEL_VAL NULL
#define DICE_RETROMOUSE_PADDLE2_X_LABEL_CAT_VAL NULL
#define DICE_RETROMOUSE_PADDLE2_X_INFO_0_VAL NULL
#define DICE_RETROMOUSE_PADDLE2_Y_LABEL_VAL NULL
#define DICE_RETROMOUSE_PADDLE2_Y_LABEL_CAT_VAL NULL
#define DICE_RETROMOUSE_PADDLE2_Y_INFO_0_VAL NULL
#define DICE_RETROMOUSE_PADDLE3_X_LABEL_VAL NULL
#define DICE_RETROMOUSE_PADDLE3_X_LABEL_CAT_VAL NULL
#define DICE_RETROMOUSE_PADDLE3_X_INFO_0_VAL NULL
#define DICE_RETROMOUSE_PADDLE3_Y_LABEL_VAL NULL
#define DICE_RETROMOUSE_PADDLE3_Y_LABEL_CAT_VAL NULL
#define DICE_RETROMOUSE_PADDLE3_Y_INFO_0_VAL NULL
#define DICE_MANYMOUSE_PADDLE0_LABEL_VAL NULL
#define DICE_MANYMOUSE_PADDLE0_INFO_0_VAL NULL
#define DICE_MANYMOUSE_PADDLE0_X_LABEL_VAL NULL
#define DICE_MANYMOUSE_PADDLE0_X_LABEL_CAT_VAL NULL
#define OPTION_VAL_0X_VAL NULL
#define OPTION_VAL_0Y_VAL NULL
#define OPTION_VAL_1X_VAL NULL
#define OPTION_VAL_1Y_VAL NULL
#define OPTION_VAL_2X_VAL NULL
#define OPTION_VAL_2Y_VAL NULL
#define OPTION_VAL_3X_VAL NULL
#define OPTION_VAL_3Y_VAL NULL
#define DICE_MANYMOUSE_PADDLE0_Y_LABEL_VAL NULL
#define DICE_MANYMOUSE_PADDLE0_Y_LABEL_CAT_VAL NULL
#define DICE_MANYMOUSE_PADDLE1_LABEL_VAL NULL
#define DICE_MANYMOUSE_PADDLE1_INFO_0_VAL NULL
#define DICE_MANYMOUSE_PADDLE1_X_LABEL_VAL NULL
#define DICE_MANYMOUSE_PADDLE1_X_LABEL_CAT_VAL NULL
#define DICE_MANYMOUSE_PADDLE1_Y_LABEL_VAL NULL
#define DICE_MANYMOUSE_PADDLE1_Y_LABEL_CAT_VAL NULL
#define DICE_MANYMOUSE_PADDLE2_LABEL_VAL NULL
#define DICE_MANYMOUSE_PADDLE2_INFO_0_VAL NULL
#define DICE_MANYMOUSE_PADDLE2_X_LABEL_VAL NULL
#define DICE_MANYMOUSE_PADDLE2_X_LABEL_CAT_VAL NULL
#define DICE_MANYMOUSE_PADDLE2_Y_LABEL_VAL NULL
#define DICE_MANYMOUSE_PADDLE2_Y_LABEL_CAT_VAL NULL
#define DICE_MANYMOUSE_PADDLE3_LABEL_VAL NULL
#define DICE_MANYMOUSE_PADDLE3_INFO_0_VAL NULL
#define DICE_MANYMOUSE_PADDLE3_X_LABEL_VAL NULL
#define DICE_MANYMOUSE_PADDLE3_X_LABEL_CAT_VAL NULL
#define DICE_MANYMOUSE_PADDLE3_Y_LABEL_VAL NULL
#define DICE_MANYMOUSE_PADDLE3_Y_LABEL_CAT_VAL NULL
#define DICE_DIPSWITCH_1_LABEL_VAL NULL
#define DICE_DIPSWITCH_1_LABEL_CAT_VAL NULL
#define DICE_DIPSWITCH_1_INFO_0_VAL NULL
#define OPTION_VAL_1_VAL NULL
#define DICE_DIPSWITCH_2_LABEL_VAL NULL
#define DICE_DIPSWITCH_2_LABEL_CAT_VAL NULL
#define DICE_DIPSWITCH_2_INFO_0_VAL NULL
#define DICE_DIPSWITCH_3_LABEL_VAL NULL
#define DICE_DIPSWITCH_3_LABEL_CAT_VAL NULL
#define DICE_DIPSWITCH_3_INFO_0_VAL NULL
#define DICE_DIPSWITCH16_1_LABEL_VAL NULL
#define DICE_DIPSWITCH16_1_LABEL_CAT_VAL NULL
#define DICE_DIPSWITCH16_1_INFO_0_VAL NULL
#define DICE_DIPSWITCH16_2_LABEL_VAL NULL
#define DICE_DIPSWITCH16_2_LABEL_CAT_VAL NULL
#define DICE_DIPSWITCH16_2_INFO_0_VAL NULL

struct retro_core_option_v2_category option_cats_val[] = {
   {
      "input",
      CATEGORY_INPUT_LABEL_VAL,
      CATEGORY_INPUT_INFO_0_VAL
   },
   {
      "retromouse",
      CATEGORY_RETROMOUSE_LABEL_VAL,
      CATEGORY_RETROMOUSE_INFO_0_VAL
   },
#ifdef MANYMOUSE
   {
      "manymouse",
      CATEGORY_MANYMOUSE_LABEL_VAL,
      CATEGORY_MANYMOUSE_INFO_0_VAL
   },
#endif
   {
      "dipswitch",
      CATEGORY_DIPSWITCH_LABEL_VAL,
      CATEGORY_DIPSWITCH_INFO_0_VAL
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_val[] = {
   {
      "dice_use_mouse_pointer_for_paddle_1",
      DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_LABEL_VAL,
      DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_LABEL_CAT_VAL,
      DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_INFO_0_VAL,
      NULL,
      "input",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_paddle_joystick_absolute",
      DICE_PADDLE_JOYSTICK_ABSOLUTE_LABEL_VAL,
      DICE_PADDLE_JOYSTICK_ABSOLUTE_LABEL_CAT_VAL,
      DICE_PADDLE_JOYSTICK_ABSOLUTE_INFO_0_VAL,
      NULL,
      "input",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      // D-pad but not necessarily keyboard under libretro,
      // that name comes from the upstream code.
      "dice_paddle_keyboard_sensitivity",
      DICE_PADDLE_KEYBOARD_SENSITIVITY_LABEL_VAL,
      DICE_PADDLE_KEYBOARD_SENSITIVITY_LABEL_CAT_VAL,
      DICE_PADDLE_KEYBOARD_SENSITIVITY_INFO_0_VAL,
      NULL,
      "input",
      {
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "250"
   },
   {
      "dice_paddle_joystick_sensitivity",
      DICE_PADDLE_JOYSTICK_SENSITIVITY_LABEL_VAL,
      DICE_PADDLE_JOYSTICK_SENSITIVITY_LABEL_CAT_VAL,
      DICE_PADDLE_JOYSTICK_SENSITIVITY_INFO_0_VAL,
      NULL,
      "input",
      {
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "500"
   },
   {
      "dice_retromouse_paddle_sensitivity",
      DICE_RETROMOUSE_PADDLE_SENSITIVITY_LABEL_VAL,
      DICE_RETROMOUSE_PADDLE_SENSITIVITY_LABEL_CAT_VAL,
      DICE_RETROMOUSE_PADDLE_SENSITIVITY_INFO_0_VAL,
      NULL,
      "input",
      {
         {"25", NULL},
         {"50", NULL},
         {"75", NULL},
         {"100", NULL},
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "125"
   },
   {
      "dice_wheel_keyjoy_sensitivity",
      DICE_WHEEL_KEYJOY_SENSITIVITY_LABEL_VAL,
      DICE_WHEEL_KEYJOY_SENSITIVITY_LABEL_CAT_VAL,
      DICE_WHEEL_KEYJOY_SENSITIVITY_INFO_0_VAL,
      NULL,
      "input",
      {
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "500"
   },
   {
      "dice_throttle_keyjoy_sensitivity",
      DICE_THROTTLE_KEYJOY_SENSITIVITY_LABEL_VAL,
      DICE_THROTTLE_KEYJOY_SENSITIVITY_LABEL_CAT_VAL,
      DICE_THROTTLE_KEYJOY_SENSITIVITY_INFO_0_VAL,
      NULL,
      "input",
      {
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "250"
   },

   {
      "dice_retromouse_paddle0",
      DICE_RETROMOUSE_PADDLE0_LABEL_VAL,
      DICE_RETROMOUSE_PADDLE0_LABEL_CAT_VAL,
      DICE_RETROMOUSE_PADDLE0_INFO_0_VAL,
      NULL,
      "retromouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_retromouse_paddle1",
      DICE_RETROMOUSE_PADDLE1_LABEL_VAL,
      DICE_RETROMOUSE_PADDLE1_LABEL_CAT_VAL,
      DICE_RETROMOUSE_PADDLE1_INFO_0_VAL,
      NULL,
      "retromouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_retromouse_paddle2",
      DICE_RETROMOUSE_PADDLE2_LABEL_VAL,
      DICE_RETROMOUSE_PADDLE2_LABEL_CAT_VAL,
      DICE_RETROMOUSE_PADDLE2_INFO_0_VAL,
      NULL,
      "retromouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_retromouse_paddle3",
      DICE_RETROMOUSE_PADDLE3_LABEL_VAL,
      DICE_RETROMOUSE_PADDLE3_LABEL_CAT_VAL,
      DICE_RETROMOUSE_PADDLE3_INFO_0_VAL,
      NULL,
      "retromouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_retromouse_paddle0_x",
      DICE_RETROMOUSE_PADDLE0_X_LABEL_VAL,
      DICE_RETROMOUSE_PADDLE0_X_LABEL_CAT_VAL,
      DICE_RETROMOUSE_PADDLE0_X_INFO_0_VAL,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_VAL},
         {"y", OPTION_VAL_Y_VAL},
         {NULL, NULL},
      },
      "x"
   },
   {
      "dice_retromouse_paddle0_y",
      DICE_RETROMOUSE_PADDLE0_Y_LABEL_VAL,
      DICE_RETROMOUSE_PADDLE0_Y_LABEL_CAT_VAL,
      DICE_RETROMOUSE_PADDLE0_Y_INFO_0_VAL,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_VAL},
         {"y", OPTION_VAL_Y_VAL},
         {NULL, NULL},
      },
      "y"
   },
   {
      "dice_retromouse_paddle1_x",
      DICE_RETROMOUSE_PADDLE1_X_LABEL_VAL,
      DICE_RETROMOUSE_PADDLE1_X_LABEL_CAT_VAL,
      DICE_RETROMOUSE_PADDLE1_X_INFO_0_VAL,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_VAL},
         {"y", OPTION_VAL_Y_VAL},
         {NULL, NULL},
      },
      "x"
   },
   {
      "dice_retromouse_paddle1_y",
      DICE_RETROMOUSE_PADDLE1_Y_LABEL_VAL,
      DICE_RETROMOUSE_PADDLE1_Y_LABEL_CAT_VAL,
      DICE_RETROMOUSE_PADDLE1_Y_INFO_0_VAL,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_VAL},
         {"y", OPTION_VAL_Y_VAL},
         {NULL, NULL},
      },
      "y"
   },
   {
      "dice_retromouse_paddle2_x",
      DICE_RETROMOUSE_PADDLE2_X_LABEL_VAL,
      DICE_RETROMOUSE_PADDLE2_X_LABEL_CAT_VAL,
      DICE_RETROMOUSE_PADDLE2_X_INFO_0_VAL,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_VAL},
         {"y", OPTION_VAL_Y_VAL},
         {NULL, NULL},
      },
      "x"
   },
   {
      "dice_retromouse_paddle2_y",
      DICE_RETROMOUSE_PADDLE2_Y_LABEL_VAL,
      DICE_RETROMOUSE_PADDLE2_Y_LABEL_CAT_VAL,
      DICE_RETROMOUSE_PADDLE2_Y_INFO_0_VAL,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_VAL},
         {"y", OPTION_VAL_Y_VAL},
         {NULL, NULL},
      },
      "y"
   },
   {
      "dice_retromouse_paddle3_x",
      DICE_RETROMOUSE_PADDLE3_X_LABEL_VAL,
      DICE_RETROMOUSE_PADDLE3_X_LABEL_CAT_VAL,
      DICE_RETROMOUSE_PADDLE3_X_INFO_0_VAL,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_VAL},
         {"y", OPTION_VAL_Y_VAL},
         {NULL, NULL},
      },
      "x"
   },
   {
      "dice_retromouse_paddle3_y",
      DICE_RETROMOUSE_PADDLE3_Y_LABEL_VAL,
      DICE_RETROMOUSE_PADDLE3_Y_LABEL_CAT_VAL,
      DICE_RETROMOUSE_PADDLE3_Y_INFO_0_VAL,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_VAL},
         {"y", OPTION_VAL_Y_VAL},
         {NULL, NULL},
      },
      "y"
   },

#ifdef MANYMOUSE
   {
      "dice_manymouse_paddle0",
      DICE_MANYMOUSE_PADDLE0_LABEL_VAL,
      DICE_RETROMOUSE_PADDLE0_LABEL_CAT_VAL,
      DICE_MANYMOUSE_PADDLE0_INFO_0_VAL,
      NULL,
      "manymouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_manymouse_paddle0_x",
      DICE_MANYMOUSE_PADDLE0_X_LABEL_VAL,
      DICE_MANYMOUSE_PADDLE0_X_LABEL_CAT_VAL,
      DICE_RETROMOUSE_PADDLE0_X_INFO_0_VAL,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_VAL},
         {"0y", OPTION_VAL_0Y_VAL},
         {"1x", OPTION_VAL_1X_VAL},
         {"1y", OPTION_VAL_1Y_VAL},
         {"2x", OPTION_VAL_2X_VAL},
         {"2y", OPTION_VAL_2Y_VAL},
         {"3x", OPTION_VAL_3X_VAL},
         {"3y", OPTION_VAL_3Y_VAL},
         {NULL, NULL},
      },
      "0x"
   },
   {
      "dice_manymouse_paddle0_y",
      DICE_MANYMOUSE_PADDLE0_Y_LABEL_VAL,
      DICE_MANYMOUSE_PADDLE0_Y_LABEL_CAT_VAL,
      DICE_RETROMOUSE_PADDLE0_Y_INFO_0_VAL,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_VAL},
         {"0y", OPTION_VAL_0Y_VAL},
         {"1x", OPTION_VAL_1X_VAL},
         {"1y", OPTION_VAL_1Y_VAL},
         {"2x", OPTION_VAL_2X_VAL},
         {"2y", OPTION_VAL_2Y_VAL},
         {"3x", OPTION_VAL_3X_VAL},
         {"3y", OPTION_VAL_3Y_VAL},
         {NULL, NULL},
      },
      "0y"
   },
   {
      "dice_manymouse_paddle1",
      DICE_MANYMOUSE_PADDLE1_LABEL_VAL,
      DICE_RETROMOUSE_PADDLE1_LABEL_CAT_VAL,
      DICE_MANYMOUSE_PADDLE1_INFO_0_VAL,
      NULL,
      "manymouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_manymouse_paddle1_x",
      DICE_MANYMOUSE_PADDLE1_X_LABEL_VAL,
      DICE_MANYMOUSE_PADDLE1_X_LABEL_CAT_VAL,
      DICE_RETROMOUSE_PADDLE1_X_INFO_0_VAL,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_VAL},
         {"0y", OPTION_VAL_0Y_VAL},
         {"1x", OPTION_VAL_1X_VAL},
         {"1y", OPTION_VAL_1Y_VAL},
         {"2x", OPTION_VAL_2X_VAL},
         {"2y", OPTION_VAL_2Y_VAL},
         {"3x", OPTION_VAL_3X_VAL},
         {"3y", OPTION_VAL_3Y_VAL},
         {NULL, NULL},
      },
      "1x"
   },
   {
      "dice_manymouse_paddle1_y",
      DICE_MANYMOUSE_PADDLE1_Y_LABEL_VAL,
      DICE_MANYMOUSE_PADDLE1_Y_LABEL_CAT_VAL,
      DICE_RETROMOUSE_PADDLE1_Y_INFO_0_VAL,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_VAL},
         {"0y", OPTION_VAL_0Y_VAL},
         {"1x", OPTION_VAL_1X_VAL},
         {"1y", OPTION_VAL_1Y_VAL},
         {"2x", OPTION_VAL_2X_VAL},
         {"2y", OPTION_VAL_2Y_VAL},
         {"3x", OPTION_VAL_3X_VAL},
         {"3y", OPTION_VAL_3Y_VAL},
         {NULL, NULL},
      },
      "1y"
   },
   {
      "dice_manymouse_paddle2",
      DICE_MANYMOUSE_PADDLE2_LABEL_VAL,
      DICE_RETROMOUSE_PADDLE2_LABEL_CAT_VAL,
      DICE_MANYMOUSE_PADDLE2_INFO_0_VAL,
      NULL,
      "manymouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_manymouse_paddle2_x",
      DICE_MANYMOUSE_PADDLE2_X_LABEL_VAL,
      DICE_MANYMOUSE_PADDLE2_X_LABEL_CAT_VAL,
      DICE_RETROMOUSE_PADDLE2_X_INFO_0_VAL,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_VAL},
         {"0y", OPTION_VAL_0Y_VAL},
         {"1x", OPTION_VAL_1X_VAL},
         {"1y", OPTION_VAL_1Y_VAL},
         {"2x", OPTION_VAL_2X_VAL},
         {"2y", OPTION_VAL_2Y_VAL},
         {"3x", OPTION_VAL_3X_VAL},
         {"3y", OPTION_VAL_3Y_VAL},
         {NULL, NULL},
      },
      "2x"
   },
   {
      "dice_manymouse_paddle2_y",
      DICE_MANYMOUSE_PADDLE2_Y_LABEL_VAL,
      DICE_MANYMOUSE_PADDLE2_Y_LABEL_CAT_VAL,
      DICE_RETROMOUSE_PADDLE2_Y_INFO_0_VAL,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_VAL},
         {"0y", OPTION_VAL_0Y_VAL},
         {"1x", OPTION_VAL_1X_VAL},
         {"1y", OPTION_VAL_1Y_VAL},
         {"2x", OPTION_VAL_2X_VAL},
         {"2y", OPTION_VAL_2Y_VAL},
         {"3x", OPTION_VAL_3X_VAL},
         {"3y", OPTION_VAL_3Y_VAL},
         {NULL, NULL},
      },
      "2y"
   },
   {
      "dice_manymouse_paddle3",
      DICE_MANYMOUSE_PADDLE3_LABEL_VAL,
      DICE_RETROMOUSE_PADDLE3_LABEL_CAT_VAL,
      DICE_MANYMOUSE_PADDLE3_INFO_0_VAL,
      NULL,
      "manymouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_manymouse_paddle3_x",
      DICE_MANYMOUSE_PADDLE3_X_LABEL_VAL,
      DICE_MANYMOUSE_PADDLE3_X_LABEL_CAT_VAL,
      DICE_RETROMOUSE_PADDLE3_X_INFO_0_VAL,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_VAL},
         {"0y", OPTION_VAL_0Y_VAL},
         {"1x", OPTION_VAL_1X_VAL},
         {"1y", OPTION_VAL_1Y_VAL},
         {"2x", OPTION_VAL_2X_VAL},
         {"2y", OPTION_VAL_2Y_VAL},
         {"3x", OPTION_VAL_3X_VAL},
         {"3y", OPTION_VAL_3Y_VAL},
         {NULL, NULL},
      },
      "3x"
   },
   {
      "dice_manymouse_paddle3_y",
      DICE_MANYMOUSE_PADDLE3_Y_LABEL_VAL,
      DICE_MANYMOUSE_PADDLE3_Y_LABEL_CAT_VAL,
      DICE_RETROMOUSE_PADDLE3_Y_INFO_0_VAL,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_VAL},
         {"0y", OPTION_VAL_0Y_VAL},
         {"1x", OPTION_VAL_1X_VAL},
         {"1y", OPTION_VAL_1Y_VAL},
         {"2x", OPTION_VAL_2X_VAL},
         {"2y", OPTION_VAL_2Y_VAL},
         {"3x", OPTION_VAL_3X_VAL},
         {"3y", OPTION_VAL_3Y_VAL},
         {NULL, NULL},
      },
      "3y"
   },
#endif

   {
      "dice_dipswitch_1",
      DICE_DIPSWITCH_1_LABEL_VAL,
      DICE_DIPSWITCH_1_LABEL_CAT_VAL,
      DICE_DIPSWITCH_1_INFO_0_VAL,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_VAL},
         {"0", NULL},
         {"1", NULL},
         {NULL, NULL},
      },
      "-1"
   },
   {
      "dice_dipswitch_2",
      DICE_DIPSWITCH_2_LABEL_VAL,
      DICE_DIPSWITCH_2_LABEL_CAT_VAL,
      DICE_DIPSWITCH_2_INFO_0_VAL,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_VAL},
         {"0", NULL},
         {"1", NULL},
         {NULL, NULL},
      },
      "-1"
   },
   {
      "dice_dipswitch_3",
      DICE_DIPSWITCH_3_LABEL_VAL,
      DICE_DIPSWITCH_3_LABEL_CAT_VAL,
      DICE_DIPSWITCH_3_INFO_0_VAL,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_VAL},
         {"0", NULL},
         {"1", NULL},
         {NULL, NULL},
      },
      "-1"
   },
   {
      "dice_dipswitch16_1",
      DICE_DIPSWITCH16_1_LABEL_VAL,
      DICE_DIPSWITCH16_1_LABEL_CAT_VAL,
      DICE_DIPSWITCH16_1_INFO_0_VAL,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_VAL},
         {"0", NULL},
         {"1", NULL},
         {"2", NULL},
         {"3", NULL},
         {"4", NULL},
         {"5", NULL},
         {"6", NULL},
         {"7", NULL},
         {"8", NULL},
         {"9", NULL},
         {"10", NULL},
         {"11", NULL},
         {"12", NULL},
         {"13", NULL},
         {"14", NULL},
         {"15", NULL},
         {NULL, NULL},
      },
      "-1"
   },
   {
      "dice_dipswitch16_2",
      DICE_DIPSWITCH16_2_LABEL_VAL,
      DICE_DIPSWITCH16_2_LABEL_CAT_VAL,
      DICE_DIPSWITCH16_2_INFO_0_VAL,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_VAL},
         {"0", NULL},
         {"1", NULL},
         {"2", NULL},
         {"3", NULL},
         {"4", NULL},
         {"5", NULL},
         {"6", NULL},
         {"7", NULL},
         {"8", NULL},
         {"9", NULL},
         {"10", NULL},
         {"11", NULL},
         {"12", NULL},
         {"13", NULL},
         {"14", NULL},
         {"15", NULL},
         {NULL, NULL},
      },
      "-1"
   },

   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_val = {
   option_cats_val,
   option_defs_val
};

/* RETRO_LANGUAGE_VN */

#define CATEGORY_INPUT_LABEL_VN "Đều khiển"
#define CATEGORY_INPUT_INFO_0_VN "Cấu hình các thiết lập điều khiển riêng cho từng trình giả lập."
#define CATEGORY_RETROMOUSE_LABEL_VN "Chuột Retro"
#define CATEGORY_RETROMOUSE_INFO_0_VN "Cấu hình các thiết lập nhiều chuột cho libretro."
#define CATEGORY_MANYMOUSE_LABEL_VN "Nhiều chuột"
#define CATEGORY_MANYMOUSE_INFO_0_VN "Cấu hình các thiết lập nhiều chuột cho ManyMouse."
#define CATEGORY_DIPSWITCH_LABEL_VN "Bật/Tắt DIP"
#define CATEGORY_DIPSWITCH_INFO_0_VN "Cấu hình các thiết lập Bật/Tắt DIP và biến trở."
#define DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_LABEL_VN "Đều khiển > Sử dụng con trỏ chuột cho Paddie 1"
#define DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_LABEL_CAT_VN "Sử dụng con trỏ chuột cho Paddle 1"
#define DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_INFO_0_VN "Sử dụng con trỏ chuột hệ thống làm bộ điều khiển Paddie 1. Không cho phép chọn chuột cụ thể nếu có nhiều chuột."
#define DICE_PADDLE_JOYSTICK_ABSOLUTE_LABEL_VN "Đều khiển > Cần Paddie dùng chuyển động tuyệt đối"
#define DICE_PADDLE_JOYSTICK_ABSOLUTE_LABEL_CAT_VN "Cần điều khiển Paddle sử dụng chuyển động tuyệt đối"
#define DICE_PADDLE_JOYSTICK_ABSOLUTE_INFO_0_VN "Bản đồ trực tiếp phạm vi chuyển động của cần sang phạm vi Paddie, thay vì dựa trên chuyển động tương đối."
#define DICE_PADDLE_KEYBOARD_SENSITIVITY_LABEL_VN "Độ nhạy D-pad kiểu Paddle"
#define DICE_PADDLE_KEYBOARD_SENSITIVITY_LABEL_CAT_VN "Độ nhạy D-pad kiểu Paddle"
#define DICE_PADDLE_KEYBOARD_SENSITIVITY_INFO_0_VN "Độ nhạy khi sử dụng D-pad để điều khiển cần điều khiển."
#define DICE_PADDLE_JOYSTICK_SENSITIVITY_LABEL_VN "Đều khiển > Độ nhạy cần điều khiển tương tự của cần điều khiển"
#define DICE_PADDLE_JOYSTICK_SENSITIVITY_LABEL_CAT_VN "Độ nhạy cần điều khiển tương tự của cần điều khiển"
#define DICE_PADDLE_JOYSTICK_SENSITIVITY_INFO_0_VN "Độ nhạy khi sử dụng cần điều khiển tương tự để điều khiển cần điều khiển."
#define DICE_RETROMOUSE_PADDLE_SENSITIVITY_LABEL_VN "Đều khiển > Độ nhạy chuột Retro của cần điều khiển"
#define DICE_RETROMOUSE_PADDLE_SENSITIVITY_LABEL_CAT_VN "Độ nhạy chuột Retro của cần điều khiển"
#define DICE_RETROMOUSE_PADDLE_SENSITIVITY_INFO_0_VN "Độ nhạy khi sử dụng chuột Retro của cần điều khiển để điều khiển cần điều khiển."
#define DICE_WHEEL_KEYJOY_SENSITIVITY_LABEL_VN "Đều khiển > Độ nhạy bánh xe"
#define DICE_WHEEL_KEYJOY_SENSITIVITY_LABEL_CAT_VN "Độ nhạy bánh xe"
#define DICE_WHEEL_KEYJOY_SENSITIVITY_INFO_0_VN "Độ nhạy khi sử dụng D-pad hoặc cần điều khiển tương tự để điều khiển cần điều khiển."
#define DICE_THROTTLE_KEYJOY_SENSITIVITY_LABEL_VN "Đầu vào > Độ nhạy bướm ga"
#define DICE_THROTTLE_KEYJOY_SENSITIVITY_LABEL_CAT_VN "Độ nhạy bướm ga"
#define DICE_THROTTLE_KEYJOY_SENSITIVITY_INFO_0_VN "Độ nhạy khi sử dụng D-pad hoặc cần điều khiển tương tự để điều khiển cần điều khiển."
#define DICE_RETROMOUSE_PADDLE0_LABEL_VN "RetroMouse > Sử dụng chuột cho cần điều khiển 1"
#define DICE_RETROMOUSE_PADDLE0_LABEL_CAT_VN "Sử dụng chuột cho cần điều khiển 1"
#define DICE_RETROMOUSE_PADDLE0_INFO_0_VN "Sử dụng một chuột cụ thể cho cần số 1, được chọn theo chỉ số chuột của Cổng 1."
#define DICE_RETROMOUSE_PADDLE1_LABEL_VN "RetroMouse > Sử dụng chuột cho cần số 2"
#define DICE_RETROMOUSE_PADDLE1_LABEL_CAT_VN "Sử dụng chuột cho cần số 2"
#define DICE_RETROMOUSE_PADDLE1_INFO_0_VN "Sử dụng một chuột cụ thể cho cần số 2, được chọn theo chỉ số chuột của Cổng 2."
#define DICE_RETROMOUSE_PADDLE2_LABEL_VN "RetroMouse > Sử dụng chuột cho cần số 3"
#define DICE_RETROMOUSE_PADDLE2_LABEL_CAT_VN "Sử dụng chuột cho cần số 3"
#define DICE_RETROMOUSE_PADDLE2_INFO_0_VN "Sử dụng một chuột cụ thể cho cần số 3, được chọn theo chỉ số chuột của Cổng 3."
#define DICE_RETROMOUSE_PADDLE3_LABEL_VN "RetroMouse > Sử dụng chuột cho cần số 4"
#define DICE_RETROMOUSE_PADDLE3_LABEL_CAT_VN "Sử dụng chuột cho cần số 4"
#define DICE_RETROMOUSE_PADDLE3_INFO_0_VN "Sử dụng một chuột cụ thể cho cần số 4, được chọn theo chỉ số chuột của Cổng 4."
#define DICE_RETROMOUSE_PADDLE0_X_LABEL_VN "RetroMouse > Trục chuột cho cần số 1 ngang"
#define DICE_RETROMOUSE_PADDLE0_X_LABEL_CAT_VN "Trục chuột cho cần số 1 ngang"
#define DICE_RETROMOUSE_PADDLE0_X_INFO_0_VN "Trục chuột cho người chơi 1, chuyển động ngang trên màn hình."
#define OPTION_VAL_X_VN NULL
#define OPTION_VAL_Y_VN NULL
#define DICE_RETROMOUSE_PADDLE0_Y_LABEL_VN "RetroMouse > Trục Chuột cho Paddle 1 - Dọc"
#define DICE_RETROMOUSE_PADDLE0_Y_LABEL_CAT_VN "Trục Chuột cho Paddle 1 - Dọc"
#define DICE_RETROMOUSE_PADDLE0_Y_INFO_0_VN "Trục chuột cho người chơi 1, chuyển động theo chiều dọc trên màn hình."
#define DICE_RETROMOUSE_PADDLE1_X_LABEL_VN "RetroMouse > Trục Chuột cho Paddle 2 - Ngang"
#define DICE_RETROMOUSE_PADDLE1_X_LABEL_CAT_VN "Trục Chuột cho Paddle 2 - Ngang"
#define DICE_RETROMOUSE_PADDLE1_X_INFO_0_VN "Trục chuột cho người chơi 2, chuyển động theo chiều ngang trên màn hình."
#define DICE_RETROMOUSE_PADDLE1_Y_LABEL_VN "RetroMouse > Trục Chuột cho Paddle 2 - Dọc"
#define DICE_RETROMOUSE_PADDLE1_Y_LABEL_CAT_VN "Trục Chuột cho Paddle 2 - Dọc"
#define DICE_RETROMOUSE_PADDLE1_Y_INFO_0_VN "Trục chuột cho người chơi 2, chuyển động theo chiều dọc trên màn hình."
#define DICE_RETROMOUSE_PADDLE2_X_LABEL_VN "RetroMouse > Trục Chuột cho Paddle 3 - Ngang"
#define DICE_RETROMOUSE_PADDLE2_X_LABEL_CAT_VN "Trục Chuột cho Paddle 3 - Ngang"
#define DICE_RETROMOUSE_PADDLE2_X_INFO_0_VN "Trục chuột cho người chơi 3, chuyển động theo chiều ngang trên màn hình."
#define DICE_RETROMOUSE_PADDLE2_Y_LABEL_VN "RetroMouse > Trục Chuột cho Paddle 3 - Dọc"
#define DICE_RETROMOUSE_PADDLE2_Y_LABEL_CAT_VN "Trục Chuột cho Paddle 3 - Dọc"
#define DICE_RETROMOUSE_PADDLE2_Y_INFO_0_VN "Trục chuột cho người chơi 3, chuyển động theo chiều dọc trên màn hình."
#define DICE_RETROMOUSE_PADDLE3_X_LABEL_VN "Chuột Retro > Trục Chuột Cho Thanh Trượt 4 Ngang"
#define DICE_RETROMOUSE_PADDLE3_X_LABEL_CAT_VN "Trục Chuột Cho Paddle 4 Ngang"
#define DICE_RETROMOUSE_PADDLE3_X_INFO_0_VN "Trục chuột cho người chơi 4, chuyển động màn hình ngang."
#define DICE_RETROMOUSE_PADDLE3_Y_LABEL_VN "RetroMouse > Trục Chuột Cho Paddle 4 Dọc"
#define DICE_RETROMOUSE_PADDLE3_Y_LABEL_CAT_VN "Trục Chuột Cho Paddle 4 Dọc"
#define DICE_RETROMOUSE_PADDLE3_Y_INFO_0_VN "Trục chuột cho người chơi 4, chuyển động màn hình dọc."
#define DICE_MANYMOUSE_PADDLE0_LABEL_VN "ManyMouse > Sử dụng Chuột Cho Paddle 1"
#define DICE_MANYMOUSE_PADDLE0_INFO_0_VN "Sử dụng chuột cho Paddle 1."
#define DICE_MANYMOUSE_PADDLE0_X_LABEL_VN "ManyMouse > Chuột-Paddle 1 x"
#define DICE_MANYMOUSE_PADDLE0_X_LABEL_CAT_VN "Chuột-Paddle 1 x"
#define OPTION_VAL_0X_VN NULL
#define OPTION_VAL_0Y_VN NULL
#define OPTION_VAL_1X_VN NULL
#define OPTION_VAL_1Y_VN NULL
#define OPTION_VAL_2X_VN NULL
#define OPTION_VAL_2Y_VN NULL
#define OPTION_VAL_3X_VN NULL
#define OPTION_VAL_3Y_VN NULL
#define DICE_MANYMOUSE_PADDLE0_Y_LABEL_VN "ManyMouse > Chuột-Paddle 1 y"
#define DICE_MANYMOUSE_PADDLE0_Y_LABEL_CAT_VN "Chuột-Paddle 1 y"
#define DICE_MANYMOUSE_PADDLE1_LABEL_VN "ManyMouse > Dùng Chuột cho Paddle 2"
#define DICE_MANYMOUSE_PADDLE1_INFO_0_VN "Dùng chuột cho Paddle 2."
#define DICE_MANYMOUSE_PADDLE1_X_LABEL_VN "ManyMouse > Chuột-Paddle 2 x"
#define DICE_MANYMOUSE_PADDLE1_X_LABEL_CAT_VN "Chuột-Paddle 2 x"
#define DICE_MANYMOUSE_PADDLE1_Y_LABEL_VN "ManyMouse > Chuột-Paddle 2 y"
#define DICE_MANYMOUSE_PADDLE1_Y_LABEL_CAT_VN "Chuột-Paddle 2 y"
#define DICE_MANYMOUSE_PADDLE2_LABEL_VN "ManyMouse > Dùng Chuột cho Paddle 3"
#define DICE_MANYMOUSE_PADDLE2_INFO_0_VN "Dùng chuột cho Paddle 3."
#define DICE_MANYMOUSE_PADDLE2_X_LABEL_VN "ManyMouse > Chuột-Paddle 3 x"
#define DICE_MANYMOUSE_PADDLE2_X_LABEL_CAT_VN "Chuột-Paddle 3 x"
#define DICE_MANYMOUSE_PADDLE2_Y_LABEL_VN "ManyMouse > Chuột-Paddle 3 y"
#define DICE_MANYMOUSE_PADDLE2_Y_LABEL_CAT_VN "Bàn rê chuột 3 trục Y"
#define DICE_MANYMOUSE_PADDLE3_LABEL_VN "ManyMouse > Sử dụng chuột cho Bàn rê 4"
#define DICE_MANYMOUSE_PADDLE3_INFO_0_VN "Sử dụng chuột cho Bàn rê 4."
#define DICE_MANYMOUSE_PADDLE3_X_LABEL_VN "ManyMouse > Bàn rê chuột 4 trục X"
#define DICE_MANYMOUSE_PADDLE3_X_LABEL_CAT_VN "Bàn rê chuột 4 trục X"
#define DICE_MANYMOUSE_PADDLE3_Y_LABEL_VN "ManyMouse > Bàn rê chuột 4 trục Y"
#define DICE_MANYMOUSE_PADDLE3_Y_LABEL_CAT_VN "Bàn rê chuột 4 trục Y"
#define DICE_DIPSWITCH_1_LABEL_VN "Bật/Tắt DIP > Bật/Tắt DIP 1"
#define DICE_DIPSWITCH_1_LABEL_CAT_VN "Bật/Tắt DIP 1"
#define DICE_DIPSWITCH_1_INFO_0_VN "Cài đặt cho Bật/Tắt DIP 1."
#define OPTION_VAL_1_VN "mặc định"
#define DICE_DIPSWITCH_2_LABEL_VN "Bật/Tắt DIP > Bật/Tắt DIP 2"
#define DICE_DIPSWITCH_2_LABEL_CAT_VN "Bật/Tắt DIP 2"
#define DICE_DIPSWITCH_2_INFO_0_VN "Cài đặt cho Bật/Tắt DIP 2."
#define DICE_DIPSWITCH_3_LABEL_VN "Bật/Tắt DIP > Bật/Tắt DIP 3"
#define DICE_DIPSWITCH_3_LABEL_CAT_VN "Bật/Tắt DIP 3"
#define DICE_DIPSWITCH_3_INFO_0_VN "Cài đặt cho Bật/Tắt DIP số 3."
#define DICE_DIPSWITCH16_1_LABEL_VN "Bật/Tắt DIP > DIP Switch Hex 1"
#define DICE_DIPSWITCH16_1_LABEL_CAT_VN "Bật/Tắt DIP Hex 1"
#define DICE_DIPSWITCH16_1_INFO_0_VN "Cài đặt cho Bật/Tắt DIP 16 vị trí số 1."
#define DICE_DIPSWITCH16_2_LABEL_VN "Bật/Tắt DIP > DIP Switch Hex 2"
#define DICE_DIPSWITCH16_2_LABEL_CAT_VN "Bật/Tắt DIP Hex 2"
#define DICE_DIPSWITCH16_2_INFO_0_VN "Cài đặt cho Bật/Tắt DIP 16 vị trí số 2."

struct retro_core_option_v2_category option_cats_vn[] = {
   {
      "input",
      CATEGORY_INPUT_LABEL_VN,
      CATEGORY_INPUT_INFO_0_VN
   },
   {
      "retromouse",
      CATEGORY_RETROMOUSE_LABEL_VN,
      CATEGORY_RETROMOUSE_INFO_0_VN
   },
#ifdef MANYMOUSE
   {
      "manymouse",
      CATEGORY_MANYMOUSE_LABEL_VN,
      CATEGORY_MANYMOUSE_INFO_0_VN
   },
#endif
   {
      "dipswitch",
      CATEGORY_DIPSWITCH_LABEL_VN,
      CATEGORY_DIPSWITCH_INFO_0_VN
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_vn[] = {
   {
      "dice_use_mouse_pointer_for_paddle_1",
      DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_LABEL_VN,
      DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_LABEL_CAT_VN,
      DICE_USE_MOUSE_POINTER_FOR_PADDLE_1_INFO_0_VN,
      NULL,
      "input",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_paddle_joystick_absolute",
      DICE_PADDLE_JOYSTICK_ABSOLUTE_LABEL_VN,
      DICE_PADDLE_JOYSTICK_ABSOLUTE_LABEL_CAT_VN,
      DICE_PADDLE_JOYSTICK_ABSOLUTE_INFO_0_VN,
      NULL,
      "input",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      // D-pad but not necessarily keyboard under libretro,
      // that name comes from the upstream code.
      "dice_paddle_keyboard_sensitivity",
      DICE_PADDLE_KEYBOARD_SENSITIVITY_LABEL_VN,
      DICE_PADDLE_KEYBOARD_SENSITIVITY_LABEL_CAT_VN,
      DICE_PADDLE_KEYBOARD_SENSITIVITY_INFO_0_VN,
      NULL,
      "input",
      {
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "250"
   },
   {
      "dice_paddle_joystick_sensitivity",
      DICE_PADDLE_JOYSTICK_SENSITIVITY_LABEL_VN,
      DICE_PADDLE_JOYSTICK_SENSITIVITY_LABEL_CAT_VN,
      DICE_PADDLE_JOYSTICK_SENSITIVITY_INFO_0_VN,
      NULL,
      "input",
      {
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "500"
   },
   {
      "dice_retromouse_paddle_sensitivity",
      DICE_RETROMOUSE_PADDLE_SENSITIVITY_LABEL_VN,
      DICE_RETROMOUSE_PADDLE_SENSITIVITY_LABEL_CAT_VN,
      DICE_RETROMOUSE_PADDLE_SENSITIVITY_INFO_0_VN,
      NULL,
      "input",
      {
         {"25", NULL},
         {"50", NULL},
         {"75", NULL},
         {"100", NULL},
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "125"
   },
   {
      "dice_wheel_keyjoy_sensitivity",
      DICE_WHEEL_KEYJOY_SENSITIVITY_LABEL_VN,
      DICE_WHEEL_KEYJOY_SENSITIVITY_LABEL_CAT_VN,
      DICE_WHEEL_KEYJOY_SENSITIVITY_INFO_0_VN,
      NULL,
      "input",
      {
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "500"
   },
   {
      "dice_throttle_keyjoy_sensitivity",
      DICE_THROTTLE_KEYJOY_SENSITIVITY_LABEL_VN,
      DICE_THROTTLE_KEYJOY_SENSITIVITY_LABEL_CAT_VN,
      DICE_THROTTLE_KEYJOY_SENSITIVITY_INFO_0_VN,
      NULL,
      "input",
      {
         {"125", NULL},
         {"250", NULL},
         {"375", NULL},
         {"500", NULL},
         {NULL, NULL},
      },
      "250"
   },

   {
      "dice_retromouse_paddle0",
      DICE_RETROMOUSE_PADDLE0_LABEL_VN,
      DICE_RETROMOUSE_PADDLE0_LABEL_CAT_VN,
      DICE_RETROMOUSE_PADDLE0_INFO_0_VN,
      NULL,
      "retromouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_retromouse_paddle1",
      DICE_RETROMOUSE_PADDLE1_LABEL_VN,
      DICE_RETROMOUSE_PADDLE1_LABEL_CAT_VN,
      DICE_RETROMOUSE_PADDLE1_INFO_0_VN,
      NULL,
      "retromouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_retromouse_paddle2",
      DICE_RETROMOUSE_PADDLE2_LABEL_VN,
      DICE_RETROMOUSE_PADDLE2_LABEL_CAT_VN,
      DICE_RETROMOUSE_PADDLE2_INFO_0_VN,
      NULL,
      "retromouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_retromouse_paddle3",
      DICE_RETROMOUSE_PADDLE3_LABEL_VN,
      DICE_RETROMOUSE_PADDLE3_LABEL_CAT_VN,
      DICE_RETROMOUSE_PADDLE3_INFO_0_VN,
      NULL,
      "retromouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_retromouse_paddle0_x",
      DICE_RETROMOUSE_PADDLE0_X_LABEL_VN,
      DICE_RETROMOUSE_PADDLE0_X_LABEL_CAT_VN,
      DICE_RETROMOUSE_PADDLE0_X_INFO_0_VN,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_VN},
         {"y", OPTION_VAL_Y_VN},
         {NULL, NULL},
      },
      "x"
   },
   {
      "dice_retromouse_paddle0_y",
      DICE_RETROMOUSE_PADDLE0_Y_LABEL_VN,
      DICE_RETROMOUSE_PADDLE0_Y_LABEL_CAT_VN,
      DICE_RETROMOUSE_PADDLE0_Y_INFO_0_VN,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_VN},
         {"y", OPTION_VAL_Y_VN},
         {NULL, NULL},
      },
      "y"
   },
   {
      "dice_retromouse_paddle1_x",
      DICE_RETROMOUSE_PADDLE1_X_LABEL_VN,
      DICE_RETROMOUSE_PADDLE1_X_LABEL_CAT_VN,
      DICE_RETROMOUSE_PADDLE1_X_INFO_0_VN,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_VN},
         {"y", OPTION_VAL_Y_VN},
         {NULL, NULL},
      },
      "x"
   },
   {
      "dice_retromouse_paddle1_y",
      DICE_RETROMOUSE_PADDLE1_Y_LABEL_VN,
      DICE_RETROMOUSE_PADDLE1_Y_LABEL_CAT_VN,
      DICE_RETROMOUSE_PADDLE1_Y_INFO_0_VN,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_VN},
         {"y", OPTION_VAL_Y_VN},
         {NULL, NULL},
      },
      "y"
   },
   {
      "dice_retromouse_paddle2_x",
      DICE_RETROMOUSE_PADDLE2_X_LABEL_VN,
      DICE_RETROMOUSE_PADDLE2_X_LABEL_CAT_VN,
      DICE_RETROMOUSE_PADDLE2_X_INFO_0_VN,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_VN},
         {"y", OPTION_VAL_Y_VN},
         {NULL, NULL},
      },
      "x"
   },
   {
      "dice_retromouse_paddle2_y",
      DICE_RETROMOUSE_PADDLE2_Y_LABEL_VN,
      DICE_RETROMOUSE_PADDLE2_Y_LABEL_CAT_VN,
      DICE_RETROMOUSE_PADDLE2_Y_INFO_0_VN,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_VN},
         {"y", OPTION_VAL_Y_VN},
         {NULL, NULL},
      },
      "y"
   },
   {
      "dice_retromouse_paddle3_x",
      DICE_RETROMOUSE_PADDLE3_X_LABEL_VN,
      DICE_RETROMOUSE_PADDLE3_X_LABEL_CAT_VN,
      DICE_RETROMOUSE_PADDLE3_X_INFO_0_VN,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_VN},
         {"y", OPTION_VAL_Y_VN},
         {NULL, NULL},
      },
      "x"
   },
   {
      "dice_retromouse_paddle3_y",
      DICE_RETROMOUSE_PADDLE3_Y_LABEL_VN,
      DICE_RETROMOUSE_PADDLE3_Y_LABEL_CAT_VN,
      DICE_RETROMOUSE_PADDLE3_Y_INFO_0_VN,
      NULL,
      "retromouse",
      {
         {"x", OPTION_VAL_X_VN},
         {"y", OPTION_VAL_Y_VN},
         {NULL, NULL},
      },
      "y"
   },

#ifdef MANYMOUSE
   {
      "dice_manymouse_paddle0",
      DICE_MANYMOUSE_PADDLE0_LABEL_VN,
      DICE_RETROMOUSE_PADDLE0_LABEL_CAT_VN,
      DICE_MANYMOUSE_PADDLE0_INFO_0_VN,
      NULL,
      "manymouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_manymouse_paddle0_x",
      DICE_MANYMOUSE_PADDLE0_X_LABEL_VN,
      DICE_MANYMOUSE_PADDLE0_X_LABEL_CAT_VN,
      DICE_RETROMOUSE_PADDLE0_X_INFO_0_VN,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_VN},
         {"0y", OPTION_VAL_0Y_VN},
         {"1x", OPTION_VAL_1X_VN},
         {"1y", OPTION_VAL_1Y_VN},
         {"2x", OPTION_VAL_2X_VN},
         {"2y", OPTION_VAL_2Y_VN},
         {"3x", OPTION_VAL_3X_VN},
         {"3y", OPTION_VAL_3Y_VN},
         {NULL, NULL},
      },
      "0x"
   },
   {
      "dice_manymouse_paddle0_y",
      DICE_MANYMOUSE_PADDLE0_Y_LABEL_VN,
      DICE_MANYMOUSE_PADDLE0_Y_LABEL_CAT_VN,
      DICE_RETROMOUSE_PADDLE0_Y_INFO_0_VN,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_VN},
         {"0y", OPTION_VAL_0Y_VN},
         {"1x", OPTION_VAL_1X_VN},
         {"1y", OPTION_VAL_1Y_VN},
         {"2x", OPTION_VAL_2X_VN},
         {"2y", OPTION_VAL_2Y_VN},
         {"3x", OPTION_VAL_3X_VN},
         {"3y", OPTION_VAL_3Y_VN},
         {NULL, NULL},
      },
      "0y"
   },
   {
      "dice_manymouse_paddle1",
      DICE_MANYMOUSE_PADDLE1_LABEL_VN,
      DICE_RETROMOUSE_PADDLE1_LABEL_CAT_VN,
      DICE_MANYMOUSE_PADDLE1_INFO_0_VN,
      NULL,
      "manymouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_manymouse_paddle1_x",
      DICE_MANYMOUSE_PADDLE1_X_LABEL_VN,
      DICE_MANYMOUSE_PADDLE1_X_LABEL_CAT_VN,
      DICE_RETROMOUSE_PADDLE1_X_INFO_0_VN,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_VN},
         {"0y", OPTION_VAL_0Y_VN},
         {"1x", OPTION_VAL_1X_VN},
         {"1y", OPTION_VAL_1Y_VN},
         {"2x", OPTION_VAL_2X_VN},
         {"2y", OPTION_VAL_2Y_VN},
         {"3x", OPTION_VAL_3X_VN},
         {"3y", OPTION_VAL_3Y_VN},
         {NULL, NULL},
      },
      "1x"
   },
   {
      "dice_manymouse_paddle1_y",
      DICE_MANYMOUSE_PADDLE1_Y_LABEL_VN,
      DICE_MANYMOUSE_PADDLE1_Y_LABEL_CAT_VN,
      DICE_RETROMOUSE_PADDLE1_Y_INFO_0_VN,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_VN},
         {"0y", OPTION_VAL_0Y_VN},
         {"1x", OPTION_VAL_1X_VN},
         {"1y", OPTION_VAL_1Y_VN},
         {"2x", OPTION_VAL_2X_VN},
         {"2y", OPTION_VAL_2Y_VN},
         {"3x", OPTION_VAL_3X_VN},
         {"3y", OPTION_VAL_3Y_VN},
         {NULL, NULL},
      },
      "1y"
   },
   {
      "dice_manymouse_paddle2",
      DICE_MANYMOUSE_PADDLE2_LABEL_VN,
      DICE_RETROMOUSE_PADDLE2_LABEL_CAT_VN,
      DICE_MANYMOUSE_PADDLE2_INFO_0_VN,
      NULL,
      "manymouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_manymouse_paddle2_x",
      DICE_MANYMOUSE_PADDLE2_X_LABEL_VN,
      DICE_MANYMOUSE_PADDLE2_X_LABEL_CAT_VN,
      DICE_RETROMOUSE_PADDLE2_X_INFO_0_VN,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_VN},
         {"0y", OPTION_VAL_0Y_VN},
         {"1x", OPTION_VAL_1X_VN},
         {"1y", OPTION_VAL_1Y_VN},
         {"2x", OPTION_VAL_2X_VN},
         {"2y", OPTION_VAL_2Y_VN},
         {"3x", OPTION_VAL_3X_VN},
         {"3y", OPTION_VAL_3Y_VN},
         {NULL, NULL},
      },
      "2x"
   },
   {
      "dice_manymouse_paddle2_y",
      DICE_MANYMOUSE_PADDLE2_Y_LABEL_VN,
      DICE_MANYMOUSE_PADDLE2_Y_LABEL_CAT_VN,
      DICE_RETROMOUSE_PADDLE2_Y_INFO_0_VN,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_VN},
         {"0y", OPTION_VAL_0Y_VN},
         {"1x", OPTION_VAL_1X_VN},
         {"1y", OPTION_VAL_1Y_VN},
         {"2x", OPTION_VAL_2X_VN},
         {"2y", OPTION_VAL_2Y_VN},
         {"3x", OPTION_VAL_3X_VN},
         {"3y", OPTION_VAL_3Y_VN},
         {NULL, NULL},
      },
      "2y"
   },
   {
      "dice_manymouse_paddle3",
      DICE_MANYMOUSE_PADDLE3_LABEL_VN,
      DICE_RETROMOUSE_PADDLE3_LABEL_CAT_VN,
      DICE_MANYMOUSE_PADDLE3_INFO_0_VN,
      NULL,
      "manymouse",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "disabled"
   },
   {
      "dice_manymouse_paddle3_x",
      DICE_MANYMOUSE_PADDLE3_X_LABEL_VN,
      DICE_MANYMOUSE_PADDLE3_X_LABEL_CAT_VN,
      DICE_RETROMOUSE_PADDLE3_X_INFO_0_VN,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_VN},
         {"0y", OPTION_VAL_0Y_VN},
         {"1x", OPTION_VAL_1X_VN},
         {"1y", OPTION_VAL_1Y_VN},
         {"2x", OPTION_VAL_2X_VN},
         {"2y", OPTION_VAL_2Y_VN},
         {"3x", OPTION_VAL_3X_VN},
         {"3y", OPTION_VAL_3Y_VN},
         {NULL, NULL},
      },
      "3x"
   },
   {
      "dice_manymouse_paddle3_y",
      DICE_MANYMOUSE_PADDLE3_Y_LABEL_VN,
      DICE_MANYMOUSE_PADDLE3_Y_LABEL_CAT_VN,
      DICE_RETROMOUSE_PADDLE3_Y_INFO_0_VN,
      NULL,
      "manymouse",
      {
         {"0x", OPTION_VAL_0X_VN},
         {"0y", OPTION_VAL_0Y_VN},
         {"1x", OPTION_VAL_1X_VN},
         {"1y", OPTION_VAL_1Y_VN},
         {"2x", OPTION_VAL_2X_VN},
         {"2y", OPTION_VAL_2Y_VN},
         {"3x", OPTION_VAL_3X_VN},
         {"3y", OPTION_VAL_3Y_VN},
         {NULL, NULL},
      },
      "3y"
   },
#endif

   {
      "dice_dipswitch_1",
      DICE_DIPSWITCH_1_LABEL_VN,
      DICE_DIPSWITCH_1_LABEL_CAT_VN,
      DICE_DIPSWITCH_1_INFO_0_VN,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_VN},
         {"0", NULL},
         {"1", NULL},
         {NULL, NULL},
      },
      "-1"
   },
   {
      "dice_dipswitch_2",
      DICE_DIPSWITCH_2_LABEL_VN,
      DICE_DIPSWITCH_2_LABEL_CAT_VN,
      DICE_DIPSWITCH_2_INFO_0_VN,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_VN},
         {"0", NULL},
         {"1", NULL},
         {NULL, NULL},
      },
      "-1"
   },
   {
      "dice_dipswitch_3",
      DICE_DIPSWITCH_3_LABEL_VN,
      DICE_DIPSWITCH_3_LABEL_CAT_VN,
      DICE_DIPSWITCH_3_INFO_0_VN,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_VN},
         {"0", NULL},
         {"1", NULL},
         {NULL, NULL},
      },
      "-1"
   },
   {
      "dice_dipswitch16_1",
      DICE_DIPSWITCH16_1_LABEL_VN,
      DICE_DIPSWITCH16_1_LABEL_CAT_VN,
      DICE_DIPSWITCH16_1_INFO_0_VN,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_VN},
         {"0", NULL},
         {"1", NULL},
         {"2", NULL},
         {"3", NULL},
         {"4", NULL},
         {"5", NULL},
         {"6", NULL},
         {"7", NULL},
         {"8", NULL},
         {"9", NULL},
         {"10", NULL},
         {"11", NULL},
         {"12", NULL},
         {"13", NULL},
         {"14", NULL},
         {"15", NULL},
         {NULL, NULL},
      },
      "-1"
   },
   {
      "dice_dipswitch16_2",
      DICE_DIPSWITCH16_2_LABEL_VN,
      DICE_DIPSWITCH16_2_LABEL_CAT_VN,
      DICE_DIPSWITCH16_2_INFO_0_VN,
      NULL,
      "dipswitch",
      {
         {"-1", OPTION_VAL_1_VN},
         {"0", NULL},
         {"1", NULL},
         {"2", NULL},
         {"3", NULL},
         {"4", NULL},
         {"5", NULL},
         {"6", NULL},
         {"7", NULL},
         {"8", NULL},
         {"9", NULL},
         {"10", NULL},
         {"11", NULL},
         {"12", NULL},
         {"13", NULL},
         {"14", NULL},
         {"15", NULL},
         {NULL, NULL},
      },
      "-1"
   },

   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_vn = {
   option_cats_vn,
   option_defs_vn
};


#ifdef __cplusplus
}
#endif

#endif