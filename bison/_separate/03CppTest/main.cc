#include <iostream>
#include <cstdlib>
#include <cstring>

#include "mydriver.hh"

int main(const int argc, const char **argv) {
    iv::Mydriver driver;
    driver.parse(std::cin);
    driver.print(std::cout) << std::endl;
    return 0;
}
