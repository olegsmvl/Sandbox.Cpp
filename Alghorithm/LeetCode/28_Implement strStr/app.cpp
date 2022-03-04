#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    int strStr(string haystack, string needle) {
        if (needle.size()==0)
            return 0;
        
        int k = 0;
        int i = 0;
        while (i < haystack.size() && k < needle.size()){
            if (haystack[i] == needle[k]){
                k++;
                i++;
                if (k == needle.size())
                    return i - k;
                
                
            }
            else{
                if (k!=0){
                    i = i - k;
                    k = 0; 
                }
                i++;
            }
            
        }
        return -1;
    }
};

int main()
{
    string haystack = "mississippi";
    string needle = "issip";
    Solution sl;
    auto result = sl.strStr(haystack, needle);

    // for (int x : result)
    // {
    //     cout << x << " ";
    // }
    // cout << endl;
    cout << "result: " << result << endl;
    return 0;
}
