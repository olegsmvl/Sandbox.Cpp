#include <iostream>
#include <ctime>
using namespace std;

void wait_ms(int msec);
void test1();

int main(int argc, char const *argv[])
{
    time_t raw_time;
    //test1();
    time(&raw_time);
    auto prev_t = raw_time;
    while (true)
    {
        time(&raw_time);
        
        if (prev_t != raw_time){
            cout << raw_time << endl;
            auto timeinfo = localtime(&raw_time);
            cout << asctime(timeinfo) << endl;
            cout << "========" << endl;
            prev_t = raw_time;
        }
    }

    return 0;
}

void test1()
{
    int time_wait_ms = 3000;
    cout << CLOCKS_PER_SEC << endl;
    cout << "start" << endl;
    wait_ms(time_wait_ms);
    cout << "end" << endl;
}

void wait_ms(int msec)
{
    auto start = clock();
    auto end = start + msec;
    while (static_cast<long>(clock()) < end)
    {
        cout << clock() << endl;
    }
}
