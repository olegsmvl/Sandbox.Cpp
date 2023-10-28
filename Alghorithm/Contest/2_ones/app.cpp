#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector<int> vec;
  int n;

  cin >> n;

  for (int i; i < n; i++) {
    int num;
    cin >> num;
    vec.push_back(num);
  }

  int i = 0;
  int j = 0;

  int res = 0;

  while (i < n) {
    int cur_result = 0;
    if (vec[i] == 1) {
      while (j < n && vec[j] == 1) {
        cur_result++;
        j++;
      }
      res = max(res, cur_result);
    }
    i++;
    j = i;
  }

  cout << res << endl;

  return 0;
}