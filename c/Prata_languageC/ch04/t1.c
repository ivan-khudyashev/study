// Copyright (C) Khudyashev Ivan, 2018-2019, bahek1983@gmail.com
#include <stdio.h>

int main(void)
{
    
    printf("Start Program\n\n");
    // program here
    printf("sizeof for literal 4: %zd\n", sizeof 4);
    printf("sizeof for literal 4L: %zd\n", sizeof 4L);
    printf("sizeof for literal \"hi\": %zd\n", sizeof "hi");

    printf("\nFinish Program!\n");
    return 0;
}
