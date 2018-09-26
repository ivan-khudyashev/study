/*
Broken Phrase test grammar
GNU GPL Licence
Copyright  (c) 2016, Ivan Khudyashev (IHudyashov@ptsecurity.com)
*/

parser grammar brokenphraseParser;

options { tokenVocab=brokenphraseLexer; }

root:
	PREFIX_SQL_INJECTION end_prefix_sql_injection good_sentence+ broken_sentence? EOF
	| PREFIX_SQL_INJECTION end_prefix_sql_injection broken_sentence EOF
	;
	
good_sentence:
	UNION? SELECT STRING_LITERAL (',' STRING_LITERAL)* FROM ID (WHERE ID '=' DECIMAL_LITERAL)? SEMI?
	;
	
broken_sentence:
	BROKEN_TOKEN
	| WHERE ID '=' BROKEN_TOKEN
	| AND (ID|STRING_LITERAL) '=' BROKEN_TOKEN
	;
	
end_prefix_sql_injection:
	SQL_INJECTION_SQUOTESEMI_SYMBOL
	| SQL_INJECTION_SQUOTE_SYMBOL
	| SQL_INJECTION_DQOUTE_SYMBOL
	;