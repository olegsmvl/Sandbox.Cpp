#include <iostream>
#include <vector>
using namespace std;

void SelectionSort(vector<int> &vec);

int main(int argc, char const *argv[])
{
    vector<int> vec = {4, 5, 267, 1, 3};

    SelectionSort(vec);

    for (auto x : vec)
        cout << x << endl;

    return 0;
}

void SelectionSort(vector<int> &vec)
{

    for (int pos = 0; pos < vec.size(); pos++)
    {

        int min = vec[pos];
        int min_index = pos;

        for (size_t i = pos; i < vec.size(); i++)
        {
            if (vec[i] < min)
            {
                min = vec[i];
                min_index = i;
            }
        }

        swap(vec[pos], vec[min_index]);
    }
}
