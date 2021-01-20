// Copyright (C) Khudyashev Ivan, 2018-2020, bahek1983@gmail.com
#include <stdio.h>

void alter(int* x, int* y);

int main(void)
{
    
    printf("Start Program\n\n");
    // program here
    int x,y;
    printf("Input two integers(separated by space(s)): ");
    if(scanf("%d %d", &x, &y) == 2) {
        printf("You have inputed: x = %d, y = %d\n", x, y);
        alter(&x, &y);
        printf("After alter(x, y): x = %d, y = %d\n", x, y);
    }

    printf("\nFinish Program!\n");
    return 0;
}

void alter(int* x, int* y)
{
    *x = *x + *y;
    *y = *x - 2*(*y);
}