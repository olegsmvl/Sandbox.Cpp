#include <iostream>
#include <queue>
using namespace std;

int main(int argc, char const *argv[])
{
    queue<int> q;
    q.push(12);
    q.push(4);
    q.push(8);

    cout << "size: " << q.size() << endl;
    cout << q.front() << " " << &q.front() << endl;
    q.pop();
    cout << q.front() << " " << &q.front() << endl;
    q.pop();
    cout << q.front() << " " << &q.front() << endl;
    q.pop();

    cout << "size: " << q.size() << endl;

    return 0;
}
