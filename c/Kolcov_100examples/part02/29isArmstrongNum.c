// Licence GNU GPL v2
// Copyright (C) Khudyashev Ivan, 2018, bahek1983@gmail.com
#include <stdio.h>
#include <wchar.h>
#include <locale.h>
#include <stdlib.h>
#include "part02_lib.h"

int main() {
    
    setlocale(LC_CTYPE, "");

    int n;
    wprintf(L"Input positive integer: ");
    wscanf(L"%d", &n);
    if(n < 1) {
        wprintf(L"Wrong number\n");
        exit(1);
    }
    if(isArmstrongNumber(n))
        wprintf(L"%d is Armstrong number\n", n);
    else
        wprintf(L"%d is not Armstrong number\n", n);
    
    return 0;
}
