#include <iostream>
#include "driver.hh"

int main(int argc, char *argv[]) {
    int res = 0;
    driver drv;
    drv.parse("text.txt");
    std::cout << drv.result << std::endl;
    return 0;
}
