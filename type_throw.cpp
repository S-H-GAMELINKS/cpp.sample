#include <iostream>
#include <string>
#include <typeinfo>

template <class T>
T func(const T& var) {
    if (typeid(double).name() == typeid(var).name()) {
        std::cout << "Double!" << std::endl;
        throw "This value is Float!";   
    }
    
    if (typeid(std::string).name() == typeid(var).name())
        std::cout << "String!" << std::endl;

    return var;
}

int main() {
    std::cout << func<int>(42) << std::endl;
    
    try {
        std::cout << func(4.2) << std::endl;
    } catch (const char* error) {
        std::cout << error << std::endl;   
    }
    std::cout << func(std::string("42")) << std::endl;
    return 0;   
}
