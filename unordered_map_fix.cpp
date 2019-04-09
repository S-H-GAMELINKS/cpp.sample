#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>

int main() {
    
    std::vector<std::unordered_map<std::int32_t, std::string>> talks;
    
    std::string str = "hoge";
    
    for(int i = 0; i < 10; i++) {
        try {
            auto& talk = talks.at(i);
            std::cout << "DB is exit!" << std::endl;
            std::cout << "Insert data!" << std::endl;
            talk.emplace(talk.size(), str);
        } catch(std::out_of_range& ex) {
            std::cout << "Out of Range!" << std::endl;
            std::cout << "Create New DB!" << std::endl;
        
            std::unordered_map<std::int32_t, std::string> new_talk;
            
            new_talk.emplace(new_talk.size(), str);
        
            talks.emplace_back(std::move(new_talk));
        }
    }
    auto t = talks.at(0);
    
    for(auto&& u : t)
        std::cout << "id: " << u.first << ", content: " << u.second << std::endl;
    
    for(auto&& talk : talks) {
        for(auto&& t : talk)
            std::cout << "id: " << t.first << ", content: " << t.second << std::endl;
    }
    return 0;
}
