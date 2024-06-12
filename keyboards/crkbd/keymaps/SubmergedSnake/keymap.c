/*
Copyright 2019 @foostan
Copyright 2020 Drashna Jaelre <@drashna>

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

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_split_3x5_3(

//,-----------------------------------------------------.                    ,-----------------------------------------------------.
          KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                         KC_Y,    KC_U,    KC_I,    KC_O,   KC_P,
  //|---------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
          LGUI_T(KC_A),    LALT_T(KC_S),    LCTL_T(KC_D),    LSFT_T(KC_F),    KC_G,                         KC_H,    LSFT_T(KC_J),    LCTL_T(KC_K),    LALT_T(KC_L), LGUI_T(KC_SCLN),
  //|---------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
          KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                         KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                           LT(1,KC_ESC),LT(3,KC_SPC),  LT(2,KC_TAB),LT(4,KC_ENT),  LT(5,KC_BSPC), LT(6,KC_DEL)

  ),
    [1] = LAYOUT_split_3x5_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,                         XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_1, KC_2, KC_3, KC_4, KC_5,                     KC_6,   KC_7,KC_8, KC_9, KC_0,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          XXXXXXX, XXXXXXX,  XXXXXXX,     XXXXXXX,   XXXXXXX, XXXXXXX
                                      //`--------------------------'  `--------------------------'
  ),
    [2] = LAYOUT_split_3x5_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      RSFT(KC_1), RSFT(KC_2), RSFT(KC_3), RSFT(KC_4), RSFT(KC_5),                      LSFT(KC_6), LSFT(KC_7), LSFT(KC_8), LSFT(KC_9), LSFT(KC_0),
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
     KC_GRAVE, LSFT(KC_GRAVE), LSFT(KC_BACKSLASH), LSFT(KC_MINUS), KC_MINUS,           LSFT(KC_EQUAL),   KC_EQUAL,KC_BACKSLASH, KC_QUOTE,    LSFT(KC_QUOTE),
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      LSFT(KC_LEFT_BRACKET), LSFT(KC_RIGHT_BRACKET),    XXXXXXX,    XXXXXXX,    XXXXXXX,                         XXXXXXX,    LSFT(KC_LEFT_BRACKET), LSFT(KC_RIGHT_BRACKET),    KC_LEFT_BRACKET,    KC_RIGHT_BRACKET,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
                                          XXXXXXX, XXXXXXX,  XXXXXXX,     XXXXXXX,   XXXXXXX, XXXXXXX
                                      //`--------------------------'  `--------------------------'
  ),
    [3] = LAYOUT_split_3x5_3(
        XXXXXXX,     XXXXXXX,    XXXXXXX,  XXXXXXX,   XXXXXXX,              XXXXXXX,             LSG(KC_LEFT),             LSG(KC_RIGHT),             XXXXXXX,             XXXXXXX,             \
        XXXXXXX,           XXXXXXX,           XXXXXXX,           XXXXXXX,           XXXXXXX,              XXXXXXX,           KC_LEFT,           KC_DOWN,           KC_UP,             KC_RGHT,           \
        XXXXXXX,              XXXXXXX,           XXXXXXX,    XXXXXXX,    XXXXXXX,              XXXXXXX,            KC_HOME,           KC_PGDN,           KC_PGUP,           KC_END,            \
                                          XXXXXXX, XXXXXXX,  XXXXXXX,     XXXXXXX,   XXXXXXX, XXXXXXX
                                      //`--------------------------'  `--------------------------'
  ),
};
