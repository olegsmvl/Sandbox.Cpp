#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
  constexpr uint8_t x_max = 4;
  constexpr uint8_t y_max = 3;

  uint8_t arr[y_max][x_max];
  cout << "size of arr: " << sizeof(arr) << endl;

  uint8_t num = 1;

  for (int y = 0; y < 3; y++) {
    for (int x = 0; x < 4; x++) {
      arr[y][x] = num;
      num++;
    }
  }

  uint8_t *p = &arr[0][0];

  for (int i = 0; i < 12; i++) {
    cout << static_cast<uint32_t>(*p) << endl;
    p++;
  }

  cout << "=======" << endl;

  uint8_t *row = arr[1];
  cout << "size: " << sizeof(row) << endl;

  for (int x = 0; x < x_max; x++) {
    cout << static_cast<uint32_t>(row[x]) << " ";
  }
  cout << endl;

  cout << static_cast<uint32_t>(arr[1][2]) << endl;

  return 0;
}
