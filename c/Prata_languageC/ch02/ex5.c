// Copyright (C) Khudyashev Ivan, 2018, bahek1983@gmail.com
#include <stdio.h>

void br(void);
void ic(void);

int main(void)
{
    
    printf("Start Program\n");
    // program here
    br();
    printf(", ");
    ic();
    printf("\n");
    ic();
    printf(",\n");
    br();
    printf("\n");

    printf("Finish Program!\n");
    return 0;
}

void br(void)
{
    printf("Brasil, Russia");
}

void ic(void)
{
    printf("India, Chine");
}
