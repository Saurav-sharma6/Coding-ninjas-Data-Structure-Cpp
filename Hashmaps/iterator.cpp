#include<bits/stdc++.h>

using namespace std;

int main(){
    unordered_map<string,int> map;

    map["Saurav"] = 1;
    map["Saurav2"] = 2;

    unordered_map<string,int> :: iterator it = map.begin();

    while(it !=map.end()){
        cout<<"Key "<<it->first<<" "<<" Value "<<it->second<<endl;
        it++;

    }

    vector<int> a ;
    a.push_back(1);
    a.push_back(2);
    a.push_back(3);
    a.push_back(4);

    vector<int> :: iterator it2 = a.begin();

    while(it2!=a.end()){
        cout<<(*it2)<<endl;
        it2++;
    }


    
}