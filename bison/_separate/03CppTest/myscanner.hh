#ifndef __MYSCANNER_HH__
#define __MYSCANNER_HH__ 1_

#if !defined(yyFlexLexerOnce)
#include <FlexLexer.h>
#endif

#include "hGrammarParser.hh"
#include "location.hh"

namespace iv {
class Myscanner : public yyFlexLexer {
public:
    Myscanner(std::istream *in): yyFlexLexer(in) {};
    virtual ~Myscanner(){};

    using FlexLexer::yylex;

    virtual int yylex(iv::Myparser::semantic_type * const lval,
                      iv::Myparser::location_type *location);
private:
    iv::Myparser::semantic_type *yylval = nullptr;
}; /*end of class Myscanner*/


} /* end namespace iv */

#endif
