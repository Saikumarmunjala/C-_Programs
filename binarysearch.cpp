// 	Implement binary search iteratively and recursively.

#include<iostream>
#include<vector>
#include<algorithm>

int binarysearch(std::vector<int> vec, int target)
{
    int left = 0, right = vec.size()-1;
    while(left<=right)
    {
        int mid = (left+right)/2;

        if(vec[mid] == target)
        {
            return mid;
        }
        else if(vec[mid] < target)
        {
           left = mid+1; 
        }
        else
        {
            right = mid-1;
        }
    }
    return -1;
}
int binaryrecursive(std::vector<int> vec, int left, int right, int target)
{
    if(left<=right)
    {
        int mid = (left+right)/2;

        if(vec[mid] == target)
        {
            return mid;
        }
        else if(vec[mid] < target)
        {
            return binaryrecursive(vec, mid+1, right, target);
        }
        else
        {
            return binaryrecursive(vec, left, mid-1, target);
        }
    }
    return -2;
}
int main()
{
    std::vector<int> vec ={3,4,7,2,1};
    std::sort(vec.begin(),vec.end());
    int target = 4;
    int result = binarysearch(vec,target);
    int left = 0, right = vec.size()-1;
    int recresult = binaryrecursive(vec, left, right, 10);
    if(result == -1)
    {
        std::cout<<"number not found"<<std::endl;
    }
    else
    {
        std::cout<<"number found"<<std::endl;
    }
    if(recresult == -2)
    {
        std::cout<<"from rec number not found"<<std::endl;
    }
    else
    {
        std::cout<<"from rec number found"<<std::endl;
    }

}
