// Licence GNU GPL v2
// Copyright (C) Khudyashev Ivan, 2018, bahek1983@gmail.com
#include <stdio.h>
#include <wchar.h>
#include <locale.h>
#include <stdlib.h>

int main() {
    
    setlocale(LC_CTYPE, "");
    int n;
    wprintf(L"Input positive integer: ");
    wscanf(L"%d", &n);
    if(n < 1) {
        wprintf(L"You have inputed wrong value\n");
        exit(1);
    }

    for(int i = 1; i <= n; i++) {
        for(int k = 0; k < n - i; k++)
            putwchar(L' ');
        for(int j = 1; j <= i; j++) {
            wprintf(L"* ");
        }
        wprintf(L"\n");
    }

    wprintf(L"\nEnd program\n");
    
    return 0;
}
