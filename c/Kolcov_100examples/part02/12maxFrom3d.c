// Licence GNU GPL v2
// Copyright (C) Khudyashev Ivan, 2018, bahek1983@gmail.com
#include <stdio.h>
int main() {
    
    float f1, f2, f3;
    printf("Input 3 numbers, separated by space: ");
    scanf("%f %f %f", &f1, &f2, &f3);
    printf("maximum = %.0f\n", f1>=f2?(f1>=f3?f1:f3):(f2>=f3?f2:f3));
 
    return 0;
}
