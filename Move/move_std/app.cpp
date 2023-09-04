#include <iostream>
using namespace std;

class MoveClass
{
    int num;

public:
    MoveClass(int n) : num(n) {}

    // copy ctor
    MoveClass(const MoveClass &cl) = delete;
    // MoveClass(const MoveClass &cl) : num(cl.num)
    // {
    //     cout << "copy ctor" << endl;
    // }

    // move ctor
    MoveClass(MoveClass &&cl) : num(cl.num)
    {
        cl.num = 0;
        cout << "move ctor" << endl;
    }

    int get_num(){
        return num;
    }

    MoveClass &operator=(const MoveClass &cl) = delete;
    // MoveClass &operator=(const MoveClass &cl)
    // {
    //     cout << "= operator" << endl;

    //     if (this == &cl)
    //         return *this;

    //     num = cl.num;
    //     return *this;
    // }

    MoveClass &operator=(MoveClass &&cl)
    {
        cout << "=operator move" << endl;

        if (this == &cl)
            return *this;

        num = cl.num;
        cl.num = 0;
        return *this;
    }

    ~MoveClass()
    {
        cout << "dtor" << endl;
    }
};

int main(int argc, char const *argv[])
{
    MoveClass cl1(5);
     cout << cl1.get_num() << endl;
    MoveClass cl2(8);
    MoveClass cl3 = std::move(cl1);
    cl3 = std::move(cl2);

    cout << cl3.get_num() << endl;
    cout << cl1.get_num() << endl;

    return 0;
}
