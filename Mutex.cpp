#include<iostream>
#include<mutex>
#include<thread>
#include<chrono>

using namespace std;

 int value = 0;
 
void ThreadWorker()
{
    int i =  0;
    
    while(i<100000)
    {
        value++;
        cout<<value<<" "<<std::this_thread::get_id()<<endl;
        i++;
    }
}

int main()
{
    std::thread t1(ThreadWorker);
    std::thread t2(ThreadWorker);

    t1.join();
    t2.join();
}

