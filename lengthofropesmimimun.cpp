#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
    std::vector<int> vec = {5,5,6,6};
    int sum =0;
    int totalsum = 0;
    
    while(vec.size()>1)
    {
       std::sort(vec.begin(),vec.end());
       sum = vec[0]+ vec[1];
       vec.erase(vec.begin(),vec.begin()+2);
       vec.push_back(sum);
       totalsum = totalsum+sum;
    }
    cout<<totalsum<<endl;
}