#include "driver.hh"
#include "helloGrammarParser.hh"

driver::driver()
{
    result = 10;
}

int driver::parse(const std::string &f)
{
    file = f;
    scan_begin();
    yy::parser parser(*this);
    int res = parser.parse();
    scan_end();
    return res;
}
