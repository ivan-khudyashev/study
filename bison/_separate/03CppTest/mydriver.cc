#include <cctype>
#include <fstream>
#include <cassert>

#include "mydriver.hh"

iv::Mydriver::~Mydriver() {
    delete(scanner);
    scanner = nullptr;
    delete(parser);
    parser = nullptr;
}

void iv::Mydriver::parse(const char * const filename) {
    assert(filename != nullptr);
    std::ifstream in_file(filename);
    if(! in_file.good()) {
        exit(EXIT_FAILURE);
    }
    parse_helper(in_file);
    return ;
}

void iv::Mydriver::parse(std::istream &stream) {
    if(!stream.good() && stream.eof()) {
        return;
    }
    parse_helper(stream);
    return;
}

void iv::Mydriver::parse_helper(std::istream &stream) {
    delete(scanner);
    try {
        scanner = new iv::Myscanner(&stream);
    }
    catch(std::bad_alloc &ba) {
        std::cerr << "Failed to allocate scanner: (" <<
            ba.what() << "), exiting" << std::endl;
        exit(EXIT_FAILURE);
    }
    delete(parser);
    try {
        parser = new iv::Myparser((*scanner), (*this));
    }
    catch(std::bad_alloc &ba) {
        std::cerr << "Failed to allocate parser" << std::endl;
        exit(EXIT_FAILURE);
    }
    const int accept(0);
    if(parser->parse() != accept) {
        std::cerr << "Can't parse" << std::endl;
    return;
    }
}

void iv::Mydriver::add_hello_token() {}
void iv::Mydriver::add_id_token() {}
void iv::Mydriver::add_comma_token() {}

std::ostream& iv::Mydriver::print(std::ostream &stream) {
    stream << "This is function iv::Mydriver::print" << std::endl;
    return(stream);
}








