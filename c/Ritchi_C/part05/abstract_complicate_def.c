// Licence GNU GPL v2
// Copyright (C) Khudyashev Ivan, 2018, bahek1983@gmail.com
#include <stdio.h>
int main() {

    printf("sizeof(`int(*(*)())()`) = %zd\n", sizeof(int(*(*)())()));
    
    return 0;
}
