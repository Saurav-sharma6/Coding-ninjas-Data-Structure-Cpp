#include<unordered_map>
int pairSum(int *arr, int n) {
	// Write your code here
	unordered_map<int, int> m;
    int ans=0;
    for(int i=0;i<n;i++){
        int b= -arr[i];
        if(m[b]){
            ans+=m[b];
        }
        m[arr[i]]++;
    }
    return ans;
}

#include <iostream>
using namespace std;

// #include "solution.h"

int main() {
    int n;
    cin >> n;

    int* arr = new int[n];

    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    cout << pairSum(arr, n);

    delete[] arr;
}