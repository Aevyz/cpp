#include<iostream>
int optA{0};
int optB{0};
int& foo(unsigned which){
    if(which){
        return optA; 
    }
    else{
        return optB;
    }
}
int main(){
    foo(1) = 1;
    std::cout << optA << ":" << optB;
}