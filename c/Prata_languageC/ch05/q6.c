// Copyright (C) Khudyashev Ivan, 2018-2019, bahek1983@gmail.com
#include <stdio.h>
#define FORMAT "%s! C is cool!\n"

int main(void)
{
    int num = 10;
    printf("Start Program\n\n");
    // program here
    printf(FORMAT, FORMAT);
    printf("%d\n", ++num);
    printf("%d\n", num++);
    printf("%d\n", num--);
    printf("%d\n", num);

    printf("\nFinish Program!\n");
    return 0;
}
