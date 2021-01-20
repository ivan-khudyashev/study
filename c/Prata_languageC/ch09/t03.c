// Copyright (C) Khudyashev Ivan, 2018-2021, bahek1983@gmail.com
#include <stdio.h>

int main(void)
{
    void someFunc(void)
    {
        printf("Test inner function in C - if you see that, then test successfull! :)\n");
    }
    someFunc();
    printf("Start Program\n\n");
    // program here

    printf("\nFinish Program!\n");
    return 0;
}