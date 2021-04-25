/* The Node structure is
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
}; 
*/

class Solution{
  public:
    // The given root is the root of the Binary Tree
    // Return the root of the generated BST
    void inorder(Node *root,vector<int> &v)
{
if(root!=NULL)
{
inorder(root->left,v);
v.push_back(root->data);
inorder(root->right,v);
}
}
void make(Node *&root,vector<int> v,int &i)
{if(root!=NULL)
{
make(root->left,v,i);
root->data=v[i];
i++;
make(root->right,v,i);
}}
Node *binaryTreeToBST (Node *root)
{
vector<int> v;
inorder(root,v);
sort(v.begin(),v.end());
int i=0;
make(root,v,i);
return root;
}
};
