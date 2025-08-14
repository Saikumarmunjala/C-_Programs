#include<iostream>
using namespace std;

class Person
{
    private:
        std::string firstname, lastname;
    public:
        void setFirstName(std::string fname)
        {
            firstname = fname;
        }
        void setLastName(std::string lname)
        {
            lastname = lname;
        }
        std::string returnFirstName()
        {
            return firstname;
        }
        std::string returnLastName()
        {
            return lastname;
        }
        Person* returnobject(std::string lfname)
        {
            if(lastname == lfname)
            {
                return this;
            }
            else{
                return nullptr;
            }
        }
};

int main()
{
    Person person[4];
    std::string searchName;
    Person *objcollect;
    for(int i = 0; i < 4; i++)
    {
        std::string fname, lname;
        cout<<"enter the "<<i<<"person name and last name"<<endl;
        cin>>fname;
        cin>>lname;
        person[i].setFirstName(fname);
        person[i].setLastName(lname);
    }
    cout<<"enter lastname to get the first name and object"<<endl;
    cin>>searchName;
    for(int j=0;j<4;j++)
    {
        objcollect = person[j].returnobject(searchName);
        if(objcollect != nullptr)
        {
            cout<<"firstname of last name entered is : "<<objcollect->returnFirstName()<<endl;
        }

    }

}