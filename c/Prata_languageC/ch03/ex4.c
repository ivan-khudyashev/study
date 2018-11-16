// Copyright (C) Khudyashev Ivan, 2018, bahek1983@gmail.com
#include <stdio.h>

int main(void)
{
    
    printf("Start Program\n\n");
    // program here
    float num = 0.0;
    printf("Input float number: ");
    scanf("%f", &num);
    printf("\nForm with fixed point: %f\nExponent form: %e\nBinary-exponent form: %a",
           num, num, num
    );

    printf("\nFinish Program!\n");
    return 0;
}
