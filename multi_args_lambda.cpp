#include <iostream>

void f(const int a, const int b) {
    std::cout << a << b << std::endl;
}

int main() {
 
    auto fu  = [](auto... args) { f(args...); return 0; };
    
    fu(1, 2);
    
    return 0;
}
