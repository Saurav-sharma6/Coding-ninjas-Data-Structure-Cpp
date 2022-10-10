#include<bits/stdc++.h>
using namespace std;
template <typename T>
class Tree{
    public:
    T data;
    vector<Tree<T>*> children;
    Tree(T data1){
        data = data1;

    }

};

Tree<int>* takeInput(){
    int rootData;
    cout<<"Enter Root Data : ";

    cin>>rootData;

    Tree<int>*root = new Tree<int>(rootData);

    int n;
    cout<<"Enter Number of childrens of "<<rootData<<" ";
    cin>>n;

    for(int i=0;i<n;i++){
        Tree<int>*child = takeInput();
        root->children.push_back(child);

    }

    return root;

}
//Take input level wise

Tree<int>* takeInputLevelWise(){
    int rootData;
    cout<<"Enter data of root ";
    cin>>rootData;
    Tree<int>*root= new Tree<int>(rootData);

    queue<Tree<int>*> pendingNodes;
    pendingNodes.push(root);

    while(pendingNodes.size()!=0){
        Tree<int>* frontNode = pendingNodes.front();
        pendingNodes.pop();
        int numChild;
        cout<<"Enter Number of Childrens of "<<frontNode->data<<" ";
        cin>>numChild;

        for(int i=0;i<numChild;i++){
            cout<<"Enter data of "<<i+1 <<"th  children node of "<<frontNode->data<<" ";
            int data;
            cin>>data;

            Tree<int>*node = new Tree<int>(data);
            frontNode->children.push_back(node);
            pendingNodes.push(node);

        }



    }
    return root;

}

void print(Tree<int>*root){
    cout<<root->data<<":";
    for(int i =0;i<root->children.size();i++){
        cout<<root->children[i]->data<<",";
    }
    cout<<endl;
    for(int i = 0;i<root->children.size();i++){
        print(root->children[i]);
    }
}

Tree<int>* maxSumNode(Tree<int>* root) {
    // Write your code here
    if(root == NULL){
        return root;
    }
      Tree<int>*ans = root;
       int sum = root->data;
       for(int i=0;i<root->children.size();i++){
           sum = sum+root->children[i]->data;
       }
    
    for(int i=0;i<root->children.size();i++){
        Tree<int>*ans2 = root->children[i];
        int sum2 = ans2->data;
           for(int i=0;i<ans2->children.size();i++){
               sum2 = sum2+ans2->children[i]->data;
       }
        if(sum2>sum){
            cout<<sum2<<" "<<sum<<endl;
            ans = ans2;
        }
    }
    return ans;
}

int main(){
    // Tree<int>* root = new Tree<int>(10);
    // Tree<int>* node1 = new Tree<int>(20);
    // Tree<int>* node2 = new Tree<int>(30);
    // root->children.push_back(node1);
    // root->children.push_back(node2);

    Tree<int>*root = takeInputLevelWise();
    Tree<int>*rootw = maxSumNode(root);
    cout<<rootw->data<<" ";
    // print(root);


}