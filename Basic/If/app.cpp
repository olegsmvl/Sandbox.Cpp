#include <iostream>
using namespace std;

bool condition1(int num){
    cout << "condition1" << endl;
    return num == 0;
}

bool condition2(int num){
    cout << "condition2" << endl;
    return num < 0;
}

int main(){
    if (condition1(0) || condition2(3))
        cout << "true" << endl;
    else    
        cout << "false" << endl;
    
    return 0;
}