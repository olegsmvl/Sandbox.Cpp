#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct  User
{   
    int Id;
    string Name;
};

void print(const User &user){
    cout << "Id: " << user.Id << endl;
    cout << "Name: " << user.Name << endl;
}

void change(User &user){
    user.Id = 5;
    user.Name += "_New";
}

vector<int> vec = {1,2,3};

int main(){
    // const User user{1, "Igor"};
    // print(user);

    // User user_mutable{2, "Mary"};
    // print(user_mutable);
    // change(user_mutable);
    // print(user_mutable);

    int& a = vec[1];

    a = 8;

    for (auto v : vec){
        cout << v << endl;
    }

    return 0;
}