#include <iostream>
#include "concept.h"

int main() {
    /*
     * This will not compile and send out an understandable compiler error.
     */

    std::string s = "moo";
    std::cout << square(s) << std::endl;

    return 0;
}
