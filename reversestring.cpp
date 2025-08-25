// Reverse a string without using extra space

#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int main()
{
    std::string str = "Saikumar";
    std::string rev = "";

    for(auto a : str)
    {
        rev = a+rev;
    }
    cout<<rev<<endl;

    // using algorithm inbuilt function
    std::reverse(str.begin(),str.end());
    cout<<str<<endl;

}

//swapping technique

// #include <iostream>
// #include <string>
// using namespace std;

// int main() {
//     string str = "Saikumar";
    
//     int n = str.size();
//     for (int i = 0; i < n/2; i++) {
//         swap(str[i], str[n - i - 1]);
//     }

//     cout << str << endl; // ramukiaS
// }
