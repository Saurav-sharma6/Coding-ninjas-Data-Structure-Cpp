
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

void printIthNode(Node *head, int i)
{
    //Write your code here
    if(head == NULL)
    {
        return;
    }
    
    int count = 0;
    
    while(count<i)
    {
        if(head->next!=NULL)
        {
        head = head->next;
            
        }
        else
        {
            return ;
        }
        count++;
        
    }
    cout<<head->data<<endl;
    
    
}



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

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		Node *head = takeinput();
		int pos;
		cin >> pos;
		printIthNode(head, pos);
		cout << endl;
	}
	return 0;
}