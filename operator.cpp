#include <iostream>
#include <string>
#include <typeinfo>

template <class T>
class Any : public T {
    public:
        void operator+=(const T& var) {*this += var; }
        void operator+=(const int& var) { *this += std::to_string(var); }
};

template <>
class Any<int> {
    int value = 0;
    public:
    Any() = default;
    ~Any() = default;
    Any& operator=(const Any& any) { this->value = any.value; return *this; }
    Any& operator+(const Any& any) { this->value +=any.value; return *this;}
    void operator=(const int& var) {this->value = var;}
    void operator+=(const int& var) {this->value += var;}
    void operator-=(const int& var) {this->value -= var; }
    Any(const int& var) {this->value = var;}
    int show() {return this->value;}
};

int main() {
    
    Any<std::string> any;
    
    std::cout << typeid(any).name() << std::endl;
    
    any += std::string("hoge");
    
    any += 123;
    
    std::cout << any << std::endl;
    
    Any<int> hoge(100);
    
    std::cout << hoge.show() << std::endl;
    
    hoge = 42;
    
    std::cout << hoge.show() << std::endl;
    
    hoge += 42;
    
    std::cout << hoge.show() << std::endl;
    
    hoge -= 42;
    
    std::cout << hoge.show() << std::endl;
    
    Any<int> h(100);
    
    h = h + hoge;
    
    std::cout << h.show() << std::endl;
    
    h = hoge;
    
    std::cout << h.show() << std::endl;
    
    return 0;
}
