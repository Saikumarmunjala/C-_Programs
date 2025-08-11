#include<iostream>
using namespace std;

class Singleton{
    private:
        Singleton()
        {
            cout<<"Private constructor"<<endl;
        }
        // Delete copy constructor and copy assignment
        Singleton(const Singleton&) = delete;
        Singleton& operator=(const Singleton&) = delete;

        // Delete move constructor and move assignment
        Singleton(Singleton&&) = delete;
        Singleton& operator=(Singleton&&) = delete
    public:
        static Singleton& getinstance()
        {
            static Singleton obj;
            return obj;
        }
        
};
int main()
{
    Singleton& obj1 = Singleton::getinstance();
    Singleton& obj2 = Singleton::getinstance();
    cout<<&obj1<<endl<<&obj2<<endl;
}