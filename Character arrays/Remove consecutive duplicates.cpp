void removeConsecutiveDuplicates(char input[]) {
    // Write your code here
    int length = 0;
    for(int i = 0;input[i]!='\0';i++)
    {
        length++;
    }
    char newchar[length+1];
    int index = 0;
    newchar[0] = input[0];
    for(int i =0;input[i]!='\0';i++)
    {
        if(input[i]!=input[i+1])
        {
            index++;
            newchar[index] = input[i+1];
        }
    }
    index++;
    newchar[index] = '\0';
    int k = 0;
    for( k = 0;newchar[k]!='\0';k++)
    {
        input[k] = newchar[k];
    }
    input[k] = '\0';
}


#include <iostream>
#include <cstring>
using namespace std;

// #include "solution.h"

int main() {
    int size = 1e6;
    char str[size];
    cin >> str;
    removeConsecutiveDuplicates(str);
    cout << str;
}