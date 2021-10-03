#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    uint8_t num = 0;

    auto p = &num;

    cout << (size_t)p << endl;
    p++;
    cout << (size_t)p << endl;

    return 0;
}
