// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.3.3
// LVGL version: 8.3.6
// Project name: ESP32Clock7inchUI

#include "../ui.h"

#ifndef LV_ATTRIBUTE_MEM_ALIGN
#define LV_ATTRIBUTE_MEM_ALIGN
#endif

// IMAGE DATA: assets\Brasil48.png
const LV_ATTRIBUTE_MEM_ALIGN uint8_t ui_img_brasil48_png_data[] = {
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x88,0x34,0x04,0x88,0x34,0x83,0x88,0x34,0x5A,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x88,0x34,0x63,0x88,0x34,0x7C,0x88,0x34,0xB2,0x88,0x34,0xF3,0x88,0x34,0xFF,0x88,0x34,0xD2,0x88,0x34,0x01,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x88,0x34,0x60,0x88,0x34,0x1E,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x88,0x34,0x84,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0x9A,0xBE,0xF7,0x7B,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x88,0x34,0x04,0x88,0x34,0x06,0x00,0x00,0x00,0x88,0x34,0x1A,0x88,0x34,0xFA,0x88,0x34,0x70,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x88,0x34,0x17,0x88,0x34,0x07,0x00,0x00,0x00,0x00,0x00,0x00,0x88,0x34,0x28,0x88,0x34,0xC1,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0xB0,0x7D,0xFC,0xBE,0xF7,0xF8,0xBE,0xF7,0x1F,0x88,0x34,0x20,0x88,0x34,0x27,0x88,0x34,0xF1,0x88,0x34,0xC3,0x88,0x34,0x31,0x88,0x34,0xA1,0x88,0x34,0xFF,0x88,0x34,0xE1,0x96,0xAE,0x3D,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x88,0x34,0x41,0x88,0x34,0xDA,0x88,0x34,0xFC,0x88,0x34,0x78,0x88,0x34,0x01,0x88,0x34,0x17,0x88,0x34,0xC6,0x88,0x34,0xFF,
    0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x34,0x9E,0xFF,0xA8,0x34,0x9E,0x88,0x34,0xF3,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFB,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0xD0,0x7D,0xEE,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x88,0x34,0x51,0x88,0x34,0xDC,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xC4,0x88,0x34,0xE2,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x0B,0x4D,0xFA,0x3B,0xDF,0xFF,0x55,0xAD,0x9F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x88,0x34,0x95,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0xC9,0x44,0xFE,0xB8,0xBE,0xFF,0x8F,0x6D,0xFF,0x8F,0x75,0xFD,0xA9,0x3C,0x2E,0x88,0x34,0x0F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x88,0x34,0x03,
    0x88,0x34,0xE7,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0xCA,0x44,0xFF,0xC9,0x3C,0xFF,0x88,0x34,0xFF,0x89,0x3C,0xF1,0x89,0x44,0xDC,0x88,0x34,0xFE,0x88,0x34,0xC0,0x88,0x34,0x47,0x88,0x34,0x0F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x88,0x34,0x0C,0x88,0x34,0xFA,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,
    0x88,0x34,0xFF,0xA8,0x34,0xFF,0xA9,0x44,0xF0,0xAA,0x4C,0xE7,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0x99,0x88,0x34,0x27,0x88,0x34,0x13,0x88,0x34,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x88,0x34,0x4C,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0xCA,0x44,0xF1,0xA8,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0xA8,0x3C,0xE3,0x88,0x34,0xF7,0x88,0x34,0xFF,0x88,0x34,0xEA,0x88,0x34,0xC9,0x88,0x34,0xCE,0x88,0x34,0x61,0x88,0x34,0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x88,0x34,0x13,0x88,0x34,0x97,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0x95,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x88,0x34,0x45,0x88,0x34,0xBA,0x88,0x34,0xFC,0x88,0x34,0xF8,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,
    0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xBB,0x88,0x34,0x37,0x88,0x34,0x12,0x00,0x00,0x00,0x00,0x00,0x00,0x88,0x34,0x15,0x88,0x34,0xFE,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,
    0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xD5,0x00,0x00,0x00,0x00,0x00,0x00,0x88,0x34,0x62,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0xC9,0x3C,0x31,0x00,0x00,0x00,0x88,0x34,0xE6,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,
    0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x96,0xAE,0xFF,0xBE,0xF7,0x1E,0x88,0x34,0xBE,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,
    0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0xD8,0xBE,0xFF,0xBE,0xF7,0x79,0x88,0x34,0x31,0xA8,0x34,0xD8,0x88,0x34,0xFF,0xA8,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x4D,0x5D,0xFF,0x9E,0xF7,0xFF,0xBE,0xF7,0xD2,0x00,0x00,0x00,0xAF,0x75,0x17,0x33,0x96,0xFE,
    0xD8,0xBE,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x2C,0x55,0xFF,0x76,0xB6,0xFF,0xB1,0x85,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x0B,0x4D,0xFF,0x5C,0xE7,0xFF,0x9E,0xF7,0xFF,0xBE,0xF7,0xB1,0x00,0x00,0x00,0x00,0x00,0x00,0x9E,0xF7,0x59,0x3B,0xDF,0xF3,0x8F,0x6D,0xFF,0x8F,0x6D,0xFF,0xF3,0x95,0xFF,0xDA,0xD6,0xFF,0xFB,0xDE,0xFF,0xF3,0x95,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,
    0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0xEB,0x4C,0xFF,0x3B,0xDF,0xFF,0x9E,0xF7,0xFF,0x9E,0xF7,0xFF,0xBE,0xF7,0x1E,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x9E,0xF7,0x18,0x7D,0xEF,0x34,0x5D,0xEF,0x60,0x3C,0xE7,0xFF,0x1C,0xE7,0xFF,0xFB,0xDE,0xFF,0xF4,0x9D,0x65,0x88,0x34,0xF4,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x34,0x9E,0xFF,
    0x7D,0xEF,0xFF,0x9E,0xF7,0xFF,0x9E,0xF7,0x3F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x5D,0xEF,0x38,0x3C,0xE7,0x80,0x1C,0xE7,0x79,0xDB,0xDE,0x1F,0x00,0x00,0x00,0x88,0x34,0x25,0x71,0x85,0xD8,0xCB,0x4C,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0xA8,0x34,0xFF,0xD1,0x85,0xFF,0x3C,0xE7,0xFF,0x7D,0xEF,0xFF,0x9E,0xF7,0x44,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x18,0xC6,0x5C,0xB6,0xB5,0xFF,0x31,0x85,0xFF,0xAA,0x4C,0xFF,
    0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0xEA,0x4C,0xFF,0x1C,0xE7,0xFF,0x3C,0xE7,0xFF,0x5D,0xEF,0xE3,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xB6,0xB5,0x1B,0x55,0xAD,0x55,0xF3,0x9C,0xFE,0x8B,0x4C,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,
    0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x1C,0xE7,0xFF,0x3C,0xE7,0x96,0x5D,0xEF,0x23,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xF3,0x9C,0x01,0x8A,0x44,0xCF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0xFB,0xDE,0xFF,0x3C,0xE7,0x2A,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x88,0x34,0x37,0x88,0x34,0x99,0x49,0x3C,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0xA8,0x34,0xFF,0x1B,0xDF,0xFF,0x3C,0xE7,0x49,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xEF,0x7B,0x04,0xCB,0x5B,0xFD,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,
    0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0xC9,0x44,0xFF,0x1C,0xE7,0xFF,0x3C,0xE7,0x51,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x8E,0x73,0x49,0x09,0x44,0xB0,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x6E,0x6D,0xFF,0x1C,0xE7,0xFF,0x3C,0xE7,0x46,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x88,0x34,0x4D,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x14,0xA6,0xFF,0x1C,0xE7,0xFF,0x3C,0xE7,0x31,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x88,0x34,0xB3,0x88,0x34,0xFF,
    0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0xA8,0x34,0xFF,0x56,0xAE,0xFF,0x1C,0xE7,0xFE,0x3C,0xE7,0x0B,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x88,0x34,0xA8,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x4E,0x6D,0xFF,0xFB,0xDE,0xFF,
    0x1C,0xE7,0xC5,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x88,0x34,0x65,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x57,0xB6,0xFF,0xFB,0xDE,0xFF,0x3C,0xE7,0xAC,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x88,0x34,0x43,0x88,0x34,0xAA,0x6A,0x4C,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x6F,0x75,0xFF,0xB9,0xCE,0xFF,0x1C,0xE7,0xFC,0x3C,0xE7,0x0D,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x92,0x94,0xC4,0x8A,0x44,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,
    0xA8,0x34,0xFF,0x92,0x95,0xFF,0xF5,0xAD,0xFF,0x15,0xA6,0xFF,0xBA,0xD6,0xFF,0xFB,0xDE,0xFF,0x1C,0xE7,0x8D,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xF3,0x9C,0x5F,0xAD,0x64,0xB5,0x8A,0x44,0xEC,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x0D,0x5D,0xFF,0xB4,0x9D,0xFF,0x59,0xCE,0xFF,0x79,0xCE,0xFF,0xBA,0xD6,0xFF,0xDB,0xDE,0xFF,0x1C,0xE7,0xD4,0x3C,0xE7,0x24,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xA9,0x44,0x59,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x51,0x85,0xFF,0x18,0xC6,0xFF,0x38,0xC6,0xFF,0x79,0xCE,0xFF,0xBA,0xD6,0x85,0xDB,0xDE,0x1C,0xFB,0xDE,0x14,0x1C,0xE7,0x0A,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x88,0x34,0x31,0xA9,0x3C,0xEB,0x88,0x34,0xFF,
    0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x72,0x8D,0xFF,0x18,0xC6,0xFF,0x59,0xCE,0xFF,0x79,0xCE,0xE3,0x9A,0xD6,0x4B,0xDB,0xDE,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x88,0x34,0x85,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0xA9,0x3C,0xFF,0x38,0xC6,0xFF,0x59,0xCE,0xFF,0x9A,0xD6,0xBA,0xBA,0xD6,0x05,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x88,0x34,0x0A,0x88,0x34,0xAB,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x58,0xBE,0xFF,0x9A,0xD6,0xB4,0xBA,0xD6,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x88,0x34,0x30,0x88,0x34,0xDB,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x36,0xB6,0xFF,0xDB,0xDE,0x42,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x88,0x34,0x20,0x88,0x34,0xEF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x2D,0x65,0xFF,0xFB,0xDE,0xFF,0xFB,0xDE,0x63,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x88,0x34,0xB2,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0xA8,0x34,0xFF,0xA8,0x34,0xFF,0xB9,0xCE,0xFF,0x1C,0xE7,0xFF,0x1C,0xE7,0x94,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x88,0x34,0x0F,0x88,0x34,0x65,0x88,0x34,0xF3,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x88,0x34,0xFF,0x4D,0x65,0xFF,0xB1,0x85,0xFF,0x3C,0xE7,0xFF,0x3C,0xE7,0xFE,0x3C,0xE7,0x15,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xC9,0x3C,0x50,0x2C,0x5D,0xFD,0x88,0x34,0xFF,0x88,0x34,0xFF,0xA9,0x3C,0xFF,0x13,0x96,0xFF,0xFA,0xD6,0xFF,0x5D,0xEF,0xFF,0x5D,0xEF,0x69,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x5D,0xEF,0x10,0x5D,0xEF,0x7D,0xD1,0x85,0xFF,0x88,0x34,0xFF,0x6E,0x6D,0xFF,0xD8,0xC6,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0x69,0x7D,0xEF,0x0B,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7D,0xEF,0x5C,0xD1,0x7D,0xFE,0x12,0x8E,0xFF,0x7D,0xEF,0xFF,0x9E,0xF7,0xA6,0x9E,0xF7,0x19,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0xC9,0x3C,0x77,0xF9,0xCE,0xD0,0x9E,0xF7,0xFF,0x9E,0xF7,0x28,0x9E,0xF7,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x9E,0xF7,0x04,0x9E,0xF7,0xE3,0x9E,0xF7,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xBE,0xF7,0x63,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,};
const lv_img_dsc_t ui_img_brasil48_png = {
   .header.always_zero = 0,
   .header.w = 45,
   .header.h = 48,
   .data_size = sizeof(ui_img_brasil48_png_data),
   .header.cf = LV_IMG_CF_TRUE_COLOR_ALPHA,
   .data = ui_img_brasil48_png_data};
