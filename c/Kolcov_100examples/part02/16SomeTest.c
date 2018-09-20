// Licence GNU GPL v2
// Copyright (C) Khudyashev Ivan, 2018, bahek1983@gmail.com
#include <stdio.h>
#include <stdlib.h>
int main() {

    int k = 0, i = 0;
    while(k < 7) {
        k = 1 + rand() %10;
        printf("%d ", k);
        i++;
    }
    printf("\nКоличество иттераций = %d\n", i);
    
    return 0;
}
