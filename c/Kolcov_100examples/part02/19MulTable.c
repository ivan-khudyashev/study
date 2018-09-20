// Licence GNU GPL v2
// Copyright (C) Khudyashev Ivan, 2018, bahek1983@gmail.com
#include <stdio.h>
#include <stdlib.h>
#include <wchar.h>
#include <locale.h>
int main() {
    
    setlocale(LC_CTYPE, "");

    int n, i;
    wprintf(L"Введите число для формирования таблицы умножения (1 < x < 100): ");
    wscanf(L"%d", &n);
    if(n < 2 || n > 99) {
        wprintf(L"Число за границей допустимого диапазона\n");
        exit(1);
    }
    for(i = 1; i < 11; ++i)
        wprintf(L"%d * %d = %d\n", n, i, n*i);

    return 0;
}
