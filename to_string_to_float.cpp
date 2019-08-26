#include <iostream>
#include <string>
#include <typeinfo>

int main() {
    
    double f = 4.2;
    
    std::string str = std::to_string(f);
    
    std::cout << str << std::endl;
    std::cout << f << std::endl;
 
    return 0;
}
