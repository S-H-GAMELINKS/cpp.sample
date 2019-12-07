#include <iostream>
#include <memory>
#include <chrono>

struct SI {
    int val = 42;
    void func() { std::cout << this->val << std::endl; };
};

struct SP {
    std::unique_ptr<SI> value = nullptr;
};

int main() {
    
    SP sp;
    sp.value = std::make_unique<SI>();
    sp.value->func();
 
    return 0;
}
