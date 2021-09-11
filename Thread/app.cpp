#include<iostream>
#include <thread>

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
    std::thread thr(threadFunction, a);
    //thr.join();
    thr.detach();

    for (size_t i = 0; i < 10; i++)
    {
        std::cout << i << std::endl;    
        /* code */
    }
    

    /* code */
    return 0;
}
