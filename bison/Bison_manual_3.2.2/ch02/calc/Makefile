all: calc_parser
	gcc -o calc calc.c -lm

calc_parser: calc.y
	bison -o calc.c calc.y

clean:
	rm -rf *.o *.out calc.c
