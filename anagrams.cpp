// Write a function to check if two strings are anagrams.

#include<iostream>
#include<string>
#include<unordered_map>
#include<algorithm>

using namespace std;

int main()
{
    std::string str1 = "silent";
    std::string str2 = "listen";
   // approch 1
    int flag = 0;
    std::unordered_map<char, int> freq1, freq2;

    for(auto c : str1)
    {
        freq1[c]++;
    }
    for(auto c : str2)
    {
        freq2[c]++;
    }
    for(auto c : str1)
    {
        if(freq1[c] != freq2[c])
        {
            flag = 1;
            break;
        }
        else{
            continue;
        }
    }
    if(flag)
    {
        cout<<"both strings are not anagrams"<<endl;
    }
    else
    {
        cout<<"both strings are anagrams"<<endl;
    }

    //approch 2

    std::sort(str1.begin(),str1.end());
    std::sort(str2.begin(),str2.end());

    if(str1 == str2)
    {
        cout<<"both strings are anagrams"<<endl;
    }
    else{
        cout<<"both strings are not anagrams"<<endl;
    }  
    

}
