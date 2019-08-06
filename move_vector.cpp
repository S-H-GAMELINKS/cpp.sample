#include <iostream>
#include <vector>

int main() {
    
    std::vector<int> v = {1, 2, 3};
    
    std::vector<int> m = std::move(v);
    
    for(auto&& i : m)
        std::cout << i << std::endl;
    
    for(auto&& i : v)
        std::cout << i << std::endl;
 
    return 0;
}
