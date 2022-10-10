#include <iostream>
using namespace std;

int duplicateNumber(int *arr, int size)
{
    //Write your code here
    bool flag =  false;
    int count = 0;
    for(int i = 0;i<size;i++)
    {
        count = 0;
        flag = true;
        for(int j = 0;j<size;j++)
        {
            if(arr[i] == arr[j])
            {
                // flag = false;
                count++;
            }
        }
        if(count == 2)
        {
            return arr[i];
        }
    }
    return -1;
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
		int *input = new int[size];

		for (int i = 0; i < size; i++)
		{
			cin >> input[i];
		}

		cout << duplicateNumber(input, size) << endl;
	}

	return 0;
}