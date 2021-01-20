// Copyright (C) Khudyashev Ivan, 2018-2020, bahek1983@gmail.com
#include <stdio.h>

double harmonicMean(double x, double y);

int main(void)
{
    
    printf("Start Program\n\n");
    // program here
    double x, y, hm;
    printf("Program calculate Harmonic Mean for 2 real numbers.\n");
    printf("Please, input 2 not zero real numbers: ");
    if(scanf("%lf %lf", &x, &y) == 2) {
        hm = harmonicMean(x, y);
        if(hm == 0.0) {
            printf("Error. One of inputed value is zero. Harmonic Mean not define\n");
        } else {
            printf("Harmonic_Mean(%.3f, %.3f) = %.3f\n", x, y, hm);
        }
    }

    printf("\nFinish Program!\n");
    return 0;
}

/**
 * Harmonic Mean for x and y is:
 *  1 / ( ((1/x) + (1/y)) / 2 )
 *  or equivalent:
 *   2 / (1/x + 1/y)
 * It calculated by steps:
 *  1) inverse both numbers: 1/x, 1/y
 *  2) calculate averaging of step 1: s2_value = (1/x + 1/y) / 2
 *  3) inverse result of step 2: harmonic_mean = 1 / s2_value
 */
double harmonicMean(double x, double y)
{
    if(x == 0.0 || y == 0.0) {
        /* raise error */
        printf("Can't calculate Harmonic Mean: at least one of value is zero\n");
        return 0.0;
    }
    return 2.0 / (1.0 / x + 1.0 / y);
}