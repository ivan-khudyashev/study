all:
	bison -d -o helloGrammarParser.c helloGrammar.y
	flex -o helloGrammarLexer.c helloGrammar.flex
	gcc -o helloGrammarParser.o helloGrammarLexer.c helloGrammarParser.c

clean:
	rm -fr *.o *.c
