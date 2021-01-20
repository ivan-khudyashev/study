// Copyright (C) Khudyashev Ivan, 2018-2021, bahek1983@gmail.com
#include <stdio.h>

double larger_of(double x, double y);

int main(void)
{
    
    printf("Start Program\n\n");
    // program here
    double x,y;
    printf("Input 2 real numbers(for x and y): ");
    if(scanf("%lf %lf", &x, &y) == 2) {
        printf("If reset values for arguments in function - it will no effect on caller-function\n");
        printf("Larger value of (x, y) is %lf\n", larger_of(x, y));
        printf("But value of x = %lf and y = %lf\n", x, y);
    }

    printf("\nFinish Program!\n");
    return 0;
}

double larger_of(double x, double y)
{
    return x = y = x < y ? y : x;
}