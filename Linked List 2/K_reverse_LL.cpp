/****************************************************************
 
    Following is the class structure of the Node class:

        class Node
        {
        public:
	        int data;
	        Node *next;
	        Node(int data)
	        {
		        this->data = data;
		        this->next = NULL;
	        }
        };

*****************************************************************/

#include <iostream>
using namespace std;

class Node
{
public:
	int data;
	Node *next;
	Node(int data)
	{
		this->data = data;
		this->next = NULL;
	}
};


Node* rec(Node*head)
{
    if(head == NULL){
        return head;
    }
    if(head->next == NULL)
    {
        return head;
    }
    
    Node* ans = rec(head->next);
    head->next->next = head;
    head->next = NULL;
    return ans;
}

void print(Node *head)
{
	Node *temp = head;
	while (temp != NULL)
	{
		cout << temp->data << " ";
		temp = temp->next;
	}
	cout << endl;
}

Node *kReverse(Node *head, int k)
{
	//Write your code here
    int i = 0;
    Node* nextAdd = head;
    Node * newHead = NULL;
    Node * newTail = NULL;
    Node* newListHead = NULL;
    Node* mainHead = NULL;
    // Node
    
    
    
    while(head!=NULL){
        
        Node* tailgate = nextAdd;
        i=0;
        Node* newHead = nextAdd;
        head = nextAdd;
        while(i<k-1)
        {
            i++;
            head=head->next;
        }
        
        nextAdd = head->next;
        head->next  = NULL;
        newListHead = rec(newHead);
        cout<<"Printing "<<endl;
        print(newListHead);
        if(mainHead == NULL)
        {
            mainHead = newListHead;
            newTail = tailgate;
            cout<<"Tail "<<tailgate->data<<endl;
        }
        else
        {
            newTail->next = newListHead;
            newTail = tailgate;
            cout<<"Tail "<<tailgate->data<<endl;

        }
 
        
        
    }
               newTail->next = NULL;
                return mainHead;

    

    
}



// #include "solution.h"

Node *takeinput()
{
	int data;
	cin >> data;
	Node *head = NULL, *tail = NULL;
	while (data != -1)
	{
		Node *newnode = new Node(data);
		if (head == NULL)
		{
			head = newnode;
			tail = newnode;
		}
		else
		{
			tail->next = newnode;
			tail = newnode;
		}
		cin >> data;
	}
	return head;
}



int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		Node *head = takeinput();
		int k;
		cin >> k;
		head = kReverse(head, k);
		print(head);
	}
	
	return 0;
}