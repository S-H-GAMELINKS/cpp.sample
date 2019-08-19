#include <iostream>
#include <string>

template <class T>
T f(const std::string& s);

template <>
int f(const std::string& s) {
    return std::stoi(s);
}

template <>
double f(const std::string& s) {
    return std::stod(s);   
}

int main() {
    
    std::string s = "4.2";
    
    std::cout << f<int>(s) << std::endl;
    std::cout << f<double>(s) << std::endl;
 
    return 0;
}
