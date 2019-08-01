#include <iostream>
#include <map>

int main() {
    
    std::multimap<int, double> hoge = {{42, 4.2}};
    
    for(const auto& [key, value] : hoge)
        std::cout << key << value << std::endl;
    
    return 0;
}
