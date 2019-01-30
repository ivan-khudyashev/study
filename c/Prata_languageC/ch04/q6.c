// Copyright (C) Khudyashev Ivan, 2018-2019, bahek1983@gmail.com
#include <stdio.h>

int main(void)
{
    
    printf("Start Program\n\n");
    // program here
    printf("a) decimal number with width equal count of digits: <%d>\n", 10);
    printf("b) hex number with width=4: <%4X>\n", 0x8a);
    printf("v) float number in form .123 with width=10: <%10.3f>\n", 232.346);
    printf("g) float number in form 2.33e+002 with width=12: <%12.3e>\n", 2.33e2);
    printf("d) string aling to left with width=30: <%-30.4s>\n", "some str");


    printf("\nFinish Program!\n");
    return 0;
}
