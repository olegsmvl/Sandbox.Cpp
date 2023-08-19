#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> vec{40,2,10,3,18,15};
    sort(vec.begin(), vec.end());

    for (int x: vec){
        cout << x << ", ";
    }

    cout << endl;
    
    return 0;
}
