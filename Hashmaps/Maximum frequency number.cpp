#include <iostream>
using namespace std;

// #include "solution.h"

#include<bits/stdc++.h>
int highestFrequency(int arr[], int n) {
    // Write your code here
    unordered_map<int , int> map;
    
    for(int i=0;i<n;i++){
        map[arr[i]]++;
    }
    int max = INT_MIN;
    int ans;
    for(int i=0;i<n;i++){
        if(map[arr[i]]>max){
            max = map[arr[i]];
            ans = arr[i];
        }
    }
    return ans;
    
}

int main() {
    int n;
    cin >> n;

    int* arr = new int[n];

    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    cout << highestFrequency(arr, n);

    delete[] arr;
}

