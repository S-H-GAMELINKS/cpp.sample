#include <iostream>
#include <string>

std::string fuga(std::string str) {
    return std::string {{ str[0] }};
}

int main() {
    
    std::string str = "hello";
    
    std::cout << str.substr(0, 3) << std::endl;
    std::cout << fuga(str) << std::endl;
 
    return 0;
}
