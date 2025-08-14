#include<iostream>
#include<unordered_map>

using namespace std;

int main()
{
    std::unordered_map<char, int> freq;
    std::string str = "sasbnb";

    for(char ch : str)
    {
        freq[ch]++;
    }
    for(char c : str)
    {
        if(freq[c]==1)
        {
            cout<<c<<endl;
            break;
        }
    }

}