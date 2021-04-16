/*
Structure of the node of the binary search tree is as
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

// your task is to complete the below function

int minValue(Node* root)
{
while(root->left!=NULL){
    root=root->left;
}
return root->data;
}
