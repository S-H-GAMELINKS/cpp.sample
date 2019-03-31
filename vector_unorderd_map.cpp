#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>

int main() {
    
    std::vector<std::unordered_map<std::int32_t, std::string>> talks;
    
    std::string str = "hoge";
    
    try {
        auto talk = talks.at(0);
    } catch(std::out_of_range& ex) {
        std::cout << "Out of Range!" << std::endl;
        std::cout << "Create New DB!" << std::endl;
        
        std::unordered_map<std::int32_t, std::string> new_talk;
        
        new_talk.emplace(new_talk.size(), str);
        
        talks.emplace_back(std::move(new_talk));
    }
    
    auto t = talks.at(0);
    
    for(auto&& u : t)
        std::cout << "id: " << u.first << ", content: " << u.second << std::endl;
    
    return 0;
}
