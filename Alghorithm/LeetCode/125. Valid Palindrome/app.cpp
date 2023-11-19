#include <iostream>
using namespace std;

class Solution {
public:
  bool isPalindrome(string s) {
    if (s.size() == 0) {
      return true;
    }

    int i = 0;
    int j = s.size() - 1;

    while (i < j) {
      while (!isalnum(s[i]) && i < j) {
        i++;
      }

      while (!isalnum(s[j]) && i < j) {
        j--;
      }

      if (i < j && tolower(s[i]) != tolower(s[j])) {
        return false;
      }
      i++;
      j--;
    }
    return true;
  }
};

int main() {
  // Example 1:

  // Input: s = "A man, a plan, a canal: Panama"
  // Output: true
  // Explanation: "amanaplanacanalpanama" is a palindrome.
  // Example 2:

  // Input: s = "race a car"
  // Output: false
  // Explanation: "raceacar" is not a palindrome.
  // Example 3:

  // Input: s = " "
  // Output: true
  // Explanation: s is an empty string "" after removing non-alphanumeric
  // characters. Since an empty string reads the same forward and backward, it
  // is a palindrome.

  return 0;
}
