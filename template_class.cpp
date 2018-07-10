// Template Class Sample
#include <iostream>
#include <vector>

template<typename T>
class Vec {
    std::vector<T> container;
public:
    void set();
    void get();
};

template<typename T>
void Vec<T>::set(){
    for(T temp; std::cin >> temp;)
        Vec::container.emplace_back(std::move(temp));
}

template<typename T>
void Vec<T>::get(){
    for (auto&& c : Vec::container)
        std::cout << c << std::endl;
}

int main(){

    Vec<int> vec;

    vec.set();

    vec.get();

    return 0;
}
