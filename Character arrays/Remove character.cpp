void removeAllOccurrencesOfChar(char input[], char c) {
    // Write your code here
    int index = -1;
    for(int i = 0;input[i]!='\0';i++)
    {
        if(input[i] != c)
        {
            index++;
            input[index] = input[i];
            
        }
    }
    index++;
    input[index] = '\0';
}
#include <iostream>
#include <cstring>
using namespace std;

// #include "solution.h"

int main() {
    int size = 1e6;
    char str[size];
    cin.getline(str, size);
    char c;
    cin >> c;
    removeAllOccurrencesOfChar(str, c);
    cout << str;
}