// Copyright (C) Khudyashev Ivan, 2018-2020, bahek1983@gmail.com
#include <stdio.h>
#include <ctype.h>

int main(void)
{
    
    printf("Start Program\n\n");
    // program here
    int ch = 0;
    size_t upperCh = 0, lowerCh = 0, otherCh = 0;
    while((ch = getchar()) != EOF) {
        if(isupper(ch)) {
            ++upperCh;
        } else if(islower(ch)) {
            ++lowerCh;
        } else {
            ++otherCh;
        }
    }
    printf(
        "\nSummary Counts. Upper char(s) = %zd, Lower char(s) = %zd, Other char(s) = %zd\n", 
        upperCh, lowerCh, otherCh
    );
    printf("\nFinish Program!\n");
    return 0;
}
