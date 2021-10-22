#include <iostream>
#include <string>
#include <tuple>
using namespace std;

int main(int argc, char const *argv[])
{
    auto t = std::make_tuple(1, "str", 3.14);
    auto t0 = std::get<0>(t);
    auto t1 = std::get<1>(t);
    auto t2 = std::get<2>(t);

    cout << t0 << endl;
    cout << t1 << endl;
    cout << t2 << endl;

    return 0;
}
