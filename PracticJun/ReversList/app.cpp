#include <iostream>
#include <string>
using namespace std;

struct User
{
	int* Id;
	string Name;
	int Age;
};

struct Node
{
	string val;
	Node* Next;
};



int main(){
	int id = 1;
	User user = {&id, "dfa", 45};

	cout <<*user.Id << endl;
	cout <<user.Name << endl;
	cout <<user.Age << endl;

	return 0;
}