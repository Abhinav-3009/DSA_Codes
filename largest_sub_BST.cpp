/* Tree node structure  used in the program

struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};*/

/*You are required to complete this method */
// Return the size of the largest sub-tree which is also a BST
bool isBST(Node *root, int min, int max)
{
if(root == NULL)
return true;
if(root->data < min || root->data > max)
return false;
return (isBST(root->left, min, root->data -1) && (isBST(root->right, root->data+1, max)));
}
int trav(Node *root, int &ans)
{
if(root == NULL)
return 0;
int ls = trav(root->left, ans);
int rs = trav(root->right, ans);
if(isBST(root, INT_MIN, INT_MAX))
ans = max(ans, ls+rs+1);
return ls+rs+1;
}
int largestBst(Node *root)
{
//Your code here
int ans =0;
trav(root, ans);
return ans;
}
