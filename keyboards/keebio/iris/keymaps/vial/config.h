/*
Copyright 2017 Danny Nguyen <danny@keeb.io>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

// #define USE_I2C
#define EE_HANDS

// Added by Brian C. Arnold to support Vial.
#define VIAL_KEYBOARD_UID {0xBC, 0x99, 0xF2, 0x61, 0x45, 0x7C, 0xC8, 0xB9}
#define VIAL_UNLOCK_COMBO_ROWS {0,9}
#define VIAL_UNLOCK_COMBO_COLS {0,5}

// pin connected to the data pin of the LEDs
// took this from rev8/info.json
#define WS2812_DI_PIN GP9
// number of leds
#define RGB_MATRIX_LED_COUNT 68
