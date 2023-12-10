#include <iostream>
using namespace std;


int main() {
  int n1 = -1000;
  int n2 = -5;

  string s1 = to_string(n1);
  string s2 = to_string(n2);
  string s = s1 + s2;

  cout << s1 << endl;
  cout << s2 << endl;
  cout << s << endl;
  return 0;
}
