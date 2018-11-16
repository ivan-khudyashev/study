// Copyright (C) Khudyashev Ivan, 2018, bahek1983@gmail.com
#include <stdio.h>

int main(void)
{
    
    printf("Start Program\n\n");
    // program here
    float centimeter_in_inch = 2.54F;
    float height_in_cent = 0.0F;
    printf("Input height in centimeters: ");
    scanf("%f", &height_in_cent);
    printf("You height in inches = %.3f\n", height_in_cent / centimeter_in_inch);

    printf("\nFinish Program!\n");
    return 0;
}
