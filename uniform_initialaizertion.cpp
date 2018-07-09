// Uniform Initializertion Sample
#include <iostream>

class Sample{
public:
    Sample(int, double){};
    ~Sample(){};
};

int main(){

    Sample sample {1, 3.14};

    return 0;
}