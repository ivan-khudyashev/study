// Copyright (C) Khudyashev Ivan, 2018-2019, bahek1983@gmail.com
#include <stdio.h>

float user_input();
int main(void)
{
    const float CM_IN_INCHES = 2.54f;
    const int INCHES_IN_FEET = 12;
    float input_cm = 0;
    float inch;
    int feet;
    printf("Start Program\n\n");
    // program here
    input_cm = user_input();
    while(input_cm > 0.f) {
        inch = input_cm / CM_IN_INCHES;
        feet = (int)inch / INCHES_IN_FEET;
        inch = inch - (float)(feet * INCHES_IN_FEET);
        printf("%.1f cm = %d feet, %.1f inche(s)\n", input_cm, feet, inch);
        input_cm = user_input();
    }
    printf("\nFinish Program!\n");
    return 0;
}

float user_input()
{
    const char INVITE_INPUT[] = "Enter a height in centimeters (<=0 to quit): ";
    float height = 0.f; // finish if bad input
    printf("%s", INVITE_INPUT);
    scanf("%f", &height);
    return height;
}
