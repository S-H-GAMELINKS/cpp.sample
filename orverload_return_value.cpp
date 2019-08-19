#include <iostream>
#include <string>

template <class T>
T convert(const std::string& s){};

template <>
double convert(const std::string& s) {
    return std::stod(s);
}

template <>
int convert(const std::string& s) {
    return std::stoi(s);
}


int main() {
    
    std::string s1 = "4.2";
    std::string s2 = "42";
    
    auto c1 = convert<double>(s1);
    auto c2 = convert<int>(s2);
    
    if(c1 == 4.2)
        std::cout << "c1 is 4.2, type double" << std::endl;
    
    if(c2 == 42)
        std::cout << "c2 is 42, type int" << std::endl;
 
    return 0;
}
