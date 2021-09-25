#include <iostream>
using namespace std;

template<class T>
class Auto_ptr1
{
private:
    T* m_ptr;
public:
    Auto_ptr1(T* ptr = nullptr):m_ptr(ptr){}
    ~Auto_ptr1(){
        delete m_ptr;
    }
    
    T& operator*() const {return *m_ptr;}
    T* operator->() const {return m_ptr;}
};

class Item{
    public:
        Item() {cout << "ctor" <<  endl;}
        ~Item() {cout << "dtor" <<  endl;}
        void method() {cout << "method" <<  endl;}
};


int main(int argc, char const *argv[])
{
    Auto_ptr1<Item> item(new Item());
    item->method();
    (*item).method();
    return 0;
}
