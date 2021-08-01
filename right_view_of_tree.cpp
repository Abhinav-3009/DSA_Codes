struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
}; */

// Should return  right view of tree
class Solution
{
    public:
    //Function to return list containing elements of right view of binary tree.
    vector<int> rightView(Node *root)
    {
       // Your Code here
       vector<int> ans;
       queue<Node*> q;
       if(!root){
           return ans;
       }
       q.push(root);
       while(!q.empty()){
           ans.push_back(q.back()->data);
           int s=q.size();
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
};
