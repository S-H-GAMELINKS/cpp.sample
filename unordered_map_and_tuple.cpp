#include <iostream>
#include <tuple>
#include <unordered_map>
#include <string>

int main(){
    
    std::unordered_map<int, std::tuple<int, std::string, std::string>> hash;
    
    for(int i = 0; i< 10; i++)
        hash.insert({i, std::make_tuple(1, "S.H.", "address")});
    
    for(auto&& h : hash)
        std::cout << "id : " << h.first << "   name : " << std::get<1>(h.second) << "  address : " << std::get<2>(h.second) << std::endl;
    
    return 0;   
}
