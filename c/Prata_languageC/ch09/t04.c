// Copyright (C) Khudyashev Ivan, 2018-2021, bahek1983@gmail.com
#include <stdio.h>

void printIntArg(int n);

int main(void)
{
    
    printf("Start Program\n\n");
    // program here
    int n = 100;
    printIntArg(n);

    printf("\nFinish Program!\n");
    return 0;
}

void printIntArg(int n)
{
    printf("Print actual argument n = %d\n", n);
    /*
    int n = 10;
    printf("Print inner variable n = %d\n", n);
    */ /* Error with redefining name */
}