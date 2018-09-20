// Licence GNU GPL v2
// Copyright (C) Khudyashev Ivan, 2018, bahek1983@gmail.com
#include <stdio.h>
#include <wchar.h>
#include <locale.h>
#include <stdlib.h>

#define BASE_COUNT_SYSTEM 10

int main() {
    
    setlocale(LC_CTYPE, "");

    int n, reverseN = 0, saveN;
    wprintf(L"Input positive integer: ");
    wscanf(L"%d", &n);
    if(n < 1) {
        fwprintf(stderr, L"Wrong number\n");
        exit(1);
    }
    saveN = n;
    
    while(n > 0) {
        reverseN *= BASE_COUNT_SYSTEM;
        reverseN += n % BASE_COUNT_SYSTEM;
        n /= BASE_COUNT_SYSTEM;
    }
    // check if numbers are equal using property of XOR
    if((saveN ^ reverseN) == 0)
        wprintf(L"Palindrom!\n");
    else
        wprintf(L"Not palindrom\n");
    
    return 0;
}
