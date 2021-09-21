#include <iostream>
#include <list>
#include <limits>
using namespace std;

int main(int argc, char const *argv[])
{
    auto container = new list<int> {1,2,3,4,5,6,8};

    auto iter = container->begin();

    iter++;
    container->insert(iter, 100);

    iter++;
    iter++;

    container->erase(iter);

    for (auto x : *container)
        cout << x << endl;

    cout << container->size() << endl;

    cout << numeric_limits<long>::max() << endl;
    cout << numeric_limits<long>::min() << endl;

    return 0;
}
