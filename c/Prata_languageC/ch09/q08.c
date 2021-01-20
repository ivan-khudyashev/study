// Copyright (C) Khudyashev Ivan, 2018-2020, bahek1983@gmail.com
#include <stdio.h>

int max(int a, int b, int c);

int main(void)
{
    
    printf("Start Program\n\n");
    // program here
    int a, b, c;
    printf("Program query three numbers and return max\n");
    while(printf("Input three numbers separated by spaces: "), scanf("%d %d %d", &a, &b, &c) == 3) {
        printf("Max from (%d, %d, %d) is %d\n", a, b, c, max(a, b, c));
    }

    printf("\nFinish Program!\n");
    return 0;
}

int max(int a, int b, int c)
{
    return a > b? (a > c? a: c): ( b > c? b: c);
    /*
    a = a > b? a: b;
    a = a > c? a: c;
    return a;
    */
}