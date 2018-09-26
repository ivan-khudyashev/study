lexer grammar brokenphraseLexer;

SQL_INJECTION_SQUOTESEMI_SYMBOL:	'\'' ';'	-> mode(MAINSQL);
SQL_INJECTION_SQUOTE_SYMBOL:		'\''		-> mode(MAINSQL);
SQL_INJECTION_DQOUTE_SYMBOL:		'"'			-> mode(MAINSQL);
PREFIX_SQL_INJECTION:				~(';' | '\'' | '"')+;


mode MAINSQL;
//-----
// SKIP
//-----
SPACE:							[ \t\r\n]+		-> channel(HIDDEN);
LINE_COMMENT:					('-- ' | '#') ~[\r\n]* '\r'? '\n' -> channel(HIDDEN);


SELECT:							S E L E C T;
FROM:							F R O M;
WHERE:							W H E R E;
UNION:							U N I O N;
AND:							A N D;


ID:								ID_LITERAL;
STRING_LITERAL:					DQUOTA_STRING | SQUOTA_STRING;
DECIMAL_LITERAL:				DEC_DIGIT+;
HEXADECIMAL_LITERAL:			X '\'' (HEX_DIGIT HEX_DIGIT)+ '\'' 
								| '0' X HEX_DIGIT+;
BROKEN_TOKEN:					'\'' ( '\\'. | '\'\'' | ~('\'' | '\\' ) )*
								| ';#';


SEMI:							';';
COMMA:							',';
EQU:							'=';

fragment ID_LITERAL:			[a-zA-Z_$0-9]*?[a-zA-Z_$]+?[a-zA-Z_$0-9]*;
fragment DQUOTA_STRING:			'"' ( '\\'. | '""' | ~('"'| '\\') )* '"';
fragment SQUOTA_STRING:			'\'' ('\\'. | '\'\'' | ~('\'' | '\\'))* '\'';
fragment HEX_DIGIT:				[0-9A-Fa-f];
fragment DEC_DIGIT:				[0-9];


// -------
// Letters
// -------
fragment A: [aA];
fragment B: [bB];
fragment C: [cC];
fragment D: [dD];
fragment E: [eE];
fragment F: [fF];
fragment G: [gG];
fragment H: [hH];
fragment I: [iI];
fragment J: [jJ];
fragment K: [kK];
fragment L: [lL];
fragment M: [mM];
fragment N: [nN];
fragment O: [oO];
fragment P: [pP];
fragment Q: [qQ];
fragment R: [rR];
fragment S: [sS];
fragment T: [tT];
fragment U: [uU];
fragment V: [vV];
fragment W: [wW];
fragment X: [xX];
fragment Y: [yY];
fragment Z: [zZ];


// -------
// End ??
// -------
ERROR:		.;