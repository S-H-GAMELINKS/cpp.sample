// Inline NameSpace Sample
#include <iostream>

namespace ns1 {
    inline namespace ns2 {
        void func() {
            std::cout << "call F\func()" << std::endl;
        }
    }
}

int main(){

    ns1::func();

    return 0;
}