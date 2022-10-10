#include <iostream>
using namespace std;
// arr - input array
// size - size of array
// x - sum of triplets

int tripletSum(int arr[], int size, int x) {
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Print output and don't return it.
     * Taking input is handled automatically.
     */
long i,j,k,a,b,c;
    int count = 0;
    for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;j++)
        {
            for(k=j+1;k<size;k++)
            {
                if(x==arr[i]+arr[j]+arr[k])
                {
                    a=min(arr[i],min(arr[j],arr[k]));
                    c=max(arr[i],max(arr[j],arr[k]));
                 
                    b=x-(c+a);
                    // cout<<a<<" "<<b<<" "<<c<<endl;
                    count++;
                }
            }
        }
    }
    return count;
}

// #include "solution.h"

int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		int size;
		int x;
		cin >> size;

		int *input = new int[size];

		for (int i = 0; i < size; i++)
		{
			cin >> input[i];
		}
		cin >> x;

		cout << tripletSum(input, size, x) << endl;

		delete[] input;
	}

	return 0;
}