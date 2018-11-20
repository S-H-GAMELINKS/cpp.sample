#include <iostream>

class A {
    public:
    virtual void func() { std::cout << "A" << std::endl; }
};

class B : public A {
    public:
    void func() override { std::cout << "B" << std::endl; }
};

int main() {
    
    A a;
    
    a.func();
    
    B b;
    
    b.func();
    
    return 0;   
}
