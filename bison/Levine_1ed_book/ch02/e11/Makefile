all: testcinema

testcinema: 
	flex simpleCinemaScan.flex
	bison -d cinemaList.y
	gcc -o testcinema.o cinemaList.tab.c lex.yy.c

clean:
	rm -f *.o *.tab.h *.tab.c lex.yy.c
