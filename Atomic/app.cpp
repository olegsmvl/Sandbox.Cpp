#include <iostream>
#include <atomic>
using namespace std;

int main(int argc, char const *argv[])
{
    atomic<int> var(0);
    var.store(10);
    auto oldvalue = var.exchange(50);

    cout << oldvalue << endl;
    cout << var.load() << endl;

    return 0;
}
