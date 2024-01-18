#include <iostream>
#include <vector>
using namespace std;


int main() {
  vector<int> vec1{};
  vector<int> vec2{};

  if (vec1 == vec2){
    cout << "equal" << endl;
  } else{
    cout << "not equal" << endl;
  }

  return 0;
}
