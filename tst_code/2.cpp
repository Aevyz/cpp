#include <iostream>

int square(int v){
    v *= v;
    return v;
}
int ref_square(int& v){
    v *= v;
    return v;
}
int main(){
    int v = 4;
    int w = square(v);
    
    std::cout << v << "\n";
    std::cout << w << "\n";

    int x = ref_square(v);

    std::cout << v << "\n";
    std::cout << x << "\n";
    std::cout << "\n\n";

    int i{10};
    int j{20};

    //Create an alias for i
    //Any operation done to r is done to i
    int& r{i}; 

    std::cout << r << "\n";
    std::cout << i << "\n";
    r = 21; //i = 21
    std::cout << r << "\n";
    std::cout << i << "\n";
    r= j; //i=20
    std::cout << r << "\n";
    std::cout << i << "\n";
    i = 123; //i = r = 123
    std::cout << r << "\n";
    std::cout << i << "\n";

    
}