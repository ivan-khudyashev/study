// Copyright (C) Khudyashev Ivan, 2018-2021, bahek1983@gmail.com
#include <stdio.h>

int imax();

int main(void)
{
    
    printf("Start Program\n\n");
    // program here
    int n = 10, m = 100;
    printf("max(%d, %d) = %d\n", n, m, imax(n));

    printf("\nFinish Program!\n");
    return 0;
}

int imax(n, m) /* probably here exists "protection from idiots" in C-compiler */
int n, m;
{
    return n > m ? n: m;
}