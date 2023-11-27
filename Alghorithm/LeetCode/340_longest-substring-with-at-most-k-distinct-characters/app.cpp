// Given a string s and an integer k, return the length of the longest 
// substring
//  of s that contains at most k distinct characters.

// Example 1:

// Input: s = "eceba", k = 2
// Output: 3
// Explanation: The substring is "ece" with length 3.
// Example 2:

// Input: s = "aa", k = 1
// Output: 2
// Explanation: The substring is "aa" with length 2.

#include <iostream>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstringKDistinct(string s, int k) {
        int len = s.size();

        int j = 0;
        int max_count = 0;

        unordered_map<char, int> m;

        for (int i = 0; i < len ; i++){
            m[s[i]]++;

            while (m.size() > k){
                m[s[j]]--;

                if (m[s[j]] <= 0){
                    m.erase(s[j]);
                }
                
                j++;
            }
            max_count = max(max_count, i-j+1);
        }
        return max_count;
    }
};

int main()
{

    return 0;
}
