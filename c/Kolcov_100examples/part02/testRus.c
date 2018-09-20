// Licence GNU GPL v2
// Copyright (C) Khudyashev Ivan, 2018, bahek1983@gmail.com
#include <stdio.h>
#include <wchar.h>
#include <locale.h>
int main() {
    
    wchar_t c = L'ю';
    setlocale(LC_CTYPE, "");
    wprintf(L"c_spec = %c; hc_spec = %hc; C_spec = %C, lc_spec = %lc \n", c, c, c, c);

    return 0;
}
