// Copyright (C) Khudyashev Ivan, 2018-2020, bahek1983@gmail.com
#include <stdio.h>

int main(void)
{
    
    printf("Start Program\n\n");
    // program here
    const int ARRAY_LEN = 8;
    double numbers[ARRAY_LEN];
    double sumNumbers[ARRAY_LEN];
    const char msg[] = "Input %d numbers separated by space: ";
    const char formatStr = "%10.2f ";
    printf(msg, ARRAY_LEN);
    for(int i = 0; i < ARRAY_LEN; i++) {
        scanf("%f", numbers + i);
    }
    // suppose that first array consist at least one element with index 0
    sumNumbers[0] = numbers[0];
    for(int i = 1; i < ARRAY_LEN; i++) {
        sumNumbers[i] = sumNumbers[i - 1] + numbers[i];
    }
    for(int i = 0; i < ARRAY_LEN; i++) {
        printf(formatStr, numbers[i]);
    }
    for(int i = 0; i < ARRAY_LEN; i++) {
        printf(formatStr, sumNumbers[i]);
    }
    printf("\nFinish Program!\n");
    return 0;
}
