#include <iostream>
#include <variant>
#include <vector>
#include <string>

int main() {
    
    std::vector<std::variant<int, double, std::string>> v;
    
    v.emplace_back(1);
    v.emplace_back(1.5);
    v.emplace_back(std::string("hoge"));
    
    for(auto&& c : v)
        std::visit([]<class T>(const T& val){ std::cout << val << std::endl;}, c);
 
    return 0;
}
