// Copyright (C) Khudyashev Ivan, 2018-2020, bahek1983@gmail.com
#include <stdio.h>

int main(void)
{
    
    printf("Start Program\n\n");
    // program here
    const int ARRAY_LEN = 8;
    const int TWO = 2;
    int powerOfTwo[ARRAY_LEN];
    for(int i = 0, nextPower = 1; i < ARRAY_LEN; i++, nextPower *= TWO) {
        powerOfTwo[i] = nextPower;
    }

    for(int i = 0; i < ARRAY_LEN; i++) {
        printf("powerOfTwo[%d] = %d\n", i, powerOfTwo[i]);
    }

    printf("\nFinish Program!\n");
    return 0;
}
