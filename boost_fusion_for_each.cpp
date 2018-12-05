// ref: https://wandbox.org/permlink/BgClTwURHunXWXKm
// ref: https://boostjp.github.io/tips/tuple.html
#include <iostream>
#include <tuple>
#include <boost/fusion/include/for_each.hpp>
#include <boost/fusion/adapted/std_tuple.hpp>

template <typename... Args>
void func(Args... args) {
    
    auto args_tuple = std::make_tuple((args)...);
    
    boost::fusion::for_each(args_tuple, [](auto&& a){std::cout << a << std::endl;});
}

int main () {
    func(1, 3.14, 'A');
    return 0;
}
