#include <iostream>
using namespace std;

// #include "solution.h"
void arrange(int *arr, int n)
{
    //Write your code here
 
    int s,e,val=1;
    s=0;
    e=n-1;

   while(s<=e)
    {
        *(arr+s)=val;
        val++;
        *(arr+e)=val;
        val++;
        if(s==e)
        {
            *(arr+s)=n;
        }
        s++;
        e--;
    }
    
}
    

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;

		int *arr = new int[n];
		arrange(arr, n);
		for (int i = 0; i < n; i++)
		{
			cout << arr[i] << " ";
		}
		cout << endl;
		delete [] arr;
	}

	
}