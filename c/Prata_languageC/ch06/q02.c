// Copyright (C) Khudyashev Ivan, 2018-2020, bahek1983@gmail.com
#include <stdio.h>

int main(void)
{
    
    printf("Start Program\n\n");
    // program here
    int value;
    for (value = 36; value > 0; value /= 2)
        printf("%3d", value);
    float valueF;
    for (valueF = 36; valueF > 0; valueF /= 2)
        printf("%f  ", valueF);
    printf("\nFinish Program!\n");
    return 0;
}
