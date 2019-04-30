// Copyright (C) Khudyashev Ivan, 2018-2019, bahek1983@gmail.com
#include <stdio.h>

int main(void)
{
    
    const int CNT_EN_LETTERS = 26;
    printf("Start Program\n\n");
    // program here
    char en_alphabet[CNT_EN_LETTERS];
    int idx = 0;
    for(char letter = 'a'; idx < CNT_EN_LETTERS; letter++, idx++) {
        en_alphabet[idx] = letter;
    }
    for(idx = 0; idx < CNT_EN_LETTERS; idx++) {
        printf("%c ", en_alphabet[idx]);
    }

    printf("\nFinish Program!\n");
    return 0;
}
