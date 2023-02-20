#include <iostream>
#include <vector>
#include <functional>
using namespace std;


class MyClass{
public:
    MyClass(int num) : num_(num){}
    
    void print_num(){
        cout << num_ << endl;
    }

    private:
    int num_;
};

void single_example(){
    int a = 6;
    reference_wrapper<int> elem = a;
    cout << elem << endl;
}

void vector_example(){
    MyClass mc1(8);
    MyClass mc2(9);

    vector<reference_wrapper<MyClass>> list{mc1, mc2};
    
    list[0].get().print_num();
    list[1].get().print_num();
}

int main(int argc, char const *argv[])
{
    // single_example();
vector_example();
    return 0;
}
