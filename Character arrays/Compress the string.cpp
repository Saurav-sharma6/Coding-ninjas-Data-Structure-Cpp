#include<bits/stdc++.h>

using namespace std;
string getCompressedString(string &input) {
    
    if(input.length() == 0)
    {
        return "";
    }

    int start = 0;
    int end = 0;
    
    string c = "";
    
    while(start<input.length())
    {
        while((start<input.length()) && (input[start] == input[end]))

        {
            end++;
        }
        int total = end-start;
        if(total !=1)
        {
            c +=input[start];
            c +=(char)(total+'0');
        }
        else
        {
            c+=input[start];
        }
        start = end;
    }
    return c;
}

#include <iostream>
#include <cstring>
#include<string>
using namespace std;

// #include "solution.h"

int main() {
    int size = 1e6;
    string str;
    cin >> str;
    str = getCompressedString(str);
    cout << str << endl;
}