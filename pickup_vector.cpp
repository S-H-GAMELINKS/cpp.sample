#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

int main() {
    
    std::vector<int> i1 = {1, 2, 3, 4};
    std::vector<int> i2 = {3, 4, 5, 6, 7};
    
    std::vector<int> result;
    
    std::set_intersection(i1.begin(), i1.end(), i2.begin(), i2.end(), std::inserter(result, result.end()));
        
    for(auto&& r : result)
       std::cout << r << std::endl;
 
    return 0;
}
