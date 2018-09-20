// Licence GNU GPL v2
// Copyright (C) Khudyashev Ivan, 2018, bahek1983@gmail.com
#include <stdio.h>
#include <wchar.h>
#include <locale.h>
#include <stdlib.h>

#define BASE_OF_COUNT_SYSTEM 10

int main() {
    
    setlocale(LC_CTYPE, "");

    int n = 0, digitCount = 0;
    wprintf(L"Input integer: ");
    wscanf(L"%d", &n);
    if(n < 0) 
        n = -n;
    while((++digitCount,n/=BASE_OF_COUNT_SYSTEM)!= 0);
    wprintf(L"\ndigit count = %d\n", digitCount);
    
    return 0;
}
