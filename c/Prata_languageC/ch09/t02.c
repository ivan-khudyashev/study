// Copyright (C) Khudyashev Ivan, 2018-2020, bahek1983@gmail.com
#include <stdio.h>

int sum(int n, int m);
/* double sum(double x, double y); */ /* error duplicate function's name */
double sum_d(double x, double y);


int main(void)
{
    /* double sum(double x, double y);  */ /* error duplicate function's name */
    printf("Start Program\n\n");
    // program here
    int n = 5, m = 8;
    double x = 5.5, y = 2.3;
    printf("sum of ints: %d + %d = %d\n", n, m, sum(n, m));
    /* printf("sum of doubles: %.3f + %.3f = %.3f\n", x, y, sum(x, y)); */
    printf("sum of doubles: %.3f + %.3f = %.3f\n", x, y, sum_d(x, y));

    printf("\nFinish Program!\n");
    return 0;
}

int sum(int n, int m)
{
    return n + m;
}

/* double sum(double x, double y) */ /* error duplicate function's name */
double sum_d(double x, double y)
{
    return x + y;
}