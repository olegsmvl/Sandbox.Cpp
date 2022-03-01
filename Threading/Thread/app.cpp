#include<iostream>
#include <thread>
using namespace std;

void threadFunction(int value){
    for (size_t i = 0; i < value; i++)
    {
        std::cout << i << " second thread" << std::endl;    
    }
}

int main(int argc, char const *argv[])
{
    int a = 20;
    thread thr(threadFunction, a);
    //thr.detach();

    for (size_t i = 0; i < 10; i++)
    {
        cout << i << endl;    
    }
    
    thr.join();

    return 0;
}
