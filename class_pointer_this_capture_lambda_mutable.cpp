#include <iostream>

class Hoge {
    public:
    constexpr int run() {
        decltype(auto) func = [*this]() constexpr mutable {
            return hello();  
        };
        
        return func();
    }
    
    constexpr int hello() {
        return 42;   
    }
};

int main() {
    
    Hoge hoge;
    
    std::cout << hoge.run();
    
    return 0;
}
