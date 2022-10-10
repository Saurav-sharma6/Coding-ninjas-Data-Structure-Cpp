#include <string.h>
using namespace std;

int getCodes(string input, string output[10000]) {
    /*
    You are given the input text and output string array. Find all possible codes and store in the output string array. Don’t print the codes.
    Also, return the number of codes return to the output string. You do not need to print anything.
    */
    if(input.size() == 0)
    {
        output[0]="";
        return 1;
    }
    
    string o1[10000];
    string o2[10000];
    
    int a =input[0]-'0';
    char b = 'a'+a-1;
    
    int s1 = getCodes(input.substr(1),o1);
    
    for(int i=0;i<s1;i++)
    {
        output[i] = b+o1[i];
    }
    
    int fd = input[0]-'0';
    int fd2 = input[1]-'0';
    
    int digit = fd*10+fd2;
    int s2=0;
    if(digit>=10 && digit<=26)
    {
            char c = 'a'+digit-1;
           s2 = getCodes(input.substr(2),o2);
    
    for(int i=0;i<s2;i++)
    {
        output[i+s1] = c+o2[i];
    }
    }

    
    return s1+s2;
    
    
    
}

#include <iostream>
using namespace std;

int main(){
    string input;
    cin >> input;

    string output[10000];
    int count = getCodes(input, output);
    for(int i = 0; i < count && i < 10000; i++)
        cout << output[i] << endl;
    return 0;
}
