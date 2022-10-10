#include <iostream>

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

using namespace std;

bool isPalindrome(Node *head)
{
    //Write your code here
    Node* head2= head;
    
    while(head!=NULL)
    {
        
        Node* lastNode  = head;
        Node* previous = head;
        while(lastNode->next !=NULL)
        {
            previous = lastNode;
            lastNode = lastNode->next;
        }
        
        if(head->data != lastNode->data)
        {
            return false;
        }
        
        previous->next = NULL;
        
        head = head->next;
        
        
    }
    return true;
}

//recursive function

bool isPalindrome_rec(Node *head)
{
    //Write your code here
	if(head == NULL)
	{
		return true;
	}
    Node* head2= head;
	Node* head3= head;
	while(head2->next!=NULL)
	{
		head3 = head2;
		head2 = head2->next;

	}
	if(head->data != head2->data)
	{
		return false;
	}
	head3->next = NULL;
	bool ans = isPalindrome_rec(head->next);
	if(ans)
	{
		return true;
	}
	return false;




}




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
		bool ans = isPalindrome_rec(head);

		if (ans) cout << "true";
		else cout << "false";

		cout << endl;
	}

	return 0;
}