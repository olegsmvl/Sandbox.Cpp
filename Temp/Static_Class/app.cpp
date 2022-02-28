#include <iostream>
#include <queue>
using namespace std;

template <typename T>
class MyClass{
    public:
    static queue<T> data_queue;
};

template <typename T>
queue<T> MyClass<T>::data_queue;

int main(int argc, char const *argv[])
{
    MyClass<int>::data_queue.push(15);

    cout << MyClass<int>::data_queue.front() << endl;

    MyClass<int>::data_queue.pop();

    cout << MyClass<int>::data_queue.size() << endl;

    return 0;
}
