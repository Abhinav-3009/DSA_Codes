/* Tree Node
struct Node {
    int data;
    Node* left;
    Node* right;
};*/
vector<int> postOrder(Node* root) {
    // code here
    vector<int> v;
    if(root==NULL)
    return v;
    stack<Node*> s;
    s.push(root);
    while(!s.empty()){
        Node* temp=s.top();
        s.pop();
        v.push_back(temp->data);
        if(temp->left)
        s.push(temp->left);
        if(temp->right)
        s.push(temp->right);
    }
    reverse(v.begin(),v.end());
    return v;
    
}
