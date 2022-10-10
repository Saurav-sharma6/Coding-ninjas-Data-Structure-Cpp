void printSubsetsOfArray2(int input[],int size,int output[],int m)
{
    if(size == 0)
    {
        for(int i=0;i<m;i++)
        {
            cout<<output[i]<<" ";
            
        }
        cout<<endl;
        return;
    }
    printSubsetsOfArray2(input+1,size-1,output,m);
    int out[10000];
    for(int i=0;i<m;i++)
    {
        out[i] = output[i];
    }
    out[m] = input[0];
    printSubsetsOfArray2(input+1,size-1,out,m+1);
    
    
}


void printSubsetsOfArray(int input[], int size) {
	// Write your code here
    
    int output[1000];
    printSubsetsOfArray2(input,size,output,0);
    
}


#include <iostream>
using namespace std;


int main() {
  int input[1000],length;
  cin >> length;
  for(int i=0; i < length; i++)
  	cin >> input[i];
  printSubsetsOfArray(input, length);
}
