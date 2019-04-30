// Copyright (C) Khudyashev Ivan, 2018-2019, bahek1983@gmail.com
#include <stdio.h>

int main(void)
{
    
    printf("Start Program\n\n");
    // program here
    int n = 111, st;
    printf("Just input integer: ");
    st = scanf("%d", &n);
    printf("Status of input = %d, Number now  = %d\n", st, n);

    printf("\nFinish Program!\n");
    return 0;
}
