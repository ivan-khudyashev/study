// Licence GNU GPL v2
// Copyright (C) Khudyashev Ivan, 2018, bahek1983@gmail.com
#include <stdio.h>
int main() {
    

    printf("\nProgram awayting some input character: ");
    int res = getchar() != EOF;
    printf("Values of getchar() != EOF: %d\n", res);

    return 0;
}
