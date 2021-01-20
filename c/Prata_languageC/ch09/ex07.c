// Copyright (C) Khudyashev Ivan, 2018-2021, bahek1983@gmail.com
#include <stdio.h>
#include <ctype.h>

int charNumInAlphabet(char c);

int main(void)
{
    
    printf("Start Program\n\n");
    // program here
    printf("Program analize every inputed char about alphabet\nInput any text (Ctrl + Z when end):");
    int ch;
    while((ch = getchar()) != EOF) {
        int pos = 0;
        if((pos = charNumInAlphabet((char)ch)) != -1) {
            printf("%c is letter with position %d in alphabet\n", (char)ch, pos);
        }
    }

    printf("\nFinish Program!\n");
    return 0;
}

int charNumInAlphabet(char c)
{
    if(isalpha(c)) {
        return (int)toupper(c) - (int)'A' + 1;
    }
    return -1;
}