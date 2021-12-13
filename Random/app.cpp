#include <iostream>
#include <ctime>
using namespace std;

//rand() - это устаревший вариант
//https://docs.microsoft.com/ru-ru/cpp/standard-library/random?view=msvc-170 - нужно использовать что то из этого

int main(int argc, char const *argv[])
{
    srand(time(0));
    for (size_t i = 0; i < 10; i++)
    {
        int val = rand();
        cout << val << endl;
    }
    
    int last_time = time(0);

    // while(true){
    //     int now = time(0);
    //     if(last_time != now){
    //         cout << "time: "  << now << endl;
    //         last_time = now;
    //     }
    // }


    return 0;
}
