lexer grammar CommonLexerRules; // note "lexer grammar"
import PartLexerRules; 

ID  :   [a-zA-Z]+ ;      // match identifiers
NEWLINE:'\r'? '\n' ;     // return newlines to parser (end-statement signal)
WS  :   [ \t]+ -> skip ; // toss out whitespace
