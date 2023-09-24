#include <iostream>

void PrintData() {
    std::cout << "Print Test" << std::endl;
}

void PrintByData(std::string Message) {
    std::cout << Message << std::endl;
}

int ReturnInteger() {
    return 5;
}

int ReturnIntegerByParameter(int Value) {
    return Value;
}

int main() {
    PrintData();
    PrintByData("Print By Data Message");
    std::cout << ReturnInteger() << std::endl;
    std::cout << ReturnIntegerByParameter(10592) << std::endl;

    int Number = ReturnInteger();
    std::cout << Number << std::endl;
    return 0;
}