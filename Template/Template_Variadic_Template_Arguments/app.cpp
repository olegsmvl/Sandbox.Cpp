#include <iostream>
using namespace std;

void print(){
    cout << "==== end ====" << endl;
}

template <typename T, typename... Args>
void print(T first, Args... rest){
    cout << first << endl;
    print(rest...);
}

int main()
{
    print(4, 7.4f, 5.3f);
    return 0;
}
