// ref: https://wandbox.org/permlink/BgClTwURHunXWXKm
// ref: https://boostjp.github.io/tips/tuple.html
#include <iostream>
#include <tuple>
#include <boost/fusion/include/for_each.hpp>
#include <boost/fusion/adapted/std_tuple.hpp>

template <typename... Args, typename F>
void func(std::tuple<Args...> args, F&& func) {
    
    boost::fusion::for_each(args, func);
}

void a(){
    std::cout << "Func A!" << std::endl;
}

void b(){
    std::cout << "Func B!" << std::endl;
}

void c(){
    std::cout << "Func C!" << std::endl;
}

int main () {
    func(std::make_tuple(a, b, c), [](auto&& f){f();});
    return 0;
}
