#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> numbers;

    while (true)
    {
        int num = 0;

        cin >> num;

        if (num < 0)
            cout << "num mast be positive" << endl;
        else
            numbers.push_back(num);

        cout << "numbers: ";
        for (auto x : numbers)
            cout << x << " ";

        cout << endl;

        cout << "min element: " << *min_element(numbers.begin(), numbers.end()) << endl;
    }
    return 0;
}
