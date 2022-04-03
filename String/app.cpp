#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
    string str1 = "start_end";
    string str2 = "start_ent";
    cout << str1 << endl;
    bool equal = str1 < str2 ;
    cout << equal << endl;
    cout << str1.size() << endl;
    
    char c = str1[1];
    cout << c << endl;

    str1[0] = 'M';
    cout << str1 << endl;

    char symbols[] = {'A', 'B', '\0'};
    cout << symbols << endl;

    auto res = (int)str1.find("art1");

    cout << res << endl;

    cout << str1 << endl;
    str1.erase(str1.length()-2, 1);
    cout << str1 << endl;

    return 0;
}
