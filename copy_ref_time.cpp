#include <iostream>
#include <chrono>

using namespace std::chrono;

int copy(const int num) {
    return num;   
}

int reference(const int& num) {
    return num;   
}

int main() {
    
    std::chrono::system_clock::time_point  start, end; 
    
    start = std::chrono::system_clock::now();
 
    std::cout << copy(42) << std::endl;
    
    end = std::chrono::system_clock::now();
    
    std::cout << std::chrono::duration_cast<std::chrono::nanoseconds>(end-start).count() << std::endl;
    
    start = std::chrono::system_clock::now();
    
    std::cout << reference(42) << std::endl;
    
    end = std::chrono::system_clock::now();
    
    std::cout << std::chrono::duration_cast<std::chrono::nanoseconds>(end-start).count() << std::endl;
    
    return 0;
}
