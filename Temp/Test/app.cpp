#include <iostream>
#include <vector>
using namespace std;


int main(int argc, char const *argv[])
{
    auto vec = vector<int>{1,2,3,4};
    vec.push_back(200);

    for(auto x : vec)
        cout << x << endl;

    return 0;
}
