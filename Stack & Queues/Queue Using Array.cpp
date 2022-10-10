#include<bits/stdc++.h>

using namespace std;
class queue1{
    int *arr;
    int size ;
    int firstIndex;
    int nextIndex;
    int capacity;
    public:

    //constructor
   queue1(int size1){
   arr = new int[size1];
   size = 0;
   firstIndex=-1;
   nextIndex = 0;
   capacity = size1;
    }

    int getSize(){
        return size;
    }
    bool isEmpty(){
        return size == 0;
    }
    void enqueue(int data){
        if(size == capacity){
            cout<<"Queue is Full !";
            return;
        }
        if(firstIndex == -1){
            firstIndex = 0;
        }
        arr[nextIndex] = data;
        nextIndex = (nextIndex+1)%capacity;
        size++;

    }
    int front(){
        if(size == 0){
            cout<<"Queue Empty !!";
            return -1;
        }
        return arr[firstIndex];
    
    }

    int dequeue(){

       if(size == 0){
            cout<<"Queue Empty !!";
            return -1;
        }
        int ans = arr[firstIndex];
        firstIndex = (firstIndex+1)%capacity;
        size--;
        if(size == 0){
            firstIndex = -1;
            nextIndex = 0;
        }
        return ans;  
  
    }


};

int main(){

    queue1 a(5);
    a.enqueue(10);
    a.enqueue(20);
    a.enqueue(30);
    a.enqueue(40);
    a.enqueue(50);
    a.enqueue(60);
    cout<<"front is "<<a.front();
    cout<<endl;
    cout<<a.dequeue()<<endl;
    cout<<a.dequeue()<<endl;
    cout<<a.dequeue()<<endl;
    cout<<a.dequeue()<<endl;
    cout<<a.dequeue()<<endl;
    cout<<a.dequeue()<<endl;

    cout<<a.dequeue()<<endl;



}