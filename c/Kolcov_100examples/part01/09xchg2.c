// Licence GNU GPL v2
// Copyright (C) Khudyashev Ivan, 2018, bahek1983@gmail.com
#include <stdio.h>
int main() {
    
    double A, B;
    printf("Input first number A = ");
    scanf("%lf", &A);
    printf("Input second number B = ");
    scanf("%lf", &B);
    A = A - B;
    B = A + B;
    A = B - A;
    printf("new value A = %.2lf\n", A);
    printf("new value B = %.2lf\n", B);
    printf("done!\n");
 
    return 0;
}
