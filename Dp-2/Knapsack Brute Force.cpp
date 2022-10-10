    
#include <iostream>
using namespace std;
int knapsack(int *weights, int *values, int n, int maxWeight,int result)
{
	//write your code here
    
    if( n == 0){
        if(maxWeight < 0){
            return 0;
        }
        return result;
    }
    
    int a = knapsack(weights+1,values+1,n-1,maxWeight,result); 
    int b = knapsack(weights+1,values+1,n-1,maxWeight-weights[0],result+values[0]);
    
    return max(a,b);
    
}

int knapsack(int *weights, int *values, int n, int maxWeight)
{
    return knapsack(weights,values,n,maxWeight,0);
}



int main()
{
	int n;
	cin >> n;

	int *weights = new int[n];
	int *values = new int[n];

	for (int i = 0; i < n; i++)
	{
		cin >> weights[i];
	}

	for (int i = 0; i < n; i++)
	{
		cin >> values[i];
	}

	int maxWeight;
	cin >> maxWeight;

	cout << knapsack(weights, values, n, maxWeight) << endl;

	delete[] weights;
	delete[] values;
}