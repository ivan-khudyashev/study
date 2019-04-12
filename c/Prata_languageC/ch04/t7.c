// Copyright (C) Khudyashev Ivan, 2018-2019, bahek1983@gmail.com
#include <stdio.h>
#include <float.h>

int main(void)
{
    
    printf("Start Program\n\n");
    // program here
    printf("Count of minimal supplyed decimal ditigs in <float>: %d\n", FLT_DIG);
    printf("Numbers of bits in mantissa in <float>: %d\n",FLT_MANT_DIG);
    printf("Count of minimal supplyed decimal ditigs in <double>: %d\n", DBL_DIG);
    printf("Numbers of bits in mantissa in <double>: %d\n",DBL_MANT_DIG);
    printf("Count of minimal supplyed decimal ditigs in <long double>: %d\n", LDBL_DIG);
    printf("Numbers of bits in mantissa in <logn double>: %d\n",LDBL_MANT_DIG);

    printf("\nFinish Program!\n");
    return 0;
}
