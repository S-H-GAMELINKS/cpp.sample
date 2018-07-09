// User Defined Literal Sample
#include <iostream>
#include <string>

std::string operator""s(const char* str, std::size_t length){
    return std::string(str, length);
}

int main(){

    auto str = "sample"s;

    std::cout << str << std::endl;

    return 0;
}