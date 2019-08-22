#include <tuple>
#include <iostream>

template <class ...Args>
std::tuple<Args...> func(Args... args) {
    return std::make_tuple((args)...);
}

int main() {
    
    auto con = func(1, 2, 3);
    
    std::cout << std::get<0>(con) << std::endl;
    std::cout << std::get<1>(con) << std::endl;
    std::cout << std::get<2>(con) << std::endl;
 
    return 0;
}
