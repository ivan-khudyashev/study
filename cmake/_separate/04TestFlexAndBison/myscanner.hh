#ifndef __MYSCANNER_HH__
#define __MYSCANNER_HH__ 1_

#if !defined(yyFlexLexerOnce)
#include <FlexLexer.h>
#endif

//#include <sstream>
//#include <string>
#include "hGrammarParser.hh"

namespace ptaf {
class Myscanner : public yyFlexLexer {
public:
    Myscanner(std::istream *in): yyFlexLexer(in) {};
    /*
    Myscanner(const std::string &in) {
        strInput = new std::istringstream(in);
        yyFlexLexer(*strInput);
    };
    */
    virtual ~Myscanner(){
      /*  if(strInput != nullptr) {
            delete(strInput);
            strInput = nullptr;
        }*/
    };

    int getTokensCount() {
        return tokensCount;
    }

    using FlexLexer::yylex;

    virtual int yylex(ptaf::Myparser::semantic_type * const lval);

private:
    ptaf::Myparser::semantic_type *yylval = nullptr;
    int tokensCount = 0;
    //std::istringstream *strInput = nullptr;
}; /*end of class Myscanner*/


} /* end namespace iv */

#endif
