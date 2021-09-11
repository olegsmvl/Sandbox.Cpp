#include <iostream>
using namespace std;

void malloc_method()
{
    auto p = (int *)malloc(100);
    cout << p << endl;
    cout << *p << endl;
    free(p);
}

void calloc_method()
{
    auto p = (int *)calloc(100, sizeof(int));
    cout << p << endl;
    cout << *p << endl;
    free(p);
}

int main(int argc, char const *argv[])
{
    calloc_method();
    cout << "end" << endl;
    return 0;
}
