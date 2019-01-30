// Copyright (C) Khudyashev Ivan, 2018-2019, bahek1983@gmail.com
#include <stdio.h>
#include <string.h>

#define xstr_macro(x) str_macro(x)
#define str_macro(x) #x

#define BUFFER_LEN 30

int main(void)
{
    char buf[BUFFER_LEN + 1];
    printf("Start Program\n\n");
    // program here
    printf("Input name: ");
    scanf("%" xstr_macro(BUFFER_LEN) "s", buf);
    printf("a) str = \"%s\"\n", buf);
    printf("b) str = \"%20s\"\n", buf);
    printf("v) str = \"%-20s\"\n", buf);
    printf("g) str = \"%*s\"\n", strlen(buf) + 3, buf);

    printf("\nFinish Program!\n");
    return 0;
}
