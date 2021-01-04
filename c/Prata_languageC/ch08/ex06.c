// Copyright (C) Khudyashev Ivan, 2018-2020, bahek1983@gmail.com
#include <stdio.h>
#include <ctype.h>

int getFirst(void);

int main(void)
{
    
    printf("Start Program\n\n");
    // program here
    printf("Print any text. Program extract first non-whitespace character from any line\n");
    int ch = getFirst();
    while(ch != EOF) {
        printf("First non-whitespace char is '%c'\n", (char)ch);
        ch = getFirst();
    }
    printf("\nFinish Program!\n");
    return 0;
}

int getFirst(void)
{
    int ch, tempCh;
    while((ch = getchar()) != EOF && isspace(ch)) { continue; }
    if(ch != EOF) {
        while((tempCh = getchar()) != EOF && tempCh != '\n') {continue;} /* skip all input on this line */
    }
    return ch;
}