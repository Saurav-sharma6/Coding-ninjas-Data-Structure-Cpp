
#include <string>
using namespace std;
string key[] = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};


int keypad(int num, string output[]){
    /* Insert all the possible combinations of the integer number into the output string array. You do not need to
    print anything, just return the number of strings inserted into the array.
    */
    
    if(num <= 0)
    {
        output[0] = "";
        return 1;
    }
    
    int size = keypad(num/10,output);
    string s = key[num%10];
    
    string op[10000];
    int index = 0;
    
    for(int i = 0;i<s.size();i++)
    {
        for(int j=0;j<size;j++)
        {
        op[index++] = output[j]+ s[i] ; 
        }
       
    }
    
    for(int i = 0;i<size*s.size();i++)
    {
        output[i] = op[i];
    }
    return size*s.size();
    
    
    
}

#include <iostream>
#include <string>

using namespace std;

int main(){
    int num;
    cin >> num;

    string output[10000];
    int count = keypad(num, output);
    for(int i = 0; i < count && i < 10000; i++){
        cout << output[i] << endl;
    }
    return 0;
}

