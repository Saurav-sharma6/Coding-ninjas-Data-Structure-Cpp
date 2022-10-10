#include <iostream>
#include<queue>
using namespace std;

void print(int ** edges, int n, int sv, bool *visited){
    queue<int> q;
    q.push(sv); //intially push zero
    visited[sv] = true;  //marking it true
    while(!q.empty()){  // we will not use recursion here,as we did in level order traversal  
        int front = q.front();   //push first element from queue
        cout<<front<<" "; //print it out
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
    int V, E;
    cin >> V >> E;  // same as dfs ,we are inputing vertices and edges
    
    int **edges = new int*[V]; // creating 2-d array and
    for(int i=0;i<V;i++){
        edges[i] = new int[V];
        for(int j=0;j<V;j++)
            edges[i][j] = 0;  // initializes it with zero
    }
    
    for(int i=0;i<E;i++){
        int s,f;  //inputting both thee edges
        cin>>s>>f;  
        edges[s][f] = 1;  // and marking them as 1,
        edges[f][s] = 1; //in both the ways
    }
    
    bool * visited = new bool[V]; 
    for(int i=0;i<V;i++){
        visited[i] = false;  //marking initially that all the vertices are un-visited 
    }
     // this below part is important
 
    for(int i=0;i<V;i++){ // loop used bcz there may be disconnected components
       if(!visited[i])
            print(edges, V, i, visited);
    }
        
  return 0;
}