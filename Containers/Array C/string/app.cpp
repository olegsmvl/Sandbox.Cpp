#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
  const uint8_t str[] = "hello";

  cout << sizeof(str) << endl;

  for (auto c : str) {
    cout << static_cast<uint32_t>(c) << endl;
  }

  return 0;
}
