#include <iostream>
#include <vector>
#include <any>
#include <typeinfo>
#include <string>

int main() {
    
    std::vector<std::any> any = {1, std::string("5"), 6};
 
    for(auto&& a : any) {
        if (a.type() == typeid(int)) {
            std::cout << "int : " << std::any_cast<int>(a) << std::endl;
        }
        else if (a.type() == typeid(std::string)) {
            std::cout << "std::string : " << std::any_cast<std::string>(a) << std::endl;
        }
    }
    
    return 0;
}
