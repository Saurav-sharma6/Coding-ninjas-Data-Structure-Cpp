#include <iostream>
#include <queue>
#include <vector>
using namespace std;

template <typename T>
class TreeNode {
   public:
    T data;
    vector<TreeNode<T>*> children;

    TreeNode(T data) { this->data = data; }

    ~TreeNode() {
        for (int i = 0; i < children.size(); i++) {
            delete children[i];
        }
    }
};
TreeNode<int>* maxSumNode(TreeNode<int>* root) {
    // Write your code here
    if(root == NULL){
        return root;
    }
       TreeNode<int>*ans = root;
       int sum = root->data;
       for(int i=0;i<root->children.size();i++){
           sum = sum+root->children[i]->data;
       }
    
    for(int i=0;i<root->children.size();i++){
        TreeNode<int>*ans2 = maxSumNode(root->children[i]);
        int sum2 = ans2->data;
           for(int i=0;i<ans2->children.size();i++){
               sum2 = sum2+ans2->children[i]->data;
       }
        if(sum2>sum){
            ans = ans2;
        }
    }
    return ans;
}
// #include "solution.h"

TreeNode<int>* takeInputLevelWise() {
    int rootData;
    cin >> rootData;
    TreeNode<int>* root = new TreeNode<int>(rootData);

    queue<TreeNode<int>*> pendingNodes;

    pendingNodes.push(root);
    while (pendingNodes.size() != 0) {
        TreeNode<int>* front = pendingNodes.front();
        pendingNodes.pop();
        int numChild;
        cin >> numChild;
        for (int i = 0; i < numChild; i++) {
            int childData;
            cin >> childData;
            TreeNode<int>* child = new TreeNode<int>(childData);
            front->children.push_back(child);
            pendingNodes.push(child);
        }
    }

    return root;
}

int main() {
    TreeNode<int>* root = takeInputLevelWise();

    TreeNode<int>* ans = maxSumNode(root);

    if (ans != NULL) {
        cout << ans->data;
    }
}