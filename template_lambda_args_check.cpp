#include <iostream>

int main() {
    
    auto func = []<class T>(T t) { return t*2; };
    
    std::cout << func(5);
    
    return 0;
}
