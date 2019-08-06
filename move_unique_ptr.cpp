#include <iostream>
#include <memory>

int main() {
    
    std::unique_ptr<int> p1 = std::make_unique<int>(42);
    std::unique_ptr<int> p2 = std::move(p1);
    
    const char* r = p1 == nullptr ? "true" : "false";
    
    std::cout << r << std::endl;
    std::cout << *p2 << std::endl;
 
    return 0;
}
