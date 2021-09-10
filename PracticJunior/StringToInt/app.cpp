#include <iostream>
#include <cmath>
using namespace std;

int atoi (const char *str);
int getSize(const char *str);

int main(){
    int number = atoi ("189234");
    cout << number << endl;
    return 0;
}

int atoi (const char *str){
    int result = 0;
    int position = 0;
    const char *p = str + getSize(str);

    while(p != str){
        p--;
        int digit = (int)*p - 48;
        result += digit * pow(10, position);
        position ++;
    }

    return result;
}

int getSize(const char *str){
    auto p = str;
    int size = 0;

    while(*p != '\0'){
        size++;
        p++;
    }
    return size;
}