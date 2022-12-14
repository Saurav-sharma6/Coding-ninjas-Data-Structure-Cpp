// input - input array
// size - length of input array
// element - value to be searched
int search(int input[],int si,int ei,int element)
{
    if(si>=ei)
    {
        return -1;
    }
    int mid = (si+ei)/2;
    if(input[mid] == element)
    {
        return mid;
    }
    else if(input[mid] < element)
    {
        return search(input,mid+1,ei,element);

    }
    else if(input[mid] > element)
    {
        return search(input,si,mid-1,element);
    }
}

int binarySearch(int input[], int size, int element) {
    // Write your code here

    return search(input,0,size-1,element);
}


#include <iostream>

using namespace std;

int main() {
    int input[100000],length,element, ans;
    cin >> length;
    for(int i =0;i<length;i++)
    { 
        cin >> input[i];
    }

    cin>>element;
    ans = binarySearch(input, length, element);
    cout<< ans << endl;
}
