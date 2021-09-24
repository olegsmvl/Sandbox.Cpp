#include <iostream>
#include <vector>
using namespace std;

void BubbleSort(vector<int> &vec);

int main(int argc, char const *argv[])
{
    vector<int> vec = {4, 5, 267, 3, 1};

    BubbleSort(vec);

    for (auto x : vec)
        cout << x << endl;

    return 0;
}

void BubbleSort(vector<int> &vec)
{

    for (size_t i = 0; i < vec.size() - 1; i++)
    {
        for (size_t index = 0; index < vec.size() - 1 - i; index++)
        {
            if (vec[index + 1] < vec[index])
                swap(vec[index + 1], vec[index]);
        }
    }
}
