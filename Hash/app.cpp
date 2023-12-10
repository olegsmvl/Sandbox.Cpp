#include <functional>
#include <iostream>
#include <vector>
using namespace std;

void hash_vector_bool() {
  std::hash<vector<bool>> h; // standard
  vector<bool> vec1{false, false, true, false, true};
  vector<bool> vec2{false, false, true, false, false};
  cout << h(vec1) << endl;
  cout << h(vec2) << endl;
}

int main() {
  hash_vector_bool();
  return 0;
}
