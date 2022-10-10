
#include<iostream>

using namespace std;

/*
	To apply the method explained in the hint video, we have to add two more parameters in the function call. This can be done by calling a helper function from given function. The helper function can have three parameters: array, start index, end index.  
	
	Skeleton code to achieve this:
	#include <iostream>
	using namespace std;
	
	void quickSort(int input[], int start, int end)
	{
    		// your code goes here 
	}
	void quickSort(int input[], int size)
	{
    		quickSort(input, 0, size - 1);
	}
		
*/
#include<bits/stdc++.h>
int partition(int input[],int si,int ei)
{
    // if(si>=ei)
    // {
    //     return 0;
    // }
    int count=0;
    int element = input[si];
    //copy
    int si2 = si+1;
    int ei2 = ei;
    
    while(si2<=ei2)
    {
        if(element>=input[si2])
        {
            count++;
        }
        si2++;
    }
    int swap = input[si+count];
    input[si+count] = element;
    input[si] = swap;
    
    int i = si;
    int j = ei;
    
    while(i <= (si+count) && j >= (si+count))
    {
        if(input[i] <= element)
        {
            i++;
          
        }
        else if(input[j] > element)
        {
           j--;
        }
        else
        {
            int swap = input[i];
            input[i] = input[j];
            input[j] = swap;
            i++;
            j--;
        }
    }
    return si+count;
    
    
}



void quickSort2(int input[],int si,int ei)
{
    if(si>=ei)
    {
        return;
    }
    int c =  partition(input,si,ei);
    quickSort2(input,si,c-1);
    quickSort2(input,c+1,ei);
}




void quickSort(int input[], int size) {
  /* Don't write main().
     Don't read input, it is passed as function argument.
     Change in the given array itself.
     Taking input and printing output is handled automatically.
  */
    return quickSort2(input,0,size-1);
    

}   




int main(){
    int n;
    cin >> n;
  
    int *input = new int[n];
    
    for(int i = 0; i < n; i++) {
        cin >> input[i];
    }
    
    quickSort(input, n);
    for(int i = 0; i < n; i++) {
        cout << input[i] << " ";
    }
    
    delete [] input;

}


