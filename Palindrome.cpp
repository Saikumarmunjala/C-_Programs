// Check if a string is a palindrome

// approch - 1
#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
    std::string palindrome = "rotator";
    std::string dummy = palindrome;
    int n = palindrome.size();
    int flag = 0;

    for(int i=0; i<n/2; i++)
    {
        if(palindrome[i] != palindrome[n-i-1])
        {
            flag = 1;
            break;
        }
        else
        {
            continue;
        }

    }
    if(flag)
    {
        cout<<"it is not a palindrome"<<endl;
    }
    else
    {
        cout<<"Given string is a palindrome."<<endl;
    }


// approch 2

std::reverse(dummy.begin(),dummy.end());

if(dummy == palindrome)
{
    cout<<"it is a palindrome"<<endl;
}
else{
    cout<<"it is not a palindrome"<<endl;
}
}



