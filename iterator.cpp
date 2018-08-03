#include <iostream>
#include <array>

int main() {
    
    std::array<int, 5> num = {1, 2, 3, 4, 5};
    
    for(auto* it = std::begin(num); it != std::end(num); it++)
        std::cout << *it << std::endl;
    
    return 0;   
}

