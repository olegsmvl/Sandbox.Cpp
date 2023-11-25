// Дан отсортированный массив чисел а, индекс элемента index и целое число k.
// Необходимо вернуть в любом порядке k чисел из массива, которые являются
// ближайшими по значению к элементу а[index].
// find_k_closest(a={2,3,5,7,11},  index=3, k=2) -> {5,7}
// find_k_closest(a={4,12,15,15,24}, index=1, k=3) -> {12,15,15}
// find_k_closest(a={2,3,5,7,11}, index=2, k=2) -> {5,7} или {3,5}

#include <iostream>
#include <vector>
using namespace std;

vector<int> find(vector<int> &a, int index, int k) {
  int num = a[index];

  int i = index - 1;
  int j = index;

  vector<int> result;

  while (result.size() < k) {
    if (num - a[i] <= a[j] - num) {
      result.push_back(a[i]);
      i--;
    } else {
      result.push_back(a[j]);
      j++;
    }
  }
  return result;
}

int main() {
  // vector<int> a{2, 3, 5, 7, 11};
  // int index = 3, k = 2;

  vector<int> a{2, 3, 5, 7, 11};
  int index = 2, k = 2;

  auto result = find(a, index, k);

  for (int x : result) {
    cout << x << " ";
  }
  cout << endl;

  return 0;
}
