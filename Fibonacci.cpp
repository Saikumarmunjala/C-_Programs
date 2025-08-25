// Print Fibonacci numbers up to n using recursion and DP.

#include<iostream>
#include<vector>
using namespace std;

int Fibonacci(int n)
{
    if(n<=1)
        return n;
    return (Fibonacci(n-1)+Fibonacci(n-2));

}
int Fibmemo(int n, std::vector<int> &memo)
{
    if(n<=1)
        return n;
    if(memo[n] != -1)
        return memo[n];
    return memo[n] = (Fibmemo(n-1, memo)+Fibmemo(n-2,memo));
}
int main()
{
    int n=10;
    std::vector<int> vec(n+1,-1);
    for(int i =0; i<n;i++)
        cout<<Fibonacci(i)<<" ";
    cout<<endl;
    for(int i =0; i<n;i++)
        cout<<Fibmemo(i, vec)<<" ";
    cout<<endl;
    

}
