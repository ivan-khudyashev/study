// Copyright (C) Khudyashev Ivan, 2018, bahek1983@gmail.com
#include <stdio.h>

int main(void)
{
    
    printf("Start Program\n\n");
    // program here
    char input_char = 0;
    printf("Input ASCII code (1 - 127):");
    scanf("%hd", &input_char);
    if(input_char >= 1 && input_char <= 127) {
        printf("Symbol '%c' have this code %d", input_char, input_char);
    }
    else {
        printf("Wrong code. It must be: 1 <= x <= 127");
    }

    printf("\nFinish Program!\n");
    return 0;
}
