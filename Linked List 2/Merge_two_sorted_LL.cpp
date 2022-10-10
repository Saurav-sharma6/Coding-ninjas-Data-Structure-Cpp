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

Node *mergeTwoSortedLinkedLists(Node *head1, Node *head2)
{
    //Write your code here
    Node* headAns = NULL;
    Node* tailAns = NULL;
    
    Node* head1Copy = head1;
    Node* head2Copy = head2;
    
    if(head2 == NULL)
    {
        return head1;
    }
    
    
    if(head1 == NULL)
    {
        return head2;
    }
    while(head1!=NULL && head2!=NULL)
    {

         if(head1->data <= head2->data)
        {
               if(headAns == NULL )
            {
                headAns = head1;
                tailAns = head1;
                   
                
            }
            else
            {
            tailAns->next = head1;
            tailAns = tailAns->next;
            
            }
            head1 = head1->next;
            
            
        }
          else if(head1->data > head2->data)
        {
               if(headAns == NULL)
            {
                headAns = head2;
                tailAns = head2;
           
                
            }
              else
              {
            tailAns->next = head2;
            tailAns = tailAns->next;
              }
            head2 = head2->next;
              
            
        }

        
        
    }
    
    
    if(head1!=NULL)
    {
        tailAns ->next = head1;
    }
    if(head2!=NULL)
    {
        tailAns->next = head2;
    }
    
    
    return headAns;
   
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

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		Node *head1 = takeinput();
		Node *head2 = takeinput();
		Node *head3 = mergeTwoSortedLinkedLists(head1, head2);
		print(head3);
	}
	return 0;
}