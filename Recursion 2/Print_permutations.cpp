#include <iostream>
#include <string>
using namespace std;




void returnPermutations2(string input,string op){
   	/* Don't write main() function.
	 * Don't read input, it is passed as function argument.
	 * Print output as specified in the question
	*/
    if(input.size() == 0)
    {
        cout<<op<<endl;
        return;
    }
    
    int smallAns = 1;
    
    for(int i=0;i<input.size();i++)
    {
        returnPermutations2(input.substr(0,i)+input.substr(i+1),input[i]+op);
        
    }
    

    
}



        
        

void printPermutations(string input){

    returnPermutations2(input,"");
  
}

#include <iostream>
#include <string>
using namespace std;


int main() {
    string input;
    cin >> input;
    printPermutations(input);
    return 0;
}
