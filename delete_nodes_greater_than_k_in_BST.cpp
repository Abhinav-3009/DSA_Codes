Node* deleteNode(Node* root, int k)
{
//RC
if(!root) return NULL;

root->left=deleteNode(root->left, k);
root->right=deleteNode(root->right, k);

if(root->data >= k)
return root->left;//logically deleting root
else
return root;
}
