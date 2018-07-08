// decltype(auto) Sample
// Compile to "g++ decltype_auto.cpp -std=c++17"
#include <iostream>
#include <vector>
#include <typeinfo>

int main(){

    std::vector<int> Vec = {1, 2, 3, 4, 5};

    std::cout << typeid(Vec).name() << std::endl;

    decltype(auto) func = [&](const auto var) constexpr {return var;};

    for(auto&& a : func(Vec))
        std::cout << a << std::endl;

    std::cout << typeid(func(Vec)).name() << std::endl;

    return 0;
}