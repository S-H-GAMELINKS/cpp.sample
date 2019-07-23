#include <iostream>
#include <string>

void func() {}

template <class Harg, class... Args>
void func(Harg&& harg, Args... args) {
    std::cout << harg << std::endl;
    
    func(std::forward<Args>(args)...);
}

int main() {
    
    int num1 = 42, num2 = 47;
    std::string name1 = "大泉", name2 = "鈴井";
    
    func(num1, num2);
    
    func(name1, name2);
 
    return 0;
}
