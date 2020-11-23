// Copyright (C) Khudyashev Ivan, 2018-2020, bahek1983@gmail.com
#include <stdio.h>
#include <ctype.h>

int main(void)
{
    
    printf("Start Program\n\n");
    // program here
    const size_t MAX_NUMBER_LEN = 15;
    const size_t MAX_WORD_LEN = 30;
    size_t idxNum = 0;
    size_t idxWord = 0;
    char ch;
    char number[MAX_NUMBER_LEN + 1];
    char word[MAX_WORD_LEN + 1];
    _Bool isPrint = 0;
    printf("Press '!' if you want to stop\n");
    while((ch = getchar()) != '!') {
        switch(ch) {
            case 'n': 
                while(isdigit(ch = getchar())) {
                    if(idxNum == MAX_NUMBER_LEN) {
                        break;
                    }
                    number[idxNum++] = ch;
                }
                number[idxNum] = '\0';
                break;
            case 'w':
                while(isalpha(ch = getchar())) {
                    if(idxWord == MAX_NUMBER_LEN) {
                        break;
                    }
                    word[idxWord++] = ch;
                }
                word[idxWord] = '\0';
                break;
            default:
                printf("Wrong quilifier of token\n");
        }
        if(idxNum > 0) {
            printf("You have inputed number: %s\n", number);
            idxNum = 0;
        } else if(idxWord > 0) {
            printf("You have inputed word: %s\n", word);
            idxWord = 0;
        }
    }
    printf("\nFinish Program!\n");
    return 0;
}
