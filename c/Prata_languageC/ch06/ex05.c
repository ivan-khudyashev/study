// Copyright (C) Khudyashev Ivan, 2018-2019, bahek1983@gmail.com
#include <stdio.h>

int main(void)
{
    const char baseChar = 'A', fillChar = ' ';
    char limitChar = '_';
    int rows = 0;
    printf("Start Program\n\n");
    // program here
    printf("Input Limit character for create triangle with letters (with Base %c): ", baseChar);
    scanf("%c", &limitChar);
    rows = (limitChar - baseChar) + 1;
    if (rows <= 0) {
        printf("Wrong start character for %c\n", baseChar);
        return 1;
    }
    limitChar = baseChar;
    for(int i = rows - 1; i >= 0; i--, printf("%c", '\n'), limitChar++) {
        for(int k = 0; k < i; k++) {
            printf("%c", fillChar);
        }
        for(char printChar = baseChar; printChar <= limitChar; printChar++) {
            printf("%c", printChar);
        }
        for(char printChar = limitChar - 1; printChar >= baseChar; printChar--) {
            printf("%c", printChar);
        }
        for(int k = 0; k < i; k++) {
            printf("%c", fillChar);
        }
    }
    printf("\nFinish Program!\n");
    return 0;
}
