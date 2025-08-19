#include <iostream>
using namespace std;

struct Item {
  Item(int id_arg, int value_arg) : id(id_arg), value(value_arg) {
    cout << "ctor " << id << endl;
  }

  Item(const Item &other) {
    id = other.id;
    value = other.value;
    cout << "copy ctor " << id << endl;
  }

  Item(Item &&other) {
    id = other.id;
    value = other.value;
    cout << "move ctor " << id << endl;
  }

  ~Item() { cout << "dtor " << id << endl; }

  Item &operator=(const Item &other) = default;
  Item &operator=(Item &&other) = default;

  int id = 0;
  int value = 0;
};

template <typename T> void foo(T &&item) { T i = std::forward<T>(item); }

int main(int argc, char const *argv[]) {
  foo(Item(1, 1));

  // Item x(2, 3);
  // foo(x);

  return 0;
}
