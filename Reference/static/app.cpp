#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
  int a = 5;

  {
    int &b = a;
    b += 2;
  }

  cout << a << endl;
  return 0;
}
