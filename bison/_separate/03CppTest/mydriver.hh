#ifndef __MYDRIVER_HH__
#define __MYDRIVER_HH__ 1

#include <string>
#include <cstddef>
#include <istream>

#include "myscanner.hh"
#include "hGrammarParser.hh"

namespace ptaf{
    class Mydriver{
    public:
        Mydriver() = default;
        virtual ~Mydriver();

        void parse(const char * const filename);
        void parse(std::istream &iss);

    private:
        void parse_helper(std::istream &stream);

        ptaf::Myparser *parser = nullptr;
        ptaf::Myscanner *scanner = nullptr;
    }; /* end of class Mydriver */
} /* end of namespace "iv" */

#endif
