all: prog

prog: calconly
	gcc -o testParser.o calculator.tab.c lex.yy.c -lfl

calconly: calcScanner.flex calculator.y
	flex calcScanner.flex
	bison -d calculator.y

clean: 
	rm -f *.tab.c *.tab.h *.o lex.yy.c
