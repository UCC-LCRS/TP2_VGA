#include "..\lib_draw.h"



const uint8_t nave_izq1_Table[] = {
0x1C,0x1C,0x1C,0x1C,0x1C,0x1C,0x1C,0x1C,
0x1C,0x1C,0x1C,0x1C,0x1C,0x1C,0x1C,0x1C,
0x1C,0x1C,0x1C,0x1C,0x1C,0x1C,0x1C,0x1C,
0x1C,0x1C,0x1C,0x1C,0x1C,0x1C,0x1C,0x1C,
0x1C,0x1C,0x1C,0x1C,0x1C,0x1C,0x1C,0x1C,
0x1C,0x1C,0x1C,0x1C,0x1C,0x1C,0x1C,0x1C,
0x1C,0x1C,0x1C,0x1C,0x1C,0x1C,0x1C,0x1C,
0x1C,0x1C,0x1C,0x1C,0x1C,0x1C,0x1C,0x1C,
0x1C,0x1C,0x1C,0x1C,0x1C,0x1C,0x1C,0x1C,
0x1C,0x1C,0x1C,0x1C,0x1C,0x1C,0x1C,0x1C,
0x1C,0x1C,0x1C,0x1C,0x1C,0x1C,0x1C,0x1C,
0x1C,0x1C,0x1C,0x1C,0x1C,0x1C,0x1C,0x1C,
0x1C,0x1C,0x1C,0x1C,0x1C,0x1C,0x1C,0x1C,
0x1C,0x1C,0x1C,0x1C,0x1C,0x1C,0x1C,0x1C,
0x1C,0x1C,0x1C,0x1C,0x1C,0x1C,0x1C,0x1C,
0x1C,0x1C,0x1C,0x1C,0x1C,0x1C,0x1C,0x1C,
0x1C,0x1C,0x1C,0x1C,0x1C,0x1C,0x1C,0x1C,
0x1C,0x1C,0x1C,0x1C,0x1C,0x1C,0x1C,0x1C,
0x1C,0x1C,0x1C,0x1C,0x1C,0x1C,0x1C,0x1C,
0x1C,0x1C,0x1C,0x1C,0x1C,0x1C,0x1C,0x1C,
0x1C,0x1C,0x44,0x44,0x69,0x1C,0x1C,0x1C,
0x1C,0x1C,0x1C,0x1C,0x1C,0x1C,0x1C,0x1C,
0x1C,0x1C,0x1C,0x1C,0x1C,0x1C,0x1C,0x1C,
0x1C,0x1C,0x1C,0x1C,0x1C,0x1C,0x1C,0x1C,
0x1C,0x1C,0x1C,0x1C,0x1C,0x44,0x84,0xF1,
0xE9,0x44,0x69,0x1C,0x1C,0x1C,0x1C,0x1C,
0x1C,0x1C,0x1C,0x1C,0x1C,0x1C,0x1C,0x1C,
0x1C,0x1C,0x1C,0x1C,0x1C,0x1C,0x1C,0x1C,
0x1C,0x1C,0x1C,0x1C,0x1C,0x1C,0x1C,0x1C,
0x1C,0x44,0xE9,0xF1,0xE9,0xF1,0xE9,0x44,
0x69,0x1C,0x1C,0x1C,0x1C,0x1C,0x1C,0x1C,
0x1C,0x1C,0x1C,0x1C,0x1C,0x1C,0x1C,0x1C,
0x1C,0x1C,0x1C,0x1C,0x1C,0x1C,0x1C,0x1C,
0x1C,0x44,0x44,0x44,0x1C,0x44,0x84,0xF1,
0xE9,0xE9,0xF1,0xE9,0xF1,0x44,0x1C,0x44,
0x44,0x1C,0x1C,0x1C,0x1C,0x1C,0x1C,0x1C,
0x1C,0x1C,0x1C,0x1C,0x1C,0x1C,0xE8,0xE8,
0xE8,0xE8,0xE8,0x1C,0x44,0xE9,0xE9,0x84,
0x44,0x44,0x44,0x44,0x44,0x44,0x44,0x44,
0x44,0x44,0x44,0x4E,0x44,0x44,0x44,0x44,
0x1C,0x1C,0x1C,0x1C,0x1C,0x1C,0x1C,0x1C,
0x1C,0xF1,0xF1,0xF8,0xF8,0xFE,0xF1,0xE8,
0x44,0x84,0x84,0x84,0x44,0x4E,0x4E,0x44,
0x4E,0x4E,0x4E,0x44,0x44,0x44,0x44,0x4E,
0x44,0xBF,0x69,0xF1,0x44,0x44,0x1C,0x1C,
0x1C,0x1C,0x1C,0x1C,0xF1,0xF1,0xF8,0xF8,
0xFE,0xFE,0xFE,0xE8,0x44,0x45,0x45,0x44,
0x4E,0x4E,0x4E,0x4E,0x77,0x77,0x44,0x84,
0xE8,0xF4,0x44,0x44,0xBF,0xBF,0xBF,0x69,
0xF1,0xE9,0x44,0x1C,0x1C,0x1C,0x1C,0x1C,
0x1C,0xF1,0xF1,0xF8,0xF8,0xFE,0xF1,0xE8,
0x1C,0x44,0x44,0x44,0x44,0x4E,0x4E,0x84,
0x77,0x44,0x84,0xE8,0xF1,0xF8,0xFE,0x44,
0xBF,0xBF,0xBF,0x69,0xF1,0xE9,0xE9,0x44,
0x1C,0x1C,0x1C,0x1C,0x1C,0x1C,0xE8,0xE8,
0xE8,0xE8,0xE8,0x1C,0x1C,0x44,0x84,0x84,
0x44,0x4E,0x4E,0x84,0x77,0x44,0x84,0xE8,
0xE8,0xF8,0xFE,0x44,0xBF,0xBF,0xBF,0x69,
0xF6,0xF1,0xE9,0x44,0x1C,0x1C,0x1C,0x1C,
0x1C,0x1C,0x1C,0x1C,0x1C,0x1C,0x1C,0x1C,
0x1C,0x44,0x44,0x44,0x4E,0x4E,0x4E,0x4E,
0x77,0x77,0x44,0x84,0xE8,0xF4,0x44,0x44,
0xDF,0xDF,0xDF,0x69,0xF6,0xF6,0xE9,0x44,
0x1C,0x1C,0x1C,0x1C,0x1C,0x1C,0xE8,0xE8,
0xE8,0xE8,0xE8,0x1C,0x44,0x45,0x45,0x44,
0x4E,0x4E,0x4E,0x4E,0x44,0x44,0x77,0x44,
0x44,0x44,0x44,0x44,0x44,0xFF,0x69,0xF6,
0xF6,0xF6,0xE9,0x44,0x1C,0x1C,0x1C,0x1C,
0x1C,0xF1,0xF1,0xF8,0xF8,0xFE,0xF1,0xE8,
0x44,0xE9,0xE9,0x44,0x44,0x4E,0x4E,0x44,
0x77,0x77,0x44,0x77,0x77,0x77,0x44,0x4E,
0x77,0x44,0xF6,0xF6,0xF6,0xF1,0x44,0x1C,
0x1C,0x1C,0x1C,0x1C,0xF1,0xF1,0xF8,0xF8,
0xFE,0xFE,0xFE,0xE8,0x44,0x84,0x84,0x44,
0x44,0x44,0x44,0x44,0x44,0x44,0xE9,0x44,
0x44,0x44,0x44,0x4E,0x77,0x44,0xF1,0xF1,
0x44,0x44,0x1C,0x1C,0x1C,0x1C,0x1C,0x1C,
0x1C,0xF1,0xF1,0xF8,0xF8,0xFE,0xF1,0xE8,
0x44,0xE9,0xE9,0x84,0x44,0x44,0xE9,0xF1,
0xE9,0xF1,0xE9,0xF1,0xE9,0xF1,0x44,0x4E,
0x77,0x44,0x44,0x44,0x1C,0x1C,0x1C,0x1C,
0x1C,0x1C,0x1C,0x1C,0x1C,0x1C,0xE8,0xE8,
0xE8,0xE8,0xE8,0x1C,0x44,0x84,0x84,0x84,
0x44,0x44,0x84,0xF1,0xE9,0xE9,0xF1,0xE9,
0xF1,0x69,0x44,0x44,0x69,0x44,0x1C,0x1C,
0x1C,0x1C,0x1C,0x1C,0x1C,0x1C,0x1C,0x1C,
0x1C,0x1C,0x1C,0x1C,0x1C,0x1C,0x1C,0x1C,
0x1C,0x44,0x44,0x44,0x1C,0x44,0xE9,0xF1,
0xE9,0xF1,0xE9,0xF1,0x69,0x44,0x1C,0x44,
0x69,0x1C,0x1C,0x1C,0x1C,0x1C,0x1C,0x1C,
0x1C,0x1C,0x1C,0x1C,0x1C,0x1C,0x1C,0x1C,
0x1C,0x1C,0x1C,0x1C,0x1C,0x1C,0x1C,0x1C,
0x1C,0x44,0x84,0xF1,0xF1,0xE9,0xF1,0x69,
0x44,0x1C,0x1C,0x1C,0x1C,0x1C,0x1C,0x1C,
0x1C,0x1C,0x1C,0x1C,0x1C,0x1C,0x1C,0x1C,
0x1C,0x1C,0x1C,0x1C,0x1C,0x1C,0x1C,0x1C,
0x1C,0x1C,0x1C,0x1C,0x1C,0x44,0xE9,0xF1,
0xE9,0xF1,0x69,0x44,0x1C,0x1C,0x1C,0x1C,
0x1C,0x1C,0x1C,0x1C,0x1C,0x1C,0x1C,0x1C,
0x1C,0x1C,0x1C,0x1C,0x1C,0x1C,0x1C,0x1C,
0x1C,0x1C,0x1C,0x1C,0x1C,0x1C,0x1C,0x1C,
0x1C,0x44,0x69,0x69,0x69,0x69,0x44,0x1C,
0x1C,0x1C,0x1C,0x1C,0x1C,0x1C,0x1C,0x1C,
0x1C,0x1C,0x1C,0x1C,0x1C,0x1C,0x1C,0x1C,
0x1C,0x1C,0x1C,0x1C,0x1C,0x1C,0x1C,0x1C,
0x1C,0x1C,0x1C,0x1C,0x1C,0x69,0x44,0x44,
0x44,0x44,0x1C,0x1C,0x1C,0x1C,0x1C,0x1C,
0x1C,0x1C,0x1C,0x1C,0x1C,0x1C,0x1C,0x1C,
};


//--------------------------------------------------------------
// Image-Struktur
//--------------------------------------------------------------
VGA_Image nave_izq1 = {
  nave_izq1_Table, // Image-Daten
  36,         // Breite des Bildes (in Pixel)
  24,         // Hoehe des Bildes  (in Pixel)
};

