// Copyright (C) Khudyashev Ivan, 2018-2019, bahek1983@gmail.com
#include <stdio.h>

int main(void)
{
    
    printf("Start Program\n\n");
    // program here
    float x = 3.4e38 * 100.0;
    printf("overflow x = %f\n", x);
    int n = 0x3;
    printf("3 in hex = %#x\n", n);
    double y = 0.5;
    printf("0.5 in power of 2: %a\n", y);

    printf("\nFinish Program!\n");
    return 0;
}
