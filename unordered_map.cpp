#include <iostream>
#include <unordered_map>
#include <string>

int main(){
    
    std::unordered_map<std::string, int> data = {{"1st", 1}, {"2nd", 2}};
    
    std::cout << data.at("1st") << std::endl;
    std::cout << data.at("2nd") << std::endl;
    
    return 0;   
}
