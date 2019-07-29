#include <iostream>

int main() {
    
    struct Hoge {
        void hello() {
            std::cout << "Hello" << std::endl;   
        }
        void hoge() {
            auto func = [this]() { std::cout << "Hoge" << std::endl; hello();};
            func();
        }
    };

    Hoge hoge;
        
    hoge.hoge();
 
    return 0;
}
