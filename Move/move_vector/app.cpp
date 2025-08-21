#include <iostream>
#include <vector>
using namespace std;

void print(vector<int> &vec) {
  for (const int &x : vec) {
    cout << x << " ";
  }
  cout << "size=" << vec.size() << " ";
  if (vec.data()) {
    cout << "pointer=" << vec.data() << endl;
  } else {
    cout << "pointer=nullptr" << endl;
  }
}

int main() {
  vector<int> vec{1, 2, 3, 4, 5};
  print(vec);

  vector<int> destination = std::move(vec);

  cout << "===============" << endl;

  print(vec);
  print(destination);

  return 0;
}
