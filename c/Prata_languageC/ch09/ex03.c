// Copyright (C) Khudyashev Ivan, 2018-2020, bahek1983@gmail.com
#include <stdio.h>
#include <ctype.h>

void printSymbMatrix(char ch, int columns, int rows);

int main(void)
{
    
    printf("Start Program\n\n");
    // program here
    char ch;
    int columns, rows;
    printf("Program print matrix with inputed size and consisted from inputed symbol\n");
    printf("Input 'symbol columns rows' separated by spaces: ");
    if(scanf("%c %d %d", &ch, &columns, &rows) == 3) {
        printSymbMatrix(ch, columns, rows);
    }

    printf("\nFinish Program!\n");
    return 0;
}

void printSymbMatrix(char ch, int columns, int rows)
{
    const int MIN_VALUE = 1, MAX_VALUE = 50;
    const char SPACE = ' ';
    if(!isgraph(ch)) {
        printf("Not printable char with code %d\n", (int)ch);
        return;
    }
    if(
        columns < MIN_VALUE || rows < MIN_VALUE ||
        columns > MAX_VALUE || rows > MAX_VALUE
    ) {
        printf(
            "Number of columns (%d) or rows (%d) out of range: %d <= x <= %d\n",
            columns, rows, MIN_VALUE, MAX_VALUE
        );
        return;
    }
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < columns; j++) {
            putchar(ch); putchar(SPACE);
        }
        putchar('\n');
    }
}