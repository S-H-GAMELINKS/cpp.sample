// Constexpr Lambda Sample
// Conpile to "g++ constexpr_lambda.cpp -std=c++17"
#include <iostream>

int main(){

    auto func = [&](const int& var) constexpr {return var * var;};

    std::cout << func(5) << std::endl;

    return 0;
}