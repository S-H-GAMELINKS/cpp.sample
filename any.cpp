#include <iostream>
#include <typeinfo>
#include <any>
#include <string>

template <class T>
std::any set(const T& arg){ return 0;}

template <>
std::any set(const int& arg) {
    return arg;
}

template <>
std::any set(const std::string& arg){
    return arg;
}

class H{};

decltype(auto) cast_int(std::any arg) {
    try {
        return std::any_cast<int>(arg);   
    } catch (...) {}
}


int main() {

    auto val = set(0);
    auto v = set(std::string("hoge"));
    auto f = set(H{});
    
    std::cout << std::any_cast<int>(val) << std::endl;
    std::cout << cast_int(val) << std::endl;
    std::cout << typeid(std::any_cast<int>(val)).name() << std::endl;
    std::cout << typeid(val).name() << std::endl;
    
    std::cout << std::any_cast<std::string>(v) << std::endl;
    std::cout << cast_int(v) << std::endl;
    std::cout << typeid(std::any_cast<std::string>(v)).name() << std::endl;
    std::cout << typeid(v).name() << std::endl;
    
    std::cout << std::any_cast<int>(f) << std::endl;
    std::cout << typeid(std::any_cast<int>(f)).name() << std::endl;
    std::cout << typeid(f).name() << std::endl;
    
    return 0;
}
