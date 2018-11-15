// Copyright (C) Khudyashev Ivan, 2018, bahek1983@gmail.com
#include <stdio.h>

void one_three(void);
void two(void);

int main(void)
{
    
    printf("Start Program\n\n");
    // program here
    printf("Let's begin:\n");
    one_three();
    printf("Order!\n");

    printf("\nFinish Program!\n");
    return 0;
}

void one_three(void)
{
    printf("one\n");
    two();
    printf("three\n");
}

void two(void)
{
    printf("two\n");
}
