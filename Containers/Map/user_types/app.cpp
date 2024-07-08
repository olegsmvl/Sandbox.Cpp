#include <iostream>
#include <map>
using namespace std;

struct Value {
//   Value() { cout << "ctor default" << endl; }
  Value(int id_, string str_): id(id_), str(str_) { cout << "ctor param" << endl; }
  int id = 1;
  string str = "default";
};

int main() {
  //   map<int, Value> m{{10, {1111, "first"} }, {20,{2222,  "second"}}};
  map<int, Value> m;
//   m[40] = {2222, "therd"};
//   Value v = {2222, "therd"};
  m.insert({30, {2222, "therd"}});
  auto val = m.lower_bound(30);
  cout << val->second.id << endl;
  cout << val->second.str << endl;
  return 0;
}
