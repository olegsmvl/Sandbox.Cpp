#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

//https://www.youtube.com/watch?v=YkUPiIYKtSc&ab_channel=RomanBrovko

int maxRadix(int *vec, int n)
{
    int max = vec[0];

    for (int i = 0; i < n; i++)
    {
        if (vec[i] > max)
            max = vec[i];
    }

    int place = -1;
    while (max > 0)
    {
        max /= 10;
        place++;
    }

    return place;
}

void radix_pass(int *a, int n, int place)
{
    cout << "place: " << place << "| digits: ";
    int k = 10;
    int *c = new int[k];

    for (int i = 0; i < k; i++)
    {
        c[i] = 0;
    }

    for (int i = 0; i < n; i++)
    {
        int digit = (a[i] / (int)pow(10, place)) % 10;
        cout << digit << " ";
        c[digit]++;
    }
    cout << endl;
    cout << "counters: ";
    for (int i = 0; i < k ; i++){
        cout << c[i] << " ";
    }
    cout << endl;
}

void radix_sort(int *a, int n)
{
    int place_max = maxRadix(a, n);

    for (int place = 0; place <= place_max; place++)
    {
        radix_pass(a, n, place);
    }
}

int main(int argc, char const *argv[])
{
    int v[]{88, 77, 97, 15, 34, 533, 362, 122};

    for (auto x : v)
        cout << x << " ";

    cout << endl;

    radix_sort(v, sizeof(v) / sizeof(int));
    //mergeSort(v, 0, v.size());

    for (auto x : v)
        cout << x << " ";

    cout << endl;

    return 0;
}
