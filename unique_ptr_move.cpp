#include <iostream>
#include <memory>

struct Hoge {
    int i;
    int j;
};

int main() {
    
    Hoge hoge{1, 2};
    
    std::cout << hoge.i << hoge.j << std::endl;
    
    std::unique_ptr<Hoge> ph = std::make_unique<Hoge>(hoge);
    
    auto i = std::move(ph->i);
    auto j = std::move(ph->j);
    
    std::cout << i << j << std::endl;
 
    return 0;
}
