#include <iostream>
#include <list>
using namespace std;

void iterator_test();
void print(list<int> l);

int main(){
    //iterator_test();
    list<int> l = {1,2,3,4};

    auto i = l.begin();

    l.insert(++i, 100);

    print(l);

    return 0;
}

void print(list<int> l){
        for (int x : l){
        cout << x << endl;
    }
}

void iterator_test(){
    list<int> l = {1,2,3,4};

    auto p_begin = l.begin();
    auto p_end = l.end();

    cout << *(++p_begin) << endl;
    cout << *p_end << endl;

    *p_begin = 100;

    cout << *p_begin << endl;

    for (int x : l){
        cout << x << endl;
    }
}