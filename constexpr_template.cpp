// Constexpr Template Sample
#include <iostream>

template <typename T>
constexpr T Sum(const T& var1, const T& var2) {
    return var1 + var2;
}

int main(){

    std::cout << Sum(40, 2) << std::endl;

    return 0;
}