#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<int> res;

  if (n == 0) {
    cout << 0 << endl;
    return 0;
  }

  int prev = 0;
  cin >> prev;

  if (n == 1) {
    cout << prev << endl;
    return 0;
  }

  int i = 0;

  while (i < n - 1) {

    int cur = prev;
    while ((i < n - 1) && (cur == prev)) {
      cin >> cur;
      i++;
    }
    res.push_back(prev);

    if (i == n - 1 && cur != prev) {
      res.push_back(cur);
    }

    prev = cur;


  }

  cout << "result:" << endl;

  for (int num : res) {
    cout << num << endl;
  }

  return 0;
}