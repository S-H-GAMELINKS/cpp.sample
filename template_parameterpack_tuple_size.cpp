#include <tuple>
#include <iostream>

template <class ...Args>
std::tuple<Args...> func(Args... args) {
    return std::make_tuple((args)...);
}

template <class T>
auto size([[maybe_unused]] const T& t) {
    return std::tuple_size<T>::value;
}

int main() {
    
    auto con = func(1, 2, 3);

    std::cout << size(con) << std::endl;
 
    return 0;
}
