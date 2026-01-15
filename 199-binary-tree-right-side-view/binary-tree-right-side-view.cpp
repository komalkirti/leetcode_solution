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
public:
    vector<int> rightSideView(TreeNode* root) {

        vector<int>ans;
        queue<TreeNode*>q;
        if(!root) return ans;
        q.push(root);
        q.push(NULL);

        while(!q.empty()){
            TreeNode* cur = q.front();
            q.pop();
            if(cur && !q.front()){
                ans.push_back(cur->val);
            }
            if(!cur && !q.empty())q.push(NULL);
            if(cur && cur->left)q.push(cur->left);
            if(cur && cur->right)q.push(cur->right);
        }
        return ans;

        
    }
};