void reverse(int *p , int s , int e)
{
    while(s<=e)
    {
        int swap =  p[s];
        p[s] = p[e];
        p[e] = swap;
        s++;
        e-- ;
    }
}

void rotate(int *input, int d, int n)
{
    //Write your code here

    reverse(input,0,n-1);
    reverse(input,0,n-d-1);
    reverse(input,n-d,n-1);
    
}

#include <iostream>
using namespace std;

// #include "solution.h"

int main()
{
	int t;
	cin >> t;
	
	while (t--)
	{
		int size;
		cin >> size;

		int *input = new int[size];

		for (int i = 0; i < size; ++i)
		{
			cin >> input[i];
		}

		int d;
		cin >> d;

		rotate(input, d, size);

		for (int i = 0; i < size; ++i)
		{
			cout << input[i] << " ";
		}
		
		delete[] input;
		cout << endl;
	}

	return 0;
}