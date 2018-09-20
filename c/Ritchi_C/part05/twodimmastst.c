// Licence GNU GPL v2
// Copyright (C) Khudyashev Ivan, 2018, bahek1983@gmail.com
#include <stdio.h>
int main() {

    int a[3][5] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15}
    };

    printf("*(a + 1) = %d, *(a + 2) = %d\n", **(a+1), **(a+2));
    printf("*(&a[1] + 1) = %d, *(&a[1] + 2) = %d\n", **(&a[1] + 1), **(&a[1] + 2));
    
    return 0;
}
