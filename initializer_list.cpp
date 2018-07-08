// Initializer list Sample
#include <iostream>

int main(){

    int num[] = {1, 2, 3, 4, 5};

    for (auto&& n : num)
        std::cout << n << std::endl;

    return 0;
}