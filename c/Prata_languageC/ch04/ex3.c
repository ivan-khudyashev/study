// Copyright (C) Khudyashev Ivan, 2018-2019, bahek1983@gmail.com
#include <stdio.h>

int main(void)
{
    float x; 
    printf("Start Program\n\n");
    // program here
    printf("Input float number: ");
    scanf("%f", &x);
    printf("%.1f %.1e\n", x, x);
    printf("%+.3f %.3e\n", x, x);

    printf("\nFinish Program!\n");
    return 0;
}
