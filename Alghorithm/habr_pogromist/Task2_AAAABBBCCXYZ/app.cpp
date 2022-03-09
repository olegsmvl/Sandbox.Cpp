#include <iostream>
#include <string>
using namespace std;

class Solution
{
public:
    string solve(string input)
    {
        string result;
        if (input.length() == 0)
        {
            throw string("error");
        }

        int counter = 1;
        char letter = input[0];

        if (input.length() == 1)
            return letter + to_string(counter);

        int i = 0;

        while (i < input.length() - 1)
        {
            if (letter == input[i + 1])
            {
                counter++;
            }
            else
            {
                if (counter > 1)
                    result += letter + to_string(counter);
                else
                    result += letter;
                    
                counter = 1;
                letter = input[i + 1];
            }

            i++;
        }

        if (counter > 1)
            result += letter + to_string(counter);
        else
            result += letter;

        return result;
    }
};

int main()
{
    string input = "AAAABBBCCXYZDDDDEEEFFFAAAAAABBBBBBBBBBBBBBBBBBBBBBBBBBBB";
    Solution sl;
    try
    {
        auto result = sl.solve(input);
        cout << result << endl;
    }
    catch (string e)
    {
        cout << e << endl;
    }
    return 0;
}