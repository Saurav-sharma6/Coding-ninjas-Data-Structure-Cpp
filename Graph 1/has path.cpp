#include <iostream>
using namespace std;

// in dfs one case was not workign where start > end 

// void dfs(int **edges,int sv,int v,bool *visited){
//     visited[sv] = true;
    
//     for(int i=sv;i<v;i++){
//         if(i == sv){
//             continue;
//         }
//         else if(edges[sv][i] == 1 && !visited[i]){
//             dfs(edges,i,v,visited);
//         }
//     }
    
//  }
#include<bits/stdc++.h>
void print(int ** edges, int n, int sv, bool *visited){
    queue<int> q;
    q.push(sv); //intially push zero
    visited[sv] = true;  //marking it true
    while(!q.empty()){  // we will not use recursion here,as we did in level order traversal  
        int front = q.front();   //push first element from queue
        // cout<<front<<" "; //print it out
        q.pop(); // and remove it from queue
        for(int i=1;i<n;i++){  //
            if(i==front)  //there will be no edges from same node to same node
                continue;  // in case of that just continue
            if(edges[front][i]==1){  //now we have front, check that row  and check front with every element 
                if(visited[i]) //it should be unvisited
                    continue;    
                q.push(i);  //push 
                 visited[i] = true;  //marking it true
            }
            
        }
    }
}


int main() {
    // Write your code here
    
    int v,e;
    cin>>v>>e;
    
    int **edges = new int*[v];
    
    for(int i=0;i<v;i++){
        edges[i] = new int[v];
        for(int j=0;j<v;j++){
            edges[i][j] = -1;
        }
    }
    for(int i=0;i<e;i++){
    int f,s;
        cin>>f>>s;
        edges[f][s] =1;
        edges[s][f] =1;
    }
    int start,end;
    cin>>start>>end;
    
    bool *visited = new bool[v];
    
    for(int i=0;i<v;i++){
        visited[i] = false;
    }
    
    print(edges,v,start,visited);
    if(visited[end] ){
        cout<<"true"<<endl;
    }
    else{
        cout<<"false"<<endl;
    }
    
    return 0;
    
    
    
}