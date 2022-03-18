#include <iostream>
#include <string>
using namespace std;

class Singleton
{
public:
    static Singleton *GetInstance(const string &value);
    Singleton(Singleton& s) = delete;
    string Value() const;

protected:
    static Singleton *singleton;
    string value;
    Singleton(const string _value): value(_value){};
};

Singleton *Singleton::GetInstance(const string &value)
{
    if (singleton ==  nullptr)
        singleton = new Singleton(value);
    
    return singleton;
}

string Singleton::Value() const{
    return value;
}

Singleton* Singleton::singleton = nullptr;

int main(int argc, char const *argv[])
{
    //Singleton a("first");
    auto a = Singleton::GetInstance("first");
    cout << a->Value() << endl;
    auto b = Singleton::GetInstance("second");
    cout << b->Value() << endl;
    return 0;
}
