#include <iostream>
#include <memory>

int main() {
    
    std::unique_ptr<std::string> p1 = std::make_unique<std::string>("Hello World!");
    
    auto p2 = std::move(p1);
    
    if(p1 == nullptr)
        std::cout << "nullptr!" << std::endl;
    
    std::cout << *p2 << std::endl;
    
 
    return 0;
}
