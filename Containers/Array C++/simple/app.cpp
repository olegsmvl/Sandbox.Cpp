#include <array>
#include <iostream>
using namespace std;

template <typename T, size_t N>
void print(array<T, N>& arr){
  for (auto it = arr.begin(); it < arr.end(); it++) {
    cout << *it << " ";
  }
  cout << endl;
}

int main(int argc, char const *argv[]) {

  // init with 5 garbige values
  std::array<int, 5> arr_uninit;

  // init with 5 zeros
  std::array<int, 5> arr{};

  for (auto &num : arr) {
    cout << num << " ";
  }
  cout << endl;

  arr = {1, 2, 3, 4, 5};

  for (size_t i = 0; i < 4; ++i) {
    cout << arr[i] << endl;
    cout << arr.at(i) << endl;
  }

  cout << "================" << endl;

  auto it = arr.begin();

  for (int i = 0; i < arr.size(); i++) {
    cout << *it++ << " ";
  }
  cout << endl;

  it = arr.begin();

  for (int i = 0; i < arr.size(); i++) {
    *it = i * 2;
    it++;
  }

  print(arr);


  return 0;
}
