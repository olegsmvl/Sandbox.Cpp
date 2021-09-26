#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solveArray();
void solveVector();

int main(int argc, char const *argv[])
{
    //solveArray();
    solveVector();
    return 0;
}

void solveVector()
{
    vector<int> vec = {1, 3, 2, 4, 2, 3, 5, 1, 5, 8 };
    sort(vec.begin(), vec.end());

    for (auto x : vec)
        cout << x << endl;

    cout << "===============" << endl;

    auto last = unique(vec.begin(), vec.end());

    for(auto x : vec)
        cout << x << endl;

    vec.erase(last, vec.end());

    cout << "===============" << endl;

    for(auto x : vec)
        cout << x << endl;

    cout << "===============" << endl;

    cout << "count unique: " << vec.size() << endl;
}

void solveArray()
{
    int arr[] = {1, 3, 2, 4, 2, 3, 5};

    const int size = sizeof(arr) / sizeof(int);

    for (int i = 0; i < size; i++)
    {
        bool unique = true;
        for (int j = 0; j < size; j++)
        {
            if (i == j)
                continue;

            if (arr[i] == arr[j])
            {
                unique = false;
                break;
            }
        }
        if (unique)
            cout << arr[i] << endl;
    }
}
