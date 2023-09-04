#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> vec{1, 2, 3, 4, 5};

  for (int x : vec) {
    cout << x << " ";
  }
  cout << endl;

  cout << vec.size() << endl;

  vector<int> destination(std::move(vec));

  cout << "===============" << endl;
  cout << vec.size() << endl;
  cout << destination.size() << endl;

  for (const int& x : vec) {
    cout << x << " ";
  }
  cout << endl;

  for (const int& y : destination) {
    cout << y << " ";
  }
  cout << endl;

  return 0;
}
