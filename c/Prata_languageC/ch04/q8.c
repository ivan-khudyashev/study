// Copyright (C) Khudyashev Ivan, 2018-2019, bahek1983@gmail.com
#include <stdio.h>

int main(void)
{
    
    printf("Start Program\n\n");
    // program here
    printf("a) decimal number, min 4 digit, width=6: <%6.4d>\n", 123);
    printf("b) octal number, width define as arg: <%#*o>\n", 5, 123);
    printf("v) symbol, width=2: <%2c>\n", 'A');
    printf("g) float number,format +3.13, width=digits_in_num: <%+.2f>\n", 12.3);
    printf("d) string, first 5 symbols align to left, width=7: <%-7.5s>\n", "teststring");

    printf("\nFinish Program!\n");
    return 0;
}
