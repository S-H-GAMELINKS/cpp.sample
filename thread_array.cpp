#include <iostream>
#include <future>
#include <array>

void func(const int& var) {
    std::cout << var << std::endl;
}

int main() {
    std::array<std::thread, 9> th_array;
    
    for(int i = 0; i < 9; i++)
        th_array[i] = std::thread(func, i);
    
    for(auto&& t : th_array)
        t.join();
    
    return 0;
}
