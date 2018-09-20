// Licence GNU GPL v2
// Copyright (C) Khudyashev Ivan, 2018, bahek1983@gmail.com
#include <stdio.h>
#include <stdlib.h>
int main() {
    
    int n, i, sum;
    printf("Введите положительное целое: ");
    scanf("%d", &n);
    if(n <=0) {
        printf("Вы ввели число не являющееся положительным целым\n");
        exit(1);
    }
    for(i = 0, sum = 0; i <= n; i++)
        sum += i;
    printf("Сумма первых %d положительных чисел равна %d\n", n, sum);

    return 0;
}
