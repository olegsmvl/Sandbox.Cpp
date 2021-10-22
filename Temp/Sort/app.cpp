#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> v{3, 4, 2, 1, 6, 7, 3};

    for (int x : v)
        cout << x << " ";

    cout << endl;

    for (int j = 1; j < v.size(); j++)
        for (int i = 0; i < v.size() - j; i++)
            if (v[i] > v[i + 1])
                swap(v[i], v[i + 1]);

    for (int x : v)
        cout << x << " ";

    return 0;
}
