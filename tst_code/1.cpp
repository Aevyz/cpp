#include <iostream>

int main() {
    auto x{5}; 
    std::cout << x << "\n";
    x="14";
    std::cout << x << "\n";
    std::cout << "Hello World!" << "\n";
    for(std::vector<int> a{1,2,3,4,5,6,7}; auto i : a){
        std::cout << i << ", ";
    }
    return 0;
}