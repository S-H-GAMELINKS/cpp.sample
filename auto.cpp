// auto Sample
#include <iostream>
#include <string>
#include <typeinfo>

int main(){

    auto str = "hello world";
    auto var = 42;
    auto num = 3.14;
    
    std::cout << typeid(str).name() << std::endl;
    std::cout << typeid(var).name() << std::endl;
    std::cout << typeid(num).name() << std::endl;

    return 0;
}