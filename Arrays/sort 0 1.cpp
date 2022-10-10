#include <iostream>
#include <algorithm>
using namespace std;
void sortZeroesAndOne(int *input, int size)
{
    //Write your code here
    int j = size-1;
    int i = 0;
    while(i<=j)
    {
        if(input[j] ==0 )
        {
            int swap = input[j];
            input[j] = input[i];
            input[i] = swap;
            i++;
        }
        else
        {
            j--;
        }
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
		int *input = new int[size];

		for (int i = 0; i < size; ++i)
		{
			cin >> input[i];
		}

		sortZeroesAndOne(input, size);

		for (int i = 0; i < size; ++i)
		{
			cout << input[i] << " ";
		}

		cout << endl;
		delete[] input;
	}

	return 0;
}