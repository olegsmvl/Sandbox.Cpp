#include <iostream>
#include <string>
using namespace std;

//список надо релализовать как здесь https://habr.com/ru/sandbox/153128/

struct Node
{
	string Val;
	Node* Next;
	Node(string val){
		Val = val;
		Next = nullptr;
	}
};

int main(){
	Node node = Node("first");
	node.Next = &Node("second");
	node.Next->Next = &Node("third");
	node.Next->Next->Next = &Node("fours");

	return 0;
}