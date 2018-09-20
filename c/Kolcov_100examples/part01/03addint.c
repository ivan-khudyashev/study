// Licence GNU GPL v2
// Copyright (C) Khudyashev Ivan, 2018, bahek1983@gmail.com
#include <stdio.h>
int main() {
    
    int firstNumber, secondNumber, sum;
    printf("Input two integers separated by space: ");
    scanf("%d %d", &firstNumber, &secondNumber);
    sum = firstNumber + secondNumber;

    printf("%d + %d = %d\n", firstNumber, secondNumber, sum);
    
    return 0;
}
