#include<unordered_map>
#include <iostream>
#include <string>
using namespace std;
string uniqueChar(string str) {
	// Write your code here
    unordered_map<char,bool> map;
    int index = 0;
    char * a = new char[100];
    
    for(int i=0;i<str.size();i++){
        if(map[str[i]]){
            continue;
        }
        else{
            a[index] = str[i];
            map[str[i]] = true;
            index++;
        }
        cout<<"index "<<index<<endl;
    }


    a[index] = '\0';
    // cout<<"a for "<<a<<endl;
    return a;
}



// #include "solution.h"

int main() {
    string str;
    cin >> str;
    cout << uniqueChar(str);
}