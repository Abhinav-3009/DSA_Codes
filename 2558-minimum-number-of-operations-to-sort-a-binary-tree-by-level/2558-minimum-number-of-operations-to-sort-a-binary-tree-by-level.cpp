/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {


    int calculateSwaps(vector<int>& level){
        map<int,int> sortedIndex;
        vector<int> sortedLevel = level;
        int swaps = 0;
        sort(sortedLevel.begin(), sortedLevel.end());
        for(int i = 0; i < level.size(); i++){
            sortedIndex[sortedLevel[i]] = i;
        }

        for(int i = 0; i < level.size();){
            int index = sortedIndex[level[i]];
            if(index == i){
                i++;
            }
            else{
                int temp = level[i];
                level[i] = level[index];
                level[index] = temp;
                swaps++;
            }
        }
        return swaps;

    }

public:
    int minimumOperations(TreeNode* root) {
        queue<TreeNode*> q;
        q.push(root);
        int ans = 0;
        while(!q.empty()){
            int size = q.size();
            vector<int> level;
            while(size--){
                auto t = q.front();
                q.pop();
                level.push_back(t->val);
                if(t->left) q.push(t->left);
                if(t->right) q.push(t->right);
            }
            ans += calculateSwaps(level);
        }
        return ans;
        
    }
};