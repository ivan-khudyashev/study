#include <iostream>
#include <cstdlib>
#include <cstring>
#include <string>

#include "mydriver.hh"

int main(const int argc, const char **argv) {
    ptaf::Mydriver driver;
    std::string s1 = "hello ivan";
    std::string s2 = "hello kate,ivan";
    driver.parse(s1);
    std::cout << "Counts in str '" << s1 << "' = " << driver.getTokensCount() << std::endl;
    driver.parse(s2);
    std::cout << "Counts in str '" << s2 << "' = " << driver.getTokensCount() << std::endl;
    //driver.parse(std::cin);
    return 0;
}
