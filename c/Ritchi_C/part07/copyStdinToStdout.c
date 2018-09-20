// Licence GNU GPL v2
// Copyright (C) Khudyashev Ivan, 2018, bahek1983@gmail.com
#include <stdio.h>

void filecopy(FILE*, FILE*);
int main() {
    
    filecopy(stdin, stdout);

    return 0;
}

void filecopy(FILE* ifp, FILE* ofp) {
    int c;
    while((c = getc(ifp))!=EOF)
        putc(c, ofp);
}
