#include<bits/stdc++.h>

using namespace std;

    int longestCommonSubsequence(string a, string b ,int **arr) {
            if(a.size() == 0 || b.size() == 0){
        return 0;
    }
        int m = a.size();
        int n = b.size();
        
        if(arr[m][n]!=-1){
            return arr[m][n];
        }

    if(a[0] == b[0]){
       arr[m][n] =  1+longestCommonSubsequence(a.substr(1),b.substr(1),arr);
        return arr[m][n];
    }

    else{
        int x = longestCommonSubsequence(a.substr(1),b,arr);
        int y = longestCommonSubsequence(a,b.substr(1),arr);
        int z = longestCommonSubsequence(a.substr(1),b.substr(1),arr);
         arr[m][n] = max(x,max(y,z));
        return arr[m][n];
    }
    }
    
    int longestCommonSubsequence(string a, string b ){
        
        int m = a.size()+1;
        int n = b.size()+1;
        int **arr = new int*[m+1];
        
        for(int i=0;i<=m;i++){
            arr[i] = new int[n+1];
            for(int j=0;j<=n;j++){
                arr[i][j]=-1;
            }
        }
        cout<<"Printing array"<<endl;



        int p =  longestCommonSubsequence(a,b,arr); 
           for(int i=0;i<=m;i++){
            for(int j=0;j<=n;j++){
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
        return p;

    }

int main(){
    string a,b;
    cin>>a>>b;
    cout<<longestCommonSubsequence(a,b)<<endl;
    return 0;
}