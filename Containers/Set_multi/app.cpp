#include <iostream>
#include <set>
using namespace std;

int main(){
    //set<int> s;
    multiset<int> s;
    s.insert(3);
    s.insert(5);
    s.insert(5);
    cout << "size: " << s.size() << endl;

    cout << "contains: ";
    for (int x : s){
        cout << x << " ";
    }
    cout << endl;
    cout << "yes: " << s.count(5) << endl;
    return 0;
}