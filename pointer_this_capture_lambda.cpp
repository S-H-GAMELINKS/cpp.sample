#include <iostream>

struct Hoge {
    void start() {
        auto func = [*this]() mutable {
            hello();
        };
        
        func();
    }
    
    void hello() {
        std::cout << "Hello C++" << std::endl;   
    }
};

int main() {
    
    Hoge hoge;
    
    hoge.start();
    
    return 0;
}
