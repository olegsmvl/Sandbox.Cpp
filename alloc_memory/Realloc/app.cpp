#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
    auto head = (int *)calloc(50, sizeof(int));
    auto head_other = (int *)calloc(50, sizeof(int));

    int *p = head;

    for (int i = 0; i < 10; i++)
    {
        *(p++) = i * 10;
    }

    for (int i = 0; i < 10; i++)
    {
        cout << *(head + i) << endl;
    }

    cout << head << endl;

    head = (int *)realloc(head, 500);

    cout << head << endl;

    for (int i = 0; i < 10; i++)
    {
        cout << *(head + i) << endl;
    }

    return 0;
}
