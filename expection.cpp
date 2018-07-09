// Expection Sample
#include <iostream>
#include <memory>

int main(){
    
    std::unique_ptr<int> n = nullptr;
    
    try{
        if (n == nullptr)
            throw 1;
            
    } catch(int Error) {
        std::cout << Error << std::endl;   
    }    
    
    return 0;   
}