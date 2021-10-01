#include <iostream>
using namespace std;

template <typename T>
class Vect
{
public:
    Vect()
    {
        head = (T *)calloc(20, sizeof(T));
        tail = head;
    }

    void push_pack(T value)
    {
        *tail = value;
        tail++;
    }

    T element_at(int pos)
    {
        return *(head + pos);
    }

    void push_front(T value)
    {
        auto p = ++tail;

        while (p != head)
        {
            *p = *(p - 1);
            p--;
        }

        *head = value;
    }

    int size()
    {
        return tail - head;
    }

    void clear()
    {
        tail = head;
    }

    T pop_back(){
        return *(--tail);
    }

    T pop_front(){
        T pop = *head;
        auto p = head;
        while (p!=tail)
        {
            *p = *(p+1);
            p++;
        }

        tail--;
        return pop;
    }

private:
    T *head;
    T *tail;
};

int main(int argc, char const *argv[])
{
    auto vec = Vect<int>();
    vec.push_pack(100);
    vec.push_pack(50);
    vec.push_front(15);

    for (size_t i = 0; i < vec.size(); i++)
    {
        cout << vec.element_at(i) << endl;
    }

    cout << "size: " << vec.size() << endl;

    cout << "pop_back: " << vec.pop_back() << endl;

    cout << "size: " << vec.size() << endl;

    cout << "pop_front: " << vec.pop_front() << endl;

    cout << "size: " << vec.size() << endl;

    vec.clear();

    vec.push_front(777);

    for (size_t i = 0; i < vec.size(); i++)
    {
        cout << vec.element_at(i) << endl;
    }

    cout << "size: " << vec.size() << endl;

    return 0;
}
