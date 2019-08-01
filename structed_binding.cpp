#include <iostream>

int main() {
    
    auto func = [](){ return std::pair<int, double> {42, 4.2};};
    
    auto hoge = func();
    
    std::cout << hoge.first << std::endl;
    std::cout << hoge.second << std::endl;

    return 0;
}
