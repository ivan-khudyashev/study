// Copyright (C) Khudyashev Ivan, 2018-2019, bahek1983@gmail.com
#include <stdio.h>
#define FNAME_LEN 30
#define LNAME_LEN 40
#define xstr_macro(s) str_macro(s)
#define str_macro(s) #s

int main(void)
{
    char fname[FNAME_LEN + 1];
    char lname[LNAME_LEN + 1];
    
    printf("Start Program\n\n");
    // program here
    printf("Input <name surname> : ");
    scanf("%" xstr_macro(LNAME_LEN) "s %" xstr_macro(FNAME_LEN) "s", fname, lname);
    printf("\n Your personal data: %s, %s", lname, fname);

    printf("\nFinish Program!\n");
    return 0;
}
