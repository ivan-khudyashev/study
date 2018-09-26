#ifndef __TESTSCANNER_HPP__
#define __TESTSCANNER_HPP__

// include lexer class from flex
#if ! defined(yyFlexLexerOnce)
#include <FlexLexer.h>
#endif

#include "TestParser.tab.hh"
#include "location.hh"

namespace TT 
{
    class TestScanner: public yyFlexLexer {
    public:
        TestScanner(std::istream *in): yyFlexLexer(in) {};
        virtual ~TestScanner() {};

        using FlexLexer::yylex;

        virtual int yylex(TT::TestParser::semantic_type * const lval,
                          TT::TestParser::location_type *location
        ); //YY_DECL define as this yylex in lexer.flex
    private:
        /* yyval ptr */
        TT::TestParser::semantic_type *yylval = nullptr;
    };
}
#endif
