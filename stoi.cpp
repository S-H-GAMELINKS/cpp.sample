#include <iostream>
#include <string>
#include <typeinfo>

int main() {
    
    std::string str = "42";
    
    int i = std::stoi(str);
    
    std::cout << typeid(str).name() << std::endl;
    std::cout << typeid(i).name() << std::endl;
 
    return 0;
}
