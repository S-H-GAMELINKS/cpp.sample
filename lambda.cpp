// lambda Sample
// Compile to "g++ lambda.cpp -std=c++11"
#include <iostream>

int main(){

    auto sum = [&](const int& var1, const int& var2){return var1 + var2; };

    std::cout << sum(2, 40) << std::endl;

    return 0;
}