#include <iostream>
#include <string>

int main() {
    
    auto func = []<class T>(const T& var1, const T& var2) { return var1 + var2; };
    
    std::cout << func(40, 2) << std::endl;
    // -> 42
    
    const std::string var1 = "hoge", var2 = "fuga";
    
    std::cout << func(var1, var2) << std::endl;
    // -> hogefuga
 
    return 0;
}
