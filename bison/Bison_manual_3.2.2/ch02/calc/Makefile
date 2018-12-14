all: rpcalc_parser
	gcc -o rpcalc rpcalc.c -lm

rpcalc_parser: rpcalc.y
	bison -o rpcalc.c rpcalc.y

clean:
	rm -rf *.o *.out rpcalc.c
