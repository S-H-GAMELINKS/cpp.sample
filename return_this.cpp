#include <iostream>
#include <typeinfo>

class Int {
        int value = 0;
    
    public:
        constexpr Int& set(const int& var);
        void show();
};

constexpr Int& Int::set(const int& var) {
    this->value = var;
    return *this;
}

void Int::show() {
    std::cout << this->value << std::endl;   
}

int main() {
    
    Int var;
    
    auto return_value = var.set(2);
    
    var.show();
    return_value.show();
    
    return_value.set(3);
    
    var.show();
    return_value.show();
    
    std::cout << typeid(return_value).name() << std::endl;
    
    
}
