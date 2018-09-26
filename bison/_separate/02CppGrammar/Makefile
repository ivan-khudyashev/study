all:
	bison3.1 -o hGrammarParser.cc hGrammar.yy
	flex -o hGrammarLexer.cc hGrammar.flex
	g++ -o testHGrammar hGrammarParser.cc hGrammarLexer.cc
copy:
	bison3.1 -o helloGrammarParser.cc helloGrammar.yy
	flex -o helloGrammarLexer.cc helloGrammar.flex
	g++ -o testHelloGrammar  main.cc driver.cc helloGrammarLexer.cc helloGrammarParser.cc

clean:
	rm -rf helloGrammarLexer.cc helloGrammarParser.hh helloGrammarParser.cc testHelloGrammar location.hh position.hh stack.hh
	rm -rf hGrammarLexer.cc hGrammarParser.hh hGrammarParser.cc testHGrammar
