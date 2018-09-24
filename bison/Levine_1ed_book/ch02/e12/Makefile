all: testcinema

testcinemaall: 
	flex simpleCinemaScan.flex
	bison -d cinemaList.y
	gcc -o testcinema.o recognizeChars.c cinemaList.tab.c lex.yy.c

testcinema: lexer_o parser_o recognize_o
	gcc -o testcinema.o  recognizeChars.o cinemaListParse.o cinemaListLex.o

testconsole: lexer_o parser_o parselib_o cinemaconsole_o
	gcc -o testcinemaConsole.o cinemaConsole.o parseLib.o cinemaListParse.o cinemaListLex.o

parselib_o: parser_c 
	gcc -c -o parseLib.o parseLib.c

cinemaconsole_o:
	gcc -c -o cinemaConsole.o cinemaTestFromConsole.c

recognize_o: 
	gcc -c -o recognizeChars.o recognizeChars.c 

parser_o: parser_c
	gcc -c -o cinemaListParse.o cinemaList.tab.c

lexer_o: lexer_c parser_c 
	gcc -c -o cinemaListLex.o simpleCinemaScan.lex.c

lexer_c:
	flex -o simpleCinemaScan.lex.c simpleCinemaScan.flex

parser_c:
	bison -d cinemaList.y

clean:
	rm -f *.o *.tab.h *.tab.c *.lex.c
