bool checkPalindrome(char str[]) {
    // Write your code here
    int i=  0;
    int j = strlen(str)-1;
    while(i<=j)
    {
        if(str[i] != str[j])
        {
            return false;
        }
        i++;
        j--;
    }
    return true;
}
#include <iostream>
#include <cstring>
using namespace std;

// #include "solution.h"

int main() {
    int size = 1e6;
    char str[size];
    cin >> str;
    cout << (checkPalindrome(str) ? "true" : "false");
}