#include <iostream>
#include <string>
#include <unordered_set>

using namespace std;

int main() {

  string a;
  string b;

  cin >> a;
  cin >> b;

  int len_a = a.size();
  int len_b = b.size();

  if (len_a == 0 || len_b == 0) {
    cout << 0 << endl;
    return 0;
  }

  unordered_set<char> symbs;

  for (char sm : a) {
    symbs.insert(sm);
  }

  int result = 0;

  for (char sm : symbs) {
    for (int j = 0; j < len_b; j++) {
      if (sm == b[j]) {
        result++;
      }
    }
  }

  cout << result << endl;
  return 0;
}