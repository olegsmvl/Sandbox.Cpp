#include <iostream>
#include <string>
using namespace std;

template <typename T, int amount> class Show {
public:
  void print(T value) {
    for (int i = 0; i < amount; i++) {
      cout << value << endl;
    }
  }

};

int main(int argc, char const *argv[]) {
  Show<int, 5> show;
  show.print(10);

  
  
   return 0; }
