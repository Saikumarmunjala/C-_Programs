#include<iostream>
#include<vector>
using namespace std;

int main()
{
    std::vector<int> vec = {3,2,5,2,7,2,5,9};
    int target = 2;
    int firstfound = -1, lastfound = -1;

    for(int i=0; i<vec.size();i++)
    {
        if(target == vec[i])
        {
            if(firstfound == -1)
            {
                firstfound = i+1;
                lastfound = i+1;
            }
            lastfound = i+1;
        }
    }
    if(firstfound == -1)
    {
        cout<<"number not found"<<endl;
    }
    else
        cout<<"firstfound : "<<firstfound<<" lastfound : "<<lastfound<<endl;
}