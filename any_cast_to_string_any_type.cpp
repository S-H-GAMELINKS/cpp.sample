#include <iostream>
#include <any>
#include <vector>
#include <typeinfo>
#include <string>

const std::string check(std::any any) {
 
    try {
        return std::to_string(std::any_cast<int>(any));   
    } catch(std::bad_any_cast& e) {
        
    }
    
    try {
        return std::to_string(std::any_cast<double>(any));   
    } catch(std::bad_any_cast& e) {
        
    }
    
    return std::string("");
}

int main() {
    
    std::vector<std::any> any;
    
    int i = 42;
    double j = 4.2;
    
    any.emplace_back(std::move(i));
    any.emplace_back(std::move(j));
    
    std::cout << check(any[1]) << std::endl;
    std::cout << check(any[0]) << std::endl;

    return 0;
}
