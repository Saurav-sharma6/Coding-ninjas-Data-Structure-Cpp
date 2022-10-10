#include <iostream>
using namespace std;
void swapAlternate(int *arr, int size)
{
    //Write your code here
    int i = 0;
    int j = 1;
    while(true)
    {
        if(j >= size)
        {
            break;
        }
        int swap = arr[i];
        arr[i] = arr[j];
        arr[j] = swap;
        i = j+1;
        j = i+1;
        
    }
}
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
		swapAlternate(arr, size);
		for (int i = 0; i < size; i++)
		{
			cout << arr[i] << " ";
		}
		cout << endl;
		delete [] arr;
	}
}