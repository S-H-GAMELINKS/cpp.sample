#include <iostream>

class Hoge {
    public:
        void func(){}

        template <class Head, class... Args>
        void func(Head head, Args... args) {
            std::cout << head << std::endl;
            func(args...);
        }    
};


int main() {
    
    Hoge hoge;
    
    hoge.func(1, 2, 3);
 
    return 0;
}
