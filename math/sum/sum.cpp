#include <iostream>
#include "sum_class.h"

int Sum(int X, int Y) {
    return X + Y;
}

int main() {
    std::cout << Sum(5, 4) << std::endl;
    return 0;
}
