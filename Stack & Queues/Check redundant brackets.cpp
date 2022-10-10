#include<bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;
bool checkRedundantBrackets(string expression) {
	// Write your code here
    
    int count = 0;
    stack<char> s1;
    
    int i = 0;
    while(expression[i]!='\0'){
        if(expression[i] !=')'){
            s1.push(expression[i]);
        }
        else{
            while(s1.top()!='('){
                count++;
                s1.pop();
            }
            if(count == 0 || count == 1){
                return true;
            }
            else
            {
                s1.pop();
                count = 0;
            }
        }
        i++;
    }
    return false;
}



// #include "solution.h"

int main() {
    string input;
    cin >> input;
    cout << ((checkRedundantBrackets(input)) ? "true" : "false");
}