#include <iostream>
#include "template.cpp"
using namespace std;

int main(int argc, char const *argv[])
{
    Entity<int , float> en;

    typedef std::integral_constant<int , 2>  two_t;

    int c = two_t::value;
    int b = std::integral_constant<int , 8>::value;

    cout << c << endl;
    cout << b << endl;

    return 0;
}
