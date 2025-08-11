#include<iostream>
using namespace std;

class Test{
    public:
    Test()
    {
        cout<<"I am in Test constructor"<<endl;
    }
    virtual void memberfucntion()
    {
        cout<<"I am in Test member function"<<endl;
    }
    ~Test()
    {  
        cout<<"I am in Test Destructor"<<endl;
    }
};
class derived : public Test
{
    public :
    derived()
    {
        cout<<"I am in dervied constructor"<<endl;
    }
    void memberfucntion()
    {
        cout<<"I am in dervied member function"<<endl;
    }
    ~derived()
    {
        cout<<"I am in dervied Destructor"<<endl;
    }
};

int main()
{
    Test *obj1 = new derived();
    obj1->memberfucntion();
    //  cout<<"dervied object created successfully"<<endl;
    // Test obj1;
}