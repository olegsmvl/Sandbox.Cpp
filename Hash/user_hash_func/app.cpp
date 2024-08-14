#include <functional>
#include <iostream>
#include <vector>
using namespace std;

struct PointHash
{
  size_t operator()(const vector<int>& p) const{
    std::hash<string> hash_func;
    string str = to_string(p[0]*1000 +1234+ p[1]);
    return hash_func(str);
  }
};


int main() {
  PointHash hash_func;
  vector<int> p1{1,2};
  vector<int> p2{1,2};
  vector<int> p3{4,5};

  cout << hash_func(p1) << endl;
  cout << hash_func(p2) << endl;
  cout << hash_func(p3) << endl;

  return 0;
}
