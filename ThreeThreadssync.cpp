#include<iostream>
#include<mutex>
#include<thread>
#include<condition_variable>
#include<atomic>
std::mutex m;
std::condition_variable cv;
int flag = 1;
int value = 0;

void thread1()
{
    while(value < 8)
    {
        std::unique_lock<std::mutex> lock(m);
        cv.wait(lock, [](){return flag == 1;});
        std::cout<<value<<" thread1"<<std::endl;
        value++;
        flag = 2;
        cv.notify_all();
    }

}
void thread2()
{
    while(value < 8)
    {
        std::unique_lock<std::mutex> lock(m);
        cv.wait(lock, [](){return flag == 2;});
        std::cout<<value<<" thread2"<<std::endl;
        value++;
        flag = 3;
        cv.notify_all();
    }
}
void thread3()
{
    while(value < 8)
    {
        std::unique_lock<std::mutex> lock(m);
        cv.wait(lock, [](){return flag == 3;});
        std::cout<<value<<" thread3"<<std::endl;
        value++;
        flag = 1;
        cv.notify_all();
    }
}

int main()
{
    std::thread t1(thread1);
    std::thread t2(thread2);
    std::thread t3(thread3);
    t1.join();
    t2.join();
    t3.join();
}