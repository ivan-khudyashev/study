// Copyright (C) Khudyashev Ivan, 2018-2020, bahek1983@gmail.com
#include <stdio.h>

int main(void)
{
    
    printf("Start Program\n\n");
    // program here
    double seq1Sum = 0.0, seq2Sum = 0.0;
    int itemCount = 0, prevSign = -1, isInput = 0;
    char introMsg[] = "Program count sum of 2 sequences: 1+ 1/2 + 1/3 + ...; 1 - 1/2 + 1/3 - 1/4 + ...\n";
    char iterateMsg[] = "Input number of item for limit summing sequences: ";
    printf("%s", introMsg);
    while(printf("%s", iterateMsg), isInput = scanf("%d", &itemCount), isInput > 0 && itemCount > 0) {
        for(int i = 1, curSign = 1; i <= itemCount; i++, curSign*=-1) {
            seq1Sum += 1.0/i;
            seq2Sum += (double)curSign / i;
        }
        printf("1 + 1/2 + 1/3 + ... = %f\n 1 - 1/2 + 1/3 - 1/4 + ... = %f\n", seq1Sum, seq2Sum);
        seq1Sum = seq2Sum = 0.0;
    }
    

    printf("\nFinish Program!\n");
    return 0;
}
