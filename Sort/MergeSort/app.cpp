#include <iostream>
#include <vector>

using namespace std;

void mergeSort(vector<int> &a, size_t start, size_t end)
{
    cout << " start: " << start << " end: " << end << endl;

    if (end - start < 2)
        return;

    if (end - start == 2)
    {
        if (a[start] > a[start + 1])
            swap(a[start], a[start + 1]);

        for (int x: a)
            cout << x << " "; 

        cout << endl;

        return;
    }

    mergeSort(a, start, (start + end) / 2);
    mergeSort(a, (start + end) / 2, end);

    cout << "merge " << start << " " << end << endl;

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
    vector<int> v{8, 7, 6, 5, 4, 3, 2, 1};

    for (auto x : v)
        cout << x << " ";

    cout << endl;

    mergeSort(v, 0, v.size());

    for (auto x : v)
        cout << x << " ";

    cout << endl;

    return 0;
}
