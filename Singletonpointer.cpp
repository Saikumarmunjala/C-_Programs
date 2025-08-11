#include<iostream>
using namespace std;


class Singleton{
    private:
        Singleton()
        {
            cout<<"Private constructor"<<endl;
        }
        static Singleton *obj;
    public:
        static Singleton* getinstance()
        {
            if(obj==nullptr)
            {
                obj = new Singleton();
            }
            return obj;
        }
        
};
Singleton *Singleton::obj = nullptr;
int main()
{
    Singleton* obj1 = Singleton::getinstance();
    Singleton* obj2 = Singleton::getinstance();
    cout<<obj1<<endl<<obj2<<endl;
}