/*
Copyright 2020 euwbah <euwbah@gmail.com>

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

// This layout was updated for 62 LEDs on the ISO version of the keyboard

#ifdef RGB_MATRIX_ENABLE

# include "rgb_matrix.h"
# include "config_led.h"

led_config_t g_led_config = {
    {
        {0,       1, 2,       3,     4,       5,  6,      7,      8,  9, 10, 11,     12,     13,},
        {14,     15, 16,     17,     18,     19, 20,     21,     22, 23, 24, 25,     26, NO_LED,},
        {27,     28, 29,     30,     31,     32, 33,     34,     35, 36, 37, 38,     39,     40,},
        {41,     42, 43,     44,     45,     46, 47,     48,     49, 50, 51, 52,     53, NO_LED,},
        {54,     55, 56, NO_LED, NO_LED, NO_LED, 57, NO_LED, NO_LED, 58, 59, 60, NO_LED,     61,}
    },
    {
        {8, 0},   {24, 0},  {39, 0},  {55, 0},   {70, 0},   {86, 0},   {101, 0},  {117, 0},  {132, 0},  {148, 0},  {164, 0},  {180, 0},  {195, 0},  {218, 0},
        {11, 16}, {31, 16}, {47, 16}, {62, 16},  {78, 16},  {93, 16},  {109, 16}, {124, 16}, {140, 16}, {155, 16}, {171, 16}, {186, 16}, {202, 16}, 
        {13, 32}, {34, 32}, {50, 32}, {65, 32},  {81, 32},  {96, 32},  {112, 32}, {128, 32}, {143, 32}, {159, 32}, {174, 32}, {190, 32}, {205, 32}, {215, 32},
        {10, 48}, {29, 48}, {42, 48}, {57, 48},  {73, 48},  {88, 48},  {104, 48}, {119, 48}, {135, 48}, {150, 48}, {166, 48}, {182, 48}, {211, 48},
        {10, 64}, {29, 64}, {49, 64},                                  {107, 64},                       {165, 64}, {185, 64}, {204, 64},            {224, 64},
    },
    {
        4,  4,  4,  4,  4,  4,  4,  4,  4,  4,  4,  4,  4,  4,
        4,  4,  4,  4,  4,  4,  4,  4,  4,  4,  4,  4,  4,
        4,  4,  4,  4,  4,  4,  4,  4,  4,  4,  4,  4,  4,  4,
        4,  4,  4,  4,  4,  4,  4,  4,  4,  4,  4,  4,  4,
        4,  4,  4,              4,          4,  4,  4,      4,
    }
};

void rgb_matrix_indicators_advanced_user(uint8_t led_min, uint8_t led_max) {
    if (host_keyboard_led_state().caps_lock) {
        // Set capslock key to orange (capslock is led number 27)
        rgb_matrix_set_color(27, 255, 130, 15);
    }
}

#endif
