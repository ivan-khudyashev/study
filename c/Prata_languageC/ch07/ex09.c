// Copyright (C) Khudyashev Ivan, 2018-2020, bahek1983@gmail.com
#include <stdio.h>

_Bool testPrime(int p)
{
    int divider = 3;
    if(p < 2) {
        return 0;
    }
    /* if p even then last bit is zero */
    if(!(p&1)) {
        return 0;
    }
    while(divider * divider <= p) {
        if(!(p%divider)) {
            return 0;
        }
        divider += 2;
    }
    return 1;
}

int main(void)
{
    
    printf("Start Program\n\n");
    // program here
    int num = 0, testp;
    printf("Input positive integer for test: ");
    if(!scanf("%d", &num) || num < 0) {
        printf("You have not inputed positive integer number. Exit\n");
        return 0;
    }
    printf("Enumerate primes which less than or equal to %d: ", num);
    /* Separate check on even */
    if(!(num&1)) {
        printf("%s", "2, ");
    }
    for(int testp = 3; testp <= num; testp+=2) {
        if(testPrime(testp)) {
            printf("%d, ", testp);
        }
    }
    printf("\nFinish Program!\n");
    return 0;
}
