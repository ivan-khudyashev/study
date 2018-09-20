// Licence GNU GPL v2
// Copyright (C) Khudyashev Ivan, 2018, bahek1983@gmail.com
#include <stdio.h>
#include <wchar.h>
#include <locale.h>
#include <stdlib.h>

#define UPPER_MUL_VALUE 10
int main() {
    
    setlocale(LC_CTYPE, "");

    for(int i = 1; i < UPPER_MUL_VALUE; i++) {
        for(int j = 1; j < UPPER_MUL_VALUE; j++) {
            wprintf(L"%2d ", i * j);
        }
        wprintf(L"\n");
    }
    
    return 0;
}
