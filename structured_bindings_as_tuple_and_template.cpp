#include <iostream>
#include <string>
#include <tuple>
#include <vector>

template<typename T, typename S, typename D>
std::tuple<T, S, D> make_tuple(const T& id, const S& name, const D& point){
    return std::forward_as_tuple(id, name, point);   
}

int main(){
    
    std::vector<std::tuple<int, std::string, double>> data;
    std::string name = "Hello";
    
    for(int i = 0; i < 99; i++){
           data.emplace_back(std::move(make_tuple(i, name, 5.14)));
    }
    
    for(auto&& d : data){
        auto [id, name, point] = d;
        std::cout << "id:" << id << " name:" << name << " point:" << point << std::endl;
    }
    
    return 0;   
}
