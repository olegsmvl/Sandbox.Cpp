#include <iostream>
#include <thread>
#include <mutex>
#include <string>
using std::cout;
using std::endl;
using std::mutex;
using std::thread;
using std::lock_guard;
using std::string;

mutex some_mutex;
const int max = 20;
int counter = 0;

void firstTask();
void secondTask();

void threadFunction(){
    while (counter < max)
    {
        secondTask();
    }
    
}

int main(int argc, char const *argv[])
{

    thread thr(threadFunction);
    //thr.detach();

    while (counter < max)
        firstTask();
    
    thr.join();

    return 0;
}

void show_and_inc(int &value, string name){
    cout << value << name << endl;
    value++;
}

void firstTask(){

    if (counter < max)
    {
        lock_guard<mutex> guard(some_mutex);
        show_and_inc(counter, " first task");
    }

}

void secondTask(){

    if (counter < max)
    {
        lock_guard<mutex> guard(some_mutex);
        show_and_inc(counter, " second task");
    }
}
