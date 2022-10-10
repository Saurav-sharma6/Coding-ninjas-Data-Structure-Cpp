#include<bits/stdc++.h>
using namespace std;

class stacky{
    private:
    int *arr;
    int nextIndex;
    int capacity;

    public:
    stacky(int size)
    {
        arr = new int[size];
        nextIndex = 0;
        capacity = size;
    }

    void push(int data){
        if(nextIndex >= capacity)
        {
            int * newArray = new int[capacity*2];
            cout<<"Stack Building ";
            for(int i=0;i<capacity;i++)
            {
                newArray[i] = arr[i];

            }
            arr = newArray;
            arr[nextIndex] = data;
            capacity = capacity*2;
            delete newArray; 
        }
        else
        {
            arr[nextIndex] = data;
        }
            nextIndex++;
        
    }

    int pop()
    {

        if(nextIndex > 0)
        {
            int a = arr[nextIndex-1];
            nextIndex--;
            return a;
        }

        
        return -1;
    }

    int top()
    {
        if(nextIndex > 0)
        {
            return arr[nextIndex-1];
        } 
        return -1;
    }

    bool isEmpty()
    {
        return nextIndex == 0;
    }

    int size()
    {
        if(nextIndex>0)
        {
            return nextIndex;
        }
        return 0;
    }
};

int main(){

    stacky a(5);
    a.push(10);
    a.push(20);
    a.push(30);
    a.push(40);
    a.push(50);
    a.push(60);
    a.push(60);
    cout<<a.size();
    
    // cout<<a.pop()<<endl;
    // cout<<a.pop()<<endl;
    // cout<<a.pop()<<endl;
    // cout<<a.pop()<<endl;
    // cout<<a.pop()<<endl;
    
}