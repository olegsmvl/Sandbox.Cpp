#include <array>
#include <iostream>
using namespace std;

void print(int[], int);

int main(int argc, char const *argv[]) {

  // init with 5 garbige values
  std::array<int, 5> arr_uninit;

  // init with 5 zeros
  std::array<int, 5> arr{};

  for (auto &num : arr) {
    cout << num << " ";
  }
  cout << endl;

  return 0;
}
