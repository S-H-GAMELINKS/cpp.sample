#include <iostream>
#include <unordered_map>
#include <string>

int main() {
 
    std::unordered_map<std::string, int> cont;
    
    for(int i = 0; i < 10; i++)
        cont[std::to_string(i)] = i;
    
    for(auto&& [key, value] : cont)
        std::cout << key << value << std::endl;
    
    return 0;
}
