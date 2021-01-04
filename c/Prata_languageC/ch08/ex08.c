// Copyright (C) Khudyashev Ivan, 2018-2020, bahek1983@gmail.com
#include <stdio.h>
#include <string.h>

char getOperation(void);
int skipLine(void);
_Bool getFloat(float* op, const char* msg, _Bool notNull);
float execOperation(char op, float firstOp, float secondOp, _Bool isPrint);

int main(void)
{
    
    printf("Start Program\n\n");
    // program here
    float firstOp, secondOp;
    const char endInputMsg[] = "Ok, stop calculation. Exit\n";
    const char inputFirstMsg[] = "Please, input first argument of operation (real number): ";
    const char inputSecondMsg[] = "Please, input second argument of operation (real number): ";
    const char exitChar = 'q';
    char mathOp = '\0';
    while((mathOp = getOperation()) != exitChar) {
        if(!getFloat(&firstOp, inputFirstMsg, 0)) {
            printf(endInputMsg);
            break;
        }
        if(!getFloat(&secondOp, inputSecondMsg, mathOp == 'd')) {
            printf(endInputMsg);
            break;
        }
        execOperation(mathOp, firstOp, secondOp, 1);
    }

    printf("\nFinish Program!\n");
    return 0;
}

char getOperation(void)
{
    const char choiseMsg[] =
        "Enter the operation of your choice:"
        "\na. add             s. substract"
        "\nm. multiply        d. divide"
        "\nq. quit\n";
    const char repeatMsg[] = "You can input only allowed cases: a, s, m, d or q: ";
    int ch;
    printf(choiseMsg);
    while((ch = getchar()) != EOF && strchr("asmdq", ch) == NULL) {
        printf(repeatMsg);
    }
    if(ch == EOF) {
        ch = 'q';
    }
    return ch;
}

int skipLine(void)
{
    int ch;
    while((ch = getchar()) != EOF && ch != '\n') {printf("%c(%d), ", (char)ch, ch); continue;}
    return ch;
}

_Bool getFloat(float* op, const char* msg, _Bool notNull)
{
    const char endMsg[] = "Ok, stop program: end of file. Exit";
    const char repeatMsg[] = "Wrong input! It must be real number. Try again: ";
    const char notNullMsg[] = "This operand can't be zero. Try again: ";
    _Bool haveInputed = 0;
    printf(msg);
    while(!haveInputed) {
        while(scanf("%f", op) != 1) {
            /* skip remain part of line  and check EOF */
            if(skipLine() == EOF) {
                printf(endMsg);
                return 0;
            }
            printf(repeatMsg);
        }
        if(notNull && *op == 0.0) {
            printf(notNullMsg);
        } else {
            haveInputed = 1;
        }
    }
    return 1;
}

float execOperation(char op, float firstOp, float secondOp, _Bool isPrint)
{
    char symbOp;
    float result;
    switch(op) {
        case 'a':
            symbOp = '+';
            result = firstOp + secondOp;
            break;
        case 's':
            symbOp = '-';
            result = firstOp - secondOp;
            break;
        case 'm':
            symbOp = '*';
            result = firstOp * secondOp;
            break;
        case 'd':
            symbOp = '/';
            result = firstOp / secondOp;
            break;
        default:
            /*TODO: generate error */
            printf("Error. There is no such operation\n");
            return 0.0;
    }
    if(isPrint) {
        printf("%.2f %c %.2f = %.2f\n", firstOp, symbOp, secondOp, result);
    }
    return result;
}