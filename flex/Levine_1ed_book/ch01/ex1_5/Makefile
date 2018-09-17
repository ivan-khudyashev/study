all: calc

calc: lex.yy.o calculator.tab.o
	gcc -o calc calculator.tab.o lex.yy.o -lfl

lex.yy.o: lex.yy.c calculator.tab.o
	gcc -c lex.yy.c

lex.yy.c: calcScanner.flex
	flex calcScanner.flex

calculator.tab.o: calculator.tab.c
	gcc -c calculator.tab.c

calculator.tab.c: calculator.y
	bison -d calculator.y

calconly: calcScanner.flex calculator.y
	bison -d calculator.y
	flex calcScanner.flex
	gcc -o $@ calculator.tab.c lex.yy.c -lfl
clean:
	rm -f *.tab.c *.tab.h lex.yy.c *.o