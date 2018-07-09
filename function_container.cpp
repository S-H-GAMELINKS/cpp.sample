// Function Container Sample
//
#include <iostream>
#include <array>
#include <functional>

template<typename T, size_t N>
void lambda(const std::array<std::function<T()>, N> Func){
    for (auto&& func : Func)
        func();
}

int main(){

    std::function<void()> func = []() constexpr {std::cout << "func()" << std::endl;};

    std::array<std::function<void()>, 5> Func;

    for (int i = 0; i < Func.size(); i++)
        Func[i] = func;

    lambda(Func);

    return 0;
}
