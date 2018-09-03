#include <iostream>
#include <string>
#include <vector>
#include <array>

template <typename T>
constexpr void func(const std::vector<T>& Vec){
    for(auto&& v : Vec)
        std::cout << v << std::endl;
}

template <typename T, size_t N>
constexpr void func(const std::array<T, N>& Ary){
    for(auto&& a : Ary)
        std::cout << a << std::endl;
}

int main(){
    
    std::vector<std::string> vec = {"hello", "hello", "hello"};
    std::array<std::string, 3> ary = {"hello", "hello", "hello"};
    
    func(vec);
    func(ary);
    
    return 0;
}
