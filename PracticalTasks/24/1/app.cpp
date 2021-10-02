#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int arr[] = {1, 6, 9, 18, 27, 36, 51, 68, 82, 101};
    int even[sizeof(arr) / sizeof(int)];

    for (int &x : even)
        x = 0;

    for (int x : even)
        cout << x << ", ";

    cout << endl;

    int index = 0;
    for (int x : arr)
        if (x % 2 == 0)
            even[index++] = x;

    for (int x : arr)
        cout << x << ", ";

    cout << endl;

    for (int x : even)
        cout << x << ", ";

    return 0;
}
