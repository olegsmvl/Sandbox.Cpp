#include <iostream>
#include <algorithm>
#include <iterator>
#include <vector>
using namespace std;

int main(){
    vector<int> s1 = {1,4,5};
    vector<int> s2 = {1,3,5};
    vector<int> result;

    //union

    set_union(
        s1.begin(), s1.end(), 
        s2.begin(), s2.end(), 
        back_inserter(result) );

    for (int x : result)
        cout << x << " ";

    cout << endl;

    result.clear();

    //intersection

    set_intersection(
        s1.begin(), s1.end(), 
        s2.begin(), s2.end(), 
        back_inserter(result) );

    for (int x : result)
        cout << x << " ";

    cout << endl;

    return 0;
}