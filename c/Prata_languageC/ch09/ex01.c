// Copyright (C) Khudyashev Ivan, 2018-2020, bahek1983@gmail.com
#include <stdio.h>

double min(double x, double y);

int main(void)
{
    
    printf("Start Program\n\n");
    // program here
    printf("Input two real numbers: ");
    double x, y;
    if(scanf("%lf %lf", &x, &y) == 2) {
        printf("Minumum from 2 numbers %.2f and %.2f is %.2f\n", x, y, min(x, y));
    }
    printf("\nFinish Program!\n");
    return 0;
}

double min(double x, double y)
{
    return x > y? y: x;
}