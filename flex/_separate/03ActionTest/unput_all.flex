%array
%%
"(hello)" printf("<hi :)>");
hello {
    unput(')');
    for(int i = yyleng - 1; i>=0; i--) unput(yytext[i]);
    unput('(');
    /*
    char str[100];
    snprintf(str, yyleng + 6, "-- %s --", yytext);
    printf("%s", str);
    printf("{Now we get -- %s -- in yytext }", yytext); */
}
%%
