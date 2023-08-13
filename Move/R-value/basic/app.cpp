#include <iostream>
using namespace std;

typedef int chislo;

int main(int argc, char const *argv[]) {
  int x = 10;
  const int &refx = x;

  x = 20;

  // refx = 20;
  cout << refx << endl;

  // int z = 100;
  // int && refz = z;

  int &&refy = 50 + 5;
  refy += 5;
  cout << refy << endl;

  chislo d = 150;

  cout << d << endl;

  return 0;
}
