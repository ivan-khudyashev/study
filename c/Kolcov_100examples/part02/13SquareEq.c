// Licence GNU GPL v2
// Copyright (C) Khudyashev Ivan, 2018, bahek1983@gmail.com
#include <stdio.h>
#include <math.h>
int main() {
    
    float a, b, c, r1, r2, D, re_x, im_x;
    printf("Input coeff. of square equation a*x^2 + b*x + c = 0\n");
    printf("You must input coef. a b c - separated by space: ");
    scanf("%f %f %f", &a, &b, &c);
    D = b * b - 4*a*c;
    if( D > 0 ) {
        r1 = (-b + sqrt(D))/(2*a);
        r2 = (-b - sqrt(D))/(2*a);
        printf("root1 = %.2f ---  root2 = %.2f\n", r1, r2);
    }
    else if ( D == 0) {
        r1 = -b/(2*a);
        printf("root1 = root2 = %.2f\n", r1);
    }
    else {
        re_x = -b/(2*a);
        im_x = sqrt(-D)/(2*a);
        printf("root1 = %.2f + i%.2f --- root2 = %.2f - i%.2f\n", re_x, im_x, re_x, im_x);
    }
 
    return 0;
}
