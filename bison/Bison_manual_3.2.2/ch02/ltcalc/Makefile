all: ltcalc_parser
	gcc -o ltcalc ltcalc.c -lm

ltcalc_parser: ltcalc.y
	bison -o ltcalc.c ltcalc.y

clean:
	rm -rf *.o *.out ltcalc.c
