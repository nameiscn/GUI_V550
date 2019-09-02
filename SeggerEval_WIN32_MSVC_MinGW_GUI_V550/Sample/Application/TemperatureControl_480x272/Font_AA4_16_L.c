/*********************************************************************
*                    SEGGER Microcontroller GmbH                     *
*        Solutions for real time microcontroller applications        *
**********************************************************************
*                                                                    *
*        (c) 1996 - 2019  SEGGER Microcontroller GmbH                *
*                                                                    *
*        Internet: www.segger.com    Support:  support@segger.com    *
*                                                                    *
**********************************************************************

** emWin V5.50 - Graphical user interface for embedded applications **
emWin is protected by international copyright laws.   Knowledge of the
source code may not be used to write a similar product.  This file may
only  be used  in accordance  with  a license  and should  not be  re-
distributed in any way. We appreciate your understanding and fairness.
----------------------------------------------------------------------
File        : Font_AA4_16_L.c
Purpose     : Font file.
----------------------------------------------------------------------
*/

#include "GUI.h"

#ifndef GUI_CONST_STORAGE
  #define GUI_CONST_STORAGE const
#endif

/* The following line needs to be included in any file selecting the
   font.
*/
extern GUI_CONST_STORAGE GUI_FONT GUI_Font_AA4_16_L;

/* Start of unicode area <Basic Latin> */
GUI_CONST_STORAGE unsigned char acGUI_Font_AA4_16_L_0020[  1] = { /* code 0020, SPACE */
  0x00
};

GUI_CONST_STORAGE unsigned char acGUI_Font_AA4_16_L_0021[  9] = { /* code 0021, EXCLAMATION MARK */
  0xF0,
  0xF0,
  0xF0,
  0xF0,
  0xD0,
  0xB0,
  0xA0,
  0x00,
  0xF0
};

GUI_CONST_STORAGE unsigned char acGUI_Font_AA4_16_L_0022[  8] = { /* code 0022, QUOTATION MARK */
  0xF0, 0xF0,
  0xF0, 0xF0,
  0xF0, 0xF0,
  0xF0, 0xF0
};

GUI_CONST_STORAGE unsigned char acGUI_Font_AA4_16_L_0023[ 36] = { /* code 0023, NUMBER SIGN */
  0x00, 0x01, 0x90, 0xA0,
  0x00, 0x07, 0x42, 0x80,
  0x00, 0x0A, 0x07, 0x30,
  0x4F, 0xFF, 0xFF, 0xFE,
  0x00, 0x73, 0x28, 0x00,
  0xEF, 0xFF, 0xFF, 0xF4,
  0x02, 0x80, 0xA0, 0x00,
  0x07, 0x32, 0x80, 0x00,
  0x0A, 0x08, 0x20, 0x00
};

GUI_CONST_STORAGE unsigned char acGUI_Font_AA4_16_L_0024[ 33] = { /* code 0024, DOLLAR SIGN */
  0x00, 0xF0, 0x00,
  0x5E, 0xFE, 0xB2,
  0xD4, 0xF1, 0x8C,
  0xF0, 0xF0, 0x06,
  0xB6, 0xF0, 0x00,
  0x17, 0xFB, 0x71,
  0x00, 0xF0, 0x6B,
  0xF0, 0xF0, 0x0F,
  0xC6, 0xF1, 0x8C,
  0x3D, 0xFE, 0xA2,
  0x00, 0xF0, 0x00
};

GUI_CONST_STORAGE unsigned char acGUI_Font_AA4_16_L_0025[ 55] = { /* code 0025, PERCENT SIGN */
  0x00, 0x00, 0x00, 0x01, 0x10,
  0x5E, 0xE5, 0x00, 0x0A, 0x10,
  0xE3, 0x3E, 0x00, 0x64, 0x00,
  0xE3, 0x3E, 0x02, 0x90, 0x00,
  0x5E, 0xE5, 0x09, 0x10, 0x00,
  0x00, 0x00, 0x55, 0x00, 0x00,
  0x00, 0x01, 0x90, 0x5E, 0xE5,
  0x00, 0x09, 0x20, 0xE3, 0x3E,
  0x00, 0x46, 0x00, 0xE3, 0x3E,
  0x01, 0xA0, 0x00, 0x5E, 0xE5,
  0x01, 0x10, 0x00, 0x00, 0x00
};

GUI_CONST_STORAGE unsigned char acGUI_Font_AA4_16_L_0026[ 36] = { /* code 0026, AMPERSAND */
  0x06, 0xEE, 0x60, 0x00,
  0x0E, 0x33, 0xF0, 0x00,
  0x0D, 0x22, 0xD0, 0x00,
  0x03, 0xCB, 0x20, 0x00,
  0x1B, 0x99, 0x00, 0x00,
  0xB3, 0x07, 0xA1, 0xE0,
  0xF0, 0x00, 0x7D, 0x80,
  0xC8, 0x01, 0x7C, 0xB0,
  0x2B, 0xFE, 0x91, 0x89
};

GUI_CONST_STORAGE unsigned char acGUI_Font_AA4_16_L_0027[  4] = { /* code 0027, APOSTROPHE */
  0xF0,
  0xF0,
  0xF0,
  0xF0
};

GUI_CONST_STORAGE unsigned char acGUI_Font_AA4_16_L_0028[ 24] = { /* code 0028, LEFT PARENTHESIS */
  0x02, 0x90,
  0x0B, 0x10,
  0x49, 0x00,
  0xA4, 0x00,
  0xD1, 0x00,
  0xF0, 0x00,
  0xF0, 0x00,
  0xD1, 0x00,
  0xA4, 0x00,
  0x49, 0x00,
  0x0B, 0x10,
  0x02, 0x90
};

GUI_CONST_STORAGE unsigned char acGUI_Font_AA4_16_L_0029[ 24] = { /* code 0029, RIGHT PARENTHESIS */
  0x92, 0x00,
  0x1B, 0x00,
  0x09, 0x40,
  0x04, 0xA0,
  0x01, 0xD0,
  0x00, 0xF0,
  0x00, 0xF0,
  0x01, 0xD0,
  0x04, 0xA0,
  0x09, 0x40,
  0x1B, 0x00,
  0x92, 0x00
};

GUI_CONST_STORAGE unsigned char acGUI_Font_AA4_16_L_002A[ 15] = { /* code 002A, ASTERISK */
  0x00, 0xF0, 0x00,
  0xB6, 0xF6, 0xB0,
  0x18, 0xF8, 0x10,
  0x0B, 0x5B, 0x00,
  0x37, 0x07, 0x30
};

GUI_CONST_STORAGE unsigned char acGUI_Font_AA4_16_L_002B[ 45] = { /* code 002B, PLUS SIGN */
  0x00, 0x00, 0xF0, 0x00, 0x00,
  0x00, 0x00, 0xF0, 0x00, 0x00,
  0x00, 0x00, 0xF0, 0x00, 0x00,
  0x00, 0x00, 0xF0, 0x00, 0x00,
  0xFF, 0xFF, 0xFF, 0xFF, 0xF0,
  0x00, 0x00, 0xF0, 0x00, 0x00,
  0x00, 0x00, 0xF0, 0x00, 0x00,
  0x00, 0x00, 0xF0, 0x00, 0x00,
  0x00, 0x00, 0xF0, 0x00, 0x00
};

GUI_CONST_STORAGE unsigned char acGUI_Font_AA4_16_L_002C[  3] = { /* code 002C, COMMA */
  0xF0,
  0xF0,
  0x90
};

GUI_CONST_STORAGE unsigned char acGUI_Font_AA4_16_L_002D[  2] = { /* code 002D, HYPHEN-MINUS */
  0xFF, 0xF0
};

GUI_CONST_STORAGE unsigned char acGUI_Font_AA4_16_L_002E[  1] = { /* code 002E, FULL STOP */
  0xF0
};

GUI_CONST_STORAGE unsigned char acGUI_Font_AA4_16_L_002F[ 22] = { /* code 002F, SOLIDUS */
  0x00, 0x0A,
  0x00, 0x28,
  0x00, 0x63,
  0x00, 0x90,
  0x01, 0x80,
  0x05, 0x30,
  0x08, 0x00,
  0x08, 0x00,
  0x34, 0x00,
  0x70, 0x00,
  0x70, 0x00
};

GUI_CONST_STORAGE unsigned char acGUI_Font_AA4_16_L_0030[ 27] = { /* code 0030, DIGIT ZERO */
  0x09, 0xEE, 0x80,
  0x6C, 0x11, 0xC6,
  0xC3, 0x00, 0x3C,
  0xE1, 0x00, 0x1E,
  0xF0, 0x00, 0x0F,
  0xE1, 0x00, 0x1E,
  0xC3, 0x00, 0x3C,
  0x6C, 0x11, 0xC6,
  0x09, 0xEE, 0x90
};

GUI_CONST_STORAGE unsigned char acGUI_Font_AA4_16_L_0031[ 18] = { /* code 0031, DIGIT ONE */
  0x00, 0xE0,
  0x07, 0xF0,
  0xF9, 0xF0,
  0x00, 0xF0,
  0x00, 0xF0,
  0x00, 0xF0,
  0x00, 0xF0,
  0x00, 0xF0,
  0x00, 0xF0
};

GUI_CONST_STORAGE unsigned char acGUI_Font_AA4_16_L_0032[ 27] = { /* code 0032, DIGIT TWO */
  0x1A, 0xEF, 0xB2,
  0xA9, 0x10, 0x8C,
  0xE1, 0x00, 0x0F,
  0x00, 0x00, 0x3C,
  0x00, 0x05, 0xB2,
  0x03, 0xB7, 0x00,
  0x3A, 0x10, 0x00,
  0xA0, 0x00, 0x00,
  0xFF, 0xFF, 0xFF
};

GUI_CONST_STORAGE unsigned char acGUI_Font_AA4_16_L_0033[ 27] = { /* code 0033, DIGIT THREE */
  0x1A, 0xEF, 0xB2,
  0x99, 0x10, 0x7C,
  0xE1, 0x00, 0x0F,
  0x00, 0x01, 0x8A,
  0x00, 0x9F, 0xE2,
  0x00, 0x01, 0x7C,
  0xF1, 0x00, 0x0F,
  0xA9, 0x11, 0x7C,
  0x1A, 0xFF, 0xB2
};

GUI_CONST_STORAGE unsigned char acGUI_Font_AA4_16_L_0034[ 27] = { /* code 0034, DIGIT FOUR */
  0x00, 0x04, 0xF0,
  0x00, 0x19, 0xF0,
  0x00, 0x82, 0xF0,
  0x03, 0x60, 0xF0,
  0x09, 0x00, 0xF0,
  0x82, 0x00, 0xF0,
  0xFF, 0xFF, 0xFF,
  0x00, 0x00, 0xF0,
  0x00, 0x00, 0xF0
};

GUI_CONST_STORAGE unsigned char acGUI_Font_AA4_16_L_0035[ 27] = { /* code 0035, DIGIT FIVE */
  0x0E, 0xFF, 0xF7,
  0x1A, 0x00, 0x00,
  0x47, 0x00, 0x00,
  0x6A, 0xEF, 0xB1,
  0x99, 0x11, 0x9A,
  0x00, 0x00, 0x1F,
  0xE1, 0x00, 0x1F,
  0x99, 0x11, 0x9A,
  0x1A, 0xFF, 0xA1
};

GUI_CONST_STORAGE unsigned char acGUI_Font_AA4_16_L_0036[ 27] = { /* code 0036, DIGIT SIX */
  0x06, 0xDF, 0xC3,
  0x3D, 0x30, 0x5D,
  0xA5, 0x00, 0x00,
  0xE5, 0xDF, 0xB1,
  0xFA, 0x21, 0x9A,
  0xF4, 0x00, 0x1F,
  0xC4, 0x00, 0x0F,
  0x7C, 0x10, 0x8A,
  0x08, 0xEF, 0xB1
};

GUI_CONST_STORAGE unsigned char acGUI_Font_AA4_16_L_0037[ 27] = { /* code 0037, DIGIT SEVEN */
  0xFF, 0xFF, 0xFF,
  0x00, 0x00, 0x69,
  0x00, 0x03, 0xB0,
  0x00, 0x0C, 0x20,
  0x00, 0x77, 0x00,
  0x00, 0xD1, 0x00,
  0x05, 0xA0, 0x00,
  0x0A, 0x50, 0x00,
  0x0E, 0x20, 0x00
};

GUI_CONST_STORAGE unsigned char acGUI_Font_AA4_16_L_0038[ 27] = { /* code 0038, DIGIT EIGHT */
  0x2B, 0xFF, 0xB2,
  0xC7, 0x11, 0x7C,
  0xF0, 0x00, 0x0F,
  0xA7, 0x11, 0x7A,
  0x2E, 0xFF, 0xE2,
  0xB7, 0x01, 0x7B,
  0xF0, 0x00, 0x0F,
  0xC8, 0x11, 0x8C,
  0x2B, 0xFF, 0xB2
};

GUI_CONST_STORAGE unsigned char acGUI_Font_AA4_16_L_0039[ 27] = { /* code 0039, DIGIT NINE */
  0x1B, 0xFE, 0x80,
  0xA8, 0x01, 0xB7,
  0xF0, 0x00, 0x4C,
  0xF1, 0x00, 0x4F,
  0xA9, 0x12, 0xAF,
  0x1B, 0xFD, 0x5E,
  0x00, 0x00, 0x5A,
  0xD5, 0x03, 0xD4,
  0x3C, 0xFD, 0x60
};

GUI_CONST_STORAGE unsigned char acGUI_Font_AA4_16_L_003A[  7] = { /* code 003A, COLON */
  0xF0,
  0x00,
  0x00,
  0x00,
  0x00,
  0x00,
  0xF0
};

GUI_CONST_STORAGE unsigned char acGUI_Font_AA4_16_L_003B[  9] = { /* code 003B, SEMICOLON */
  0xF0,
  0x00,
  0x00,
  0x00,
  0x00,
  0x00,
  0xF0,
  0xF0,
  0x90
};

GUI_CONST_STORAGE unsigned char acGUI_Font_AA4_16_L_003C[ 28] = { /* code 003C, LESS-THAN SIGN */
  0x00, 0x00, 0x05, 0x90,
  0x00, 0x05, 0x95, 0x00,
  0x06, 0x84, 0x00, 0x00,
  0xC6, 0x00, 0x00, 0x00,
  0x07, 0x84, 0x00, 0x00,
  0x00, 0x06, 0x85, 0x00,
  0x00, 0x00, 0x05, 0x80
};

GUI_CONST_STORAGE unsigned char acGUI_Font_AA4_16_L_003D[ 16] = { /* code 003D, EQUALS SIGN */
  0xFF, 0xFF, 0xFF, 0xFF,
  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,
  0xFF, 0xFF, 0xFF, 0xFF
};

GUI_CONST_STORAGE unsigned char acGUI_Font_AA4_16_L_003E[ 28] = { /* code 003E, GREATER-THAN SIGN */
  0x95, 0x00, 0x00, 0x00,
  0x05, 0x95, 0x00, 0x00,
  0x00, 0x04, 0x86, 0x00,
  0x00, 0x00, 0x06, 0xC0,
  0x00, 0x04, 0x87, 0x00,
  0x05, 0x86, 0x00, 0x00,
  0x85, 0x00, 0x00, 0x00
};

GUI_CONST_STORAGE unsigned char acGUI_Font_AA4_16_L_003F[ 27] = { /* code 003F, QUESTION MARK */
  0x1A, 0xEF, 0xB2,
  0xA9, 0x10, 0x7D,
  0xE1, 0x00, 0x0F,
  0x00, 0x00, 0x4A,
  0x00, 0x01, 0xA1,
  0x00, 0x0B, 0x30,
  0x00, 0x0F, 0x00,
  0x00, 0x00, 0x00,
  0x00, 0x0F, 0x00
};

GUI_CONST_STORAGE unsigned char acGUI_Font_AA4_16_L_0040[ 66] = { /* code 0040, COMMERCIAL AT */
  0x00, 0x17, 0xCF, 0xFC, 0x71, 0x00,
  0x02, 0xD9, 0x30, 0x03, 0x9D, 0x10,
  0x1D, 0x50, 0x00, 0x00, 0x08, 0xA0,
  0x89, 0x01, 0xAF, 0xB3, 0x01, 0xE0,
  0xC3, 0x09, 0xA1, 0x29, 0x00, 0xF0,
  0xF0, 0x0E, 0x10, 0x26, 0x05, 0xB0,
  0xF0, 0x0F, 0x31, 0x93, 0x3E, 0x40,
  0xC4, 0x07, 0xFC, 0x5F, 0xD5, 0x00,
  0x5C, 0x10, 0x00, 0x00, 0x00, 0x00,
  0x08, 0xD5, 0x10, 0x14, 0x71, 0x00,
  0x00, 0x4B, 0xEF, 0xD7, 0x00, 0x00
};

GUI_CONST_STORAGE unsigned char acGUI_Font_AA4_16_L_0041[ 36] = { /* code 0041, LATIN CAPITAL LETTER A */
  0x00, 0x0B, 0xA0, 0x00,
  0x00, 0x2A, 0xB1, 0x00,
  0x00, 0x73, 0x47, 0x00,
  0x00, 0xB0, 0x0B, 0x00,
  0x04, 0x60, 0x07, 0x40,
  0x0A, 0xFF, 0xFF, 0x90,
  0x1A, 0x00, 0x00, 0xB1,
  0x65, 0x00, 0x00, 0x66,
  0xC1, 0x00, 0x00, 0x1C
};

GUI_CONST_STORAGE unsigned char acGUI_Font_AA4_16_L_0042[ 36] = { /* code 0042, LATIN CAPITAL LETTER B */
  0xFF, 0xFF, 0xFB, 0x20,
  0xF0, 0x00, 0x17, 0xC0,
  0xF0, 0x00, 0x00, 0xF0,
  0xF0, 0x00, 0x17, 0x90,
  0xFF, 0xFF, 0xFD, 0x10,
  0xF0, 0x00, 0x17, 0xB0,
  0xF0, 0x00, 0x00, 0xF0,
  0xF0, 0x00, 0x06, 0xD0,
  0xFF, 0xFF, 0xFC, 0x30
};

GUI_CONST_STORAGE unsigned char acGUI_Font_AA4_16_L_0043[ 36] = { /* code 0043, LATIN CAPITAL LETTER C */
  0x02, 0xAE, 0xFD, 0x70,
  0x2E, 0x61, 0x03, 0xC7,
  0xA7, 0x00, 0x00, 0x2E,
  0xE1, 0x00, 0x00, 0x00,
  0xF0, 0x00, 0x00, 0x00,
  0xE1, 0x00, 0x00, 0x00,
  0xA7, 0x00, 0x00, 0x2E,
  0x2E, 0x71, 0x03, 0xC7,
  0x03, 0xBE, 0xFD, 0x60
};

GUI_CONST_STORAGE unsigned char acGUI_Font_AA4_16_L_0044[ 36] = { /* code 0044, LATIN CAPITAL LETTER D */
  0xFF, 0xFF, 0xD6, 0x00,
  0xF0, 0x00, 0x4E, 0x40,
  0xF0, 0x00, 0x05, 0xB0,
  0xF0, 0x00, 0x01, 0xE0,
  0xF0, 0x00, 0x00, 0xF0,
  0xF0, 0x00, 0x01, 0xE0,
  0xF0, 0x00, 0x05, 0xB0,
  0xF0, 0x00, 0x3D, 0x40,
  0xFF, 0xFF, 0xC5, 0x00
};

GUI_CONST_STORAGE unsigned char acGUI_Font_AA4_16_L_0045[ 27] = { /* code 0045, LATIN CAPITAL LETTER E */
  0xFF, 0xFF, 0xFD,
  0xF0, 0x00, 0x00,
  0xF0, 0x00, 0x00,
  0xF0, 0x00, 0x00,
  0xFF, 0xFF, 0xF7,
  0xF0, 0x00, 0x00,
  0xF0, 0x00, 0x00,
  0xF0, 0x00, 0x00,
  0xFF, 0xFF, 0xFF
};

GUI_CONST_STORAGE unsigned char acGUI_Font_AA4_16_L_0046[ 27] = { /* code 0046, LATIN CAPITAL LETTER F */
  0xFF, 0xFF, 0xFF,
  0xF0, 0x00, 0x00,
  0xF0, 0x00, 0x00,
  0xF0, 0x00, 0x00,
  0xFF, 0xFF, 0xF7,
  0xF0, 0x00, 0x00,
  0xF0, 0x00, 0x00,
  0xF0, 0x00, 0x00,
  0xF0, 0x00, 0x00
};

GUI_CONST_STORAGE unsigned char acGUI_Font_AA4_16_L_0047[ 36] = { /* code 0047, LATIN CAPITAL LETTER G */
  0x03, 0xBE, 0xFD, 0x91,
  0x2E, 0x61, 0x02, 0x8C,
  0xA7, 0x00, 0x00, 0x00,
  0xE1, 0x00, 0x00, 0x00,
  0xF0, 0x00, 0xFF, 0xFF,
  0xE1, 0x00, 0x00, 0x0F,
  0xA7, 0x00, 0x00, 0x5F,
  0x3E, 0x61, 0x05, 0xAE,
  0x03, 0xBF, 0xEA, 0x1D
};

GUI_CONST_STORAGE unsigned char acGUI_Font_AA4_16_L_0048[ 36] = { /* code 0048, LATIN CAPITAL LETTER H */
  0xF0, 0x00, 0x00, 0xF0,
  0xF0, 0x00, 0x00, 0xF0,
  0xF0, 0x00, 0x00, 0xF0,
  0xF0, 0x00, 0x00, 0xF0,
  0xFF, 0xFF, 0xFF, 0xF0,
  0xF0, 0x00, 0x00, 0xF0,
  0xF0, 0x00, 0x00, 0xF0,
  0xF0, 0x00, 0x00, 0xF0,
  0xF0, 0x00, 0x00, 0xF0
};

GUI_CONST_STORAGE unsigned char acGUI_Font_AA4_16_L_0049[  9] = { /* code 0049, LATIN CAPITAL LETTER I */
  0xF0,
  0xF0,
  0xF0,
  0xF0,
  0xF0,
  0xF0,
  0xF0,
  0xF0,
  0xF0
};

GUI_CONST_STORAGE unsigned char acGUI_Font_AA4_16_L_004A[ 27] = { /* code 004A, LATIN CAPITAL LETTER J */
  0x00, 0x00, 0xF0,
  0x00, 0x00, 0xF0,
  0x00, 0x00, 0xF0,
  0x00, 0x00, 0xF0,
  0x00, 0x00, 0xF0,
  0x00, 0x00, 0xF0,
  0xF0, 0x00, 0xF0,
  0xD5, 0x05, 0xD0,
  0x4D, 0xFC, 0x30
};

GUI_CONST_STORAGE unsigned char acGUI_Font_AA4_16_L_004B[ 36] = { /* code 004B, LATIN CAPITAL LETTER K */
  0xF0, 0x00, 0x1B, 0x30,
  0xF0, 0x01, 0xC3, 0x00,
  0xF0, 0x1B, 0x30, 0x00,
  0xF1, 0xB4, 0x00, 0x00,
  0xFB, 0x99, 0x00, 0x00,
  0xF5, 0x09, 0x50, 0x00,
  0xF0, 0x01, 0xC2, 0x00,
  0xF0, 0x00, 0x3C, 0x10,
  0xF0, 0x00, 0x06, 0x90
};

GUI_CONST_STORAGE unsigned char acGUI_Font_AA4_16_L_004C[ 27] = { /* code 004C, LATIN CAPITAL LETTER L */
  0xF0, 0x00, 0x00,
  0xF0, 0x00, 0x00,
  0xF0, 0x00, 0x00,
  0xF0, 0x00, 0x00,
  0xF0, 0x00, 0x00,
  0xF0, 0x00, 0x00,
  0xF0, 0x00, 0x00,
  0xF0, 0x00, 0x00,
  0xFF, 0xFF, 0xFF
};

GUI_CONST_STORAGE unsigned char acGUI_Font_AA4_16_L_004D[ 45] = { /* code 004D, LATIN CAPITAL LETTER M */
  0xF8, 0x00, 0x00, 0x09, 0xF0,
  0xFC, 0x00, 0x00, 0x0C, 0xF0,
  0xF7, 0x50, 0x00, 0x57, 0xF0,
  0xF2, 0xB0, 0x00, 0xB2, 0xF0,
  0xF0, 0xB2, 0x02, 0xB0, 0xF0,
  0xF0, 0x58, 0x08, 0x50, 0xF0,
  0xF0, 0x0C, 0x0D, 0x00, 0xF0,
  0xF0, 0x09, 0xA9, 0x00, 0xF0,
  0xF0, 0x03, 0xF3, 0x00, 0xF0
};

GUI_CONST_STORAGE unsigned char acGUI_Font_AA4_16_L_004E[ 36] = { /* code 004E, LATIN CAPITAL LETTER N */
  0xF4, 0x00, 0x00, 0xF0,
  0xFB, 0x00, 0x00, 0xF0,
  0xF3, 0x80, 0x00, 0xF0,
  0xF0, 0x83, 0x00, 0xF0,
  0xF0, 0x0A, 0x00, 0xF0,
  0xF0, 0x03, 0x80, 0xF0,
  0xF0, 0x00, 0x83, 0xF0,
  0xF0, 0x00, 0x1B, 0xF0,
  0xF0, 0x00, 0x04, 0xF0
};

GUI_CONST_STORAGE unsigned char acGUI_Font_AA4_16_L_004F[ 45] = { /* code 004F, LATIN CAPITAL LETTER O */
  0x02, 0x9E, 0xFE, 0x92, 0x00,
  0x2E, 0x82, 0x02, 0x8E, 0x20,
  0x98, 0x00, 0x00, 0x08, 0x90,
  0xE2, 0x00, 0x00, 0x02, 0xE0,
  0xF0, 0x00, 0x00, 0x00, 0xF0,
  0xE2, 0x00, 0x00, 0x02, 0xE0,
  0x98, 0x00, 0x00, 0x08, 0x90,
  0x2E, 0x82, 0x02, 0x8E, 0x20,
  0x02, 0x9E, 0xFE, 0x92, 0x00
};

GUI_CONST_STORAGE unsigned char acGUI_Font_AA4_16_L_0050[ 27] = { /* code 0050, LATIN CAPITAL LETTER P */
  0xFF, 0xFF, 0xC3,
  0xF0, 0x00, 0x6C,
  0xF0, 0x00, 0x0F,
  0xF0, 0x01, 0x7C,
  0xFF, 0xFF, 0xB2,
  0xF0, 0x00, 0x00,
  0xF0, 0x00, 0x00,
  0xF0, 0x00, 0x00,
  0xF0, 0x00, 0x00
};

GUI_CONST_STORAGE unsigned char acGUI_Font_AA4_16_L_0051[ 50] = { /* code 0051, LATIN CAPITAL LETTER Q */
  0x02, 0x9E, 0xFE, 0xA2, 0x00,
  0x2E, 0x82, 0x02, 0x8E, 0x20,
  0x98, 0x00, 0x00, 0x07, 0xA0,
  0xE2, 0x00, 0x00, 0x01, 0xE0,
  0xF0, 0x00, 0x00, 0x00, 0xF0,
  0xE2, 0x00, 0x00, 0x02, 0xD0,
  0x98, 0x00, 0x0A, 0x39, 0x70,
  0x2E, 0x82, 0x03, 0xFC, 0x00,
  0x02, 0xAE, 0xFD, 0x7D, 0x70,
  0x00, 0x00, 0x00, 0x02, 0x90
};

GUI_CONST_STORAGE unsigned char acGUI_Font_AA4_16_L_0052[ 36] = { /* code 0052, LATIN CAPITAL LETTER R */
  0xFF, 0xFF, 0xFB, 0x30,
  0xF0, 0x00, 0x07, 0xD0,
  0xF0, 0x00, 0x00, 0xF0,
  0xF0, 0x00, 0x17, 0xB0,
  0xFF, 0xFF, 0xFF, 0x30,
  0xF0, 0x00, 0x07, 0xB0,
  0xF0, 0x00, 0x01, 0xF0,
  0xF0, 0x00, 0x00, 0xF0,
  0xF0, 0x00, 0x00, 0xF0
};

GUI_CONST_STORAGE unsigned char acGUI_Font_AA4_16_L_0053[ 27] = { /* code 0053, LATIN CAPITAL LETTER S */
  0x2B, 0xFF, 0xA1,
  0xD7, 0x01, 0x9A,
  0xF0, 0x00, 0x1F,
  0xA7, 0x00, 0x00,
  0x05, 0xAA, 0x60,
  0x00, 0x00, 0x6B,
  0xF1, 0x00, 0x0F,
  0xA9, 0x10, 0x7D,
  0x1A, 0xEF, 0xB2
};

GUI_CONST_STORAGE unsigned char acGUI_Font_AA4_16_L_0054[ 36] = { /* code 0054, LATIN CAPITAL LETTER T */
  0xFF, 0xFF, 0xFF, 0xF0,
  0x00, 0x0F, 0x00, 0x00,
  0x00, 0x0F, 0x00, 0x00,
  0x00, 0x0F, 0x00, 0x00,
  0x00, 0x0F, 0x00, 0x00,
  0x00, 0x0F, 0x00, 0x00,
  0x00, 0x0F, 0x00, 0x00,
  0x00, 0x0F, 0x00, 0x00,
  0x00, 0x0F, 0x00, 0x00
};

GUI_CONST_STORAGE unsigned char acGUI_Font_AA4_16_L_0055[ 36] = { /* code 0055, LATIN CAPITAL LETTER U */
  0xF0, 0x00, 0x00, 0xF0,
  0xF0, 0x00, 0x00, 0xF0,
  0xF0, 0x00, 0x00, 0xF0,
  0xF0, 0x00, 0x00, 0xF0,
  0xF0, 0x00, 0x00, 0xF0,
  0xF0, 0x00, 0x00, 0xF0,
  0xE2, 0x00, 0x02, 0xE0,
  0x8B, 0x20, 0x2B, 0x80,
  0x08, 0xEF, 0xE8, 0x00
};

GUI_CONST_STORAGE unsigned char acGUI_Font_AA4_16_L_0056[ 36] = { /* code 0056, LATIN CAPITAL LETTER V */
  0xC0, 0x00, 0x00, 0xC0,
  0x85, 0x00, 0x05, 0x80,
  0x3A, 0x00, 0x0A, 0x30,
  0x0C, 0x10, 0x0C, 0x00,
  0x08, 0x50, 0x58, 0x00,
  0x03, 0xA0, 0xA3, 0x00,
  0x00, 0xC1, 0xC0, 0x00,
  0x00, 0x8A, 0x80, 0x00,
  0x00, 0x3F, 0x30, 0x00
};

GUI_CONST_STORAGE unsigned char acGUI_Font_AA4_16_L_0057[ 54] = { /* code 0057, LATIN CAPITAL LETTER W */
  0xB0, 0x00, 0x2F, 0x20, 0x00, 0xA0,
  0xA1, 0x00, 0x7A, 0x70, 0x01, 0xA0,
  0x74, 0x00, 0xB2, 0xC0, 0x04, 0x70,
  0x38, 0x02, 0xB0, 0xB2, 0x07, 0x30,
  0x0B, 0x06, 0x60, 0x67, 0x0A, 0x00,
  0x0B, 0x0B, 0x10, 0x2B, 0x0B, 0x00,
  0x08, 0x5B, 0x00, 0x0C, 0x48, 0x00,
  0x05, 0xC7, 0x00, 0x07, 0xD5, 0x00,
  0x02, 0xF2, 0x00, 0x02, 0xF2, 0x00
};

GUI_CONST_STORAGE unsigned char acGUI_Font_AA4_16_L_0058[ 36] = { /* code 0058, LATIN CAPITAL LETTER X */
  0xA5, 0x00, 0x05, 0xA0,
  0x1C, 0x20, 0x1C, 0x10,
  0x04, 0xB0, 0xA4, 0x00,
  0x00, 0x9A, 0x90, 0x00,
  0x00, 0x2F, 0x30, 0x00,
  0x00, 0xB7, 0xB0, 0x00,
  0x06, 0x90, 0x96, 0x00,
  0x1C, 0x10, 0x1C, 0x10,
  0xA4, 0x00, 0x04, 0xA0
};

GUI_CONST_STORAGE unsigned char acGUI_Font_AA4_16_L_0059[ 36] = { /* code 0059, LATIN CAPITAL LETTER Y */
  0xB3, 0x00, 0x03, 0xB0,
  0x2C, 0x00, 0x0C, 0x20,
  0x08, 0x70, 0x78, 0x00,
  0x00, 0xC3, 0xC0, 0x00,
  0x00, 0x5F, 0x50, 0x00,
  0x00, 0x0F, 0x00, 0x00,
  0x00, 0x0F, 0x00, 0x00,
  0x00, 0x0F, 0x00, 0x00,
  0x00, 0x0F, 0x00, 0x00
};

GUI_CONST_STORAGE unsigned char acGUI_Font_AA4_16_L_005A[ 36] = { /* code 005A, LATIN CAPITAL LETTER Z */
  0xFF, 0xFF, 0xFF, 0xD0,
  0x00, 0x00, 0x09, 0x30,
  0x00, 0x00, 0x75, 0x00,
  0x00, 0x04, 0x70, 0x00,
  0x00, 0x28, 0x00, 0x00,
  0x00, 0x80, 0x00, 0x00,
  0x07, 0x10, 0x00, 0x00,
  0x52, 0x00, 0x00, 0x00,
  0xFF, 0xFF, 0xFF, 0xF0
};

GUI_CONST_STORAGE unsigned char acGUI_Font_AA4_16_L_005B[ 12] = { /* code 005B, LEFT SQUARE BRACKET */
  0xFF,
  0xF0,
  0xF0,
  0xF0,
  0xF0,
  0xF0,
  0xF0,
  0xF0,
  0xF0,
  0xF0,
  0xF0,
  0xFF
};

GUI_CONST_STORAGE unsigned char acGUI_Font_AA4_16_L_005C[ 22] = { /* code 005C, REVERSE SOLIDUS */
  0x70, 0x00,
  0x70, 0x00,
  0x34, 0x00,
  0x08, 0x00,
  0x08, 0x00,
  0x05, 0x30,
  0x01, 0x80,
  0x00, 0x90,
  0x00, 0x63,
  0x00, 0x28,
  0x00, 0x0A
};

GUI_CONST_STORAGE unsigned char acGUI_Font_AA4_16_L_005D[ 12] = { /* code 005D, RIGHT SQUARE BRACKET */
  0xFF,
  0x0F,
  0x0F,
  0x0F,
  0x0F,
  0x0F,
  0x0F,
  0x0F,
  0x0F,
  0x0F,
  0x0F,
  0xFF
};

GUI_CONST_STORAGE unsigned char acGUI_Font_AA4_16_L_005E[ 16] = { /* code 005E, CIRCUMFLEX ACCENT */
  0x00, 0x1B, 0xB1, 0x00,
  0x00, 0xA3, 0x3A, 0x00,
  0x0A, 0x30, 0x04, 0xA0,
  0x85, 0x00, 0x00, 0x58
};

GUI_CONST_STORAGE unsigned char acGUI_Font_AA4_16_L_005F[  4] = { /* code 005F, LOW LINE */
  0xFF, 0xFF, 0xFF, 0xF0
};

GUI_CONST_STORAGE unsigned char acGUI_Font_AA4_16_L_0060[  2] = { /* code 0060, GRAVE ACCENT */
  0x92,
  0x18
};

GUI_CONST_STORAGE unsigned char acGUI_Font_AA4_16_L_0061[ 21] = { /* code 0061, LATIN SMALL LETTER A */
  0x3C, 0xFD, 0x50,
  0xD5, 0x03, 0xE0,
  0x40, 0x02, 0xF0,
  0x29, 0xDB, 0xF0,
  0xD4, 0x00, 0xF0,
  0xF3, 0x07, 0xF0,
  0x6E, 0xE5, 0xAF
};

GUI_CONST_STORAGE unsigned char acGUI_Font_AA4_16_L_0062[ 27] = { /* code 0062, LATIN SMALL LETTER B */
  0xF0, 0x00, 0x00,
  0xF0, 0x00, 0x00,
  0xF3, 0xDF, 0xA1,
  0xF8, 0x11, 0xA9,
  0xF1, 0x00, 0x2E,
  0xF0, 0x00, 0x0F,
  0xF1, 0x00, 0x2E,
  0xF9, 0x11, 0xA9,
  0xF3, 0xDF, 0xA1
};

GUI_CONST_STORAGE unsigned char acGUI_Font_AA4_16_L_0063[ 21] = { /* code 0063, LATIN SMALL LETTER C */
  0x08, 0xEF, 0xC3,
  0x8B, 0x20, 0x6D,
  0xD2, 0x00, 0x00,
  0xF0, 0x00, 0x00,
  0xE3, 0x00, 0x00,
  0x8B, 0x20, 0x6D,
  0x09, 0xEF, 0xB3
};

GUI_CONST_STORAGE unsigned char acGUI_Font_AA4_16_L_0064[ 27] = { /* code 0064, LATIN SMALL LETTER D */
  0x00, 0x00, 0x0F,
  0x00, 0x00, 0x0F,
  0x1A, 0xFD, 0x4F,
  0x8A, 0x11, 0x8F,
  0xE2, 0x00, 0x1F,
  0xF0, 0x00, 0x0E,
  0xE2, 0x00, 0x1F,
  0x9A, 0x11, 0x8F,
  0x1A, 0xFD, 0x3F
};

GUI_CONST_STORAGE unsigned char acGUI_Font_AA4_16_L_0065[ 21] = { /* code 0065, LATIN SMALL LETTER E */
  0x19, 0xEF, 0xA1,
  0x8A, 0x11, 0x98,
  0xE1, 0x00, 0x1E,
  0xFF, 0xFF, 0xFF,
  0xE1, 0x00, 0x00,
  0x89, 0x10, 0x7B,
  0x19, 0xFF, 0xB1
};

GUI_CONST_STORAGE unsigned char acGUI_Font_AA4_16_L_0066[ 18] = { /* code 0066, LATIN SMALL LETTER F */
  0x0A, 0xF0,
  0x0F, 0x00,
  0xBF, 0xF0,
  0x0F, 0x00,
  0x0F, 0x00,
  0x0F, 0x00,
  0x0F, 0x00,
  0x0F, 0x00,
  0x0F, 0x00
};

GUI_CONST_STORAGE unsigned char acGUI_Font_AA4_16_L_0067[ 30] = { /* code 0067, LATIN SMALL LETTER G */
  0x1A, 0xFD, 0x3F,
  0x8A, 0x11, 0x8F,
  0xE2, 0x00, 0x1F,
  0xF0, 0x00, 0x0E,
  0xE2, 0x00, 0x1F,
  0x9A, 0x11, 0x8F,
  0x1A, 0xFD, 0x3F,
  0x00, 0x00, 0x3D,
  0xD5, 0x02, 0xB8,
  0x3C, 0xFE, 0x90
};

GUI_CONST_STORAGE unsigned char acGUI_Font_AA4_16_L_0068[ 27] = { /* code 0068, LATIN SMALL LETTER H */
  0xF0, 0x00, 0x00,
  0xF0, 0x00, 0x00,
  0xF5, 0xEE, 0x50,
  0xF8, 0x05, 0xE0,
  0xF1, 0x00, 0xF0,
  0xF0, 0x00, 0xF0,
  0xF0, 0x00, 0xF0,
  0xF0, 0x00, 0xF0,
  0xF0, 0x00, 0xF0
};

GUI_CONST_STORAGE unsigned char acGUI_Font_AA4_16_L_0069[  9] = { /* code 0069, LATIN SMALL LETTER I */
  0xF0,
  0x00,
  0xF0,
  0xF0,
  0xF0,
  0xF0,
  0xF0,
  0xF0,
  0xF0
};

GUI_CONST_STORAGE unsigned char acGUI_Font_AA4_16_L_006A[ 12] = { /* code 006A, LATIN SMALL LETTER J */
  0x0F,
  0x00,
  0x0F,
  0x0F,
  0x0F,
  0x0F,
  0x0F,
  0x0F,
  0x0F,
  0x0F,
  0x1F,
  0xF9
};

GUI_CONST_STORAGE unsigned char acGUI_Font_AA4_16_L_006B[ 27] = { /* code 006B, LATIN SMALL LETTER K */
  0xF0, 0x00, 0x00,
  0xF0, 0x00, 0x00,
  0xF0, 0x08, 0x50,
  0xF0, 0x67, 0x00,
  0xF4, 0xB0, 0x00,
  0xFA, 0xA2, 0x00,
  0xF1, 0x29, 0x00,
  0xF0, 0x09, 0x30,
  0xF0, 0x01, 0xA0
};

GUI_CONST_STORAGE unsigned char acGUI_Font_AA4_16_L_006C[  9] = { /* code 006C, LATIN SMALL LETTER L */
  0xF0,
  0xF0,
  0xF0,
  0xF0,
  0xF0,
  0xF0,
  0xF0,
  0xF0,
  0xF0
};

GUI_CONST_STORAGE unsigned char acGUI_Font_AA4_16_L_006D[ 35] = { /* code 006D, LATIN SMALL LETTER M */
  0xF5, 0xEE, 0x36, 0xEE, 0x50,
  0xF8, 0x05, 0xD8, 0x03, 0xD0,
  0xF1, 0x00, 0xF1, 0x00, 0xF0,
  0xF0, 0x00, 0xF0, 0x00, 0xF0,
  0xF0, 0x00, 0xF0, 0x00, 0xF0,
  0xF0, 0x00, 0xF0, 0x00, 0xF0,
  0xF0, 0x00, 0xF0, 0x00, 0xF0
};

GUI_CONST_STORAGE unsigned char acGUI_Font_AA4_16_L_006E[ 21] = { /* code 006E, LATIN SMALL LETTER N */
  0xF5, 0xEE, 0x50,
  0xF8, 0x05, 0xE0,
  0xF1, 0x00, 0xF0,
  0xF0, 0x00, 0xF0,
  0xF0, 0x00, 0xF0,
  0xF0, 0x00, 0xF0,
  0xF0, 0x00, 0xF0
};

GUI_CONST_STORAGE unsigned char acGUI_Font_AA4_16_L_006F[ 21] = { /* code 006F, LATIN SMALL LETTER O */
  0x1A, 0xFF, 0xA1,
  0x9A, 0x11, 0xA8,
  0xE2, 0x00, 0x2E,
  0xF0, 0x00, 0x0F,
  0xE2, 0x00, 0x2E,
  0x9A, 0x11, 0xA9,
  0x1A, 0xFF, 0xA1
};

GUI_CONST_STORAGE unsigned char acGUI_Font_AA4_16_L_0070[ 30] = { /* code 0070, LATIN SMALL LETTER P */
  0xF3, 0xDF, 0xA1,
  0xF8, 0x11, 0xA9,
  0xF1, 0x00, 0x2E,
  0xF0, 0x00, 0x0F,
  0xF1, 0x00, 0x2E,
  0xF9, 0x11, 0xA9,
  0xF3, 0xDF, 0xA1,
  0xF0, 0x00, 0x00,
  0xF0, 0x00, 0x00,
  0xF0, 0x00, 0x00
};

GUI_CONST_STORAGE unsigned char acGUI_Font_AA4_16_L_0071[ 30] = { /* code 0071, LATIN SMALL LETTER Q */
  0x1A, 0xFD, 0x3F,
  0x9A, 0x11, 0x8F,
  0xE2, 0x00, 0x1F,
  0xF0, 0x00, 0x0E,
  0xE2, 0x00, 0x1F,
  0x9A, 0x11, 0x8F,
  0x1A, 0xFD, 0x3F,
  0x00, 0x00, 0x0F,
  0x00, 0x00, 0x0F,
  0x00, 0x00, 0x0F
};

GUI_CONST_STORAGE unsigned char acGUI_Font_AA4_16_L_0072[ 14] = { /* code 0072, LATIN SMALL LETTER R */
  0xF6, 0xE0,
  0xF9, 0x10,
  0xF1, 0x00,
  0xF0, 0x00,
  0xF0, 0x00,
  0xF0, 0x00,
  0xF0, 0x00
};

GUI_CONST_STORAGE unsigned char acGUI_Font_AA4_16_L_0073[ 21] = { /* code 0073, LATIN SMALL LETTER S */
  0x4D, 0xFC, 0x30,
  0xE4, 0x05, 0xD0,
  0xE4, 0x00, 0x00,
  0x3A, 0xC9, 0x20,
  0x00, 0x05, 0xD0,
  0xE4, 0x04, 0xE0,
  0x4C, 0xFD, 0x50
};

GUI_CONST_STORAGE unsigned char acGUI_Font_AA4_16_L_0074[ 18] = { /* code 0074, LATIN SMALL LETTER T */
  0x0F, 0x00,
  0x0F, 0x00,
  0xDF, 0xF0,
  0x0F, 0x00,
  0x0F, 0x00,
  0x0F, 0x00,
  0x0F, 0x00,
  0x0F, 0x00,
  0x0C, 0xF0
};

GUI_CONST_STORAGE unsigned char acGUI_Font_AA4_16_L_0075[ 21] = { /* code 0075, LATIN SMALL LETTER U */
  0xF0, 0x00, 0xF0,
  0xF0, 0x00, 0xF0,
  0xF0, 0x00, 0xF0,
  0xF0, 0x00, 0xF0,
  0xF0, 0x01, 0xF0,
  0xD5, 0x08, 0xF0,
  0x5E, 0xE5, 0xF0
};

GUI_CONST_STORAGE unsigned char acGUI_Font_AA4_16_L_0076[ 21] = { /* code 0076, LATIN SMALL LETTER V */
  0xA0, 0x00, 0xA0,
  0x92, 0x02, 0x90,
  0x47, 0x06, 0x40,
  0x0B, 0x0A, 0x00,
  0x0B, 0x2A, 0x00,
  0x06, 0xA6, 0x00,
  0x02, 0xF2, 0x00
};

GUI_CONST_STORAGE unsigned char acGUI_Font_AA4_16_L_0077[ 35] = { /* code 0077, LATIN SMALL LETTER W */
  0xB0, 0x02, 0xF2, 0x00, 0xB0,
  0x93, 0x06, 0xC6, 0x03, 0x90,
  0x47, 0x0A, 0x4A, 0x07, 0x40,
  0x0B, 0x0C, 0x0C, 0x0B, 0x00,
  0x0B, 0x49, 0x0A, 0x4B, 0x00,
  0x06, 0xC6, 0x06, 0xC6, 0x00,
  0x02, 0xF2, 0x02, 0xF2, 0x00
};

GUI_CONST_STORAGE unsigned char acGUI_Font_AA4_16_L_0078[ 21] = { /* code 0078, LATIN SMALL LETTER X */
  0x96, 0x00, 0x6A,
  0x1C, 0x22, 0xC1,
  0x03, 0xCB, 0x30,
  0x00, 0xAB, 0x00,
  0x04, 0xBA, 0x50,
  0x1C, 0x21, 0xD1,
  0xA5, 0x00, 0x5A
};

GUI_CONST_STORAGE unsigned char acGUI_Font_AA4_16_L_0079[ 30] = { /* code 0079, LATIN SMALL LETTER Y */
  0xC6, 0x00, 0x0B,
  0x6B, 0x00, 0x47,
  0x0E, 0x10, 0x92,
  0x08, 0x60, 0xB0,
  0x02, 0xB4, 0x70,
  0x00, 0xBB, 0x20,
  0x00, 0x5C, 0x00,
  0x00, 0x47, 0x00,
  0x00, 0xB2, 0x00,
  0x0F, 0x80, 0x00
};

GUI_CONST_STORAGE unsigned char acGUI_Font_AA4_16_L_007A[ 21] = { /* code 007A, LATIN SMALL LETTER Z */
  0xBF, 0xFF, 0xFB,
  0x00, 0x00, 0x92,
  0x00, 0x08, 0x30,
  0x00, 0x75, 0x00,
  0x05, 0x60, 0x00,
  0x48, 0x00, 0x00,
  0xEF, 0xFF, 0xFF
};

GUI_CONST_STORAGE unsigned char acGUI_Font_AA4_16_L_007B[ 36] = { /* code 007B, LEFT CURLY BRACKET */
  0x00, 0x6D, 0xF0,
  0x00, 0xE4, 0x00,
  0x00, 0xF0, 0x00,
  0x00, 0xF0, 0x00,
  0x05, 0xD0, 0x00,
  0xFE, 0x30, 0x00,
  0x06, 0xB0, 0x00,
  0x00, 0xF0, 0x00,
  0x00, 0xF0, 0x00,
  0x00, 0xF0, 0x00,
  0x00, 0xD5, 0x00,
  0x00, 0x5D, 0xF0
};

GUI_CONST_STORAGE unsigned char acGUI_Font_AA4_16_L_007C[ 13] = { /* code 007C, VERTICAL LINE */
  0xF0,
  0xF0,
  0xF0,
  0xF0,
  0xF0,
  0xF0,
  0xF0,
  0xF0,
  0xF0,
  0xF0,
  0xF0,
  0xF0,
  0xF0
};

GUI_CONST_STORAGE unsigned char acGUI_Font_AA4_16_L_007D[ 36] = { /* code 007D, RIGHT CURLY BRACKET */
  0xFD, 0x60, 0x00,
  0x04, 0xE0, 0x00,
  0x00, 0xF0, 0x00,
  0x00, 0xF0, 0x00,
  0x00, 0xD4, 0x00,
  0x00, 0x3E, 0xF0,
  0x00, 0xB6, 0x00,
  0x00, 0xF0, 0x00,
  0x00, 0xF0, 0x00,
  0x00, 0xF0, 0x00,
  0x05, 0xD0, 0x00,
  0xFD, 0x50, 0x00
};

GUI_CONST_STORAGE unsigned char acGUI_Font_AA4_16_L_007E[ 12] = { /* code 007E, TILDE */
  0x00, 0x00, 0x00, 0x00,
  0x5D, 0xFB, 0x40, 0x2B,
  0x60, 0x04, 0xBF, 0xD5
};

/* Start of unicode area <Latin-1 Supplement> */
GUI_CONST_STORAGE unsigned char acGUI_Font_AA4_16_L_00B0[  6] = { /* code 00B0, DEGREE SIGN */
  0x8F, 0x80,
  0xF3, 0xF0,
  0x9F, 0x80
};

GUI_CONST_STORAGE GUI_CHARINFO_EXT GUI_Font_AA4_16_L_CharInfo[96] = {
   {   1,   1,   0,  13,   4, acGUI_Font_AA4_16_L_0020 } /* code 0020, SPACE */
  ,{   1,   9,   2,   4,   4, acGUI_Font_AA4_16_L_0021 } /* code 0021, EXCLAMATION MARK */
  ,{   3,   4,   0,   4,   4, acGUI_Font_AA4_16_L_0022 } /* code 0022, QUOTATION MARK */
  ,{   8,   9,   1,   4,  10, acGUI_Font_AA4_16_L_0023 } /* code 0023, NUMBER SIGN */
  ,{   6,  11,   0,   3,   7, acGUI_Font_AA4_16_L_0024 } /* code 0024, DOLLAR SIGN */
  ,{  10,  11,   0,   3,  11, acGUI_Font_AA4_16_L_0025 } /* code 0025, PERCENT SIGN */
  ,{   8,   9,   1,   4,   9, acGUI_Font_AA4_16_L_0026 } /* code 0026, AMPERSAND */
  ,{   1,   4,   1,   4,   2, acGUI_Font_AA4_16_L_0027 } /* code 0027, APOSTROPHE */
  ,{   3,  12,   1,   4,   4, acGUI_Font_AA4_16_L_0028 } /* code 0028, LEFT PARENTHESIS */
  ,{   3,  12,   0,   4,   4, acGUI_Font_AA4_16_L_0029 } /* code 0029, RIGHT PARENTHESIS */
  ,{   5,   5,   1,   4,   7, acGUI_Font_AA4_16_L_002A } /* code 002A, ASTERISK */
  ,{   9,   9,   1,   4,  11, acGUI_Font_AA4_16_L_002B } /* code 002B, PLUS SIGN */
  ,{   1,   3,   1,  12,   4, acGUI_Font_AA4_16_L_002C } /* code 002C, COMMA */
  ,{   3,   1,   1,   9,   4, acGUI_Font_AA4_16_L_002D } /* code 002D, HYPHEN-MINUS */
  ,{   1,   1,   1,  12,   4, acGUI_Font_AA4_16_L_002E } /* code 002E, FULL STOP */
  ,{   4,  11,   0,   4,   4, acGUI_Font_AA4_16_L_002F } /* code 002F, SOLIDUS */
  ,{   6,   9,   0,   4,   7, acGUI_Font_AA4_16_L_0030 } /* code 0030, DIGIT ZERO */
  ,{   3,   9,   1,   4,   7, acGUI_Font_AA4_16_L_0031 } /* code 0031, DIGIT ONE */
  ,{   6,   9,   1,   4,   7, acGUI_Font_AA4_16_L_0032 } /* code 0032, DIGIT TWO */
  ,{   6,   9,   0,   4,   7, acGUI_Font_AA4_16_L_0033 } /* code 0033, DIGIT THREE */
  ,{   6,   9,   0,   4,   7, acGUI_Font_AA4_16_L_0034 } /* code 0034, DIGIT FOUR */
  ,{   6,   9,   0,   4,   7, acGUI_Font_AA4_16_L_0035 } /* code 0035, DIGIT FIVE */
  ,{   6,   9,   1,   4,   7, acGUI_Font_AA4_16_L_0036 } /* code 0036, DIGIT SIX */
  ,{   6,   9,   1,   4,   7, acGUI_Font_AA4_16_L_0037 } /* code 0037, DIGIT SEVEN */
  ,{   6,   9,   0,   4,   7, acGUI_Font_AA4_16_L_0038 } /* code 0038, DIGIT EIGHT */
  ,{   6,   9,   0,   4,   7, acGUI_Font_AA4_16_L_0039 } /* code 0039, DIGIT NINE */
  ,{   1,   7,   1,   6,   4, acGUI_Font_AA4_16_L_003A } /* code 003A, COLON */
  ,{   1,   9,   1,   6,   4, acGUI_Font_AA4_16_L_003B } /* code 003B, SEMICOLON */
  ,{   7,   7,   2,   5,  11, acGUI_Font_AA4_16_L_003C } /* code 003C, LESS-THAN SIGN */
  ,{   8,   4,   2,   7,  11, acGUI_Font_AA4_16_L_003D } /* code 003D, EQUALS SIGN */
  ,{   7,   7,   2,   5,  11, acGUI_Font_AA4_16_L_003E } /* code 003E, GREATER-THAN SIGN */
  ,{   6,   9,   1,   4,   7, acGUI_Font_AA4_16_L_003F } /* code 003F, QUESTION MARK */
  ,{  11,  11,   1,   4,  13, acGUI_Font_AA4_16_L_0040 } /* code 0040, COMMERCIAL AT */
  ,{   8,   9,   0,   4,   8, acGUI_Font_AA4_16_L_0041 } /* code 0041, LATIN CAPITAL LETTER A */
  ,{   7,   9,   1,   4,   9, acGUI_Font_AA4_16_L_0042 } /* code 0042, LATIN CAPITAL LETTER B */
  ,{   8,   9,   1,   4,   9, acGUI_Font_AA4_16_L_0043 } /* code 0043, LATIN CAPITAL LETTER C */
  ,{   7,   9,   1,   4,   9, acGUI_Font_AA4_16_L_0044 } /* code 0044, LATIN CAPITAL LETTER D */
  ,{   6,   9,   1,   4,   8, acGUI_Font_AA4_16_L_0045 } /* code 0045, LATIN CAPITAL LETTER E */
  ,{   6,   9,   1,   4,   8, acGUI_Font_AA4_16_L_0046 } /* code 0046, LATIN CAPITAL LETTER F */
  ,{   8,   9,   1,   4,  10, acGUI_Font_AA4_16_L_0047 } /* code 0047, LATIN CAPITAL LETTER G */
  ,{   7,   9,   1,   4,   9, acGUI_Font_AA4_16_L_0048 } /* code 0048, LATIN CAPITAL LETTER H */
  ,{   1,   9,   1,   4,   3, acGUI_Font_AA4_16_L_0049 } /* code 0049, LATIN CAPITAL LETTER I */
  ,{   5,   9,   0,   4,   6, acGUI_Font_AA4_16_L_004A } /* code 004A, LATIN CAPITAL LETTER J */
  ,{   7,   9,   1,   4,   9, acGUI_Font_AA4_16_L_004B } /* code 004B, LATIN CAPITAL LETTER K */
  ,{   6,   9,   1,   4,   7, acGUI_Font_AA4_16_L_004C } /* code 004C, LATIN CAPITAL LETTER L */
  ,{   9,   9,   1,   4,  11, acGUI_Font_AA4_16_L_004D } /* code 004D, LATIN CAPITAL LETTER M */
  ,{   7,   9,   1,   4,   9, acGUI_Font_AA4_16_L_004E } /* code 004E, LATIN CAPITAL LETTER N */
  ,{   9,   9,   1,   4,  10, acGUI_Font_AA4_16_L_004F } /* code 004F, LATIN CAPITAL LETTER O */
  ,{   6,   9,   1,   4,   8, acGUI_Font_AA4_16_L_0050 } /* code 0050, LATIN CAPITAL LETTER P */
  ,{   9,  10,   1,   4,  10, acGUI_Font_AA4_16_L_0051 } /* code 0051, LATIN CAPITAL LETTER Q */
  ,{   7,   9,   1,   4,   9, acGUI_Font_AA4_16_L_0052 } /* code 0052, LATIN CAPITAL LETTER R */
  ,{   6,   9,   1,   4,   8, acGUI_Font_AA4_16_L_0053 } /* code 0053, LATIN CAPITAL LETTER S */
  ,{   7,   9,   0,   4,   7, acGUI_Font_AA4_16_L_0054 } /* code 0054, LATIN CAPITAL LETTER T */
  ,{   7,   9,   1,   4,   9, acGUI_Font_AA4_16_L_0055 } /* code 0055, LATIN CAPITAL LETTER U */
  ,{   7,   9,   0,   4,   8, acGUI_Font_AA4_16_L_0056 } /* code 0056, LATIN CAPITAL LETTER V */
  ,{  11,   9,   0,   4,  11, acGUI_Font_AA4_16_L_0057 } /* code 0057, LATIN CAPITAL LETTER W */
  ,{   7,   9,   0,   4,   8, acGUI_Font_AA4_16_L_0058 } /* code 0058, LATIN CAPITAL LETTER X */
  ,{   7,   9,   0,   4,   7, acGUI_Font_AA4_16_L_0059 } /* code 0059, LATIN CAPITAL LETTER Y */
  ,{   7,   9,   0,   4,   8, acGUI_Font_AA4_16_L_005A } /* code 005A, LATIN CAPITAL LETTER Z */
  ,{   2,  12,   2,   4,   4, acGUI_Font_AA4_16_L_005B } /* code 005B, LEFT SQUARE BRACKET */
  ,{   4,  11,   0,   4,   4, acGUI_Font_AA4_16_L_005C } /* code 005C, REVERSE SOLIDUS */
  ,{   2,  12,   0,   4,   4, acGUI_Font_AA4_16_L_005D } /* code 005D, RIGHT SQUARE BRACKET */
  ,{   8,   4,   3,   4,  13, acGUI_Font_AA4_16_L_005E } /* code 005E, CIRCUMFLEX ACCENT */
  ,{   7,   1,   0,  15,   7, acGUI_Font_AA4_16_L_005F } /* code 005F, LOW LINE */
  ,{   2,   2,   2,   3,   7, acGUI_Font_AA4_16_L_0060 } /* code 0060, GRAVE ACCENT */
  ,{   6,   7,   1,   6,   7, acGUI_Font_AA4_16_L_0061 } /* code 0061, LATIN SMALL LETTER A */
  ,{   6,   9,   1,   4,   8, acGUI_Font_AA4_16_L_0062 } /* code 0062, LATIN SMALL LETTER B */
  ,{   6,   7,   1,   6,   7, acGUI_Font_AA4_16_L_0063 } /* code 0063, LATIN SMALL LETTER C */
  ,{   6,   9,   1,   4,   8, acGUI_Font_AA4_16_L_0064 } /* code 0064, LATIN SMALL LETTER D */
  ,{   6,   7,   1,   6,   7, acGUI_Font_AA4_16_L_0065 } /* code 0065, LATIN SMALL LETTER E */
  ,{   3,   9,   0,   4,   4, acGUI_Font_AA4_16_L_0066 } /* code 0066, LATIN SMALL LETTER F */
  ,{   6,  10,   1,   6,   8, acGUI_Font_AA4_16_L_0067 } /* code 0067, LATIN SMALL LETTER G */
  ,{   5,   9,   1,   4,   7, acGUI_Font_AA4_16_L_0068 } /* code 0068, LATIN SMALL LETTER H */
  ,{   1,   9,   1,   4,   3, acGUI_Font_AA4_16_L_0069 } /* code 0069, LATIN SMALL LETTER I */
  ,{   2,  12,   0,   4,   3, acGUI_Font_AA4_16_L_006A } /* code 006A, LATIN SMALL LETTER J */
  ,{   5,   9,   1,   4,   6, acGUI_Font_AA4_16_L_006B } /* code 006B, LATIN SMALL LETTER K */
  ,{   1,   9,   1,   4,   3, acGUI_Font_AA4_16_L_006C } /* code 006C, LATIN SMALL LETTER L */
  ,{   9,   7,   1,   6,  11, acGUI_Font_AA4_16_L_006D } /* code 006D, LATIN SMALL LETTER M */
  ,{   5,   7,   1,   6,   7, acGUI_Font_AA4_16_L_006E } /* code 006E, LATIN SMALL LETTER N */
  ,{   6,   7,   1,   6,   7, acGUI_Font_AA4_16_L_006F } /* code 006F, LATIN SMALL LETTER O */
  ,{   6,  10,   1,   6,   8, acGUI_Font_AA4_16_L_0070 } /* code 0070, LATIN SMALL LETTER P */
  ,{   6,  10,   1,   6,   8, acGUI_Font_AA4_16_L_0071 } /* code 0071, LATIN SMALL LETTER Q */
  ,{   3,   7,   1,   6,   4, acGUI_Font_AA4_16_L_0072 } /* code 0072, LATIN SMALL LETTER R */
  ,{   5,   7,   1,   6,   7, acGUI_Font_AA4_16_L_0073 } /* code 0073, LATIN SMALL LETTER S */
  ,{   3,   9,   0,   4,   4, acGUI_Font_AA4_16_L_0074 } /* code 0074, LATIN SMALL LETTER T */
  ,{   5,   7,   1,   6,   7, acGUI_Font_AA4_16_L_0075 } /* code 0075, LATIN SMALL LETTER U */
  ,{   5,   7,   0,   6,   6, acGUI_Font_AA4_16_L_0076 } /* code 0076, LATIN SMALL LETTER V */
  ,{   9,   7,   0,   6,   9, acGUI_Font_AA4_16_L_0077 } /* code 0077, LATIN SMALL LETTER W */
  ,{   6,   7,   0,   6,   6, acGUI_Font_AA4_16_L_0078 } /* code 0078, LATIN SMALL LETTER X */
  ,{   6,  10,   0,   6,   6, acGUI_Font_AA4_16_L_0079 } /* code 0079, LATIN SMALL LETTER Y */
  ,{   6,   7,   0,   6,   6, acGUI_Font_AA4_16_L_007A } /* code 007A, LATIN SMALL LETTER Z */
  ,{   5,  12,   1,   4,   7, acGUI_Font_AA4_16_L_007B } /* code 007B, LEFT CURLY BRACKET */
  ,{   1,  13,   3,   3,   7, acGUI_Font_AA4_16_L_007C } /* code 007C, VERTICAL LINE */
  ,{   5,  12,   1,   4,   7, acGUI_Font_AA4_16_L_007D } /* code 007D, RIGHT CURLY BRACKET */
  ,{   8,   3,   1,   7,  11, acGUI_Font_AA4_16_L_007E } /* code 007E, TILDE */
  ,{   3,   3,   0,   4,   4, acGUI_Font_AA4_16_L_00B0 } /* code 00B0, DEGREE SIGN */
};

GUI_CONST_STORAGE GUI_FONT_PROP_EXT GUI_Font_AA4_16_L_Prop2 = {
   0x00B0 /* first character */
  ,0x00B0 /* last character  */
  ,&GUI_Font_AA4_16_L_CharInfo[ 95] /* address of first character */
  ,(GUI_CONST_STORAGE GUI_FONT_PROP_EXT *)0 /* pointer to next GUI_FONT_PROP_EXT */
};

GUI_CONST_STORAGE GUI_FONT_PROP_EXT GUI_Font_AA4_16_L_Prop1 = {
   0x0020 /* first character */
  ,0x007E /* last character  */
  ,&GUI_Font_AA4_16_L_CharInfo[  0] /* address of first character */
  ,&GUI_Font_AA4_16_L_Prop2 /* pointer to next GUI_FONT_PROP_EXT */
};

GUI_CONST_STORAGE GUI_FONT GUI_Font_AA4_16_L = {
   GUI_FONTTYPE_PROP_AA4_EXT /* type of font    */
  ,16 /* height of font  */
  ,16 /* space of font y */
  ,1 /* magnification x */
  ,1 /* magnification y */
  ,{&GUI_Font_AA4_16_L_Prop1}
  ,13 /* Baseline */
  ,7 /* Height of lowercase characters */
  ,9 /* Height of capital characters */
};

