#include <iostream>
#include <ctime>
using namespace std;

void wait_ms(int msec);

int main(int argc, char const *argv[])
{
    int time_wait_ms = 3000;

    cout << CLOCKS_PER_SEC << endl;

    cout << "start" << endl;

    auto start = clock();

    wait_ms(time_wait_ms);

    cout << "end" << endl;

    return 0;
}

void wait_ms(int msec)
{
    auto start = clock();
    auto end = start + msec;
    while (static_cast<long> (clock()) < end)
    {
        cout << clock() << endl;
    }
}
