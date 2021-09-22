#include<iostream>
#include <thread>
using namespace std;

void threadFunction(int value){
    for (size_t i = 0; i < 10; i++)
    {
        std::cout << i << " second thread" << std::endl;    
        /* code */
    }
}

int main(int argc, char const *argv[])
{
    int a = 1;
    thread thr(threadFunction, a);
    //thr.join();
    thr.detach();

    for (size_t i = 0; i < 10; i++)
    {
        cout << i << endl;    
        /* code */
    }
    

    /* code */
    return 0;
}
