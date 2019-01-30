// Copyright (C) Khudyashev Ivan, 2018-2019, bahek1983@gmail.com
#include <stdio.h>
#include <string.h>

#define xstr_macro(x) str_macro(x)
#define str_macro(x) #x

#define MAX_LNAME_SIZE 40
#define MAX_FNAME_SIZE 30

int main(void)
{
    char fname[MAX_FNAME_SIZE + 1];
    char lname[MAX_LNAME_SIZE + 1];
    int fname_len, lname_len;
    printf("Start Program\n\n");
    // program here
    printf("Input \"name surname\": ");
    scanf("%" xstr_macro(MAX_FNAME_SIZE) "s %" xstr_macro(MAX_LNAME_SIZE) "s", fname, lname);
    fname_len = strlen(fname);
    lname_len = strlen(lname);
    printf("%*s %*s\n", fname_len, fname, lname_len, lname);
    printf("%*d %*d\n", fname_len, fname_len, lname_len, lname_len);
    printf("\n%*s %*s\n", fname_len, fname, lname_len, lname);
    printf("%-*d %-*d\n", fname_len, fname_len, lname_len, lname_len);

    printf("\nFinish Program!\n");
    return 0;
}
