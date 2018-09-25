#include <iostream>
#include <cstdlib>
#include <cstring>

#include "mydriver.hh"

int main(const int argc, const char **argv) {
    ptaf::Mydriver driver;
    driver.parse(std::cin);
    return 0;
}
