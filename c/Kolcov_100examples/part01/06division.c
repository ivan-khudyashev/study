// Licence GNU GPL v2
// Copyright (C) Khudyashev Ivan, 2018, bahek1983@gmail.com
#include <stdio.h>
int main() {
    
    int dividend, divisor, quotient, remainder;
    printf("Input dividend and divisor separate by space: ");
    scanf("%d %d", &dividend, &divisor);
    quotient = dividend/divisor;
    remainder = dividend%divisor;
    printf("%d/%d = %d(%d)\n", dividend, divisor, quotient, remainder);
    
    return 0;
}
