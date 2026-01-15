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
    vector<vector<int>> levelOrder(TreeNode* root) {
        
        vector<vector<int>>ans;
        queue<TreeNode*>q;
        if(!root) return ans;
        q.push(root);
        q.push(NULL);
        vector<int>v;

        while(!q.empty()){
            TreeNode* cur=q.front();
            q.pop();

            if(cur){
                v.push_back(cur->val);
                if(cur->left) q.push(cur->left);
                if(cur->right)q.push(cur->right);
            }
            else{
                ans.push_back(v);
                v.clear();
                if(!q.empty())q.push(NULL);
            }
        }
        return ans;
    }
};