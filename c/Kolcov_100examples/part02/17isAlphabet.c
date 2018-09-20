// Licence GNU GPL v2
// Copyright (C) Khudyashev Ivan, 2018, bahek1983@gmail.com
#include <stdio.h>
#include <wchar.h>
#include <locale.h>
int main() {
    
    // for correct working (w)printf 
    setlocale(LC_CTYPE, ""); 

    wchar_t c;
    wprintf(L"Введите символ: ");
    wscanf(L"%lc", &c);
    if(c <= L'Я' && c >= L'А' || c <= L'я' && c >= L'а')
        wprintf(L"Символ алфавитный\n");
    else
        wprintf(L"Символ неалфавитный\n");

    return 0;
}
