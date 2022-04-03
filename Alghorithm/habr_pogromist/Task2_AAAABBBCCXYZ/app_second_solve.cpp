#include <iostream>
#include <string>
using namespace std;

string compress_str(string str){
    string result;
    int counter = 0;
    for (int i = 0; i < str.length(); i++){
        counter++;
        if (i == str.length()-1 || str[i] != str[i+1] ){
            if (counter > 1)
                result += str[i] + to_string(counter);
            else
                result += str[i];
                
            counter = 0;
        }
    }
    
    return result;

}

int main(){
    string str = "AAAABBBCCXYZDDDDEEEFFFAAAAAABBBBBBBBBBBBBBBBBBBBBBBBBBBB";
    cout << compress_str(str) <<endl;
    return 0;
}
