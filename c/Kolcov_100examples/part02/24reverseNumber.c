// Licence GNU GPL v2
// Copyright (C) Khudyashev Ivan, 2018, bahek1983@gmail.com
#include <stdio.h>
#include <wchar.h>
#include <locale.h>
#include <stdlib.h>

#define BASE_COUNT_SYSTEM 10

int main() {
    
    setlocale(LC_CTYPE, "");

    int n = 0, revN = 0;
    wprintf(L"Input positive integer: ");
    wscanf(L"%d", &n);
    if(n < 1) {
        wprintf(L"\nWrong number\n");
        exit(1);
    }
    while(n > 0) {
        revN *= BASE_COUNT_SYSTEM;
        revN += n % BASE_COUNT_SYSTEM;
        n /= BASE_COUNT_SYSTEM;
    }

    wprintf(L"reverse number = %d\n", revN);
    
    return 0;
}
