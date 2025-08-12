#include<iostream>
using namespace std;

class Node
{
    public :
        int data;
        Node *next=nullptr;
        Node(int val) : data(val), next(nullptr){}
};
class SingleLinkedList{
    public :
        Node* insertNode(Node *head)
        {
            int val;
            if(head == nullptr)
            {
                cout<<"Enter the value in-to head node."<<endl;
                cin>>val;
                head = new Node(val);
            }
            else
            {
                Node *temp = head;
                while(temp->next != nullptr)
                {
                    temp = temp->next;
                }
                cout<<"Enter the value in to new node"<<endl;
                cin>>val;
                Node *newNode = new Node(val);
                temp->next = newNode;
            }
            return head;
        }
        Node *reverse(Node *head)
        {
            Node *curr, *prev = nullptr, *nex;
            curr = head;
            while(curr)
            {
                nex = curr->next;
                curr->next = prev;
                prev = curr;
                curr = nex;
            }
            return prev;
        }
        void display(Node *head)
        {
            Node *temp = head;
            while(temp->next)
            {
                cout<<temp->data<<"->";
                temp=temp->next;
            }
            cout<<temp->data<<endl;
        }

};
int main()
{
    SingleLinkedList obj;
    Node *head = nullptr;
    head = obj.insertNode(head);
    head = obj.insertNode(head);
    head = obj.insertNode(head);
    head = obj.insertNode(head);
    head = obj.insertNode(head);
    head = obj.insertNode(head);
    head = obj.insertNode(head);
    head = obj.insertNode(head);
    obj.display(head);
    head = obj.reverse(head);
    obj.display(head);

}