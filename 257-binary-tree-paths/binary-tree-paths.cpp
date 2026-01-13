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

    void path(TreeNode* root,string str, vector<string>&ans){
        if(!root) return ;
        str=str+to_string(root->val);
        if(!root->left && !root->right){
            ans.push_back(str);
            return ;
        }
        if(root->left){
            path(root->left,str+"->",ans);
        }
        if(root->right){
            path(root->right,str+"->",ans);
        }


    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string>ans;
       path(root,"",ans);
       return ans;
        
    }
};