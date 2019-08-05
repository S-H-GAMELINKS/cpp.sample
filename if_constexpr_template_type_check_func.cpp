#include <iostream>

template <class T1, class T2>
constexpr decltype(auto) func(const T1& t1, const T2& t2) {
    if constexpr (std::is_same_v<T1, T2>)
        return t1 + t2;
    else
        return 0;
}

int main() {
    std::cout << func(42.0, 2.0);
}
