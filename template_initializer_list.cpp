// Template Initializer List Sample
#include <iostream>
#include <vector>

template<class T>
class Container {
public:
    std::vector<T> container;
    Container(std::initializer_list<T> init) : container(init.begin(), init.end()) {};
};

int main(){

    Container<int> Con = {1, 2, 3};

    for (auto&& c : Con.container)
        std::cout << c << std::endl;

    return 0;
}