#include "calc_helper.hpp"
#include <iostream>

extern "C" {
#include "mylib_prj/mylib.h"
namespace lib_ns {
void callback(int num) {
  auto result = num * num * num;
  std::cout << result << std::endl;
}
} // namespace lib_ns
}

namespace print_prog {

class Printer {
public:
  void print() {
    std::cout << "Calling C function from C++:" << std::endl;
    my_function();
    lib_ns::callback(99);
  }
};

} // namespace print_prog
