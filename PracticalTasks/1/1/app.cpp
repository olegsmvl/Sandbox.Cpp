#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool isIcecreamSandwich(string str);

int main(int argc, char const *argv[])
{
    vector<string> testCases;
    testCases.push_back("AADDDAA");
    testCases.push_back("3&&3");
    testCases.push_back("yyyyymmmmmmmmyyyyy");
    testCases.push_back("hhhhhhhhmhhhhhhhh");
    testCases.push_back("BBBBB");
    testCases.push_back("AAACCCAA");
    testCases.push_back("AACDCAA");
    testCases.push_back("A");

    for (auto str : testCases)
        cout << str << " -> " << isIcecreamSandwich(str) << endl;;

    return 0;
}

bool isIcecreamSandwich(string str)
{
    std::vector<string> words;

    int begin = 0;
    int end = 0;

    auto iter = str.begin();

    string word = "";
    char previous = '\0';

    for (auto x : str)
    {
        if (previous != x)
        {
            if (!word.empty())
                words.push_back(word);
            word = "";
        }
        word += x;
        previous = x;
    }

    if (!word.empty())
        words.push_back(word);

    if (words.size() == 3 && words[0] == words[2])
        return true;

    return false;
}
