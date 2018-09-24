all:
	bison3.1 -o helloGrammarParser.cc helloGrammar.yy
	flex -o helloGrammarLexer.cc helloGrammar.flex
	g++ -o testHelloGrammar  main.cc driver.cc helloGrammarLexer.cc helloGrammarParser.cc

clean:
	rm -rf helloGrammarLexer.cc helloGrammarParser.hh helloGrammarParser.cc testHelloGrammar location.hh position.hh stack.hh
