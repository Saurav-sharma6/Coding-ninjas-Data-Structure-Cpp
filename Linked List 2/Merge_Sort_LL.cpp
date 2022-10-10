
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


int length(Node* head)
{
    int len=0;
    while(head!=NULL)
    {
        len++;
        head=head->next;
    }
    return len;
}

Node *midPoint(Node *head)
{
    // Write your code here
    if(head == NULL)
    {
        return NULL;
    }
    if(head->next == NULL)
    {
        return head;
    }
    Node* slow = head;
    Node* fast = head->next;
    
    while(fast!=NULL)
    {
        if(fast->next == NULL)
        {
            return slow;
        }
        else if(fast == NULL)
        {
            return slow;
        }
        
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}

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

Node *mergeSort(Node *head)
{
	//Write your code here
    if(head == NULL)
    {
        return head;
    }
    Node* temp =head;
    if(length(head) == 1)
    {
        return head;
    }
    
    // divide into two;
    
    int len = length(head);
    int mid = (len-1)/2;
    int i = 0;
    
    while(i<mid)
    {
        i++;
        head=head->next;
    }
    
    
    
    Node* second = head->next;
    head->next = NULL;
    
    Node* head1 = mergeSort(temp);
    Node* head2 = mergeSort(second);
    
    Node* ans = mergeTwoSortedLinkedLists(head1,head2);
    
    return ans;
    

    
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
		Node *head = takeinput();
		head = mergeSort(head);
		print(head);
	}

	return 0;
}