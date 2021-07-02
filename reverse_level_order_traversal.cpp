/*   
struct Node
{
    int data;
    Node* left;
    Node* right;
}; */
vector<int> reverseLevelOrder(Node *root)
{
    // code here
    vector<int> ans;
    if(root ==NULL)
    return ans;
    queue<Node *>q;
    q.push(root);
    while(!q.empty()){
        Node *node=q.front();
        ans.push_back(node->data);
        q.pop();
        if(node->right!=NULL)
        q.push(node->right);
        if(node->left!=NULL)
        q.push(node->left);
    }
    reverse(ans.begin(),ans.end());
    return ans;
}
