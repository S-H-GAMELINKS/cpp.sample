#include <iostream>

int main() {
    
    auto func = [](){ return std::pair<int, double> {42, 4.2};};
    
    auto [hoge, fuga] = func();
    
    std::cout << hoge << std::endl;
    std::cout << fuga << std::endl;

    return 0;
}
