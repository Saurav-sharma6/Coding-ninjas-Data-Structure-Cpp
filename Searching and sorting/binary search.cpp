int binarySearch(int *input, int n, int val)
{
    //Write your code here
    int s = 0;
    int e = n-1;
    int mid = (s+e)/2;
    while(s<=e)
    {
        if(input[mid] < val)
        {
            s = mid + 1;
        }
        else  if(input[mid] > val)
        {
            e = mid - 1;
        }
        else if(input[mid] == val)
            
        {
            return mid;
        }
        mid = (s+e)/2;
    }
    return -1;
}

#include <iostream>
using namespace std;

// #include "solution.h"

int main()
{

	int size;
	cin >> size;
	int *input = new int[size];

	for(int i = 0; i < size; ++i)
	{
		cin >> input[i];
	}
	
	int t;
	cin >> t;

	while (t--)
	{
		int val;
		cin >> val;
		cout << binarySearch(input, size, val) << endl;
	}
	
	delete [] input;
	return 0;
}