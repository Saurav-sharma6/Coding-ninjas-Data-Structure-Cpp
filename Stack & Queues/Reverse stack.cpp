
#include <iostream>
#include <stack>
using namespace std;
void reverseStack(stack<int> &input, stack<int> &extra) {
    //Write your code here
    if(input.size() == 0){
        return;
    }
    int a = input.top();
    input.pop();
    reverseStack(input,extra);
    while(input.size()!=0){
        extra.push(input.top());
        input.pop();
    }
    input.push(a);
    while(extra.size()!=0){
        input.push(extra.top());
        extra.pop();
    }                                                                            
    
}


// #include "solution.h"

int main() {
    stack<int> input, extra;
    int size;
    cin >> size;

    for (int i = 0, val; i < size; i++) {
        cin >> val;
        input.push(val);
    }

    reverseStack(input, extra);

    while (!input.empty()) {
        cout << input.top() << " ";
        input.pop();
    }
}