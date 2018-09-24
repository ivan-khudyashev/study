%option noyywrap nodefault
%{
#include <stdio.h>
%}
%{
#define printChars(cinema) printf("%s from %s\n", yytext, cinema)
%}
%%
"Aria Stark"  { printChars("GoT"); }
"Gregory House" { printChars("House M.D."); }
"Yoda" { printChars("Star Wars");} 
"Dayeneris Targarian" { printChars("GoT"); }
"Ellen Ripley" { printChars("Aliens"); }
[ \t\n\r]+  {}
.           { printf("%s - unknown symbol\n", yytext); } 
%%

int main(int argc, char **argv) {
    char str1[] = "YodaAria StarkEllen Ripley";
    char str2[] = "Gregory HouseDayeneris Targarian Yoda";
    YY_BUFFER_STATE buf = yy_scan_string(str1);
    // yy_switch_to_buffer(buf); // is it necessary
    yylex();
    yy_delete_buffer(buf);
    buf = yy_scan_string(str2);
    yylex();
    yy_delete_buffer(buf);
    printf("\nFinished program!\n");
}
