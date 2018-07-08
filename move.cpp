// Sample for std::move
#include <iostream>
#include <vector>

int main(){

    std::vector<int> Vec;

    for (int i = 0; i < 99; i++)
        Vec.emplace_back(std::move(i));

    for (auto&& v : Vec)
        std::cout << v << std::endl;

    return 0;
}