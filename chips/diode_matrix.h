#ifndef DIODE_MATRIX_H
#define DIODE_MATRIX_H

#include "../chip_desc.h"

enum DIODE_MATRIX_PINS
{
	ROW0 = 1, ROW1, ROW2, ROW3, ROW4, ROW5, ROW6, ROW7,
	ROW8, ROW9, ROW10, ROW11, ROW12, ROW13, ROW14, ROW15,
    ROW16, ROW17,
	COL0, COL1, COL2, COL3, COL4, COL5, COL6, COL7,
    COL8, COL9, COL10, COL11, COL12, COL13,
    DIODE_MATRIX_TEMP,

    DIODE_MATRIX_MAX_ROWS = 18,
    DIODE_MATRIX_MAX_COLS = 14
};

typedef uint8_t DIODE_LAYOUT[18][14];

extern CHIP_DESC( DIODE_MATRIX );

#endif
