/* The structure of Node
struct Node{
    int data;
    Node *left,*right;
}; */


/*You are required to complete below method */
int sumOfLeafNodes(Node *r ){
     /*Your code here */
     if(r==NULL)
     return 0;
     else if(r->left==NULL && r->right==NULL)
     return r->data;
     else
     return sumOfLeafNodes(r->left)+sumOfLeafNodes(r->right);
}
