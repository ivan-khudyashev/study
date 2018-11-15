// Copyright (C) Khudyashev Ivan, 2018, bahek1983@gmail.com
#include <stdio.h>

// This programs output some str
void jolly(void);
void deny(void);

int main(void)
{
    
    printf("Start Program\n");
    // program here

    jolly(); jolly(); jolly();
    deny();

    printf("Finish Program!\n");
    return 0;
}

void jolly(void)
{
    printf("He is happy goodman!\n");
}

void deny(void)
{
    printf("Nobody can not deny this!\n");
}
