#include <iostream>
#include <map>

int main() {
    
    std::map<double, double> m;
    
    m[1.5] = 4.2;
    
    std::cout << m[1.5];
 
    return 0;
}
