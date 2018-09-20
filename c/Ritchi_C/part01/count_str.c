// Licence GNU GPL v2
// Copyright (C) Khudyashev Ivan, 2018, bahek1983@gmail.com
#include <stdio.h>
int main() {

    int nextChar, countStr;
    for(countStr = 0; (nextChar = getchar()) != EOF; ) {
        if(nextChar == '\n')
            ++countStr;
    }
    printf("count of str = %d\n", countStr);
    
    return 0;
}
