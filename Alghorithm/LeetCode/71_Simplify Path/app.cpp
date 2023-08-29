#include <iostream>
#include <stack>
using namespace std;

class Solution {
public:
  string simplifyPath(string path) {
    int l = 0;
    int r = 0;

    int len = path.size();

    cout << "len = " << len << endl;

    while (r < len && path[r] == '/') {
      l++;
      r++;
    }

    stack<string> st;

    while (r < len && l < len) {

      while (r < len && path[r] != '/') {
        r++;
      }

      string word = path.substr(l, r - l);

      cout << "word = " << word << endl;

      if (word.size() > 0) {
        if (word == ".") {

        } else if (word == ".." && !st.empty()) {
          st.pop();
        } else if (word == ".." && st.empty()) {

        } else {
          st.push(word);
        }
      }

      l = r;

      while (r < len && path[r] == '/') {
        l++;
        r++;
      }
    }

    string result = "";

    while (!st.empty()) {
      result = st.top() + "/" + result;
      st.pop();
    }

    result = "/" + result;

    if (result.size() > 1) {
      result.pop_back();
    }

    return result;
  }
};

int main() {
  //   string str = "/a/./b/../../c/";
  // string str = "/a/../";
  string str = "/home//foo/";
  Solution sol;

  cout << str << endl;
  string result = sol.simplifyPath(str);
  cout << result << endl;

  return 0;
}
