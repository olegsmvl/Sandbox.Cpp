// Перенести нули в конец массива, сохранив порядок остальных элементов
// [1,0,8,9] → [1,8,9,0]

#include <iostream>
#include <vector>
using namespace std;

void move_zero(vector<int> &vec) {
  int len = vec.size();
  int count = 0;
  int j = 0;

  for (int i = 0; i < len; i++) {
    while (i < len && vec[i] == 0) {
      count++;
      i++;
    }
    vec[j] = vec[i];
    j++;
  }

  if (count == 0) {
    return;
  }

  for (int i = len - count; i < len; i++) {
    vec[i] = 0;
  }
}

int main() {
  vector<int> vec{2, 0, 0, 0, 0, 0, 1};
  move_zero(vec);

  for (const int &x : vec) {
    cout << x << " ";
  }

  cout << endl;

  return 0;
}
