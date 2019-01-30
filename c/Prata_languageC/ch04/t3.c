// Copyright (C) Khudyashev Ivan, 2018-2019, bahek1983@gmail.com
#include <stdio.h>

int main(void)
{
    
    printf("Start Program\n\n");
    // program here
    int output_number = 111;
    int rv = printf("%d", 111);
    printf("\nPrevious print output %d symbols\n", rv);

    printf("\nFinish Program!\n");
    return 0;
}
