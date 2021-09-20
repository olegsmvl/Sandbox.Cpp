#include <iostream>
#include <string>
#include "template_class.cpp"
using namespace std;



int main(int argc, char const *argv[])
{
    auto cl = new Account<int>(10);
    auto data = cl -> getData();
    auto cl_new = new Account<string>("some text");
    auto data_new = cl_new->getData();

    cout << data << endl;
    cout << data_new << endl;

    return 0;
}



