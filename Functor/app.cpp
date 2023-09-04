#include <iostream>
using namespace std;

class Func {
public:
  void operator()() { count++; }

  int count = 0;
};


int main()
{
    Func f;
    f();
    f();
    f();

    cout << f.count << endl;

  return 0;
}
