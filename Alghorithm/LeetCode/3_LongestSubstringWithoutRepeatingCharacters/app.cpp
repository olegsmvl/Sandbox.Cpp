#include <iostream>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l = 0;
        int len = s.size();
        
        unordered_map<char, int> dict;
        
        int ans = 0;
        
        for (int r = 0; r < len; r++){
            dict[s[r]]++;
            
            while(!is_unique(dict)){
                dict[s[l]]--;
                l++;
            }
            
            ans = max(ans, r -l +1);
        }
        return ans;
        
    }
    
    bool is_unique( unordered_map<char, int>& dict){
        for (auto pair: dict){
            if(pair.second > 1){
                return false;
            } 
        }
        return true;
    }
};

int main()
{
    string s1 = "abcabcbb";
    string s2 = "bbbbb";
    string s3 = "pwwkew";
    Solution sol;
    int result = sol.lengthOfLongestSubstring(s3);
    cout << result << endl;
    return 0;
}
