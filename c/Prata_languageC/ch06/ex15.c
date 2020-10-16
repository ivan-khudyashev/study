// Copyright (C) Khudyashev Ivan, 2018-2020, bahek1983@gmail.com
#include <stdio.h>
#include <string.h>

int main(void)
{
    const int MAX_STR_LEN = 255;
    char str[MAX_STR_LEN - 1], nextChar;
    int maxLen = MAX_STR_LEN - 1, i, strLen;

    printf("Input some line (program output it in reverse order): ");
    for(i = 0, nextChar = 'a'; i < maxLen && nextChar != '\n';) {
        scanf("%c", &nextChar);
        if(nextChar != '\n') {
            str[i++] = nextChar;
        }
    }
    str[i] = '\0';
    printf("Length of inputed string = %d\n", strLen = strlen(str));
    printf("Output inputed string in reverse order:\n");
    for(i = strLen - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n");

    
    printf("Start Program\n\n");
    // program here

    printf("\nFinish Program!\n");
    return 0;
}