#include <iostream>

template <class Func>
decltype(auto) forward_func(Func&& f) {
    return std::forward<Func>(f);   
}

int main() {
    
    auto&& func =[](){std::cout << "func1" << std::endl;};
    
    auto f = forward_func(func);

    f();
    func();
    
    return 0;
}
