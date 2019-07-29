#include <iostream>
#include <array>

int main() {
    
    std::array<int, 10> data = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    
    for(decltype(data)::iterator it = std::begin(data); std::end(data) != it; it++)
        std::cout << *it << it << std::endl;
 
    return 0;
}
