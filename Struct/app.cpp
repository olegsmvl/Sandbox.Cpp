#include <iostream>
#include <string>
using namespace std;

struct User
{
    int id;
    short Age;
    char lit;
    // string Name;
};


int main(int argc, char const *argv[])
{
    //User u{1, "Ann"};
    User u{1, 40, 'A'};
    cout << sizeof(u);

    return 0;
}
