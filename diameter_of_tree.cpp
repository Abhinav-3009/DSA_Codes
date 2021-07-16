/*struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
}; */

class Solution {
  public:
    // Function to return the diameter of a Binary Tree.
    int height(Node* root){
        if(!root)
        return 0;
        return 1+max(height(root->left),height(root->right));
    }
    int diameter(Node* root) {
        // Your code here
        if(root==0)
        return 0;
        int d1=(height(root->left)+height(root->right))+1;
        int d2=diameter(root->left);
        int d3=diameter(root->right);
        return max(d1,max(d2,d3));
    }
};
