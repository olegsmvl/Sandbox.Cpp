// "OAuth:foo" => "OAuth:<censored>"
// "OAuth:  foo bar OAuth:  foo" => "OAuth:  foo bar OAuth:  <censored>" 

#include <iostream>
#include <vector>
using namespace std;

string replace(string str) {
  string result;

  int len = str.size();

  int i = 0;

  while (i < len){
    if
     (str[i] = 'O'){

    }
    
    i++;
  }

  return result;
}

int main() {
  string str = "OAuth:foo";

  auto res = replace(str);

  return 0;
}
