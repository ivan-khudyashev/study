// Licence GNU GPL v2
// Copyright (C) Khudyashev Ivan, 2018, bahek1983@gmail.com
#include <stdio.h>
#include <wchar.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>
#include "part02_lib.h"

int GCD(int m, int n) {
    int r = 1;
    if(n == 0 || m == 0) {
        setlocale(LC_CTYPE, "");
        wprintf(L"Numbers for GCD can not be zero");
        exit(1);
    }
    while(r != 0) {
        r = m % n;
        m = n;
        n = r;
    }
    return m;
}

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

int digitNumberCount(int n) {
    int cnt = 0;
    while(n)
        cnt++, n/= BASE_COUNT_SYSTEM;
    return cnt;
}

int powInt(int n, int k) {
    int res = n;
    for(--k; k > 0; --k)
        res *= n;
    return res;
}

int isArmstrongNumber(int n) {
    if(n < 1) {
        setlocale(LC_CTYPE, "");
        wprintf(L"Wrong number for testing on Armstrong number\n");
        exit(1);
    }
    int digitNum = digitNumberCount(n), saveN = n;
    int armstrongVal = 0;
    while(n)
        armstrongVal+= (powInt(n%BASE_COUNT_SYSTEM, digitNum)),
         n /= BASE_COUNT_SYSTEM;
    if(armstrongVal == saveN)
        return 1;
    else
        return 0;
}

