// Licence GNU GPL v2
// Copyright (C) Khudyashev Ivan, 2018, bahek1983@gmail.com
#include <stdio.h>
#include <wchar.h>
#include <locale.h>
#include "27isPrime_lib.h"

int main() {
    
    setlocale(LC_CTYPE, "");

    int n;
    wprintf(L"Input positive integer: ");
    wscanf(L"%d", &n);

    if(n < LOWEST_PRIME) {
        wprintf(L"This number can not be tested on prime\n");
        exit(1);
    }
    if(isPrime(n) == 0)
        wprintf(L"%d is not prime\n", n);
    else
        wprintf(L"%d is prime\n", n);
    
    return 0;
}
