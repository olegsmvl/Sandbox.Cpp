#include <iostream>
#include <map>
using namespace std;

int main() {
  map<int, string> m{{10, "first"}, {20, "second"}};
  auto result = m.insert({30, "therd"});
  cout << "result: " << result.second << endl;
  auto result_2 = m.insert({30, "therd_next"});
  cout << "result2: " << result_2.second << endl;
  auto result_3 = m.insert_or_assign(30, "therd_next_2");
  cout << "result3: " << result_3.second << endl;
  auto val = m.lower_bound(30);
  cout << val->second << endl;
  return 0;
}
