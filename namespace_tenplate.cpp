#include <iostream>
#include <unordered_map>
#include <vector>
#include <array>


namespace var {
template <class T>
class Tatara {
    public:
    T var;
};
}

namespace array {
template <class T, size_t N>
class Tatara {
    public:
    std::array<T, N> array;
};
}

int main() {
    
    var::Tatara<int> tvar;
    
    tvar.var = 10;
    
    std::cout << tvar.var << std::endl;
    
    array::Tatara<int, 3> tarray;
    
    for(int i = 0; i < 3; i++)
        tarray.array[i] = i;
    
    
    for(auto&& t : tarray.array)
        std::cout << t << std::endl;
    return 0;
}
