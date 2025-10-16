#include<iostream>
#include <bitset>
#include <cstdint>
using namespace std;

int main()
{
    uint8_t ledHandler = 129;
    int flag = 0;
    while(true)
    {
        if(ledHandler == 129 && flag == 0)
        {
            cout<<bitset<8>(ledHandler)<<endl;
            ledHandler = 66;
            
        }
        else if(ledHandler == 66 && flag == 0)
        {
            cout<<bitset<8>(ledHandler)<<endl;
            ledHandler = 36;
        }
        else if(ledHandler == 36 && flag == 0)
        {
            cout<<bitset<8>(ledHandler)<<endl;
            ledHandler = 24;
        }
        else if(ledHandler == 24 && flag == 0)
        {
            cout<<bitset<8>(ledHandler)<<endl;
            flag = 1;
        }
        else if(ledHandler == 24 && flag == 1)
        {
            cout<<bitset<8>(ledHandler)<<endl;
            ledHandler = 36;
        }
        else if(ledHandler == 36 && flag == 1)
        {
            cout<<bitset<8>(ledHandler)<<endl;
            ledHandler = 66;
        }
        else if(ledHandler == 66 && flag == 1)
        {
            cout<<bitset<8>(ledHandler)<<endl;
            ledHandler = 129;
        }
        else if(ledHandler == 129 && flag == 1)
        {
            cout<<bitset<8>(ledHandler)<<endl;
            flag = 0;
        }
    }
}
