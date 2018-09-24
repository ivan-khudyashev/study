#include <stdio.h>
#include "genParseHead.h" 

int main(int argc, char **argv) {
    //FILE * inFile = fopen("testinput.txt", "rt");
    char str[] = "1+2-3";
    //int cntToken = tokenCounter(inFile);
    int cntToken = tokenCounter(str);
    printf("str:%s\ncntTokens = %d\n", str, cntToken);
}
