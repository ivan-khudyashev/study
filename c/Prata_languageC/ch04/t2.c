// Copyright (C) Khudyashev Ivan, 2018-2019, bahek1983@gmail.com
#include <stdio.h>

int main(void)
{
    
    printf("Start Program\n\n");
    // program here
    int x = 999;
    printf("Test number output formating\n");
    printf("First test\n");
    printf("<%d>\n<%10d>\n<%10.5d>\n<%10.2d>\n",x, x, x, x);
    printf("Second test\n");
    printf("Output float in ordinary form: %2.2f\n", 2.457e2);
    printf("Third test\n");
    printf("Output by chars: %c%c%c\n", 'H', 105, '\41');
    printf("Fourth test\n");
    printf("Is %2.2e the same as %2.2f\n", 1201.0, 1201.0);

    printf("\nFinish Program!\n");
    return 0;
}
