// std::tuple include std::function, and using func_each
//ref http://secret-garden.hatenablog.com/entry/2018/02/17/130750
#include <iostream>
#include <vector>
#include <functional>
#include <tuple>

template <typename Func, typename ...Args>
void func_each(std::tuple<Args...> const& args, Func func){
    std::apply([&](auto... arg) constexpr{(func(arg), ...);}, args);
}

void func1(){
    std::cout << "func1" << std::endl;
}

void func2(){
    std::cout << "func2" << std::endl;
}

int main(){

    auto var = std::tuple(func1, func2);

    func_each(var, [&](auto it){it();});
    
    return 0;   
}