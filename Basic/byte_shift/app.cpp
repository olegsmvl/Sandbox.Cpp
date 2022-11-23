#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    // int32_t value = 0x1234;
    // value = value >> 8;
    int8_t value = 0xFA;
    uint16_t result = value << 8;
    cout << hex << "value: " << value << endl;
    cout << hex << "result: " << result << endl;
    return 0;
}
