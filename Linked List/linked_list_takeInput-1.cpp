#include<bits/stdc++.h>

using namespace std;

class Node{
    public:

    int data;
    Node *next;

    //constructor
    Node(int data)
    {
        this->data = data;
        next = NULL;

    }

};
Node* takeInput()
{
 int data;
 cin>>data;
 Node* head = NULL;
 Node * temp = NULL;

 while(data != -1)
 {
    Node * newNode = new Node(data);
    if(head == NULL)
    {
        head = newNode;
        temp = newNode;
    }
    temp->next = newNode;
    temp = newNode;


    cin>>data;
 }
 return head;
}
 //Print Function
void print(Node *head)
{
    cout<<"Data is "<<endl;
    while (head!=NULL)
    {
        cout<<head->data<<" ";
        head = head->next;

    }
    
}

int main()
{
    cout<<"Linked List"<<endl;
    Node* head = takeInput();
    print(head);
}