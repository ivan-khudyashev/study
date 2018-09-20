// Licence GNU GPL v2
// Copyright (C) Khudyashev Ivan, 2018, bahek1983@gmail.com
#include <stdio.h>
#include <wchar.h>
#include <locale.h>
#include <stdlib.h>

#include "part02_lib.h"

int main() {
    
    setlocale(LC_CTYPE, "");
    int n, k;
    wprintf(L"Input n^k: ");
    wscanf(L"%d^%d", &n, &k);
    wprintf(L"%d^%d = %d\n", n, k, powInt(n, k));
    
    return 0;
}
