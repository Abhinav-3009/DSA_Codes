/*Structure of the node of the binary tree is as
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

//Function to store the zig zag order traversal of tree in a list.
vector <int> zigZagTraversal(Node* root)
{
	vector<int> ans;
	queue<Node*> q;
	if(!root)
	return ans;
	q.push(root);
	int f=1;
	while(!q.empty()){
	    vector<int> temp;
	    int s=q.size();
	    while(s--){
	        Node* t=q.front();
	        q.pop();
	        temp.push_back(t->data);
	        if(t->left)
	        q.push(t->left);
	        if(t->right)
	        q.push(t->right);
	    }
	    if(f%2==0)
	    reverse(temp.begin(),temp.end());
	    for(int i=0;i<temp.size();i++)
	    ans.push_back(temp[i]);
	    f=!f;
	}
	return ans;
}
