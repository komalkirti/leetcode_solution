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
class BSTIterator {
public:
    int index=0;
    vector<int>v;
    BSTIterator(TreeNode* root) {
        getInorder(root);
        
    }

    void getInorder(TreeNode* root){
        if(!root)return;
        getInorder(root->left);
        v.push_back(root->val);
        getInorder(root->right);
    }
    
    int next() {
        return v[index++];
    }
    
    bool hasNext() {
        if(index<v.size()) return true;
        else return false;
    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */