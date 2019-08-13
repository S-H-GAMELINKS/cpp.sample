#include <iostream>
#include <type_traits>

template<class T>
constexpr std::is_rvalue_reference<T&&>
is_rvalue(T&&){return {};}

int main() {
    
    std::cout << std::is_rvalue_reference<int>::value << std::endl;
    std::cout << std::is_rvalue_reference<int&>::value << std::endl;
    std::cout << std::is_rvalue_reference<int&&>::value << std::endl;
    std::cout << std::is_rvalue_reference<const int>::value << std::endl;
    std::cout << std::is_rvalue_reference<const int&>::value << std::endl;
    std::cout << std::is_rvalue_reference<const int&&>::value << std::endl;
    
    int n = 0;
    
    std::cout << is_rvalue(5) << std::endl;
    std::cout << is_rvalue(n) << std::endl;
    std::cout << is_rvalue(std::forward<int>(n)) << std::endl;
 
    return 0;
}
