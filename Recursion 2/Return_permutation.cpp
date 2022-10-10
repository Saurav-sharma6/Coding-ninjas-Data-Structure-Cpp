#include <string>
using namespace std;

int index = 0;

void returnPermutations2(string input, string output[],string op){
   	/* Don't write main() function.
	 * Don't read input, it is passed as function argument.
	 * Print output as specified in the question
	*/
    if(input.size() == 0)
    {
        output[index] = op;   
        index++;
        return;
    }
    
    int smallAns = 1;
    
    for(int i=0;i<input.size();i++)
    {
        returnPermutations2(input.substr(0,i)+input.substr(i+1),output,input[i]+op);
        
    }
    
    
    // int smallOutput = returnPermutations(,)      
    // return small*input.size();
    
}

int returnPermutations(string input, string output[]){
    returnPermutations2(input,output,"");
    return index;


    
}

#include <iostream>
#include <string>

using namespace std;

int main(){
    string input;
    cin >> input;
    string output[10000];
    int count = returnPermutations(input, output);
    for(int i = 0; i < count && i < 10000; i++){
        cout << output[i] << endl;
    }
    return 0;
}


