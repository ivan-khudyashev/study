// Licence GNU GPL v2
// Copyright (C) Khudyashev Ivan, 2018, bahek1983@gmail.com
#include <stdio.h>
#include <wchar.h>
#include <locale.h>
#include <stdlib.h>

int main() {
    
    setlocale(LC_CTYPE, "");
    double n1, n2, res = 0.0;
    wchar_t op = 0;
    int isSuccess = 1;
    wprintf(L"Input operator(+, -, *, /): ");
    wscanf(L"%lc", &op);
    wprintf(L"Input two operand separated by space: ");
    wscanf(L"%lf %lf", &n1, &n2);
    switch(op) {
        case L'+':
            res = n1 + n2;
            break;
        case L'-':
            res = n1 - n2;
            break;
        case L'*':
            res = n1 * n2;
            break;
        case L'/':
            if(n2 == 0.0) {
                wprintf(L"Can't divide by zero\n");
                isSuccess = 0;
            }
            else
               res = n1 / n2;
            break;
        default :
            isSuccess = 0;
            wprintf(L"Wrong operation");
    }
    if(isSuccess)
        wprintf(L"%.2lf %lc %.2lf = %.2lf", n1, op, n2, res);

    wprintf(L"\nEnd program\n");
    
    return 0;
}
