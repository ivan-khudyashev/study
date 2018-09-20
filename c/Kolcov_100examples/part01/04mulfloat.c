// Licence GNU GPL v2
// Copyright (C) Khudyashev Ivan, 2018, bahek1983@gmail.com
#include <stdio.h>
int main() {
    
    float firstNumber, secondNumber, prod;
    printf("Input two floats separated by space: ");
    scanf("%f %f", &firstNumber, &secondNumber);
    prod = firstNumber * secondNumber;

    printf("%.2f * %.2f = %.2f\n", firstNumber, secondNumber, prod);
    
    return 0;
}
