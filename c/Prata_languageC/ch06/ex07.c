// Copyright (C) Khudyashev Ivan, 2018-2019, bahek1983@gmail.com
#include <stdio.h>
#include <string.h>

#define xstr_macro(s) str_macro(s)
#define str_macro(s) #s
#define STR_MAX_LEN 40

int main(void)
{
    char str[STR_MAX_LEN + 1];
    printf("Start Program\n\n");
    // program here
    printf("Input string (with lenth no more than %d):", STR_MAX_LEN);
    scanf("%" xstr_macro(STR_MAX_LEN) "s", str);
    int realLen = strlen(str);
    printf("Reverse word:\n");
    for(int idx = realLen - 1; idx >= 0; idx--) {
        printf("%c", str[idx]);
    }

    printf("\nFinish Program!\n");
    return 0;
}
