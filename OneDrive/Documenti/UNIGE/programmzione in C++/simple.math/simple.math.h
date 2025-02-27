/** \file simple.math.h
    \brief a toy example of math library
    \author Nilde Raccanello
*/

#ifndef_SIMPLEMATH_
#define_SIMPLEMATH_

typedef struct complex_int {
    int re;
    int imm;
} cx_int_t;

typedef struct complex_float {
    float re;
    float imm;
} cx_float_t;

float mean (int a, int b);

cx_float_t cx_mean (cx_int_t a, cx_int_t b);

int max (int a, int b);

#endif