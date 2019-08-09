#include <iostream>

class Hoge {
    int value = 42;
    
    public:
        int operator+(const int& n) {  return this->value + n; }
        int operator+=(const Hoge& hoge) { return this->value += hoge.value;}
};

int main() {
    
    Hoge hoge, b;
    
    hoge += b;
   
    return hoge + 5;
}
