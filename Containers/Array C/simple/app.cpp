#include <iostream>
using namespace std;

void print(int[], int);

int main(int argc, char const *argv[]) {
  int arr[]{1, 3, 4, 5};
  cout << "size of arr: " << sizeof(arr) << endl;
  print(arr, 4);

  int arr2[4];
  //   arr2 = {1, 2, 3, 4}; - prohibited assigning to an array from an
  //   initializer list
  print(arr2, 8);

  return 0;
}

void print(int arr[], int length) {
  cout << "size of arr: " << sizeof(arr) << endl;

  for (int i = 0; i < length; i++)
    cout << arr[i] << endl;
}
