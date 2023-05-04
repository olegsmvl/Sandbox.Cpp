#include <iostream>
#include <vector>
#include <functional>

using namespace std;

class I
{
    public:
        virtual void print() {cout << "base method" << endl;}
};

class B : public I{
    public:

     void print() override {
        cout << "print method" << endl;
    }
};

int main(int argc, char const *argv[])
{
    B b;
    B& c = b;
    vector<std::reference_wrapper<I>> vec {c};
    // vec.push_back(b);
    //A cl;
    // B* cl = new B();
    // cl->print();
    vec[0].get().print();

    return 0;
}
