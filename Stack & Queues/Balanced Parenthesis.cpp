#include<stack>


#include <iostream>
#include <string>
using namespace std;


bool isBalanced(string expression) 
{
    // Write your code here
    stack<int> s;
    
    int i=0;
    while(expression[i]!='\0'){
        if(expression[i] == '(' || expression[i] == '{'){
            s.push(expression[i]);
        }
        else if(expression[i] == ')' || expression[i] == '}'){
            if(s.size() == 0){
                return false;
            }
            char p = s.top();
            if(expression[i] == ')' && p == '('){
                s.pop();
            }
            else if(expression[i] == '}' && p == '{'){
                s.pop();
            }
            else{
                return false;
            }
        }
 
        i++;
    }
    if(s.size()!=0)
    {
        return false;
    }
    return true;
        
}


// #include "solution.h"

int main() 
{
    string input;
    cin >> input;
    cout << ((isBalanced(input)) ? "true" : "false");
}