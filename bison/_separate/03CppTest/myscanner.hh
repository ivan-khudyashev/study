#ifndef __MYSCANNER_HH__
#define __MYSCANNER_HH__ 1_

#if !defined(yyFlexLexerOnce)
#include <FlexLexer.h>
#endif

#include "hGrammarParser.hh"

namespace ptaf {
class Myscanner : public yyFlexLexer {
public:
    Myscanner(std::istream *in): yyFlexLexer(in) {};
    virtual ~Myscanner(){};

    using FlexLexer::yylex;

    virtual int yylex(ptaf::Myparser::semantic_type * const lval);

private:
    ptaf::Myparser::semantic_type *yylval = nullptr;
}; /*end of class Myscanner*/


} /* end namespace iv */

#endif
