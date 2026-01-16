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
    void getMinDiff(TreeNode* root,int &ans,TreeNode* &prev){
        if(!root) return;
        if(root->left) getMinDiff(root->left,ans,prev);
        if(prev){
            ans=min(ans,abs(prev->val-root->val));
        }
        prev=root;
        if(root->right)getMinDiff(root->right,ans,prev);
    }
    int getMinimumDifference(TreeNode* root) {

        TreeNode* prev=NULL;
        int ans=INT_MAX;
        getMinDiff(root,ans,prev);
        return ans;
        
    }
};