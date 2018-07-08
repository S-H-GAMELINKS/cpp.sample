// Template Sample 1
#include <iostream>

template<typename T>
T Add(const T& var1, const T& var2){
    return var1 + var2;
}

int main(){

    int num1 = 1, num2 = 41;
    double var1 = 3.0, var2 = 0.14;

    std::cout << Add(num1, num2) << std::endl;
    std::cout << Add(var1, var2) << std::endl;

    return 0;
}