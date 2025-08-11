#include<iostream>
#include<thread>
#include<mutex>
#include<condition_variable>
using namespace std;

std::mutex m;
condition_variable cv;
int value = 0;

void printeven()
{
    while(value<10)
    {
        std::unique_lock<std::mutex> lock(m);
        cv.wait(lock, [](){return value%2==0;});
        cout<<value<<" even thread"<<endl;
        value++;
        cv.notify_one();
    }
}
void printodd()
{
    while(value<10)
    {
        std::unique_lock<std::mutex> lock(m);
        cv.wait(lock, [](){return value%2==1;});
        cout<<value<<" odd thread"<<endl;
        value++;
        cv.notify_one();
    }
}

int main()
{
    std::thread t1(printodd);
    std::thread t2(printeven);
    t1.join();
    t2.join();
}