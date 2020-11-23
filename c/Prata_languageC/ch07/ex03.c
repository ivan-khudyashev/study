// Copyright (C) Khudyashev Ivan, 2018-2020, bahek1983@gmail.com
#include <stdio.h>

int main(void)
{
    const char inpMsg[] = "Input next integer (0 for termination): ";
    int curNumber = 1;
    unsigned int cntEvenNumbers = 0, cntOddNumbers = 0;
    unsigned long sumEvenNumbers = 0, sumOddNumbers = 0;
    printf("Start Program\n\n");
    // program here
    printf("Input integers separated by spaces. For terminate input enter 0:\n");
    while(printf(inpMsg), scanf("%d", &curNumber)) {
        if(!curNumber) {
            break;
        }
        if(curNumber&1) /* test on even */ {
            cntOddNumbers++;
            sumOddNumbers += curNumber;
        } else {
            cntEvenNumbers++;
            sumEvenNumbers += curNumber;
        }
    }
    printf(
        "\nYou have inputed %ld even numbers and %ld odd numbers"
        " average for even = %f, average for odd = %f\n",
        cntEvenNumbers, cntOddNumbers,
        cntEvenNumbers == 0? 0.0: (double)sumEvenNumbers/(double)cntEvenNumbers,
        cntOddNumbers == 0? 0.0: (double)sumOddNumbers/(double)cntOddNumbers
    );

    printf("\nFinish Program!\n");
    return 0;
}
