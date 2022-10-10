#include<bits/stdc++.h>

using namespace std;
     bool checkIfPangram(string sentence) {
        int arr[26] = {0};
        
        int i2=0;
        while(sentence[i2]!='\0'){
            arr[sentence[i2]-'a']++;
            i2++;
        }
        for(int i=0;i<26;i++){
            if(arr[i]==0){
                return false;
            }
        }
        return true;
        
    }
int main(){

    string a;
    getline(cin,a);
    cout<<checkIfPangram(a)<<endl;
}