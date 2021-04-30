//User function Template for C++

/* Tree Node
struct Node {
    int data;
    Node* left;
    Node* right;
};
*/

vector<int> preOrder(Node* root)
{
vector<int> res;
Node* curr=root;
stack<Node*> st;

while(curr || !st.empty())
{
while(curr)
{
res.push_back(curr->data);
st.push(curr);
curr=curr->left;
}

curr=st.top();
st.pop();
curr=curr->right;
}

return res;

}
