// Licence GNU GPL v2
// Copyright (C) Khudyashev Ivan, 2018, bahek1983@gmail.com
#include <stdio.h>
#include <wchar.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>

#define LOWEST_UNEVEN_PRIME 3
#define LOWEST_PRIME 2

int isPrime(int n) {
    int upperLimit, lowerLimit = LOWEST_UNEVEN_PRIME;
    int isPrimeFlag = 1;

    if(n < LOWEST_PRIME) {
        setlocale(LC_CTYPE, "");
        wprintf(L"This number can not be tested on prime\n");
        exit(1);
    }
    if((n &  ((int)1)) == 0)
        isPrimeFlag = 0;
    else {
        upperLimit = (int)sqrt((double)n);
        for(int i = lowerLimit; i <= upperLimit; i+=2)
            if(n%i == 0) {
                isPrimeFlag = 0;
                break;
            }
    }
    return isPrimeFlag;
}
