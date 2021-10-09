#include <iostream>
#include <vector>
#include <algorithm>

bool isTenty(int num){
  return (num % 10) == 0;
}

int main()
{
  int factor = 12;

  std::vector<int> vec{13, 24, 40, 54, 32};
  auto iter = std::find_if(vec.begin(), vec.end(), [factor](int num){return num % factor == 0; } );

  std::cout << *iter << std::endl;
  return 0;
}
