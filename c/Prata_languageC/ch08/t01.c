// Copyright (C) Khudyashev Ivan, 2018-2020, bahek1983@gmail.com
#include <stdio.h>
#include <conio.h>
#define GET_CHAR_FUNC getche

int main(void)
{
    
    const char TERMINATOR_CHAR = '#';
    int cntChars = 0;
    printf("Start Program\n\n");
    // program here
    printf("Input any string (Press %c to terminate input):\n", TERMINATOR_CHAR);
    while(GET_CHAR_FUNC() != TERMINATOR_CHAR) {
        cntChars++;
    }
    printf("You have inputed %d symbols\n", cntChars);

    printf("\nFinish Program!\n");
    return 0;
}
