// Licence GNU GPL v2
// Copyright (C) Khudyashev Ivan, 2018, bahek1983@gmail.com
#include <stdio.h>
#include <wchar.h>
#include <locale.h>
#include <stdlib.h>
#include "21GCD_lib.h"

int main() {
    
    setlocale(LC_CTYPE, "");

    int m, n;
    wprintf(L"Input two numbers with space between: ");
    wscanf(L"%d %d", &m, &n);
    wprintf(L"LCC(%d, %d) = %d\n", m, n, m * n / GCD(m, n));
    
    return 0;
}
