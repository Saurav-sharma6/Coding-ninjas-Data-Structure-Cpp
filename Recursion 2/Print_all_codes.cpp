#include <string.h>
using namespace std;


void printAllPossibleCodes2(string input,string output)
{
    if(input.size() == 0)
    {
        cout<<output<<endl;
        return;
    }
    int a =input[0]-'0';
    char b = 'a'+a-1;
    printAllPossibleCodes2(input.substr(1),output+b);
    int fd = input[0]-'0';
    int fd2 = input[1]-'0';
    
    int digit = fd*10+fd2;
    int s2=0;
    if(digit>=10 && digit<=26)
    {
            char c = 'a'+digit-1;
            printAllPossibleCodes2(input.substr(2),output+c);
  
}
}

void printAllPossibleCodes(string input) {
    /*
    Given the input as a string, print all its possible combinations. You do not need to return anything.
    */
    printAllPossibleCodes2(input,"");
    
}

#include <iostream>

using namespace std;

int main(){
    string input;
    cin >> input;

    printAllPossibleCodes(input);
    return 0;
}
