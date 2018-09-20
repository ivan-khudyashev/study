// Licence GNU GPL v2
// Copyright (C) Khudyashev Ivan, 2018, bahek1983@gmail.com
#include <stdio.h>
#include <wchar.h>
#include <locale.h>
#include <stdlib.h>
#include "27isPrime_lib.h"

int main() {
    
    setlocale(LC_CTYPE, "");

    int lower, upper, nextInt;
    wprintf(L"Input lower and upper numbers separated by space: ");
    wscanf(L"%d %d", &lower, &upper);

    if(lower > upper || lower < LOWEST_PRIME) {
        wprintf(L"Wrong interval, must be: lower <= upper" 
          " and lower >= LOWEST_PRIME");
        exit(1);
    }
    // if lower Even then start with lower+1
    if( (lower & ((int)1)) != 0 )
        nextInt = lower;
    else 
        nextInt = lower + 1;

    wprintf(L"\nPrimes from interval [%d, %d]:\n", lower, upper);
    for(;nextInt <= upper; nextInt += 2)
        if( isPrime(nextInt)  )
            wprintf(L"%d\n", nextInt);
    
    return 0;
}
