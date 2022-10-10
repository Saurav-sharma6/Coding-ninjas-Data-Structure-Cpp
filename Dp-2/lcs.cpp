#include<bits/stdc++.h>

using namespace std;

int lcs(string a,string b){
    if(a.size() == 0 || b.size() == 0){
        return 0;
    }

    if(a[0] == b[0]){
        return 1+lcs(a.substr(1),b.substr(1));
    }

    else{
        int x = lcs(a.substr(1),b);
        int y = lcs(a,b.substr(1));
        int z = lcs(a.substr(1),b.substr(1));
        return max(x,max(y,z));
    }

}

int main(){
    string a,b;
    cin>>a>>b;
    cout<<lcs(a,b)<<endl;
    return 0;
}