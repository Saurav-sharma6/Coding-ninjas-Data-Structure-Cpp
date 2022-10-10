#include<bits/stdc++.h>
using namespace std;

void print(int **edges,int n,int sv,bool* visited){
    cout<<sv<<endl;
    visited[sv] = true;

    for(int i=0;i<n;i++){
        if(sv == i){
            continue;
        }
        if(edges[sv][i] == 1){
            if(visited[i] == true){
                continue;
            }
            print(edges,n,i,visited);
        }
    }


}


int main(){
    int v,e;
    cin>>v>>e;
    int **edges = new int*[v];
    for(int i=0;i<v;i++){
        edges[i] = new int[v];
        for(int j=0;j<v;j++){
            edges[i][j] = 0;
        }
    }
    for(int i=0;i<e;i++){
        int f,s;
        cin>>f>>s;
        edges[f][s] = 1;
       
        edges[s][f] = 1;
    }

    bool * visited = new bool[v];
    for(int i=0;i<v;i++){
        visited[i] = false;
    }

  print(edges,v,0, visited);

}