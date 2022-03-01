#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

//https://www.youtube.com/watch?v=YkUPiIYKtSc&ab_channel=RomanBrovko
//http://algolist.ru/sort/radix_sort.php

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
    int *counters = new int[k];
    auto output = new int[n];

    for (int i = 0; i < k; i++)
    {
        counters[i] = 0;
    }

    for (int i = 0; i < n; i++)
    {
        int digit = (a[i] / (int)pow(10, place)) % 10;
        cout << digit << " ";
        counters[digit]++;
    }
    cout << endl;
    cout << "counters: ";
    for (int i = 0; i < k ; i++){
        cout << counters[i] << " ";
    }
    cout << endl;
    //cumulative counters
    for (int i = 1; i < k; i++){
        counters[i] += counters[i - 1];
    }
    
    cout << "cumulative counters ";
    for (int i = 0; i < k; i++){
        cout << counters[i] << " ";
    }

    cout << endl;

    for (int i=0; i < n; i++){
        int digit = (a[i] / (int)pow(10, place)) % 10;
        output[counters[digit]] = a[i];
        counters[digit]++;
    }
    cout << "output: ";
    for (int i = 0 ; i < n; i++){
        cout << *(output + i) << " ";
    }

    swap(a, output);

    delete counters;
    delete output;
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
