// Licence GNU GPL v2
// Copyright (C) Khudyashev Ivan, 2018, bahek1983@gmail.com
#include <stdio.h>
#include <locale.h>
#include <wchar.h>
int main() {
    
    // define locale for correct display national symbols
    // LC_CTYPE define behavour of class print-functions 
    setlocale(LC_CTYPE, "");

    wchar_t c;
    int isLowercaseVowel, isUppercaseVowel;
    wprintf(L"Введите символ: ");
    wscanf(L"%lc", &c);
    isLowercaseVowel = (c == L'а' || c == L'е' || 
      c == L'ы' || c == L'и' || c == L'о' || 
      c == L'у' || c == L'э' || c == L'ю' || c == L'я');
    isUppercaseVowel = (c == L'А' || c == L'Е' || 
      c == L'Ы' || c == L'И' || c == L'О' || 
      c == L'У' || c == L'Э' || c == L'Ю' || c == L'Я');
    if(isLowercaseVowel || isUppercaseVowel)
        wprintf(L"Введённый символ - гласный\n");
    else
        wprintf(L"Введённый символ - согласный\n");

    return 0;
}
