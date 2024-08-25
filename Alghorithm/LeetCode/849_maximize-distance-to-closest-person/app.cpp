#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
  int maxDistToClosest(vector<int> &seats) {

    int max_dist = 0;
    int len = seats.size();
    int count = 0;
    int dist = 0;

    for (int i = 0; i < len; i++) {
      if (seats[i] == 0) {
        count++;
      }

      if (i == len - 1 && seats[i] == 0) {
        dist = count;
        max_dist = max(max_dist, dist);
        count = 0;
      }

      else if (seats[i] == 1 && i == count) {
        dist = count;
        max_dist = max(max_dist, dist);
        count = 0;
      }

      else if (seats[i] == 1) {
        if (count % 2 == 1) {
          dist = count / 2 + 1;
        } else {
          dist = count / 2;
        }

        max_dist = max(max_dist, dist);
        count = 0;
      }
    }
    return max_dist;
  }
};

int main() {
  vector<int> arr = {1,0,0,0,1,0,1};

  Solution sol;
  auto result = sol.maxDistToClosest(arr);

  cout << result << endl;

  return 0;
}
