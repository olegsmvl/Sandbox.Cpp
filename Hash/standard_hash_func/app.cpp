#include <functional>
#include <iostream>
#include <vector>
using namespace std;

void hash_vector_bool() {
  std::hash<vector<bool>> hash_function; // standard, declaration hash function
  vector<bool> vec1{false, false, true, false, true};
  vector<bool> vec2{false, false, true, false, false};
  cout << hash_function(vec1) << endl;
  cout << hash_function(vec2) << endl;
}

int main() {
  hash_vector_bool();
  return 0;
}
