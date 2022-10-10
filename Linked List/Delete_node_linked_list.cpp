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



Node *takeinput()
{
	int data;
	cin >> data;
	Node *head = NULL, *tail = NULL;
	while (data != -1)
	{
		Node *newNode = new Node(data);
		if (head == NULL)
		{
			head = newNode;
			tail = newNode;
		}
		else
		{
			tail->next = newNode;
			tail = newNode;
		}
		cin >> data;
	}
	return head;
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

//delete Node 
Node *deleteNode(Node *head, int pos)
{
    // Write your code here.
    Node* temp = head;
    if(head == NULL)
    {
        return NULL;
    }
    
    if(pos == 0)
    {
        head = head->next;
        return head;
    }
    int counter = 0;
    while(counter<pos-1)
    {
        counter++;
        if(head->next!=NULL)
        {
            head = head->next;
        }
        else
        {
            return temp;
        }
        
    }
    if(head->next == NULL)
    {
    return temp;
        
    }
    head->next = head->next->next;
    return temp;
    
    
    
}


int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		Node *head = takeinput();
		int pos;
		cin >> pos;
		head = deleteNode(head, pos);
		print(head);
	}

	return 0;
}


