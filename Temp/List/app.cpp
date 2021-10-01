#include <iostream>
#include <list>
using namespace std;


int main(int argc, char const *argv[])
{
    auto myList = list<int>{1,3,4,5};

    myList.push_back(100);

    for (auto x : myList){
        cout << x << endl;
    }

    return 0;
}
