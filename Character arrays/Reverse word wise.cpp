#include<bits/stdc++.h>
void reverse(char input[] , int s ,int e)
{
    while(s<=e)
    {
        char s2 = input[s];
        input[s] = input[e];
        input[e] = s2;
        s++;
        e--;
    }
}

void reverseStringWordWise(char input[]) {
    // Write your code here
    reverse(input,0,strlen(input)-1);
    // cout<<"A"<<input;
    int s = 0;
    int i = 0;
    for( i = 0;input[i]!='\0';i++)
    {
        
        int a = input[i];
        if(a == 32)
        {
            reverse(input,s,i-1);
            s = i+1;
        }
        if(input[i+1] == '\0')
        {
            reverse(input,s,i);
        }
    }
    
}

#include <iostream>
// #include "solution.h"
using namespace std;

int main() {
    char input[1000];
    cin.getline(input, 1000);
    reverseStringWordWise(input);
    cout << input << endl;
}
