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

Node *reverse(Node *phead);
void print_node(Node *p, string name);

struct list
{
	Node* first;
	Node* last;

	list(){
		first = nullptr;
		last = nullptr;
	}

	bool is_empty(){
		return first == nullptr;
	}

	void  push_back(string str){
		Node* p = new Node(str);
		if (is_empty()){
			first = p;
			last = p;
			return;
		}
		last->Next = p;
		last = p; 
	}

	void print(){
		if(is_empty()) return;

		Node* p = first;

		while (p)
		{
			cout<<p->Val<<" ";
			p = p->Next;
		}
		cout << endl;
	}
};



int main(){
	list l;
	cout << l.is_empty() << endl;
	l.push_back("11");
	l.push_back("22");
	l.push_back("33");
	l.push_back("44");
	l.push_back("55");
	l.print();

	l.first = reverse(l.first);

	l.print();


	return 0;
}

Node* reverse(Node *phead){
	Node *prhead = nullptr;

	while (phead )
	{
		print_node(phead, "phead");
		Node *p = phead -> Next;
		phead ->Next = prhead;
		prhead = phead;
		phead = p;
	}
	return prhead;
}

void print_node(Node *p, string name){
	cout << name << " " << '\t';
	cout << p << " ";
	if (p){
		cout << p->Val << " ";
		cout << p->Next << endl;
	}
	else{
		cout << endl;
	}
}