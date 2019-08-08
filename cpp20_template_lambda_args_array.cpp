#include <iostream>
#include <array>

int main() {
    
    auto func = []<class T, size_t N>(std::array<T, N> data) { 
        for(auto&& d : data)
            std::cout << d << std::endl; 
    };
    
    std::array<int, 3> data = {1, 2, 3};
    
    func(data);
    
    return 0;
}
