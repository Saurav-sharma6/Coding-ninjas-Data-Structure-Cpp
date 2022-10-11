#include <iostream>
#include <vector>
using namespace std;

vector<int>* dfs(int **edges,int start,int end,int v,bool *visited){
    visited[start] = true;
    if(start == end){
        vector<int>*array = new vector<int>(0);
        array->push_back(end);
        return array;
    }
    
    for(int i=0;i<v;i++){
        if(i == start){
            continue;
        }
        else if(edges[start][i] == 1 && !visited[i]){
            vector<int>*array = dfs(edges,i,end,v,visited);
            if(array!=NULL){
                array->push_back(start);
                return array;
            }
        }
    }
        return NULL;
    
    
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
    
    if(start == end){
        cout<<start<<endl;
        return 0;
    }
    
    bool *visited = new bool[v];
    
    for(int i=0;i<v;i++){
        visited[i] = false;
    }
    vector<int>*ans = dfs(edges,start,end,v,visited);
    if(ans!=NULL){

    for(int i=0;i<ans->size();i++){
       cout<<ans->at(i)<<" ";
    }
    }
    
    
    
}