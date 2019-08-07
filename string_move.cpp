#include <iostream>
#include <string>

int main() {
    
    std::string str = "Hello World!";
    
    std::string mstr = std::move(str);
    
    std::cout << str << std::endl;
    std::cout << mstr << std::endl;
 
    return 0;
}
