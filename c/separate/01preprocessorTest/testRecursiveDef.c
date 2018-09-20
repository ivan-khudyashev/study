// Licence GNU GPL v2
// Copyright (C) Khudyashev Ivan, 2018, bahek1983@gmail.com
#include <stdio.h>
#include <wchar.h>
#include <locale.h>
#include <stdlib.h>

#define DIR2 100
#define DIR1 DIR2

int main() {
    
    setlocale(LC_CTYPE, "");
    /*
    int n;
    wprintf(L"Input positive integer: ");
    wscanf(L"%d", &n);
    if(n < 1) {
        wprintf(L"You have inputed wrong value\n");
        exit(1);
    }
    */
    wprintf(L"first stage, DIR1 =(DIR2=%d) = %d\n", DIR2, DIR1);
#undef DIR2
#define DIR2 111
    wprintf(L"second stage (rededine DIR2) DIR1 =(now DIR2 = %d) = %d\n", DIR2, DIR1);

    wprintf(L"\nEnd program\n");
    
    return 0;
}
