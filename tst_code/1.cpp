#include <iostream>

int main() {
    auto x{5}; 
    std::cout << x << "\n";
    x{"hi"};
    std::cout << x << "\n";
    std::cout << "Hello World!" << "\n";
    return 0;
}