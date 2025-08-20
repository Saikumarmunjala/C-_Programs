#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_set>
using namespace std;

int main()
{
    std::vector<int> vec;
    int smallest = 1;
    int n;
    cout<<"Enter the size of vector : ";
    cin>>n;
    cout<<endl<<"enter the values in to vector"<<endl;
    for(int i=0; i<n; i++)
    {
        int no;
        cin>>no;
        vec.push_back(no);
    }
    std::sort(vec.begin(),vec.end());
    for(int x : vec)
    {
        if(x == smallest)
        {
            smallest++;
        }

    }
    cout<<smallest<<endl;
}
  