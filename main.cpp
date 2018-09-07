#include <iostream>

int main() {
    int a = 11;
    std::cout << char(a+3) << std::endl;
    std::cout << char(a-3) << std::endl;
    std::cout << char(a*3) << std::endl;
    std::cout << char(a/3) << std::endl;
    return 0;
}