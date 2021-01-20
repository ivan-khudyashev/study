// Copyright (C) Khudyashev Ivan, 2018-2020, bahek1983@gmail.com
#include <stdio.h>

void chline(char ch, int i, int j);

int main(void)
{
    
    printf("Start Program\n\n");
    // program here
    char ch;
    int i, j;
    printf("Program print inputed char from column i to j, where i and j are inputed integers\n");
    printf("Input separated by spaces: char start_column end_column\n");
    if(scanf("%c %d %d", &ch, &i, &j) == 3) {
        chline(ch, i, j);
    }

    printf("\nFinish Program!\n");
    return 0;
}

void chline(char ch, int i, int j)
{
    const int MIN_COLUMN_NUM = 1, MAX_COLUMN_NUM = 80;
    const char SPACE = ' ';
    if(
        i > j ||
        i < MIN_COLUMN_NUM || j < MIN_COLUMN_NUM ||
        i > MAX_COLUMN_NUM || j > MAX_COLUMN_NUM
    ) {
        printf(
            "Wrong values for columns: a) i < j; b) i, j > %d, c) i, j < %d",
            MIN_COLUMN_NUM, MAX_COLUMN_NUM
        );
    } else {
        int k = 0;
        while(++k < i) {putchar(SPACE);}
        while(k++ <= j) {putchar(ch);}
    }
}