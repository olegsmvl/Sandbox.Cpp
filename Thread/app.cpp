#include<iostream>
#include <thread>

void threadFunction(int value){
    value++;
    std::cout << value << std::endl;
}

int main(int argc, char const *argv[])
{
    int a = 1;
    std::thread thr(threadFunction, a);
    thr.join();
    std::cout << a << std::endl;

    /* code */
    return 0;
}
