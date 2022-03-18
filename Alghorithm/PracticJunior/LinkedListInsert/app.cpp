#include <iostream>
#include <string>
using namespace std;

template <typename T>
class Node
{
public:
	Node(T _data, Node *_next = nullptr) : data(_data), next(_next) {}
	Node *next;
	T data;
};

template <typename T>
class list
{
public:
	list()
	{
	}

	void push_back(T data)
	{
		if (head == nullptr)
		{
			head = new Node<T>(data);
			tail = head;
			return;
		}

		tail->next = new Node<T>(data);
		tail = tail->next;
	}

	void insert(Node<T>* p, T data){
		auto next_node = p->next;
		p->next = new Node<T>(data, next_node);
	}

	Node<T> *begin()
	{
		return head;
	}

	Node<T> *end()
	{
		return tail;
	}

private:
	Node<T> *head = nullptr;
	Node<T> *tail = nullptr;
};

int main()
{
	auto linked_list = list<int>();

	linked_list.push_back(5);
	linked_list.push_back(7);
	linked_list.push_back(9);

	auto p = linked_list.begin();

	linked_list.insert(p, 100);

	while (p != nullptr)
	{
		cout << p->data << endl;
		p = p->next;
	}
	

	return 0;
}
