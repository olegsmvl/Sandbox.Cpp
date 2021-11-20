#include <iostream>
#include <vector>

using namespace std;

void mergeSort(vector<int> &a, size_t start, size_t end)
{
    if (end - start < 2)
        return;

    if (end - start == 2)
    {
        if (a[start] > a[start + 1])
            swap(a[start], a[start + 1]);

        return;
    }

    mergeSort(a, start, (start + end) / 2);
    mergeSort(a, (start + end) / 2, end);

    vector<int> b;
    size_t b1 = start;
    size_t e1 = (start + end) / 2;
    size_t b2 = e1;

    while (b.size() < end - start)
    {
        if (b1 >= e1 || (b2 < end && a[b2] <= a[b1]))
        {
            b.push_back(a[b2]);
            ++b2;
        }
        else
        {
            b.push_back(a[b1]);
            ++b1;
        }
    }

    for (size_t i = start; i < end; i++)
    {
        a[i] = b[i - start];
    }
}

int main(int argc, char const *argv[])
{
    vector<int> v{3, 5, 2, 6, 8, 1};

    for (auto x : v)
        cout << x << " ";

    cout << endl;

    mergeSort(v, 0, v.size());

    for (auto x : v)
        cout << x << " ";

    cout << endl;

    return 0;
}
