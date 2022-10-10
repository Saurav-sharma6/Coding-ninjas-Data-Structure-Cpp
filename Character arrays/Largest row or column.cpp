/*
You can use minimum value of integer as -2147483647 and 
maximum value of integer as 2147483647
*/
#include<bits/stdc++.h>
void findLargest(int **input, int nRows, int mCols)
{
    //Write your code here
    
    if(nRows == 0 || mCols == 0)
    {
        cout<<"row "<<"0 "<<"-2147483648";
        return;
    }
    
    bool indicate = false;
    
    int finalsum = INT_MIN;
    int rowindex = 0;
    int colindex = 0;
    
    for(int i=0;i<nRows;i++)
    {
        int sum = 0;
        for(int j=0;j<mCols;j++)
        {
            sum = sum+input[i][j];
        }
        if(sum>finalsum)
        {
            rowindex = i;
            indicate = true;
            finalsum = sum;
        }
        
    }
    
    
    for(int i=0;i<mCols;i++)
    {
        int sum = 0;
        for(int j=0;j<nRows;j++)
        {
            sum = sum+input[j][i];
        }
        if(sum>finalsum)
        {
            colindex = i;
            indicate = false;
            finalsum = sum;
        }
        
    }
    
    if(indicate)
    {
        cout<<"row "<<rowindex<<" "<<finalsum;
    }
    else
    {
        cout<<"column "<<colindex<<" "<<finalsum;
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
		int row, col;
		cin >> row >> col;

		int **input = new int *[row];
		for (int i = 0; i < row; i++)
		{
			input[i] = new int[col];
			for (int j = 0; j < col; j++)
			{
				cin >> input[i][j];
			}
		}

		findLargest(input, row, col);
		cout << endl;
	}
}