int arrayRotateCheck(int *input, int size)
{
    //Write your code here
    int c= 0 ;
    int i = 0;
    while(i<size-1)
    {
        if(input[i] < input[i+1])
        {
            c = c+1;
        }
        else
        {
            return c+1;
        }
        i++;
      
    }
    return 0;
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

		cout << arrayRotateCheck(input, size) << endl;
		delete[] input;
	}
	
	return 0;
}