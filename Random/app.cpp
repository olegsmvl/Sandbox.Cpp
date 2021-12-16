#include <iostream>
#include <ctime>
#include <random>
using namespace std;

//rand() - это устаревший вариант
//https://docs.microsoft.com/ru-ru/cpp/standard-library/random?view=msvc-170 - нужно использовать что то из этого

void old_method()
{
    srand(time(0));
    for (size_t i = 0; i < 10; i++)
    {
        int val = rand();
        cout << val << endl;
    }

    int last_time = time(0);
}

int main(int argc, char const *argv[])
{
    random_device rd;                      // non-deterministic generator
    mt19937 gen(rd());                     // to seed mersenne twister.
    uniform_int_distribution<> dist(1, 6); // distribute results between 1 and 6 inclusive.

    for (int j = 0; j < 10; j++)
    {
        for (int i = 0; i < 5; ++i)
        {
            cout << dist(gen) << " "; // pass the generator to the distribution.
        }
        cout << endl;
    }
    cout << endl;

    return 0;
}
