#include <iostream>
#include <string>
using namespace std;

void print(string &str) {
  for (const char &x : str) {
    cout << x << " ";
  }
  cout << "size=" << str.size() << " ";
  cout << "capacity=" << str.capacity() << " ";
  if (str.data()) {
    cout << "pointer=" << static_cast<const void *>(str.data()) << endl;

  } else {
    cout << "pointer=nullptr" << endl;
  }
}

int main() {
  string str = "adfaffdafdaffaddddd";
  print(str);

  string destination = std::move(str);

  cout << "===============" << endl;

  print(str);
  print(destination);

  return 0;
}
