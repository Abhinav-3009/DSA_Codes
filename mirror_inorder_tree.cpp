#include<bits/stdc++.h>
using namespace std;
typedef struct treenode{
    int val;
    treenode* left;
    treenode* right;
} node;
node* createNode(int val){
    node* newnode= new node;
    newnode->val=val;
    newnode->left=NULL;
    newnode->right=NULL;
    return newnode;
}
static vector<int> v;
void inorder(node* root)
{
    if (root == NULL)
        return;
    inorder(root->left);
    v.push_back(root->val);
    inorder(root->right);
}
int main()
{

    node* tree = createNode(5);
    tree->left = createNode(3);
    tree->right = createNode(6);
    tree->left->left = createNode(2);
    tree->left->right = createNode(4);
    inorder(tree);
    reverse(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    return 0;
}
