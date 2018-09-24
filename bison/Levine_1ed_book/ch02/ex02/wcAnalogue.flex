%option noyywrap
%{
#include <stdio.h>
%}
%{
int words = 0;
int chars = 0;
int lines = 0;

int wordsTot = 0;
int charsTot = 0;
int linesTot = 0;
%}
%%
[^ \t\n\r\v\f]+ { words++; chars+= strlen(yytext); }
\n              { chars++; lines++; }
.               { chars++; }
%%
int main(int argc, char **argv) {

    if(argc < 2) {
        yylex();
        printf("%8d%8d%8d\n", lines, words, chars);
        return 0;
    }
    for(int i = 1; i < argc; i++) {
        FILE *f = fopen(argv[i], "r");
        if(!f) {
            perror(argv[i]);
            return (1);
        }
        yyrestart(f);
        yylex();
        fclose(f);
        printf("%8d%8d%8d %s\n", lines, words, chars, argv[i]);
        wordsTot += words; words = 0;
        charsTot += chars; chars = 0;
        linesTot += lines; lines = 0;
    }
    if(argc > 1) {
        printf("%8d%8d%8d total\n", linesTot, wordsTot, charsTot);
    }
    return 0;
}
