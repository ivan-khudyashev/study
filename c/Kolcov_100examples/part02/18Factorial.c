// Licence GNU GPL v2
// Copyright (C) Khudyashev Ivan, 2018, bahek1983@gmail.com
#include <stdio.h>
#include <stdlib.h>
#include <wchar.h>
#include <locale.h>
#define ERROR_ARG_OUT_OF_RANGE 1
int main() {
    
    setlocale(LC_CTYPE, "");
    int n, i;
    long long int fact;
    wprintf(L"Введите значение для вычисления факториала: ");
    wscanf(L"%d", &n);
    if(n < 0 || n > 50) {
        wprintf(L"Можно ввести число в диапазоне от 0 до 50\n");
        exit(ERROR_ARG_OUT_OF_RANGE);
    }
    for(fact = 1, i = 1; i <= n; i++)
        fact *= i;
    wprintf(L"%d! = %lld\n", n, fact);

    return 0;
}
