// Copyright (C) Khudyashev Ivan, 2018-2019, bahek1983@gmail.com
#include <stdio.h>
#include <float.h>

int main(void)
{
    float f = 1.0f/3.0f;
    double d = 1.0/3.0;
    printf("Start Program\n\n");
    // program here
    printf("Float values\n%.4f %.12f %.16f\n", f, f, f);
    printf("Double values\n%.4f %.12f %.16f\n", d, d, d);
    printf("FLT_DIG = %d  DBL_DIG = %d\n", FLT_DIG, DBL_DIG);

    printf("\nFinish Program!\n");
    return 0;
}
