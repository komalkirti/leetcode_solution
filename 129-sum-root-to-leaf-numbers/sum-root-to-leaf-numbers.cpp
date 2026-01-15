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
    void getNumbers(TreeNode* root,int num,vector<int>&ans){
        if(!root) return;
        if(!root->left && !root->right){
            num=num*10+(root->val);
            ans.push_back(num);
            return;
        } 

        num=num*10+(root->val);
        getNumbers(root->left,num,ans);
        getNumbers(root->right,num,ans);


    }
    int sumNumbers(TreeNode* root) {
        if(!root) return 0;
        vector<int>ans;
        int num=0;
        getNumbers(root,num,ans);

        int sum=0;
        for(int i=0;i<ans.size();i++){
            sum+=ans[i];
        }
        return sum;
    }
};