// Constexpr decltype template Sample
// ref https://qiita.com/_EnumHack/items/677363eec054d70b298d
#include <iostream>
#include <tuple>

template<typename ...Args>
constexpr decltype(auto) params(Args ...args) -> std::tuple<Args...>{
    return {args... };
}

int main(){

    decltype(auto) temp = params("test", 1, 2.0);
    
    std::cout << std::get<0>(temp);

    return 0;
}