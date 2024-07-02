#include <algorithm>
#include <iostream>
#include <vector>
using std::cout;
using std::endl;
using std::vector;
using namespace std;

void find_func(vector<int> &vec);
void remove_last(vector<int> &vec);
void get_pointer(vector<int> &vec);

int main() {
  vector<int> numbers = {1, 3, 5, 8};
  //	cout << numbers[0] << endl;

  for (int n : numbers)
    cout << n << endl;

  numbers.push_back(1000);

  cout << numbers.front() << endl;
  cout << numbers.back() << endl;
  cout << "-----------------" << endl;
  find_func(numbers);

  remove_last(numbers);

  get_pointer(numbers);

  return 0;
}

void get_pointer(vector<int> &vec) {
  cout << "---get_pointer-----------------" << endl;
  cout << "p: " << vec.data() << endl;
  int* p = vec.data();
  cout << "p value 1: " << *p << endl;
  cout << "p value 2: " << *(++p) << endl;
  cout << "p value 3: " << p[2] << endl;
}

void remove_last(vector<int> &vec) {
  cout << "---full-----------------" << endl;

  for (int n : vec) {
    cout << n << endl;
  }

  cout << "---remove last-----------------" << endl;

  vec.pop_back();

  for (int n : vec) {
    cout << n << endl;
  }
}

void find_func(vector<int> &vec) {
  cout << "begin" << endl;
  int val = 5;

  auto pos = find(vec.begin(), vec.end(), val);

  cout << *pos << endl;
  cout << "end" << endl;
}
