#include <iostream>
#include <array>
#include <string>
#include <tuple>
#include <functional>

template <typename T, typename F>
void func(const T& material, const std::string& path, F&& func){
    std::cout << material << " : " << func(path) << std::endl;
    std::cout << "func done!" << std::endl;
}

int main(){

    int x = 0;

    std::array<std::tuple<int, std::function<std::string(const std::string&)>>,10> ary;
    
    ary.fill({x, [&](const std::string& path){return path;}});

    for(auto&& a : ary)
        func(std::get<0>(a), "test", std::get<1>(a));

    return 0;
}