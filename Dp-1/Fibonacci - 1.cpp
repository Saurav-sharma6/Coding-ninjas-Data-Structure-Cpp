//memoization approach 

#include<bits/stdc++.h>

using namespace std;

int fib(int *arr, int n){
    if(n<=1){
        return n;
    }

    if(arr[n]!=-1){
        return arr[n];
    }

    arr[n] = fib(arr,n-1)+fib(arr,n-2);
    return arr[n];
}

int main(){
    
    int n;
    cin>>n;
    int *arr = new int[n+1];

    for(int i=0;i<=n;i++){
        arr[i] = -1;
    }
    fib(arr,n);

    cout<<arr[n];


}