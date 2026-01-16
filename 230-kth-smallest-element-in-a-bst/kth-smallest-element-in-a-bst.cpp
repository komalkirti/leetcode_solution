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
    void kth_smallest(TreeNode* root,int &ans,int& k){
        if(root->left)kth_smallest(root->left,ans,k);
        k--;
        if(k==0 && ans==-1) {
            ans=root->val;
            return;
        }
       if(root->right) kth_smallest(root->right,ans,k);
    }
    int kthSmallest(TreeNode* root, int k) {
        int ans=-1;
        kth_smallest(root,ans,k);
        return ans;
        
    }
};