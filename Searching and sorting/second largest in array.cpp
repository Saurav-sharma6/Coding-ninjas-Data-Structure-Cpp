#include<bits/stdc++.h>

int findSecondLargest(int *input, int n)
{
    //Write your code here
    int a = INT_MIN;
    int b = INT_MIN;
    
    for(int i = 0;i<n;i++)
    {
        if(input[i] > a)
        {
            b = a;
            a = input[i];
            
        }
        else if(input[i]<a && input[i] > b)
        {
            b= input[i];
        }
    }
    return b;
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

		for (int i = 0; i < size; i++)
		{
			cin >> input[i];
		}

		cout << findSecondLargest(input, size) << endl;

		delete[] input;
	}

	return 0;
}