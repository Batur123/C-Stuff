#include <iostream>
#include "sum.h"

int Sum(int X, int Y) {
    return X + Y;
}

int Multiply(int X, int Y) {
    return X * Y;
}

int Divide(int X, int Y) {
    return X / Y;
}

int Substract(int X, int Y) {
    return X - Y;
}

void Add(int *X, int Y) {
    *X = *X + Y;
}

int main() {
    std::cout << Sum(5, 4) << std::endl;
    std::cout << Multiply(5, 4) << std::endl;
    std::cout << Divide(5, 4) << std::endl;
    std::cout << Substract(5, 4) << std::endl;

    int Number = 5;
    Add(&Number, 5);
    std::cout << Number;
    return 0;
}
