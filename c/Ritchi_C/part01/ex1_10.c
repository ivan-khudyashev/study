// Licence GNU GPL v2
// Copyright (C) Khudyashev Ivan, 2018, bahek1983@gmail.com
#include <stdio.h>
int main() {
    

    char inputChar;
    while((inputChar = getchar()) != EOF) {
        switch(inputChar) {
            case '\t':
                putchar('\\'); putchar('t');
                break;
            case '\b':
                putchar('\\'); putchar('b');
                break;
            case '\\':
                putchar('\\'); putchar('\\');
                break;
            default: putchar(inputChar);
        }
    }

    return 0;
}
