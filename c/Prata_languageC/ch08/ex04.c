// Copyright (C) Khudyashev Ivan, 2018-2020, bahek1983@gmail.com
#include <stdio.h>
#include <ctype.h>

_Bool skipTillWord(void);
int main(void)
{
    
    printf("Start Program\n\n");
    // program here
    unsigned long totalLettersInWords = 0;
    unsigned long totalWords = 0;
    int ch;
    printf("Input any text(Ctr+Z in the end):\n");
    if(skipTillWord()) {
        while((ch = getchar()) != EOF) {
            if(ispunct(ch) || isspace(ch)) {
                ++totalWords;
                if(!skipTillWord()) {
                    --totalWords; /* hack for universally increment count of words */
                    break;
                }
            } else if(isalnum(ch)){
                ++totalLettersInWords;
            }
        }
        ++totalWords; /* If after word-letter, then - correct. If after space, then previously dec this count */
    }
    printf("\tAfter process string, cnt words = %ld, cnt letters = %ld\n", totalWords, totalLettersInWords);
    printf("Average number of letters per word = %.3f\n", (double)totalLettersInWords/totalWords);

    printf("\nFinish Program!\n");
    return 0;
}

_Bool skipTillWord(void)
{
    int ch;
    while((ch = getchar()) != EOF && (ispunct(ch) || isspace(ch))) {
        continue;
    }
    if(ch == EOF) {
        return 0;
    }
    ungetc(ch, stdin);
    return 1;
}