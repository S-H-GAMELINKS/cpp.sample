// Template Initializer List Sample
// Compile to "g++ template_initializer_list_lambda.cpp -std=c++17" and GCC 8.1.0
#include <iostream>
#include <vector>
#include <functional>

template<class T>
class Container {
public:
    std::vector<T> container;
    Container(std::initializer_list<T> init) : container(init.begin(), init.end()) {};
};

int main(){
    
    std::function<void()> Func1 = []() constexpr {std::cout << "Func1" << std::endl;};
    std::function<void()> Func2 = []() constexpr {std::cout << "Func2" << std::endl;};

    Container<std::function<void()>> Con = {Func1, Func2};

    for (auto&& c : Con.container)
        c();

    return 0;
}