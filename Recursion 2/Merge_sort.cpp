

#include <iostream>

using namespace std;
void mergeSort2(int input[],int si,int ei)
{
     if(si >= ei)
    {
        return;
    }
 
   
    int mid = (ei+si)/2;

    
    mergeSort2(input,si,mid);
    mergeSort2(input,mid+1,ei);
    
    
    int fa[ei+1];
    int index = 0;
    int i = si;
    int j = mid+1;
    
    while(i<=mid && j<=ei)
    {
        if(input[i] == input[j])
        {
            fa[index++] = input[i];
            fa[index++] = input[j];
            
            i++;
            j++;
            continue;
        }
        
        
        if(input[i]<input[j])
        {
            fa[index] = input[i];
            i++;
            index++;
        }
      else{
            fa[index] = input[j];
            j++;
            index++;
        }
    }
    
   
        while(i<=mid)
        {
             fa[index++] = input[i];
            i++;
        }
    
    
  
        while(j<=ei)
        {
             fa[index++] = input[j];
            j++;
        }
    

    int k = 0;
    for(int l=si;l<=ei;l++)
    {
        input[l] = fa[k];
        k++;
    }
    
    
    
    
}


void mergeSort(int input[], int size){
	// Write your code here
    if(size == 1)
    {
        return;
    }
    
    mergeSort2(input,0,size-1);
    return;
        
}


int main() {
  int length;
  cin >> length;
  int* input = new int[length];
  for(int i=0; i < length; i++)
    cin >> input[i];
  mergeSort(input, length);
  for(int i = 0; i < length; i++) {
    cout << input[i] << " ";
  }
}