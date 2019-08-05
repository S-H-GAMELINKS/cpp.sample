#include <iostream>

class Hoge {
    public:
    constexpr decltype(auto) run() {
        decltype(auto) func = [*this]() constexpr {
            return hello();  
        };
        
        return func();
    }
    
    constexpr int hello() const {
        return 42;   
    }
};

int main() {
    
    Hoge hoge;
    
    std::cout << hoge.run();
    
    return 0;
}
