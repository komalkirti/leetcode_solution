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
    vector<double> averageOfLevels(TreeNode* root) {

        vector<double>ans;
        if(!root) return ans;
        queue<TreeNode*> q;
        q.push(root);
        q.push(NULL);
        double sum=0;
        int cnt=0;

        while(! q.empty()){

            TreeNode* cur = q.front();
            q.pop();
            if(cur){
                sum+=cur->val;
                cnt++;
                if(cur->left)q.push(cur->left);
                if(cur->right)q.push(cur->right);
            }
            else{
                double x=(double)sum/cnt;
                ans.push_back(x);
                sum=0,cnt=0;
                if(!q.empty())q.push(NULL);
            }
        }
        return ans;

        
        
    }
};