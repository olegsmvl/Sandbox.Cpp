#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    uint32_t val = 0x8000;
    uint32_t invert = ~val + 1;
    cout << std::hex << val << endl;
    cout << std::hex << invert << endl;
    return 0;
}
