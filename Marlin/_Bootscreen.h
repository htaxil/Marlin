/**
 * Marlin 3D Printer Firmware
 * Copyright (C) 2016 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (C) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

/**
 * Custom Bitmap for splashscreen
 *
 * This file was generated with marlin-config https://github.com/akaJes/marlin-config/
 *
 * You may use one of the following tools to generate the C++ bitmap array from
 * a black and white image:
 *
 *  - http://www.marlinfw.org/tools/u8glib/converter.html
 *  - http://www.digole.com/tools/PicturetoC_Hex_converter.php
 */
#include <avr/pgmspace.h>

#define CUSTOM_BOOTSCREEN_TIMEOUT   64
#define CUSTOM_BOOTSCREEN_BMPWIDTH  73
#define CUSTOM_BOOTSCREEN_BMPHEIGHT 64

const unsigned char custom_start_bmp[] PROGMEM = {
0x00, 0x00, 0x00, 0x1f, 0xff, 0xfc, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x3f, 0xff, 0xfe, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0x00, 0x06,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x00,
0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60,
0x00, 0x01, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00,
0xc0, 0x00, 0x01, 0x80, 0x00, 0x00, 0x00, 0x00,
0x00, 0x80, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x7f, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x07, 0xff, 0xf0, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xff, 0xfc,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xff,
0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff,
0xff, 0xff, 0x80, 0x00, 0x00, 0x00, 0x00, 0x01,
0xe0, 0x00, 0x03, 0xe0, 0x00, 0x00, 0x00, 0x00,
0x07, 0xc0, 0x00, 0x01, 0xf0, 0x00, 0x00, 0x00,
0x00, 0x07, 0xcf, 0xff, 0xf8, 0xf8, 0x00, 0x00,
0x00, 0x00, 0x0f, 0x9f, 0xff, 0xfc, 0xf8, 0x00,
0x00, 0x00, 0x00, 0x1f, 0x1f, 0xff, 0xfc, 0x7c,
0x00, 0x00, 0x00, 0x00, 0x3f, 0x3f, 0xff, 0xfe,
0x7e, 0x00, 0x00, 0x00, 0x00, 0x3f, 0x3f, 0xff,
0xff, 0x7e, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xff,
0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x7f,
0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00,
0x7f, 0xff, 0xff, 0xff, 0xff, 0x80, 0x00, 0x00,
0x00, 0xfb, 0xff, 0xff, 0xff, 0xef, 0x80, 0x00,
0x00, 0x00, 0xf1, 0xff, 0xff, 0xff, 0xc7, 0x80,
0x00, 0x00, 0x00, 0xf3, 0xff, 0xff, 0xff, 0xe7,
0x80, 0x00, 0x00, 0x00, 0xe3, 0xff, 0xff, 0xff,
0xf3, 0xc0, 0x00, 0x00, 0x01, 0xe7, 0xff, 0xff,
0xff, 0xf1, 0xc0, 0x00, 0x00, 0x01, 0xcf, 0xff,
0xff, 0xff, 0xf9, 0xc0, 0x00, 0x00, 0x01, 0xcf,
0xff, 0xff, 0xff, 0xf9, 0xc0, 0x00, 0x00, 0x01,
0xc7, 0xff, 0xff, 0xff, 0xf1, 0xc0, 0x00, 0x00,
0x00, 0xe7, 0xff, 0xff, 0xff, 0xf3, 0xc0, 0x00,
0x00, 0x00, 0xf3, 0xff, 0xff, 0xff, 0xe3, 0x80,
0x00, 0x00, 0x00, 0xf3, 0xff, 0xff, 0xff, 0xe7,
0x80, 0x00, 0x10, 0x00, 0xf9, 0xff, 0xff, 0xff,
0xcf, 0x80, 0x04, 0x30, 0x00, 0xf8, 0xff, 0xff,
0xff, 0xcf, 0x80, 0x06, 0x60, 0x00, 0x7c, 0xff,
0xff, 0xff, 0x9f, 0x00, 0x03, 0x60, 0x00, 0x7c,
0x7f, 0xff, 0xff, 0x1f, 0x00, 0x03, 0xc0, 0x00,
0x3e, 0x7f, 0xff, 0xff, 0x3e, 0x00, 0x01, 0xc0,
0x00, 0x3f, 0x3f, 0xff, 0xfe, 0x3e, 0x00, 0x01,
0xc0, 0x00, 0x1f, 0x3f, 0xff, 0xfe, 0x7c, 0x00,
0x01, 0xe0, 0x00, 0x1f, 0x9f, 0xff, 0xfc, 0xfc,
0x00, 0x01, 0xe0, 0x00, 0x0f, 0x8f, 0xff, 0xfc,
0xf8, 0x00, 0x03, 0x30, 0x00, 0x07, 0xcf, 0xff,
0xf9, 0xf0, 0x00, 0x06, 0x30, 0x00, 0x03, 0xc0,
0x3e, 0x01, 0xe0, 0x00, 0x06, 0x18, 0x00, 0x01,
0xf0, 0x3e, 0x07, 0xc0, 0x00, 0x0c, 0x08, 0x00,
0x00, 0xff, 0xff, 0xff, 0x80, 0x00, 0x0c, 0x0c,
0x00, 0x00, 0x3f, 0xff, 0xfe, 0x00, 0x00, 0x18,
0x06, 0x00, 0x00, 0x0f, 0xff, 0xf8, 0x00, 0x00,
0x10, 0x06, 0x00, 0x00, 0x03, 0xff, 0xe0, 0x00,
0x00, 0x30, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x60, 0x03, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x60, 0x01, 0x80, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0xc0, 0x00, 0x80, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x00, 0xff,
0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 0x80, 0x00,
0x7f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,

};
