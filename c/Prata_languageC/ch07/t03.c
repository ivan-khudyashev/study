// Copyright (C) Khudyashev Ivan, 2018-2020, bahek1983@gmail.com
#include <stdio.h>

int main(void)
{
    
    printf("Start Program\n\n");
    // program here
    int a = 10;
    int b;
    printf("Input integer: ");
    scanf("%d", &b);
    if(b > a) goto a;
    printf("you have input value less then %d\n", a); goto end;
    a:
    printf("Congrat! You have inputed value greater than %d\n", a);

    end:

    printf("\nFinish Program!\n");
    return 0;
}
