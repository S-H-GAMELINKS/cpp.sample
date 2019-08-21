#include <iostream>
#include <vector>

void func(const std::vector<int>& container [[maybe_unused]]) {}

template <class T, class ...Args>
void func(std::vector<int>& container, const T& var, const Args... args) {
    std::cout << var << std::endl;
    container.emplace_back(std::move(var));
    func(container, (args)...);
}

int main() {

    std::vector<int> v;

    func(v, 1, 3, 42);

    for(auto&& i : v)
        std::cout << i << std::endl;

    return 0;
}
