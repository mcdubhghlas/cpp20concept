#include <iostream>
#include "concept.h"

int main() {
    int x = 1337;
    float y = 1.337;
    size_t z = 256;

    std::cout << "square(x): " << square(x) << std::endl;
    std::cout << "square(y): " << square(y) << std::endl;
    std::cout << "square(z): " << square(z) << std::endl;

    return 0;
}
