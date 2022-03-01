#include<iostream>
#include <thread>
#include <queue>
#include <mutex>

using namespace std;

bool flag = false;
queue<int> data_queue;
mutex some_mutex;

void add_to_queue(int new_value){
    lock_guard<mutex> guard(some_mutex);
    data_queue.push(new_value); 
}

void wait_for_flag(){
    unique_lock<mutex> lk(some_mutex);
    while (!flag)
    {
        lk.unlock();
        this_thread::sleep_for(chrono::milliseconds(100));
        lk.lock();
    }
    
}

void threadFunction1(){
    for (int i = 0; i < 10; i++)
    { 
        add_to_queue(i);
    }
}

void threadFunction2(){
    for (int i = 10; i < 20; i++)
    {
        add_to_queue(i);   
    }
}

int main(int argc, char const *argv[])
{
    thread thr1(threadFunction1);
    flag = true;
    thread thr2(threadFunction2);
    //thr.detach();
    
    thr1.join();
    thr2.join();

    while (data_queue.size() > 0)
    {
        cout << data_queue.front() << endl;
        data_queue.pop();
    }

    return 0;
}
