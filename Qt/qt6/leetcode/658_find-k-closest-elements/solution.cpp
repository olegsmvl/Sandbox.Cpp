#include <vector>
#include <math.h>

using namespace std;

class Solution {
public:
  vector<int> findClosestElements(vector<int> &arr, int k, int x) {
    vector<int> result;

    int left = 0;
    int right = arr.size()-1;

    while (left < right) {
      int mid = (left + right) / 2;
      if ( x <= arr[mid]) {
        right = mid;
      } else {
        left = mid + 1;
      }
    }

    left--;
    right = left + 1;

    while (right - left + 1 < k)
    {
        if (left = -1){
            right++;
            continue;
        }
        if (right == arr.size() || (std::abs(x-arr[left]) <= std::abs(x-arr[right]) )){
            left--;
        }else{
            right++;
        }
    }

    for(int i = left+1; i< right; i++){
        result.push_back(arr[i]);
    }
    

    return result;
  }
};