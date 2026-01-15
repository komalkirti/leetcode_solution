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
    bool isBST(TreeNode* root, TreeNode* minVal , TreeNode* maxVal){
        if(!root) return true;
        
        if((minVal !=NULL && root->val<=minVal->val) || (maxVal!=NULL && root->val>=maxVal->val)) return false;
        return (isBST(root->left,minVal,root) && isBST(root->right,root,maxVal));

    }
    bool isValidBST(TreeNode* root) {
        TreeNode* minVal=NULL;
        TreeNode* maxVal = NULL;
        return isBST(root,minVal,maxVal);
        
    }
};