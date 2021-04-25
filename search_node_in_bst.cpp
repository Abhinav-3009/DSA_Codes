/* Node structure 

struct Node {
    int data;
    Node* right;
    Node* left;
    
    Node(int x){
        data = x;
        right = NULL;
        left = NULL;
    }
};
*/

/*You are required to complete this method*/
bool search(Node* root, int x)
{
//Your code here
if(root== NULL)
return false;
if(root->data == x)
return true;

return search(root->left,x) || search(root->right,x);
}
