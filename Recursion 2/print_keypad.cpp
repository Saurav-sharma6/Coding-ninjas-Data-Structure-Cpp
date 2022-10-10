#include <iostream>
#include <string>
using namespace std;
string key[] = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};


void printKeypad2(int num,string output)
{
    if(num == 0)
    {
        cout<<output<<endl;
        return;
    }
    
    string a = key[num%10];
    
    for(int i = 0;i<a.size();i++)
    {
        printKeypad2(num/10,a[i]+output);
    }
}

void printKeypad(int n){
    /*
    Given an integer number print all the possible combinations of the keypad. You do not need to return anything just print them.
    */
    if(n == 0)
    {
        return;
    }
    printKeypad2(n,"");
    
}


#include <iostream>
#include <string>

using namespace std;

int main(){
    int num;
    cin >> num;

    printKeypad(num);

    return 0;
}
