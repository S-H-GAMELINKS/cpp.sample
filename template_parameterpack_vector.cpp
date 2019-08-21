#include <iostream>
#include <vector>

template <class ...Args>
std::vector<int> func(Args... args) {
    return std::vector<int> {{ (args)... }};
}

int main() {

    std::vector<int> v = func<int>(1, 3, 42);

    for(auto&& i : v)
        std::cout << i << std::endl;

    return 0;
}
