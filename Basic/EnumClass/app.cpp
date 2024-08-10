#include <iostream>
#include <string>
using namespace std;

enum class Items { first, second, third };

string enum_to_string(Items &item) {
  if (item == Items::first)
    return "first";
  if (item == Items::second)
    return "second";
  if (item == Items::third)
    return "third";
  return "unknown";
}

int main(int argc, char const *argv[]) {
  Items i = Items::first;
  cout << enum_to_string(i) << endl;
  cout << static_cast<uint32_t>(Items::third) << endl;

  Items value = static_cast<Items>(2);
  cout << enum_to_string(value) << endl;

  Items value2 = static_cast<Items>(3);
  cout << enum_to_string(value2) << endl;

  return 0;
}
