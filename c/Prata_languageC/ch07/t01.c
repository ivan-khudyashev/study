// Copyright (C) Khudyashev Ivan, 2018-2020, bahek1983@gmail.com
#include <stdio.h>

int main(void)
{
    
    printf("Start Program\n\n");
    // program here
    const size_t MAX_NUMBER_LEN = 30;
    size_t idx = 0;
    char ch;
    char number[MAX_NUMBER_LEN + 1];
    _Bool isPrint = 0;
    printf("Press '!' if you want to stop\n");
    while((ch = getchar()) != '!') {
        switch(ch) {
            case '0':
            case '1':
            case '2':
            case '3':
            case '4':
            case '5':
            case '6':
            case '7':
            case '8':
            case '9': 
                if(idx == MAX_NUMBER_LEN) {
                    number[idx] = '\0';
                    idx = 0;
                    isPrint = 1;
                    break;
                }
                number[idx++] = ch;
                break;
            default:
                if(idx > 0) {
                    number[idx] = '\0';
                    isPrint = 1;
                }
                printf("Skip non-digit input\n");
            
        }
        if(isPrint) {
            printf("\nYou have inputed number: %s\n", number);
            isPrint = 0;
            idx = 0;
        }
    }
    if(idx > 0) {
        number[idx] = '\0';
        printf("\nYou have inputed number: %s\n", number);
    }

    printf("\nFinish Program!\n");
    return 0;
}
