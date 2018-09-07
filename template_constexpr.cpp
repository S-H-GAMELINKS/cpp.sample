#include <iostream>

template <typename T, typename F>
constexpr T func(const T& var, F&& func){
    return func(var);
}


int main(){
    
    auto calc = [](auto var) constexpr { return var + var;};
    
    std::cout << func(1, calc);
    
    return 0;   
}
