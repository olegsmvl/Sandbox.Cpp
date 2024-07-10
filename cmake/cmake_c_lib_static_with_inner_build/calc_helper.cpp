#include "calc_helper.hpp"
#include <iostream>



namespace calc_ns {

void Calculator::callback(int num) {
  auto result = num * num * num;
  std::cout << result << std::endl;
}

int Calculator::sqare(int num) { return num * num; };
} // namespace calc_ns
