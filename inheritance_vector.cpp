#include <iostream>
#include <vector>

struct Any : public std::vector<int> {
};

int main () {
    
    Any any;
    
    for(int i = 0; i < 10; i++)
        any.emplace_back(std::move(i));
    
    for(auto&& a : any)
        std::cout << a << std::endl;
   
    return 0;
}
