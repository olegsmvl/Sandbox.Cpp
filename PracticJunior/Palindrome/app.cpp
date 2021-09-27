#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

bool IsPalindrome(string word);

int main(int argc, char const *argv[])
{
    while (true)
    {
        string word = "";
        cout << "enter word :";
        cin >> word;

        if (word == "q")
            break;

        if (IsPalindrome(word))
            cout << word << " is palindrome" << endl;
        else
            cout << word << " is not palindrome" << endl;
    }
    return 0;
}

bool IsPalindrome(string word)
{
    auto reverse_word = word;
    reverse(reverse_word.begin(), reverse_word.end());
    cout << reverse_word << endl;

    if (reverse_word == word)
        return true;

    return false;
}
