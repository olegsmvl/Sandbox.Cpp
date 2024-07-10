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

void realloc_method(){
    auto p1 = (int *)calloc(100, sizeof(int));
    auto p2 = (int *)calloc(100, sizeof(int));
    cout << p1 << endl;
    cout << p2 << endl;
    auto p_new = realloc(p1, 500);
    cout << p_new << endl;
    free(p_new);
}

int main(int argc, char const *argv[])
{
    realloc_method();
    cout << "end" << endl;
    return 0;
}
