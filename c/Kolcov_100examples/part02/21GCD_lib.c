// Licence GNU GPL v2
// Copyright (C) Khudyashev Ivan, 2018, bahek1983@gmail.com
#include "21GCD_lib.h"

int GCD(int m, int n) {
    int r = 1;
    if(n == 0 || m == 0) {
        setlocale(LC_CTYPE, "");
        wprintf(L"Numbers for GCD can not be zero");
        exit(1);
    }
    while(r != 0) {
        r = m % n;
        m = n;
        n = r;
    }
    return m;
}
