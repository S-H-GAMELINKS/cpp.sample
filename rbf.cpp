// Range-based-for sapmle
#include <iostream>
#include <array>

int main(){

    std::array<int, 5> Array = {1, 2, 3, 4, 5};

    for(auto&& a : Array)
        std::cout << a << std::endl;

    return 0;
}