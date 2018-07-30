// SFINAE Sample Code

#include <iostream>
#include <type_traits>

template <typename T>
decltype(auto) func(const T& var) -> typename std::enable_if<std::is_integral<T>::value>::type {
    std::cout << "Integer" << std::endl;
}

template <typename T>
decltype(auto) func(const T& var) -> typename std::enable_if<!std::is_integral<T>::value>::type {
    std::cout << "Not Integer" << std::endl;
}

int main(){
    
    func(1);
    func("test");
    
 
    return 0;
}