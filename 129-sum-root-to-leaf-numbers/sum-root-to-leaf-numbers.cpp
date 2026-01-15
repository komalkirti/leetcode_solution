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
    void getNumbers(TreeNode* root,int num,int &ans){
        if(!root) return;
        if(!root->left && !root->right){
            num=num*10+(root->val);
            ans+=num;
            return;
        } 

        num=num*10+(root->val);
        getNumbers(root->left,num,ans);
        getNumbers(root->right,num,ans);


    }
    int sumNumbers(TreeNode* root) {
        if(!root) return 0;
        int ans=0;
        int num=0;
        getNumbers(root,num,ans);

       return ans;
    }
};