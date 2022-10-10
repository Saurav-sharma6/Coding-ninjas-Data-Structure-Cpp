#include<bits/stdc++.h>
char highestOccurringChar(char input[]) {
    // Write your code here
    int arr[256] = {0};
    for(int i = 0;input[i]!='\0';i++)
    {
        arr[input[i]]++;
    }
    int max = INT_MIN;
    char ans ;
    for(int i = 0;i<256;i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
            // int b= 97-i;
            ans =char(i);
        }
    }
    return ans;
}

#include <iostream>
#include <cstring>
using namespace std;

// #include "solution.h"

int main() {
    int size = 1e6;
    char str[size];
    cin >> str;
    cout << highestOccurringChar(str);
}