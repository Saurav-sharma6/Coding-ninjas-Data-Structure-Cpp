#include<bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;

int countBracketReversals(string input) {
	// Write your code here
    if(input.size()%2!=0){
        return -1;
    }
    stack<char> s1;
    int i = 0;
    int answer = 0;
    while(input[i]!='\0'){
        if(input[i] == '{'){
            s1.push(input[i]);
        }
        else if(input[i] == '}'){
            if(s1.size()!=0){
            if(s1.top() == '{'){
                s1.pop();
            }
                else{
                    s1.push(input[i]);
                }
        }
            else{
                s1.push(input[i]);
            }
        }
        i++;
    }
    while(s1.size()!=0){
        char c1 = s1.top();
        s1.pop();
        char c2 = s1.top();
        if(c1 == c2){
            answer=answer+1;

        }
        else{
            answer=answer+2;
           
            
        }
        s1.pop();
        
        
    }
    
    return answer;
    
}


// #include "solution.h"

int main() {
    string input;
    cin >> input;
    cout << countBracketReversals(input);
}