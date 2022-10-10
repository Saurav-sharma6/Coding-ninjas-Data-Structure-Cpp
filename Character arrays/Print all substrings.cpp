#include<bits/stdc++.h>
void printSubstrings(char input[]) {
    
    // Write your code here
    
    for(int i=0;input[i]!='\0';i++)
    {
        cout<<input[i]<<endl;
    }
    for(int k=0;k<strlen(input)-1;k++)
    {
    for(int i =k+1;i<strlen(input);i++)
    {
        for(int j =k ;j<=i;j++)
        {
            cout<<input[j];
        }
        cout<<endl;
    }
    }
}

#include <iostream>
#include <cstring>
using namespace std;

// #include "solution.h"

int main() {
    int size = 1e6;
    char str[size];
    cin >> str;
    printSubstrings(str);
}