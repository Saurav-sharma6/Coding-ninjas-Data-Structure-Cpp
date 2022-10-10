#include<bits/stdc++.h>
void sort012(int *arr, int n)
{
    //Write your code here
    int zero = 0;
    int nzero = 0;
    int a[100000];
    int count = 0;
    
    for(int i = 0;i<n;i++)
    {
        if(arr[i]!=0)
        {
            a[count] = arr[i];
            nzero++;
            count++;
        }
        else
        {
            zero++;
        }
    }
    sort(a,a+count);
    for(int i=0;i<zero;i++)
    {
        arr[i] = 0;
    }
    int c = 0;
    for(int i = zero;i<n;i++)
    {
        arr[i] = a[c];
        c++;
    }
    
}

#include <iostream>
#include <algorithm>
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
		int *arr = new int[size];

		for (int i = 0; i < size; i++)
		{
			cin >> arr[i];
		}

		sort012(arr, size);

		for (int i = 0; i < size; i++)
		{
			cout << arr[i] << " ";
		}

		delete[] arr;
		cout << endl;
	}

	return 0;
}