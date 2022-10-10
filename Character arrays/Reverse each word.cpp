void reverse(char input[],int start , int end)
{
    while(start <= end)
    {
        char swap = input[start];
        input[start] = input[end];
        input[end] = swap;
        start++;
        end--;
    }
}


void reverseEachWord(char input[]) {
    // Write your code here
    int startindex = 0;
    for(int i = 0; input[i]!='\0';i++)
    {
        if(input[i+1] == '\0')
        {
            reverse(input,startindex,i);
        }
        if(input[i] == ' ')
        {
            reverse(input,startindex,i-1);
            startindex = i+1;
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
    cin.getline(str, size);
    reverseEachWord(str);
    cout << str;
}