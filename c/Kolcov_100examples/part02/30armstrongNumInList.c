// Licence GNU GPL v2
// Copyright (C) Khudyashev Ivan, 2018, bahek1983@gmail.com
#include <stdio.h>
#include <wchar.h>
#include <locale.h>
#include <stdlib.h>
#include "part02_lib.h"

int main() {
    
    setlocale(LC_CTYPE, "");
    
    int lower, upper;
    wprintf(L"Input interval lower and upper values" 
      " separated by space: ");
    wscanf(L"%d %d", &lower, &upper);
    if(lower > upper || lower < 1) {
        wprintf(L"You have inputed wrong values\n");
        exit(1);
    }
    wprintf(L"List of Armstrong number from [%d, %d]:\n",
      lower, upper);
    for(int i = lower; i <= upper; ++i)
        if(isArmstrongNumber(i))
            wprintf(L"%d\n", i);

    wprintf(L"\nEnd program\n");
    
    return 0;
}
