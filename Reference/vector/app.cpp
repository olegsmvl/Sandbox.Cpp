#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<int> vec = {1,2,3};

int main(){

    int& a = vec[1];

    a = 8;

    for (auto v : vec){
        cout << v << endl;
    }

    return 0;
}
