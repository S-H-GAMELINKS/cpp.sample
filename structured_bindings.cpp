#include <iostream>
#include <string>

int main(){
    
    std::pair<int, std::string> data = { 1, "C++17" };
    
    auto [id, name] = data;
    
    std::cout << id  << std::endl;
    std::cout << name << std::endl;
    
    return 0;   
}
