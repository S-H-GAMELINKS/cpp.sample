// Constexpr Lambda in std::array<std::function<void()>> Sample
// Conpile to "g++ constexpr_lambda_function.cpp -std=c++17"
#include <iostream>
#include <array>
#include <functional>
#include <string>

int main(){

    std::function<void(int)> func1 = [&](int var) constexpr {std::cout << var + var << std::endl;};
    std::function<void(int)> func2 = [&](int var) constexpr {std::cout << var * var << std::endl;};
    std::function<void(int)> func3 = [&](int var) constexpr {std::cout << var - var << std::endl;};

    int var = 5;

    std::array<std::function< void(int) >, 3> Func = {func1, func2, func3};

    for(auto&& f : Func)
        f(var);

    return 0;
}