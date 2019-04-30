// Copyright (C) Khudyashev Ivan, 2018-2019, bahek1983@gmail.com
#include <stdio.h>

int main(void)
{
    int startNum = 0, endNum = 0;
    printf("Start Program\n\n");
    // program here
    printf("Input low and high limit for integers, separated by space(s):");
    scanf("%d%d", &startNum, &endNum);
    if(startNum > endNum) {
        printf("Wrong limits for integers\n");
        return 1;
    }
    printf("%10s %10s %10s\n", "n", "n^2", "n^3");
    for(int idx = startNum; idx <= endNum; idx++) {
        printf("%10d %10d %10d\n", idx, idx * idx, idx * idx * idx);
    }

    printf("\nFinish Program!\n");
    return 0;
}
