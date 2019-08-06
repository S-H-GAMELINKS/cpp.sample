#include <iostream>

template <class T>
auto func(const T& t1, const T& t2) {
    std::cout << "Can Add!" << std::endl;
    return std::move(t1 + t2);
}

decltype(auto) func(...) {
    std::cout << "Can't Add!" << std::endl;
    return false;
}

int main() {
    
    func(1, 2);
    func(1, "Hoge");
 
    return 0;
}
