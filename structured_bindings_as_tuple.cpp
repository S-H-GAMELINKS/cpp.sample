#include <iostream>
#include <string>
#include <tuple>
#include <vector>

std::tuple<int, std::string, double> make_tuple(const int& id){
    return std::forward_as_tuple(id, "Awesome C++!", 3.14);   
}

int main(){
    
    std::vector<std::tuple<int, std::string, double>> data;
    
    for(int i = 0; i < 99; i++){
           auto d = make_tuple(i);
           data.emplace_back(std::move(d));
    }
    
    for(auto&& d : data){
        auto [id, name, point] = d;
        std::cout << "id:" << id << " name:" << name << " point:" << point << std::endl;
    }
    
    return 0;   
}
