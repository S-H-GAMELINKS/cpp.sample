#include <iostream>

void g(const int& a, const int& b) {
    std::cout << a << b << std::endl;
}

template <class... Args>
void func(Args... args) {
    g(args...);
}

int main() {
    
    func(1, 2);
 
    return 0;
}
