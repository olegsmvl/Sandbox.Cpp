#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> m_s;
        unordered_map<char, int> m_t;

        for(char& c: s){
            m_s[c] ++;
        }

        for(char& c: t){
            m_t[c] ++;
        }

        if (m_s.size() != m_t.size()){
            return false;
        }

        for (auto& pair: m_s){
            if (m_s[pair.first] != m_t[pair.first] ){
                return false;
            }
        }

        return true;
    }
};

int main()
{
    string s = "anagram";
    string t = "nagaram";
    Solution sl;
    bool result = sl.isAnagram(s, t);

    cout << "result: " << result << endl;
    return 0;
}
