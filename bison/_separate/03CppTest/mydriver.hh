#ifndef __MYDRIVER_HH__
#define __MYDRIVER_HH__ 1

#include <string>
#include <cstddef>
#include <istream>

#include "myscanner.hh"
#include "hGrammarParser.hh"

namespace iv{
    class Mydriver{
    public:
        Mydriver() = default;
        virtual ~Mydriver();

        void parse(const char * const filename);
        void parse(std::istream &iss);

        void add_hello_token();
        void add_id_token();
        void add_comma_token();

        std::ostream& print(std::ostream &stream);
    private:
        void parse_helper(std::istream &stream);

        iv::Myparser *parser = nullptr;
        iv::Myscanner *scanner = nullptr;
    }; /* end of class Mydriver */
} /* end of namespace "iv" */

#endif
