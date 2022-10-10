void trimSpaces(char input[]) {
    // Write your code here
    int i = 0;
    for(int j = 0;input[j] != '\0' ; j++)
    {
        int a = input[j];
        if(a!=32)
        {
            input[i] = input[j];
            i++;
        }
        else
        {
            continue;
        }
    }
    input[i] = '\0';
}

#include <iostream>
#include <cstring>
using namespace std;

// #include "solution.h"

int main() {
    char input[1000000];
    cin.getline(input, 1000000);
    trimSpaces(input);
    cout << input << endl;
}

