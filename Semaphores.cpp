#include<iostream>
#include<thread>
#include<semaphore>
using namespace std;

std::counting_semaphore<3> sem(3);
std::binary_semaphore sem1(0);

void threadworker(int i)
{
    sem.acquire();
    cout<<"working thread : "<<i<<endl;
    std::this_thread::sleep_for(std::chrono::seconds(2));
    sem.release();
}
void task1()
{
    cout<<"task1 is working"<<endl;
    std::this_thread::sleep_for(std::chrono::seconds(2));
    sem1.release();
}
void task2()
{
    cout<<"task2 is waiting for task1"<<endl;
    sem1.acquire();
    cout<<"task2 is done"<<endl;
}
int main()
{
    std::thread t[6];
    for(int i = 0; i < 6; i++)
    {
        t[i] = std::thread(threadworker,i);
    }
    for(auto& t1 : t)
    {
        t1.join();
    }
    std::thread t2(task2), t1(task1);
    t1.join();
    t2.join();
}