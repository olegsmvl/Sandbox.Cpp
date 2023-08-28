#include <iostream>
#include <string>
#include <vector>
using namespace std;

class MyException : public std::runtime_error {
public:
  MyException(string msg) : std::runtime_error("its my except: " + msg) {}
};

int dev(int a, int b) {
  if (b == 0) {
    throw std::runtime_error("devision by zero");
  }

  return a / b;
}

int main() {
  vector<int> vec;
  int result = 0;
  vec.push_back(10);
  vec.push_back(15);
  try {
    throw MyException("test exc");
    result = dev(5, 0);
    cout << vec.at(10) << endl;
  } catch (const std::out_of_range &e) {
    cout << "out of range" << endl;
    cerr << e.what() << endl;
  } catch (const exception &e) {
    cout << "general" << endl;
    cerr << e.what() << endl;
  }

  cout << result << endl;
  return 0;
}
