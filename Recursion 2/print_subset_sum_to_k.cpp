

void printSubsetsOfArray2(int input[],int size,int output[],int m,int k)
{
    if(k == 0 || size == 0)
    {
        if( size == 0 && k!=0)
        {
            return;
        }
       
        for(int i=0;i<m;i++)
        {
            cout<<output[i]<<" ";
            
        }
        cout<<endl;
        
       
        return;
    }
    int out[1000];
    for(int i=0;i<m;i++)
    {
        out[i] = output[i];
    }
    out[m] = input[0];
    printSubsetsOfArray2(input+1,size-1,out,m+1,k-input[0]);
    printSubsetsOfArray2(input+1,size-1,output,m,k);
    
    
    
}


void printSubsetSumToK(int input[], int size,int k) {
	// Write your code here
    
    int output[1000];
    printSubsetsOfArray2(input,size,output,0,k);
    
}

#include <iostream>
using namespace std;


int main() {
  int input[1000],length,k;
  cin >> length;
  for(int i=0; i < length; i++)
    cin >> input[i];
  cin>>k;
  printSubsetSumToK(input, length,k);
}
