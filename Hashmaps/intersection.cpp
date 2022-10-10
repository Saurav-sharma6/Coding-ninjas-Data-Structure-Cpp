#include <iostream>
using namespace std;

// #include "solution.h"

#include<bits/stdc++.h>
#include<bits/stdc++.h>
void printIntersection(int arr1[], int arr2[], int n, int m) {
    // Write your code here
    unordered_map<int,int> map;
    
    for(int i=0;i<n;i++){
        map[arr1[i]]++;
    }
    
    for(int i=0;i<m;i++){
        if(map.count(arr2[i])>0){
            cout<<arr2[i]<<endl;
            map[arr2[i]]--;
              if(map[arr2[i]] == 0){
                map.erase(arr2[i]);
                // break;
            }
        }
    }
}

int main() {
    int n;
    cin >> n;

    int* arr1 = new int[n];

    for (int i = 0; i < n; ++i) {
        cin >> arr1[i];
    }

    int m;
    cin >> m;

    int* arr2 = new int[m];

    for (int i = 0; i < m; ++i) {
        cin >> arr2[i];
    }

    printIntersection(arr1, arr2, n, m);

    delete[] arr1;
    delete[] arr2;
}