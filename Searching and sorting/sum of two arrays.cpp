void sumOfTwoArrays(int *input1, int size1, int *input2, int size2, int *output)
{
    if(size2 == 0)
    {
        int myindex = max(size1,size2);
        for(int i = myindex ;i>=0;i--)
        {
            output[myindex] = input1[i-1];
            myindex--;
        }
        output[myindex] = 0;
        return;
       
    }
      if(size1 == 0)
    {
        int myindex = max(size1,size2);
        for(int i = myindex ;i>=0;i--)
        {
            output[myindex] = input2[i-1];
            myindex--;
            
        }
        output[myindex] = 0;
        return;
       
    }
    //Write your code here
    int myindex = max(size1,size2);
     int count = max(size1,size2);
    int carry = 0;
    int i = size1-1;
    int j = size2-1;
    while(count != 0)
    {
        int ans = input1[i] + input2[j] + carry;
        if(ans > 9)
        {
            carry = ans/10;
        }
        else
        {
            carry = 0;
        }
        output[myindex] = ans%10;
        myindex--;
        i--;
        j--;
        count--;
        
            
    }
    if(carry != 0 )
    {
        output[myindex] = carry;
    }
    else
    {
        output[myindex] = 0;
        
    }
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
		int size1;
		cin >> size1;

		int *input1 = new int[size1];

		for (int i = 0; i < size1; ++i)
		{
			cin >> input1[i];
		}

		int size2;
		cin >> size2;

		int *input2 = new int[size2];

		for (int i = 0; i < size2; ++i)
		{
			cin >> input2[i];
		}

		int outsize = 1 + max(size1, size2);

		int *output = new int[outsize];

		sumOfTwoArrays(input1, size1, input2, size2, output);

		for (int i = 0; i < outsize; ++i)
		{
			cout << output[i] << " ";
		}

		delete[] input1;
		delete[] input2;
		delete[] output;
		cout << endl;
	}

	return 0;
}