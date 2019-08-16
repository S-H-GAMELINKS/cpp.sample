#include <iostream>
#include <vector>

int main() {
    
    std::vector<int> t;
    
    t.emplace_back(42);
    t.emplace_back(4);
    
    decltype(t)::iterator it = t.begin();
    
    std::cout << *it << std::endl;
    *it--;
    std::cout << *it << std::endl;
    
    std::cout << *std::begin(t) << std::endl;
    std::cout << t.back() << std::endl;
    std::cout << t.size() << std::endl;
 
    return 0;
}
