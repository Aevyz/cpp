#include <iostream>

int square(int v){
    v *= v;
    return v;
}
int main(){
    int v = 8;
    int w = square(v);
    
    std::cout << v << "\n";
    std::cout << w << "\n";
}