/* A binary tree node

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};
 */

//Function to return a list containing elements of left view of the binary tree.
vector<int> view;
vector<int> leftView(Node *root)
{
   // Your code here
   vector<int> ans;
   queue<Node*> q;
   if(!root)
   return ans;
   q.push(root);
   while(!q.empty()){
       int s=q.size();
       ans.push_back(q.front()->data);
       while(s--){
           Node* temp=q.front();
           q.pop();
           if(temp->left)
           q.push(temp->left);
           if(temp->right)
           q.push(temp->right);
       }
   }
   return ans;
   
}
