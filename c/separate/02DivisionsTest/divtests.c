// Copyright (C) Khudyashev Ivan, 2018-2019, bahek1983@gmail.com
#include <stdio.h>

int main(void)
{
    
    printf("Start Program\n\n");
    // program here
    int a1 = 13, a2 = 13, a3 = -13, a4 = -13;
    int b1 = 4, b2 = -4, b3 = 4, b4 = -4;
    printf("Tests with division with different signs\n");
    printf("\t1) Both positive. (%d fulldiv %d) = ( %d , %d)\n", a1, b1, a1/b1, a1%b1);
    printf("\t2) Pos and Neg. (%d fulldiv %d) = ( %d , %d)\n", a2, b2, a2/b2, a2%b2);
    printf("\t3) Neg and Pos. (%d fulldiv %d) = ( %d , %d)\n", a3, b3, a3/b3, a3%b3);
    printf("\t4) Both negative. (%d fulldiv %d) = ( %d , %d)\n", a4, b4, a4/b4, a4%b4);

    printf("\nFinish Program!\n");
    return 0;
}
