#include <iostream>
#include <string>
#include <regex>

int main() {
    
    const std::string str = "hogehoge fugafuga c_name.png";
    
    const std::regex reg("c_name.png");
    
    const std::string fmt = "";
    
    std::string s = std::regex_replace(str, reg, fmt);
    
    std::cout << s << std::endl;
    
 
    return 0;
}
