#include <iostream>

struct Hoge {
    void start() {
        auto func = [this]() {
            hello();
        };
        
        func();
    }
    
    void hello() const {
        std::cout << "Hello C++" << std::endl;   
    }
};

int main() {
    
    Hoge hoge;
    
    hoge.start();
    
    return 0;
}
