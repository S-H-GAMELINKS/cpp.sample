#include <iostream>
#include <string>
#include <regex>

int main() {
    
    double f = 4.2;
    
    std::string str = std::to_string(f);
    std::string null = "";
    
    std::regex re("0+");
    
    str = std::regex_replace(str, re, null);
    
    std::cout << str << std::endl;
    std::cout << f << std::endl;
 
    return 0;
}
