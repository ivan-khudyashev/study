// Licence GNU GPL v2
// Copyright (C) Khudyashev Ivan, 2018, bahek1983@gmail.com
#include <stdio.h>
#include <stdarg.h>
#include <string.h>

int myf(char*, ...);
int main() {
    
    char *s = "hello";
    printf("sizeof(\"hello\") = %zd, strlen(\"hello\") = %zd \n", sizeof s, strlen(s));

    return 0;
}

