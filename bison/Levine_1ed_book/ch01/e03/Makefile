all: calconly

calconly: calcScanner.flex calculator.y
	flex calcScanner.flex
	bison -d calculator.y
	gcc -o calc calculator.tab.c lex.yy.c -lfl

clean: 
	rm -f *.tab.c *.tab.h *.o lex.yy.c
