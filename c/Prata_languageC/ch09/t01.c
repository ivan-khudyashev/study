// Copyright (C) Khudyashev Ivan, 2018-2020, bahek1983@gmail.com
#include <stdio.h>
#include <string.h>
#define STR_LEN
#define xstr(arg) str(arg)
#define str(s) #s

int main(void)
{
    
    printf("Start Program\n\n");
    // program here
    int n;
    char s[STR_LEN + 1];
    while(printf("input number: "), (scanf("%d", &n) != 1)) {
        scanf("%" xstr(STR_LEN) "s", s);
        printf("\tDEBUG. skip string <%s> with len %d\n", s, strlen(s));
    }

    printf("\nYou have inputed %d\n", n);

    printf("\nFinish Program!\n");
    return 0;
}
