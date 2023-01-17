#include <iostream>
using namespace std;

template<typename T, size_t N>
struct MyArr{
    T value[N];
};

int main(int argc, char const *argv[])
{
    MyArr<float, 3> t;
    // t.value = 5;

    cout <<  t.value[2] << endl;
    return 0;
}
