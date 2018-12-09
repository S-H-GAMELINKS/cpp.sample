#include <iostream>
#include <future>
#include <array>
#include <functional>

template <typename T, typename F>
void func(const T& t, F&& f) {
    f(t);
}

int main() {
    std::array<std::thread, 9> th_array;
    
    std::function<void(int)> f = [](int i){std::cout << i;};
    
    for(int i =0; i < 9; i++)
        th_array[i] = std::thread(func<int, decltype(f)>, i, f);
    
    for(auto&& t : th_array)
        t.join();
    
    return 0;
}
