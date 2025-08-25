// Implement a stack using two queues.

#include<iostream>
#include<queue>
#include<algorithm>
using namespace std;

class Stack{
    private:
        std::queue<int> q1, q2;
    public :
        void push(int val)
        {
            q2.push(val);
            
            while (!q1.empty())
            {
                q2.push(q1.front());
                q1.pop();
            }

            std::swap(q1,q2); 
        }
        bool empty()
        {
            return q1.empty();
        }
        int top()
        {
            if(!q1.empty())
            {
                return q1.front();
            }
        }
        void pop()
        {
            if(!q1.empty())
            {
                q1.pop();
            }
        }
    
};

int main()
{
    Stack stc1;
    stc1.push(10);
    stc1.push(20);
    stc1.push(30);
    stc1.push(40);
    cout<<stc1.top()<<endl;
    stc1.pop();
    cout<<stc1.top()<<endl;
    cout<<stc1.empty()<<endl;

}