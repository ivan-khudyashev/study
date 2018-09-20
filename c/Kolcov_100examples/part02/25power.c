// Licence GNU GPL v2
// Copyright (C) Khudyashev Ivan, 2018, bahek1983@gmail.com
#include <stdio.h>
#include <wchar.h>
#include <locale.h>
#include <stdlib.h>

int main() {
    
    setlocale(LC_CTYPE, "");

    int n, pow_k, multipliyer;
    wprintf(L"Input expression n^k for powering n in "
      "power k: ");
    wscanf(L"%d^%d", &n, &pow_k);
    wprintf(L"n = %d, pow_k = %d\n", n, pow_k);
    multipliyer = n;
    pow_k -= 1; // because n itself n^1
    while(pow_k-- > 0)
        n *= multipliyer;

    wprintf(L"result = %d\n", n);
    
    return 0;
}
