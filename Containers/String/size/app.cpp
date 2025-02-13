#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int main() {
  string str;

  for (char i = 0; i < 64; i++) {
    str.push_back(i);
  }

  cout << sizeof(str) << endl;
  cout << str.size() << endl;
  cout << str.capacity() << endl;
  cout << static_cast<const void *>(str.c_str()) << endl;

  for (char i = 0; i < 64; i++) {
    str.push_back(i);
  }

  cout << sizeof(str) << endl;
  cout << str.size() << endl;
  cout << str.capacity() << endl;
  cout << static_cast<const void *>(str.c_str()) << endl;

  return 0;
}
