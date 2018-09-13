#include <iostream>

int main(){
    
    auto func = [](auto var) -> auto {return var;};
    
    std::cout << func(1) << std::endl;
    std::cout << func("Hello C++!") << std::endl;
    
    return 0;   
}
