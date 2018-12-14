all: rpcalc_parser rpcalc_lexer rpcalc_main rpcalc_error
	gcc -o rpcalc.out rpcalc_parser.o rpcalc_lex.o rpcalc_main.o rpcalc_error.o -lm

rpcalc_parser: rpcalc.y
	bison -d -o rpcalc_parser.c rpcalc.y && gcc -c -o rpcalc_parser.o rpcalc_parser.c

rpcalc_lexer: rpcalc_lex.c rpcalc_parser
	gcc -c -o rpcalc_lex.o rpcalc_lex.c

rpcalc_main: rpcalc_main.c
	gcc -c -o rpcalc_main.o rpcalc_main.c

rpcalc_error: rpcalc_error.c
	gcc -c -o rpcalc_error.o rpcalc_error.c

clean:
	rm -rf *.o *.out rpcalc_parser.c *.h
