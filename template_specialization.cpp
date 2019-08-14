#include <iostream>

template <typename T>
struct Any {
    T var;
};

template <>
struct Any<int> {
    int vam;   
};

int main () {
  
    Any<double> any;
    
    any.var = 10;
    
    std::cout << any.var << std::endl;
    
    Any<int> hoge;
    
    hoge.vam = 10;
    
    std::cout << hoge.vam << std::endl;
 
    return 0;
}
