// Copyright (C) Khudyashev Ivan, 2018, bahek1983@gmail.com
#include <stdio.h>

int main(void)
{
    
    printf("Start Program\n\n");
    // program here
    float cup_in_pint = 2.0F;
    int ounce_in_cup = 8;
    int bigspoon_in_ounce = 2;
    int spoon_in_bigspoon = 3;

    int input_cups = 0;
    printf("Input volume in cups: ");
    scanf("%d", &input_cups);
    printf("Inputed value in different measure:\n");
    printf("pints = %.2f; cups = %d; ounce = %d; bigspoon = %d; spoon = %d\n",
           (float)input_cups / cup_in_pint,
           input_cups,
           ounce_in_cup * input_cups,
           ounce_in_cup * bigspoon_in_ounce * input_cups,
           ounce_in_cup * bigspoon_in_ounce * spoon_in_bigspoon * input_cups
    );

    printf("\nFinish Program!\n");
    return 0;
}
