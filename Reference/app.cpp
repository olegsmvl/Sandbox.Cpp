#include <iostream>
#include <string>
using namespace std;

struct  User
{   
    int Id;
    string Name;
};

void print(User user){
    cout << "Id: " << user.Id << endl;
    cout << "Name: " << user.Name << endl;
}

User change(User &user){
    user.Id = 5;
    return user;
}

int main(){
    User user{1, "Igor"};

    change(user);

    print(user);
    return 0;
}