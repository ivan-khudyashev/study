#ifndef DRIVER_HH
#define DRIVER_HH
#include <string>
#include <map>
#include "helloGrammarParser.hh"

#define YY_DECL \
    yy::parser::symbol_type yylex(driver& drv)
YY_DECL;

class driver 
{
public:
    driver();

    int result;
    int parse(const std::string& f);
    std::string file;

    void scan_begin();
    void scan_end();
    yy::location location;
};
#endif
