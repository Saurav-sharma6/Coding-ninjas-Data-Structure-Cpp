#include <bits/stdc++.h>
using namespace std;

// #include "solution.h"

// Brute Force

// int minCostPath2(int **input, int m1, int n1,int m , int n)
// {
// 	//Write your code here
//     if(n1 >= n){
//         return INT_MAX;
//     }
//     if(m1 >= m){
//         return INT_MAX;
//     }
    
//     int x = minCostPath2(input,m1,n1+1,m,n);
//     int y = minCostPath2(input,m1+1,n1,m,n);
//     int z = minCostPath2(input,m1+1,n1+1,m,n);
//     int ans = min(x,min(y,z));
//     if(ans == INT_MAX){
//         return input[m1][n1];
//     }
//     return ans+input[m1][n1];
    
// }

// int minCostPath(int **input, int m, int n)
// {
//     return minCostPath2(input,0,0,m,n);
    
// }

int minCostPath2(int **input,int m , int n,int **temp ,int m1, int n1)
{
    if(n1 >= n){
        return INT_MAX;
    }
    if(m1 >= m){
        return INT_MAX;
    }
    
    if(temp[m1][n1]!=-1){
        return temp[m1][n1];
    }
    int x = minCostPath2(input,m,n,temp,m1,n1+1);
    int y = minCostPath2(input,m,n,temp,m1+1,n1);
    int z = minCostPath2(input,m,n,temp,m1+1,n1+1);
    int ans = min(x,min(y,z));
    if(ans == INT_MAX){
        temp[m1][n1] = input[m1][n1];
        return input[m1][n1];
    }
    temp[m1][n1] = ans+input[m1][n1];
    return ans+input[m1][n1];
    
    
}
int minCostPath(int **input, int m, int n)
{
        int **temp = new int *[m];
		for (int i = 0; i < m; i++)
		{
			temp[i] = new int[n];
			for (int j = 0; j < n; j++)
			{
				temp[i][j] = -1;
			}
		}
    
    return minCostPath2(input,m,n,temp,0,0);

    
}

int main()
{
	int **arr, n, m;
	cin >> n >> m;
	arr = new int *[n];
	for (int i = 0; i < n; i++)
	{
		arr[i] = new int[m];
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> arr[i][j];
		}
	}
	cout << minCostPath(arr, n, m) << endl;
}