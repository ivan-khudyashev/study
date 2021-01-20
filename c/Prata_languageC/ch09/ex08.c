// Copyright (C) Khudyashev Ivan, 2018-2021, bahek1983@gmail.com
#include <stdio.h>

double power(double x, int n);

int main(void)
{
    const char inpMsg[] = "Please input x and n separated by spaces (q - for exit): ";
    double x;
    int n;
    printf("Start Program\n\n");
    // program here
    printf("%s\n", "Program calculate x^n, where x - real number, n - integer");
    while(printf(inpMsg), scanf("%lf %d", &x, &n) == 2) {
        printf("%g power to %d = %g\n", x, n, power(x,n));
    }
    printf("\nFinish Program!\n");
    return 0;
}

double power(double x, int n)
{
    double pow = 1.0, factor = x;
    if(n == 0) {
        if(x == 0.0) {
            printf("0 to power 0 is undefined!\n");
            return 0;
        } else {
            return 1;
        }
    }
    if(n < 0) {
        factor = 1.0 /x;
        n = -n;
    }
    while(n-- > 0) {
        pow *= factor;
    }
    return pow;
}