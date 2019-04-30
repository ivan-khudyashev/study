// Copyright (C) Khudyashev Ivan, 2018-2019, bahek1983@gmail.com
#include <stdio.h>

int main(void)
{
    
    printf("Start Program\n\n");
    // program here
    const int arrayLen = 8;
    int array[arrayLen];
    printf("Input %d integers separated by WhiteSpaces: ", arrayLen);
    for(int idx = 0; idx < arrayLen; idx++) {
        scanf("%d", &array[idx]);
    }
    printf("Reverse order of inputed integers: \n");
    for(int idx = arrayLen - 1; idx >= 0; idx--) {
        printf("%d ", array[idx]);
    }

    printf("\nFinish Program!\n");
    return 0;
}
