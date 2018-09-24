#include <stdio.h>
#include "genParseHead.h" 

int main(int argc, char **argv) {
    FILE * inFile = fopen("testinput.txt", "rt");
    char str[] = "10+11";
    //int cntToken = tokenCounter(inFile);
    int cntToken = tokenCounter(str);
    printf("str:%s\ncntTokens = %d\n", str, cntToken);
    //char str2[] = "1*2+1";
    //int isParsed = parseTest(str2);
    //printf("str:%s\nvalue returned from parse = %d, successParse= %d\n", str2, isParsed, successParse);
    int isParsed = parseFileTest(inFile);
    printf("value returned from parse = %d, successParse= %d\n", isParsed, successParse);
    fclose(inFile);
}
