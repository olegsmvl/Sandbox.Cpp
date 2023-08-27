#include <iostream>
using namespace std;

class Solution {
public:
  string simplifyPath(string path) {
    string ans = "";
    int dot_count = 0;
    bool dots_only = true;

    for (char c : path) {

      if (c != '.' && c != '/') {
        dots_only = false;
      }

      if (c == '.') {
        dot_count++;
        ans.push_back(c);
        continue;
      }

      if (c != '/') {
        dot_count = 0;
      }

      if (c == '/' && dot_count > 0 && dots_only) {
        dots_only = true;
        if (dot_count > 2) {
          ans.push_back('/');
          dot_count = 0;
          continue;
        }

        if (dot_count == 2) {
          ans.pop_back();
          ans.pop_back();

          if (ans.size() > 1) {
            ans.pop_back();
          }

          while (last(ans) != '/') {
            ans.pop_back();
          }
          dot_count = 0;
          continue;
        }

        if (dot_count == 1) {
          ans.pop_back();
          dot_count = 0;
          continue;
        }
      }

      if (c == '/' && last(ans) == '/') {
        continue;
      }

      ans.push_back(c);
    }


    if (dot_count > 0 && dots_only) {
      if (dot_count > 2) {
        ans.push_back('/');
        dot_count = 0;
      }

      if (dot_count == 2) {
        ans.pop_back();
        ans.pop_back();

        if (ans.size() > 1) {
          ans.pop_back();
        }

        while (last(ans) != '/') {
          ans.pop_back();
        }
        dot_count = 0;
      }

      if (dot_count == 1) {
        ans.pop_back();
        dot_count = 0;
      }
    }

    if (ans.size() > 1 && last(ans) == '/') {
      ans.pop_back();
    }

    return ans;
  }

  char last(string &str) {

    if (!str.empty()) {
      return str.back();
    }

    return '&';
  }
};

int main() {
//   string str = "/a/./b/../../c/";
  string str = "/a/../";
  Solution sol;

  cout << str << endl;
  string result = sol.simplifyPath(str);
  cout << result << endl;

  return 0;
}
