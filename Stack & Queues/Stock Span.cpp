#include <iostream>
using namespace std;


#include<bits/stdc++.h>
int* stockSpan(int *price, int size)  {
    
	// Write your code here
    
    stack<int> s1;
    int *ans = new int[size];
    int i = 0;
    while(i<size){
        int number = price[i];
        
        if(s1.size() == 0){
            ans[i] = i+1;
            s1.push(i);
            
        }
        else {
            if(price[i]>price[s1.top()]){
                while(s1.size()!=0 && price[s1.top()] < price[i]){
                    s1.pop();
                }
                if(s1.size() == 0){
                    s1.push(i);
                    ans[i] = i+1;
                }
                else
                {
                ans[i] = i - s1.top();
                s1.push(i);   
                }
            }
            else if(price[i]<=price[s1.top()]){
                s1.push(i);
                ans[i] = 1;
            }
        }
        
        
        i++;
    }
    return ans;
    
    
    
    
}


// #include "solution.h"

int main() {
    int size;
    cin >> size;

    int *input = new int[size];
    for (int i = 0; i < size; i++) {
        cin >> input[i];
    }

    int *output = stockSpan(input, size);
    for (int i = 0; i < size; i++) {
        cout << output[i] << " ";
    }

    cout << "\n";

    delete[] input;
    delete[] output;
}