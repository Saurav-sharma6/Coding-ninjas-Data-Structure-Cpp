#include<bits/stdc++.h>
using namespace std;

template <typename T>
class Btree{
    public :
    T data;
    Btree *left;
    Btree *right;

    Btree(T data){
        this->data = data;
        left = NULL;
        right = NULL; 

    }

};


Btree<int>*  takeInput(){
    int rootData;
    cout<<"Enter rootData ";
    cin>>rootData;

    if(rootData == -1){
        return NULL;
    }
    Btree<int>* root = new Btree<int>(rootData);
    Btree<int>* left = takeInput();
    Btree<int>* right = takeInput();
    root->left = left;
    root->right = right;

    return root;
}
void print(Btree<int>*root){
    if(root == NULL){
        return;
    }
    cout<<root->data<<":";
    if(root->left!=NULL){
        cout<<"L"<<root->left->data;
    }
      if(root->right!=NULL){
        cout<<"R "<<root->right->data;
    }
    cout<<endl;
    print(root->left);
    print(root->right);

}