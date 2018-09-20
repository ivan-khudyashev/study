// Licence GNU GPL v2
// Copyright (C) Khudyashev Ivan, 2018, bahek1983@gmail.com
#include <stdio.h>
#include <wchar.h>
#include <locale.h>
#include <stdlib.h>

#define MAX_LEN_VALUE 200

/*
Compute Fibonacci sequence:
0 1 1 2 3 5 8 ... n2 n1
*/
int main() {
    
    setlocale(LC_CTYPE, "");

    int n1 = 1, n2 = 0, seqLen, nextEl;
    wprintf(L"Input length of Fibonacci sequence: ");
    wscanf(L"%d", &seqLen);

    if(seqLen < 2 || seqLen > MAX_LEN_VALUE) {
        wprintf(L"\nWrong length of Fibonacci sequence\n");
        exit(1);
    }
    
    // print initial prefix
    wprintf(L"%d %d", n2, n1);
    for(int i = 1; i < seqLen; ++i) {
        nextEl = n1 + n2;
        wprintf(L" %d", nextEl);
        n2 = n1; n1 = nextEl;
    }
    wprintf(L"\n");
    
    return 0;
}
