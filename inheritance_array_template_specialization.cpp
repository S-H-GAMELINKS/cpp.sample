#include <iostream>
#include <array>

template <class T, size_t N>
struct Any : public std::array<T, N> {};

template <size_t N>
struct Any<int, N> : public std::array<int, N> {};

int main () {
    
    Any<int, 10> any;
    
    for(int i = 0; i < 10; i++)
        any[i] = std::move(i);
    
    for(auto&& a : any)
        std::cout << a << std::endl;
    
    Any<double, 10> anyd;
    
    for(int i = 0; i < 10; i++)
        anyd[i] = std::move(0.5);
    
    for(auto&& a : anyd)
        std::cout << a << std::endl;
   
    return 0;
}
