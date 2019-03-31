#include <iostream>
#include <string>
#include <vector>

int main() {
    
    std::vector<std::string> talks;
    
    std::string str = "hoge";
    
    try {
        std::cout << talks.at(0) << std::endl;
    } catch(std::out_of_range& ex) {
        std::cout << "Out of Range" << std::endl;
        talks.emplace_back(std::move(str));
    }
    std::cout << talks.at(0) << std::endl;
        
    return 0;
}
