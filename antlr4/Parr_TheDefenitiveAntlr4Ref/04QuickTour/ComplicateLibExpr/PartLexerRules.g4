lexer grammar PartLexerRules; // note "lexer grammar"

INT :   DIGIT+ ;         // match integers

fragment DIGIT: [0-9];
