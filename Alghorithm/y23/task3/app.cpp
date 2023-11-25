// Дан массив из нулей и единиц. Нужно определить,
// какой максимальный по длине подинтервал единиц можно получить,
// удалив ровно один элемент массива.
// [1, 1, 0]

#include <iostream>
#include <vector>
using namespace std;

int max_lenght(vector<int> &vec) {
  int count = 0;
  int len = vec.size();
  int j = 0;
  int max_count = 0;

  for (int i = 0; i < len; i++) {
    if (vec[i] == 0) {
      count++;
    }

    while (count > 1) {
      if (vec[j] == 0) {
        count--;
      }
      j++;
    }

    int curr_length = i - j;

    max_count = max(max_count, curr_length);
  }
  return max_count;
}

int main() {
  vector<int> vec{1, 1, 0, 1, 1, 0, 0};

  int result = max_lenght(vec);

  cout << result << endl;

  return 0;
}
