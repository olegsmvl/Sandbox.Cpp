#include <array>
#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {

  constexpr int size = 5;
  array<int, size> arr;

  for (int i = 0; i < size; i++) {
    arr[i] = i;
    std::cout << arr[i] << " ";
  }

  return 0;
}
