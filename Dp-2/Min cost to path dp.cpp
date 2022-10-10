#include <bits/stdc++.h>
using namespace std;
int minCostPath(int **arr , int m , int n){
    int **ans = new int*[m];
    for(int i=0;i<m;i++){
        ans[i] = new int[n];
        for(int j=0;j<n;j++){
            ans[i][j] = -1;
        }
    }
    ans[m-1][n-1] = arr[m-1][n-1];
    for(int i=n-2;i>=0;i--){
        ans[m-1][i] = arr[m-1][i]+arr[m-1][i+1];
    }

    // bottom to top
      for(int i=m-2;i>=0;i--){
        ans[i][n-1] = arr[i+1][n-1]+arr[i][n-1];
    }

    //remaining cells

    for(int i=m-2;i>=0;i--){
        for(int j=n-2;j>=0;j--){
            ans[i][j] = min(ans[i+1][j],min(ans[i][j+1],ans[i+1][j+1]))+arr[i][j];
        }
    }
    return ans[0][0];


    //     for(int i=0;i<m;i++){
    //     // ans[i] = new int[n];
    //     for(int j=0;j<n;j++){
    //         cout<<ans[i][j]<<" " ;
    //     }
    //     cout<<endl;
    // }

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