#include<bits/stdc++.h>

class pq{
    public:
    vector<int> cbt;

    pq(){

    }

    int isempty(){
        return cbt.size();
    }

    int size(){
        return bt.size();
    }

    int getmin(){
        if(cbt.size() == 0){
            return INT_MIN;
        }
        return cbt[0];
    }

    void insert(int element){
        cbt.push_back(element);
        int childindex = cbt.size()-1;
       while(childindex>0){
        int parentindex = (childindex-1)/2;

        if(cbt[parentindex]>cbt[childindex]){
            int temp = cbt[parentindex];
            cbt[parentindex] = cbt[childindex];
            cbt[childindex] = temp;
        }else{
            break;
        }
       childindex = parentindex;
       }
    }


};