// Constexpr Sample
#include <iostream>

constexpr int Sum(const int& var1, const int& var2){
    return var1 + var2;
}

int main(){

    int num = 5;

    std::cout << Sum(num, num) << std::endl;

    return 0;
}