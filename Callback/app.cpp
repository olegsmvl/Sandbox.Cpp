#include <iostream>
#include <ctime>

using namespace std;

int main(int argc, char const *argv[])
{
    auto time = clock();

    cout << time << endl;
    int c = 0;
    for (size_t i = 0; i < 1000000000; i++)
    {
        c++;
    }
    time = clock();
    cout << (double)time/CLOCKS_PER_SEC << endl;
    cout << CLOCKS_PER_SEC << endl;
    return 0;
}
