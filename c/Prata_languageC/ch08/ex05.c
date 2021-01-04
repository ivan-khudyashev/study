// Copyright (C) Khudyashev Ivan, 2018-2020, bahek1983@gmail.com
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int checkGuess(int guess);
int getFirst(void);
int skipLine(void);
int main(void)
{
    
    printf("Start Program\n\n");
    // program here
    int guessNumber = 0;
    const int lowBoundary = 1, highBoundary = 100;
    int guess = (highBoundary + lowBoundary) >> 1, low = lowBoundary, high = highBoundary;
    int guessDirection = 1;
    printf("Pick an integer from %d to %d. I will try to guess\n", lowBoundary, highBoundary);
    printf("Please responde with words 'lower' or 'l', 'greater' or 'g', 'equal' or 'e'.");
    printf("\nSo let's try. Press <Enter> when ready ");
    if(skipLine() != EOF) {
        while(guessDirection != 0) {
            if((guessDirection = checkGuess(guess)) > 0) {
                low = guess;
            } else if(guessDirection < 0) {
                high = guess;
            }
            guess = (low + high) >> 1;
            ++guessNumber;
        }
    }

    printf("Hooray! Your number is %d. Guess with %d attempt(s)\n", guess, guessNumber);
    printf("\nFinish Program!\n");
    return 0;
}

/**
 * Ask from user for picked number.
 * If it greater than guess, then return value >0.
 * If it less than guess, then return value <0.
 * If it exactly guess, then return 0.
 */
int checkGuess(int guess)
{
    const char tryMsg[] = "You pick a number %d? ";
    const char correctInputMsg[] =
        "Don't understand. Say one of: 'lower' or 'l', 'greater' or 'g', 'equal' or 'e'"
        "\nPlease, enter answer again: ";
    const char exitMsg[] = "OK, stop game. Exit\n";
    char ch;
    printf(tryMsg, guess);
    while( (ch = getFirst()) != EOF &&  strchr("lge", ch) == NULL ) {
        printf(correctInputMsg);
    }
    if(ch == EOF) {
        printf(exitMsg);
    }
    switch(ch) {
        case 'l':
            return -1;
        case 'g':
            return 1;
        case 'e':
            return 0;
    }
    /* TODO: generate error */
    return 0;
}
int getFirst(void)
{
    int ch = getchar();
    if(ch == EOF) { return ch;}
    while(getchar() != '\n') { continue; } /* clear input till end of string (input's buffer) */
    return tolower(ch);
}
int skipLine(void)
{
    int ch;
    while((ch = getchar()) != EOF && ch != '\n') { continue; }
    return ch;
}