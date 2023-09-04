#include <functional>
#include <iostream>
using namespace std;

int apply(int a, int b, std::function<int(int, int)> f) { return f(a, b); }

int main() {

  auto mul = [](int a, int b) -> int { return a * b; };

  cout << apply(5, 8, mul) << endl;

  return 0;
}
