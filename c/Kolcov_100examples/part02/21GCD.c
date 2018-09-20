// Licence GNU GPL v2
// Copyright (C) Khudyashev Ivan, 2018, bahek1983@gmail.com
#include <stdio.h>
#include <wchar.h>
#include <locale.h>

int GCD(int, int);

int main() {
    
    setlocale(LC_CTYPE, "");

    int n, m;
    wprintf(L"Input 2 numbers (m n) separated by space: ");
    wscanf(L"%d %d", &m, &n);

    wprintf(L"GCD(%d, %d) = %d\n", m, n, GCD(m, n));
    
    return 0;
}
