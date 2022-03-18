#include <iostream>
#include <unordered_map>
using namespace std;

int fibonachi(int x, unordered_map<int, int> &cache)
{
    if (x == 0)
        return 0;
    if (x == 1)
        return 1;

    if (cache.contains(x))
    {
        return cache[x];
    }

    int result = fibonachi(x - 1, cache) + fibonachi(x - 2, cache);
    cache[x] = result;

    return result;
}

int main()
{
    cout << "result: ";
    unordered_map<int, int> cache;
    for (int i = 0; i < 40; i++)
        cout << fibonachi(i, cache) << " ";

    cout << endl;
    return 0;
}