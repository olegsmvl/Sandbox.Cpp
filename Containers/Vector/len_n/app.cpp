#include <iostream>
#include <vector>
using namespace std;

void one_dimension() {
  vector<int> vec(8);

  for (int i = 0; i < vec.size(); i++) {
    cout << vec[i] << " ";
  }
  cout << endl;

  vector<int> vec_fives(8, 5);

  for (int i = 0; i < vec_fives.size(); i++) {
    cout << vec_fives[i] << " ";
  }
  cout << endl;
}

void two_dimensions() {
  vector<vector<int>> vec(4, vector<int>(8, 5));

  for (auto row : vec) {
    for (int x : row) {
      cout << x << " ";
    }
    cout << endl;
  }

  cout << endl;
}

int main() {
  // one_dimension();
  two_dimensions();
  return 0;
}
