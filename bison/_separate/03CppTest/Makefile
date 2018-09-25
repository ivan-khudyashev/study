all:
	bison -o hGrammarParser.cc hGrammar.yy
	flex -o hGrammarLexer.cc hGrammar.flex
	g++ -o testHGrammar main.cc mydriver.cc hGrammarParser.cc hGrammarLexer.cc

clean:
	rm -rf hGrammarLexer.cc hGrammarParser.hh hGrammarParser.cc testHelloGrammar location.hh position.hh stack.hh testHGrammar
